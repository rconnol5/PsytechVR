using UnityEngine;

public class ImageToSkybox : MonoBehaviour
{
    private void Start()
    {
        Debug.Log("ImageToSkybox script started.");

        // Ensure the generated image exists in ImageDataHolder
        if (ImageDataHolder.GeneratedImage != null)
        {
            Debug.Log("Generated image found, creating cubemap.");

            // Create a cubemap based on the 2D image from ImageDataHolder
            Cubemap cubemap = CreateCubemapFrom2DImage(ImageDataHolder.GeneratedImage);

            if (cubemap == null)
            {
                Debug.LogError("Cubemap creation failed!");
                return;
            }

            // Set the cubemap as the skybox
            RenderSettings.skybox.SetTexture("_Tex", cubemap);
            DynamicGI.UpdateEnvironment();
        }
        else
        {
            Debug.LogError("The generated image in ImageDataHolder is null.");
        }
    }

    private Cubemap CreateCubemapFrom2DImage(Texture2D image)
    {
        Debug.Log("Creating cubemap from 2D image.");

        if (image.width != image.height)
        {
            Debug.LogError("The image is not square.");
            return null;
        }

        int cubemapResolution = image.width / 4; // Each cubemap face will have this resolution
        Cubemap cubemap = new Cubemap(cubemapResolution, TextureFormat.RGB24, false);

        // Generate the faces for the cubemap
        for (int i = 0; i < 6; i++)
        {
            cubemap.SetPixels(GenerateCubemapFace(image, i), (CubemapFace)i);
        }

        cubemap.Apply();
        return cubemap;
    }

    private Color[] GenerateCubemapFace(Texture2D image, int faceIndex)
    {
        int width = image.width / 4;
        int height = image.height / 4;
        Color[] facePixels = new Color[width * height];

        // Mapping logic for each cubemap face (You will want to project the image data onto the cubemap face)
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                // Calculate the UV coordinates for each pixel
                Vector2 uv = GetUVCoordinatesForFace(faceIndex, x, y, width, height);

                // Fetch the corresponding pixel from the 2D image
                facePixels[y * width + x] = image.GetPixel((int)(uv.x * image.width), (int)(uv.y * image.height));
            }
        }

        return facePixels;
    }

    private Vector2 GetUVCoordinatesForFace(int faceIndex, int x, int y, int faceWidth, int faceHeight)
    {
        // Convert 2D coordinates on a cubemap face to UV coordinates on the original 2D image.
        // This method projects the 2D face into a spherical projection (simplified, can be adjusted)

        float u = (float)x / faceWidth;
        float v = (float)y / faceHeight;

        switch (faceIndex)
        {
            case 0: // Front
                return new Vector2(u, v);
            case 1: // Back
                return new Vector2(1 - u, v);
            case 2: // Left
                return new Vector2(1 - v, u);
            case 3: // Right
                return new Vector2(v, u);
            case 4: // Top
                return new Vector2(u, 1 - v);
            case 5: // Bottom
                return new Vector2(u, v);
            default:
                return new Vector2(u, v);
        }
    }
}
