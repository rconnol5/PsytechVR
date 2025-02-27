using System.IO;
using System.Data;
using System.Linq;
using SQLite4Unity3d;   // Make sure you have the SQLite4Unity3d plugin
using UnityEngine;
using TMPro;           // For TMP_InputField
using UnityEngine.UI;  // For RawImage (optional if you want to display images)

public class DatabaseManager : MonoBehaviour
{
    [Header("UI References")]
    public TMP_InputField inputField;  // Drag your TMP_InputField here in the Inspector
    public RawImage displayImage;      // (Optional) A RawImage to show the last retrieved image
    private SQLiteConnection dbConnection;

    private void Start()
    {
        // 1) Define the database path
        string dbPath = Path.Combine(Application.persistentDataPath, "MyDatabase.db");

        // 2) If a prebuilt DB exists in StreamingAssets, copy it over (optional)
        if (!File.Exists(dbPath))
        {
            string sourcePath = Path.Combine(Application.streamingAssetsPath, "MyDatabase.db");
            if (File.Exists(sourcePath))
            {
                File.Copy(sourcePath, dbPath);
            }
        }

        // 3) Open or create the database
        dbConnection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);

        // 4) Create or update the table (including the new ImageData column)
        dbConnection.CreateTable<UserInput>();

        Debug.Log("Database initialized at path: " + dbPath);
    }

    /// <summary>
    /// Called when the user presses the "Generate" button.
    /// Replace GenerateDummyTexture() with your real image-generation code.
    /// </summary>
    public void OnGenerateButtonPressed()
    {
        // For demo, we generate a random-colored 64x64 texture
        Texture2D generatedTexture = GenerateDummyTexture();

        // Now save the prompt text + this texture to the DB
        SavePromptAndImage(generatedTexture);
    }

    /// <summary>
    /// Saves the user's prompt and the given texture (as PNG bytes) into the database.
    /// </summary>
    private void SavePromptAndImage(Texture2D texture)
    {
        string promptText = inputField.text;
        if (string.IsNullOrEmpty(promptText))
        {
            Debug.LogWarning("No prompt entered. Nothing to save.");
            return;
        }

        // Convert Texture2D to a byte[] (PNG)
        byte[] imageBytes = texture.EncodeToPNG();

        // Create a new record
        UserInput newRecord = new UserInput
        {
            InputText = promptText,
            ImageData = imageBytes
        };

        // Insert into the database
        dbConnection.Insert(newRecord);

        Debug.Log($"Saved prompt: '{promptText}' with image bytes (length={imageBytes.Length})");

        // Clear the input field
        inputField.text = "";
    }

    /// <summary>
    /// Retrieves all entries in the UserInput table, logs them, and optionally displays the last image.
    /// </summary>
    public void RetrieveAllEntries()
    {
        var allEntries = dbConnection.Table<UserInput>().ToList();
        Debug.Log("------ Retrieved Entries ------");
        foreach (var entry in allEntries)
        {
            Debug.Log($"ID: {entry.Id}, Prompt: {entry.InputText}, ImageData length: {entry.ImageData?.Length}");

            // If you have a RawImage to display the last retrieved image, do it here:
            if (displayImage != null && entry.ImageData != null && entry.ImageData.Length > 0)
            {
                Texture2D tex = new Texture2D(2, 2);
                tex.LoadImage(entry.ImageData); // Convert byte[] back into a texture
                displayImage.texture = tex;
            }
        }
    }

    /// <summary>
    /// Example of generating a simple 64x64 texture filled with a random color.
    /// Replace this with your real image-generation or AI code.
    /// </summary>
    private Texture2D GenerateDummyTexture()
    {
        Texture2D dummyTex = new Texture2D(64, 64);
        Color randomColor = new Color(Random.value, Random.value, Random.value);

        for (int x = 0; x < 64; x++)
        {
            for (int y = 0; y < 64; y++)
            {
                dummyTex.SetPixel(x, y, randomColor);
            }
        }
        dummyTex.Apply();
        return dummyTex;
    }
}

/// <summary>
/// Represents a row in the "UserInput" table, storing both the prompt and the image data.
/// </summary>
public class UserInput
{
    [PrimaryKey, AutoIncrement]
    public int Id { get; set; }

    public string InputText { get; set; }

    // New field to store the generated image as PNG bytes (BLOB in SQLite)
    public byte[] ImageData { get; set; }
}
