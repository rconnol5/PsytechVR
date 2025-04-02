using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;
using Newtonsoft.Json;

namespace HuggingFace.API.Examples
{
    [Serializable]
    public class OpenAIRequestData
    {
        public string model = "gpt-4o-mini";
        public List<Message> messages = new List<Message>();
        public ResponseFormat response_format = new ResponseFormat();
    }

    [Serializable]
    public class Message
    {
        public string role;
        public string content;

        public Message(string role, string content)
        {
            this.role = role;
            this.content = content;
        }
    }

    [Serializable]
    public class ResponseFormat
    {
        public string type = "json_object";
    }

    [Serializable]
    public class OpenAIResponse
    {
        public List<Choice> choices = new List<Choice>();
    }

    [Serializable]
    public class Choice
    {
        public Message message;
    }

    [Serializable]
    public class PromptRefinementResponse
    {
        public string refined_prompt;
        public List<string> suggestions;
    }

    public class PromptRefinerImageGenerator : MonoBehaviour
    {
        [Header("API Settings")]
        [SerializeField] private string openAIAPIKey;
        [SerializeField] private string openAIEndpoint = "https://api.openai.com/v1/chat/completions";

        [Header("UI Elements - Input")]
        [SerializeField] private TMP_InputField inputField;
        [SerializeField] private Button refineButton;
        [SerializeField] private TMP_Text statusText;

        [Header("UI Elements - Refined Prompt")]
        [SerializeField] private GameObject refinedPromptPanel;
        [SerializeField] private TMP_Text refinedPromptText;

        [Header("UI Elements - Suggestions")]
        [SerializeField] private GameObject suggestionPanel;
        [SerializeField] private GameObject suggestionTogglePrefab;
        [SerializeField] private Transform suggestionContainer;
        [SerializeField] private Button generateImageButton;
        [SerializeField] private Button resetButton;

        [Header("UI Elements - Image Result")]
        [SerializeField] private GameObject imageResultPanel;
        [SerializeField] private Image resultImage;
        [SerializeField] private TMP_Text finalPromptText;

        private string normalColorHex;
        private string errorColorHex;
        private bool isWaitingForResponse;
        private string refinedPrompt;
        private List<string> suggestions;
        private List<Toggle> suggestionToggles = new List<Toggle>();

        private void Awake()
        {
            normalColorHex = ColorUtility.ToHtmlStringRGB(statusText.color);
            errorColorHex = ColorUtility.ToHtmlStringRGB(Color.red);
            resultImage.color = Color.black;

            // Initially hide panels
            refinedPromptPanel.SetActive(false);
            suggestionPanel.SetActive(false);
            imageResultPanel.SetActive(false);
        }

        private void Start()
        {
            refineButton.onClick.AddListener(RefineButtonClicked);
            generateImageButton.onClick.AddListener(GenerateImageButtonClicked);
            resetButton.onClick.AddListener(ResetUI);
            inputField.ActivateInputField();
            inputField.onEndEdit.AddListener(OnInputFieldEndEdit);
        }

        private void OnInputFieldEndEdit(string text)
        {
            if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.KeypadEnter))
            {
                RefineButtonClicked();
            }
        }

        private void RefineButtonClicked()
        {
            if (isWaitingForResponse) return;

            string inputText = inputField.text;
            if (string.IsNullOrEmpty(inputText))
            {
                return;
            }

            statusText.text = $"<color=#{normalColorHex}>Refining prompt...</color>";
            isWaitingForResponse = true;
            refineButton.interactable = false;

            StartCoroutine(RefinePromptWithOpenAI(inputText));
        }

        private IEnumerator RefinePromptWithOpenAI(string userPrompt)
        {
            // Prepare the request data
            OpenAIRequestData requestData = new OpenAIRequestData();

            // System message
            requestData.messages.Add(new Message("system",
                "You are a prompt engineering assistant. You take a user's prompt describing an image they want " +
                "to generate and refine it for a 360�/equirectangular model.\n\n" +
                "- Add relevant detail to make the scene panoramic or equirectangular-friendly (lighting, atmosphere, environment).\n" +
                "- Use imaginative, descriptive style without changing the user's main intent.\n" +
                "- Provide exactly three short suggestions (1�3 words each) for content that could be added to the prompt.\n\n" +
                "Output must conform to JSON with keys 'refined_prompt' and 'suggestions'."
            ));

            // User message
            requestData.messages.Add(new Message("user", userPrompt));

            // Convert request data to JSON
            string jsonData = JsonConvert.SerializeObject(requestData);

            // Create the web request
            using (UnityWebRequest request = new UnityWebRequest(openAIEndpoint, "POST"))
            {
                byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);
                request.uploadHandler = new UploadHandlerRaw(bodyRaw);
                request.downloadHandler = new DownloadHandlerBuffer();
                request.SetRequestHeader("Content-Type", "application/json");
                request.SetRequestHeader("Authorization", "Bearer " + openAIAPIKey);

                // Send the request
                yield return request.SendWebRequest();

                if (request.result != UnityWebRequest.Result.Success)
                {
                    Debug.LogError("Error: " + request.error);
                    statusText.text = $"<color=#{errorColorHex}>Error: {request.error}</color>";
                    isWaitingForResponse = false;
                    refineButton.interactable = true;
                    yield break;
                }

                try
                {
                    // Parse the response
                    OpenAIResponse response = JsonConvert.DeserializeObject<OpenAIResponse>(request.downloadHandler.text);

                    // Debug the raw response
                    Debug.Log("Raw API response: " + request.downloadHandler.text);

                    // Make sure we have a valid response
                    if (response == null || response.choices == null || response.choices.Count == 0 || response.choices[0].message == null)
                    {
                        Debug.LogError("Invalid response format from API");
                        statusText.text = $"<color=#{errorColorHex}>Error: Invalid API response format</color>";
                        isWaitingForResponse = false;
                        refineButton.interactable = true;
                        yield break;
                    }

                    string responseContent = response.choices[0].message.content;
                    Debug.Log("Content from API: " + responseContent);

                    // Try to parse the content as JSON
                    PromptRefinementResponse refinementResponse =
                        JsonConvert.DeserializeObject<PromptRefinementResponse>(responseContent);

                    // Check for null values
                    if (refinementResponse == null || refinementResponse.refined_prompt == null || refinementResponse.suggestions == null)
                    {
                        Debug.LogError("Invalid content format in API response");
                        statusText.text = $"<color=#{errorColorHex}>Error: Invalid content format in API response</color>";
                        isWaitingForResponse = false;
                        refineButton.interactable = true;
                        yield break;
                    }

                    // Store the refined prompt and suggestions
                    refinedPrompt = refinementResponse.refined_prompt;
                    suggestions = refinementResponse.suggestions;

                    Debug.Log("Refined prompt: " + refinedPrompt);
                    Debug.Log("Suggestions: " + string.Join(", ", suggestions));

                    // Show the refined prompt and suggestions
                    UpdateUIWithRefinedPrompt();
                }
                catch (Exception e)
                {
                    Debug.LogError("Error parsing response: " + e.Message);
                    Debug.LogError("Stack trace: " + e.StackTrace);
                    if (request != null && request.downloadHandler != null)
                    {
                        Debug.Log("Raw response: " + request.downloadHandler.text);
                    }
                    statusText.text = $"<color=#{errorColorHex}>Error parsing response</color>";
                    isWaitingForResponse = false;
                    refineButton.interactable = true;
                }

                //try
                //{
                //    // Parse the response
                //    OpenAIResponse response = JsonConvert.DeserializeObject<OpenAIResponse>(request.downloadHandler.text);
                //    string responseContent = response.choices[0].message.content;

                //    // Parse the content as JSON
                //    PromptRefinementResponse refinementResponse =
                //        JsonConvert.DeserializeObject<PromptRefinementResponse>(responseContent);

                //    // Store the refined prompt and suggestions
                //    refinedPrompt = refinementResponse.refined_prompt;
                //    suggestions = refinementResponse.suggestions;

                //    // Show the refined prompt and suggestions
                //    UpdateUIWithRefinedPrompt();
                //}
                //catch (Exception e)
                //{
                //    Debug.LogError("Error parsing response: " + e.Message);
                //    statusText.text = $"<color=#{errorColorHex}>Error parsing response</color>";
                //    isWaitingForResponse = false;
                //    refineButton.interactable = true;
                //}
            }
        }

        private void UpdateUIWithRefinedPrompt()
        {
            // Update refined prompt text and show panel
            // check if refinedPrompt is null
            if (refinedPrompt == null)
            {
                statusText.text = $"<color=#{errorColorHex}>Error: Refined prompt is null</color>";
                isWaitingForResponse = false;
                refineButton.interactable = true;
                return;
            }
            refinedPromptText.text = refinedPrompt;
            refinedPromptPanel.SetActive(true);

            // Clear previous toggles
            foreach (Transform child in suggestionContainer)
            {
                Destroy(child.gameObject);
            }
            suggestionToggles.Clear();

            // Create toggle for each suggestion
            foreach (string suggestion in suggestions)
            {
                GameObject toggleObj = Instantiate(suggestionTogglePrefab, suggestionContainer);
                Toggle toggle = toggleObj.GetComponent<Toggle>();
                TMP_Text toggleText = toggleObj.GetComponentInChildren<TMP_Text>();
                toggleText.text = suggestion;
                suggestionToggles.Add(toggle);
            }

            // Show suggestion panel
            suggestionPanel.SetActive(true);
            statusText.text = "";
            isWaitingForResponse = false;
            refineButton.interactable = true;
        }

        private void GenerateImageButtonClicked()
        {
            if (isWaitingForResponse) return;

            // Get selected suggestions
            List<string> selectedSuggestions = new List<string>();
            for (int i = 0; i < suggestionToggles.Count; i++)
            {
                if (suggestionToggles[i].isOn)
                {
                    selectedSuggestions.Add(suggestions[i]);
                }
            }

            // Create final prompt
            string finalPrompt = refinedPrompt;
            if (selectedSuggestions.Count > 0)
            {
                finalPrompt += " " + string.Join(", ", selectedSuggestions) + ".";
            }

            // Add the TOK prefix for image generation
            string imagePrompt = "TOK Generate a 360-degree panorama image of " + finalPrompt;

            // Update UI
            statusText.text = $"<color=#{normalColorHex}>Generating image...</color>";
            isWaitingForResponse = true;
            generateImageButton.interactable = false;

            // Generate the image
            GenerateImageFromPrompt(imagePrompt, finalPrompt);
        }

        private void GenerateImageFromPrompt(string imagePrompt, string finalPrompt)
        {
            HuggingFaceAPI.TextToImage(imagePrompt, texture => {
                resultImage.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.zero);
                resultImage.color = Color.white;

                // Display the final prompt
                finalPromptText.text = "Final Prompt: " + finalPrompt;

                // Reset status
                statusText.text = "";
                isWaitingForResponse = false;
                generateImageButton.interactable = true;

                // Show image result panel
                imageResultPanel.SetActive(true);

                // Save the image to file
                SaveTextureAsPNG(texture);

            }, error => {
                statusText.text = $"<color=#{errorColorHex}>Error: {error}</color>";
                isWaitingForResponse = false;
                generateImageButton.interactable = true;
            });
        }

        private void ResetUI()
        {
            inputField.text = "";
            refinedPromptPanel.SetActive(false);
            suggestionPanel.SetActive(false);
            imageResultPanel.SetActive(false);
            resultImage.color = Color.black;
            statusText.text = "";
            refineButton.interactable = true;
            generateImageButton.interactable = true;
            inputField.ActivateInputField();
        }

        private void SaveTextureAsPNG(Texture2D texture)
        {
            byte[] bytes = texture.EncodeToPNG();
            string filePath = Path.Combine(Application.persistentDataPath, "generated_image.png");
            File.WriteAllBytes(filePath, bytes);
            Debug.Log("Image saved to: " + filePath);
        }
    }
}