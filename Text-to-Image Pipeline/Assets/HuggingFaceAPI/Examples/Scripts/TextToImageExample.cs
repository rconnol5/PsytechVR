using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using System.IO;
using System.Text; // For encoding text in UTF8

namespace HuggingFace.API.Examples
{
    public class TextToImageExample : MonoBehaviour
    {
        [SerializeField] private Image image;
        [SerializeField] private TMP_InputField inputField;
        [SerializeField] private TMP_Text statusText;
        [SerializeField] private Button generateButton;

        private string normalColorHex;
        private string errorColorHex;
        private bool isWaitingForResponse;

        private void Awake()
        {
            normalColorHex = ColorUtility.ToHtmlStringRGB(statusText.color);
            errorColorHex = ColorUtility.ToHtmlStringRGB(Color.red);
            image.color = Color.black;
        }

        private void Start()
        {
            generateButton.onClick.AddListener(GenerateButtonClicked);
            inputField.ActivateInputField();
            inputField.onEndEdit.AddListener(OnInputFieldEndEdit);
        }

        private void GenerateButtonClicked()
        {
            SendQuery();
        }

        private void OnInputFieldEndEdit(string text)
        {
            if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.KeypadEnter))
            {
                SendQuery();
            }
        }

        private void SendQuery()
        {
            if (isWaitingForResponse) return;

            string inputText = inputField.text;
            if (string.IsNullOrEmpty(inputText))
            {
                return;
            }

            statusText.text = $"<color=#{normalColorHex}>Generating...</color>";
            image.color = Color.black;

            isWaitingForResponse = true;
            inputField.interactable = false;
            generateButton.interactable = false;
            inputField.text = "";

            // Generate the refined prompt using GPT-2 before calling the image model
            string gptPrompt = $"Refine this prompt to make it more detailed and descriptive for generating a 360° image: {inputText}";

            // Call HuggingFace's GPT-2 model to refine the prompt
            HuggingFaceAPI.TextGeneration(gptPrompt, refinedPrompt => {
                // Debug: Log the refined prompt to the console
                Debug.Log("T5 Response: " + refinedPrompt);

                //Further modify the refinedPrompt string manually, to obtain a final prompt
                /*
                if (refinedPrompt.StartsWith(inputText))
                {
                    refinedPrompt = refinedPrompt.Substring(inputText.Length);
                }
                Debug.Log("Fixed refinedPrompt: " + refinedPrompt);
                */

                string finalPrompt = "TOK Generate a 360-degree panorama image of " + inputText;

                Debug.Log("finalPrompt: " + finalPrompt);

                // After receiving the refined prompt, use it to generate the image
                GenerateImageFromPrompt(finalPrompt);
            }, error => {
                statusText.text = $"<color=#{errorColorHex}>Error: {error}</color>";
                isWaitingForResponse = false;
                inputField.interactable = true;
                generateButton.interactable = true;
                inputField.ActivateInputField();
            });
        }

        private void GenerateImageFromPrompt(string refinedPrompt)
        {
            HuggingFaceAPI.TextToImage(refinedPrompt, texture => {
                image.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.zero);
                image.color = Color.white;
                statusText.text = $""; // Reset status text
                isWaitingForResponse = false;
                inputField.interactable = true;
                generateButton.interactable = true;
                inputField.ActivateInputField();

                // Save the image to file
                SaveTextureAsPNG(texture);

                // After saving the image, transition to the second scene
                SceneManager.LoadScene(0); // ImageEnvironment scene (scene index 0)
            }, error => {
                statusText.text = $"<color=#{errorColorHex}>Error: {error}</color>";
                isWaitingForResponse = false;
                inputField.interactable = true;
                generateButton.interactable = true;
                inputField.ActivateInputField();
            });
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
