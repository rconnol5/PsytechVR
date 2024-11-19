using UnityEngine;

public class ImageToSkybox : MonoBehaviour
{
    [SerializeField] private Cubemap test_cubemap; 

    private void Start()
    {
        Debug.Log("ImageToSkybox script started.");

        // Ensure the generated image exists
        if (ImageDataHolder.GeneratedImage != null)
        {
            Debug.Log("Generated image found, creating cubemap.");

            // Create a cubemap based on the generated image
            Cubemap cubemap = CreateCubemapFromPanorama(ImageDataHolder.GeneratedImage);

            if (cubemap == null)
            {
                Debug.LogError("Cubemap creation failed!");
                return;
            }

            // Set the cubemap as the skybox
            if (cubemap != null)
            {
                Debug.Log("Cubemap created successfully, setting skybox.");
                RenderSettings.skybox.SetTexture("_Tex", cubemap);
                DynamicGI.UpdateEnvironment();
            }
            else
            {
                Debug.LogError("Failed to create cubemap.");
            }
        }
        else
        {
            Debug.LogError("Generated image is null.");
        }
    }

    private Cubemap CreateCubemapFromPanorama(Texture2D panorama)
    {
        Debug.Log("Creating cubemap from panorama.");

        if (panorama.width != panorama.height)
        {
            Debug.LogError("The panorama image is not square.");
            return null;
        }

        int cubemapResolution = panorama.width / 4; // Each face of the cubemap will have a smaller resolution
        Cubemap cubemap = new Cubemap(cubemapResolution, TextureFormat.RGB24, false);

        // Generate faces for the cubemap
        for (int i = 0; i < 6; i++)
        {
            cubemap.SetPixels(GenerateCubemapFace(panorama, i), (CubemapFace)i);
        }

        cubemap.Apply();

        return cubemap;
    }

    private Color[] GenerateCubemapFace(Texture2D panorama, int faceIndex)
    {
        Color[] facePixels = new Color[panorama.width * panorama.height / 6];
        Debug.Log($"Generating face {faceIndex} for cubemap with {facePixels.Length} pixels.");


        // Simplified for illustration, you can use spherical mapping for accuracy
        for (int i = 0; i < facePixels.Length; i++)
        {
            facePixels[i] = panorama.GetPixel(i % panorama.width, i / panorama.width);
        }

        return facePixels;
    }
}
