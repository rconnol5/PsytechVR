using System.IO;
using System.Data;
using SQLite4Unity3d; // Namespace for SQLite4Unity3d
using UnityEngine;
using TMPro; // For TMP InputField
using System.Linq;

public class DatabaseManager : MonoBehaviour
{
    public TMP_InputField inputField; // Drag your TMP_InputField here in the Inspector
    private SQLiteConnection dbConnection;

    private void Start()
    {
        // Define the database path
        string dbPath = Path.Combine(Application.persistentDataPath, "MyDatabase.db");

        // Copy database from StreamingAssets (if you have a prebuilt one) or initialize a new one
        if (!File.Exists(dbPath))
        {
            var sourcePath = Path.Combine(Application.streamingAssetsPath, "MyDatabase.db");
            if (File.Exists(sourcePath))
            {
                File.Copy(sourcePath, dbPath);
            }
        }

        // Open connection to the database
        dbConnection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);

        // Create a table for storing user inputs (if it doesn't exist)
        dbConnection.CreateTable<UserInput>();
    }

    // Save the input from the InputField to the database
    public void SaveInput()
    {
        string inputText = inputField.text; // Get text from the InputField
        if (!string.IsNullOrEmpty(inputText))
        {
            dbConnection.Insert(new UserInput { InputText = inputText }); // Insert into database
            Debug.Log("Saved text: " + inputText);
            inputField.text = ""; // Clear the InputField after saving
        }
        else
        {
            Debug.LogWarning("InputField is empty. Nothing to save.");
        }
    }

    // Optional: Retrieve all stored inputs (for debugging or display)
    public void GetAllInputs()
    {
        var allInputs = dbConnection.Table<UserInput>().ToList();
        foreach (var input in allInputs)
        {
            Debug.Log("Stored input: " + input.InputText);
        }
    }
}

// Table definition for user input
public class UserInput
{
    [PrimaryKey, AutoIncrement]
    public int Id { get; set; }
    public string InputText { get; set; }
}

