using System.IO;
using SQLite4Unity3d;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

/// <summary>
/// Manages saving user prompts and generated images into a SQLite database.
/// </summary>
public class DatabaseManager : MonoBehaviour
{
    [Header("UI References")]  
    [SerializeField] private TMP_InputField inputField;
    [SerializeField] private RawImage        displayImage;
    [SerializeField] private Button          generateButton;

    private SQLiteConnection dbConnection;

    private void Awake()
    {
        InitializeDatabase();
    }

    private void Start()
    {
        if (generateButton != null)
            generateButton.onClick.AddListener(OnGenerateButtonPressed);
    }

    /// <summary>
    /// Sets up the database file and connection.
    /// </summary>
    private void InitializeDatabase()
    {
        const string dbName = "MyDatabase.db";
        string dbPath = Path.Combine(Application.persistentDataPath, dbName);

        if (!File.Exists(dbPath))
        {
            string source = Path.Combine(Application.streamingAssetsPath, dbName);
            if (File.Exists(source))
                File.Copy(source, dbPath);
        }

        dbConnection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);
        dbConnection.CreateTable<UserInput>();

        Debug.Log($"[DatabaseManager] Initialized DB at {dbPath}");
    }

    /// <summary>
    /// Called by the Generate button to create and save an image.
    /// </summary>
    public void OnGenerateButtonPressed()
    {
        string prompt = inputField?.text;
        if (string.IsNullOrWhiteSpace(prompt))
        {
            Debug.LogWarning("[DatabaseManager] Prompt is empty.");
            return;
        }

        Texture2D texture = GenerateDummyTexture(64);
        SavePromptAndImage(prompt, texture);
        inputField.text = string.Empty;
    }

    /// <summary>
    /// Inserts the prompt and image bytes into the database.
    /// Also updates the displayImage if assigned.
    /// </summary>
    private void SavePromptAndImage(string prompt, Texture2D texture)
    {
        try
        {
            byte[] data = texture.EncodeToPNG();
            var entry = new UserInput { InputText = prompt, ImageData = data };
            dbConnection.Insert(entry);
            Debug.Log($"[DatabaseManager] Saved prompt '{prompt}' ({data.Length} bytes).");

            if (displayImage != null && data.Length > 0)
            {
                Texture2D tex = new Texture2D(2, 2);
                tex.LoadImage(data);
                displayImage.texture = tex;
            }
        }
        catch (System.Exception ex)
        {
            Debug.LogError($"[DatabaseManager] DB save error: {ex}");
        }
    }

    /// <summary>
    /// Generates a solid-color texture more efficiently using SetPixels.
    /// </summary>
    private Texture2D GenerateDummyTexture(int size)
    {
        var tex = new Texture2D(size, size);
        var color = new Color(Random.value, Random.value, Random.value);
        Color[] pixels = new Color[size * size];
        for (int i = 0; i < pixels.Length; i++) pixels[i] = color;
        tex.SetPixels(pixels);
        tex.Apply();
        return tex;
    }

    private void OnDestroy()
    {
        dbConnection?.Close();
        dbConnection = null;
    }
}

/// <summary>
/// Represents a single user prompt + image row in the database.
/// </summary>
public class UserInput
{
    [PrimaryKey, AutoIncrement]
    public int    Id        { get; set; }
    public string InputText { get; set; }
    public byte[] ImageData { get; set; }
}
