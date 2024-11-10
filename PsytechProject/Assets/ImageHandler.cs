using UnityEngine;
using UnityEngine.UI;

public class ImageHandler : MonoBehaviour
{
    public Image displayImage; // Reference to the UI Image component where the image will be displayed
    public DatabaseManager databaseManager; // Reference to the DatabaseManager
    
    // Call this method to display an image and store it in the database
    public void DisplayAndStoreImage(Texture2D image)
    {
        // Display the image on the UI
        Sprite sprite = Sprite.Create(image, new Rect(0, 0, image.width, image.height), new Vector2(0.5f, 0.5f));
        displayImage.sprite = sprite;
        
        // Store the image in the database
        databaseManager.SaveImageEntry(image);
    }
}

//Step 3: Link the ImageHandler to the UI and DatabaseManager
//Attach the ImageHandler script to an empty GameObject in your scene.
//Set up the Image field in the Inspector by dragging a UI Image component to the displayImage slot.
//Set up the DatabaseManager reference by dragging the GameObject that has DatabaseManager onto the databaseManager slot.
