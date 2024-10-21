using UnityEngine;
using UnityEngine.UI;

public class TextInputHandler : MonoBehaviour
{
    public InputField inputField; // The input field for user text
    public Text promptText; // A text field to show feedback
    public DatabaseManager databaseManager; // Reference to the DatabaseManager

    // This method is called when the user clicks the Save button
    public void OnSubmitText()
    {
        string enteredText = inputField.text; // Get the text from the input field
        if (!string.IsNullOrEmpty(enteredText))
        {
            databaseManager.SaveTextEntry(enteredText); // Save it in the database
            promptText.text = "Text Saved!"; // Provide feedback
        }
        else
        {
            promptText.text = "Please enter some text."; // Handle empty input
        }
    }
}
