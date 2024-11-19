using UnityEngine;

public class ImageEnvironment : MonoBehaviour
{
    [SerializeField] private Renderer planeRenderer;  // Reference to the plane's renderer
    private Material planeMaterial;

    private void Start()
    {
        // Ensure the planeRenderer is assigned
        if (planeRenderer != null)
        {
            planeMaterial = planeRenderer.material;  // Get the material from the plane's renderer

            // Check if the generated image exists
            if (ImageDataHolder.GeneratedImage != null && planeMaterial != null)
            {
                // Convert the generated image to a texture and assign it to the plane's material
                Texture2D texture = ImageDataHolder.GeneratedImage;

                // Apply the texture to the material's main texture
                planeMaterial.mainTexture = texture;
            }
            else
            {
                Debug.LogError("Generated image is null or Plane material not found.");
            }
        }
        else
        {
            Debug.LogError("Plane Renderer reference is not assigned.");
        }
    }
}
