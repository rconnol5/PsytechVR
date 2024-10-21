using UnityEngine;
using System.Linq;

using SQLite4Unity3d; 

public class DatabaseManager : MonoBehaviour
{
    private SQLiteConnection _connection;

    // Define the table structure for storing text
    public class TextEntry
    {
        [PrimaryKey, AutoIncrement]
        public int Id { get; set; }
        public string Text { get; set; }
    }

    // Initialize the database connection when the scene starts
    void Start()
    {
        // Create a new database or connect to the existing one
        string dbPath = Application.persistentDataPath + "/TextDatabase.db";
        _connection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);
        _connection.CreateTable<TextEntry>(); // Create the table if it doesn't exist
    }

    // Save a new text entry to the database
    public void SaveTextEntry(string text)
    {
        TextEntry entry = new TextEntry { Text = text };
        _connection.Insert(entry);
        Debug.Log("Text Saved: " + text);
    }

    // Retrieve and display all text entries from the database
    public void GetTextEntries()
    {
        var textEntries = _connection.Table<TextEntry>().ToList();
        foreach (var entry in textEntries)
        {
            Debug.Log("Stored Text: " + entry.Text);
        }
    }
}
