using UnityEngine;
using System.Linq;
using SQLite4Unity3d;
using System.IO;

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

    // Define the table structure for storing images
    public class ImageEntry
    {
        [PrimaryKey, AutoIncrement]
        public int Id { get; set; }
        public byte[] ImageData { get; set; }
    }

    // Initialize the database connection when the scene starts
    void Start()
    {
        string dbPath = Application.persistentDataPath + "/TextImageDatabase.db";
        _connection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);
        _connection.CreateTable<TextEntry>();   // Create the text table if it doesn't exist
        _connection.CreateTable<ImageEntry>();  // Create the image table if it doesn't exist
    }

    // Save a new text entry to the database
    public void SaveTextEntry(string text)
    {
        TextEntry entry = new TextEntry { Text = text };
        _connection.Insert(entry);
        Debug.Log("Text Saved: " + text);
    }

    // Save a new image entry to the database
    public void SaveImageEntry(Texture2D image)
    {
        byte[] imageData = image.EncodeToPNG(); // Convert Texture2D to PNG byte array
        ImageEntry entry = new ImageEntry { ImageData = imageData };
        _connection.Insert(entry);
        Debug.Log("Image Saved");
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

    // Retrieve and display all image entries from the database
    public Texture2D[] GetImageEntries()
    {
        var imageEntries = _connection.Table<ImageEntry>().ToList();
        Texture2D[] images = new Texture2D[imageEntries.Count];
        
        for (int i = 0; i < imageEntries.Count; i++)
        {
            Texture2D texture = new Texture2D(2, 2);
            texture.LoadImage(imageEntries[i].ImageData); // Convert byte array back to Texture2D
            images[i] = texture;
        }
        
        return images;
    }
}
