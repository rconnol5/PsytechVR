using UnityEngine;
using System.IO;

public class SkyboxManager : MonoBehaviour
{
    [SerializeField] private Material skyboxMaterial; // Assign the material you want to use as the skybox

    private void Start()
    {
        SetSkybox();
    }

    private void SetSkybox()
    {
        string filePath = Path.Combine(Application.persistentDataPath, "generated_image.png");

        if (File.Exists(filePath))
        {
            // Load the texture
            byte[] fileData = File.ReadAllBytes(filePath);
            Texture2D texture = new Texture2D(2, 2);
            texture.LoadImage(fileData); // Load the image into the texture

            // Set the texture to the skybox material (as a 360-degree image)
            skyboxMaterial.SetTexture("_MainTex", texture);
            RenderSettings.skybox = skyboxMaterial;
            DynamicGI.UpdateEnvironment(); // Update the environment lighting

            Debug.Log("Skybox image loaded and applied.");
        }
        else
        {
            Debug.LogError("No generated image found!");
        }
    }
}
