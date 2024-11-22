using UnityEngine;

public class SkyboxInitializer : MonoBehaviour
{
    // The Skybox material in your scene (assigned via the inspector or in code)
    public Material SkyboxPanoramic;

    // Called when the scene is loaded
    private void Start()
    {
        // Ensure the generated image is available before setting it
        if (ImageDataHolder.GeneratedImage != null && SkyboxPanoramic != null)
        {
            // Assign the generated image to the skybox material's texture
            SkyboxPanoramic.SetTexture("_MainTex", ImageDataHolder.GeneratedImage);

            // If you're using a shader that needs an HDR texture, make sure the material is set up for HDR
            SkyboxPanoramic.SetTexture("_Tex", ImageDataHolder.GeneratedImage);

            // Optionally, set the material as the scene's skybox
            RenderSettings.skybox = SkyboxPanoramic;
        }
        else
        {
            Debug.LogError("Generated image or Skybox material not assigned.");
        }
    }
}
