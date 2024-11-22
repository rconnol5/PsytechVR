using UnityEngine;

public class SkyboxInitializer : MonoBehaviour
{
    // The Skybox material used in the scene
    public Material SkyboxPanoramic;

    // Target resolution for upscaling
    public int TargetWidth = 4096;
    public int TargetHeight = 2048;
    
    private void Start()
    {
        // Ensure the generated image is available before setting it
        if (ImageDataHolder.GeneratedImage != null && SkyboxPanoramic != null)
        {
            // Upscale the image
            Texture2D upscaledImage = UpscaleImage(ImageDataHolder.GeneratedImage, TargetWidth, TargetHeight);
            
            SkyboxPanoramic.SetTexture("_MainTex", upscaledImage);
            SkyboxPanoramic.SetTexture("_Tex", upscaledImage);

            // this is probably redundant
            RenderSettings.skybox = SkyboxPanoramic;
        }
        else
        {
            Debug.LogError("Generated image or Skybox material not assigned.");
        }
    }

    // Upscale the image to the TargetWidth and TargetHeight
    private Texture2D UpscaleImage(Texture2D original, int targetWidth, int targetHeight)
    {
        Texture2D upscaledTexture = new Texture2D(targetWidth, targetHeight, original.format, original.mipmapCount > 1);

        // Uses bilinear interpolation
        for (int y = 0; y < targetHeight; y++)
        {
            for (int x = 0; x < targetWidth; x++)
            {
                float u = x / (float)targetWidth;
                float v = y / (float)targetHeight;
                Color color = original.GetPixelBilinear(u, v);
                upscaledTexture.SetPixel(x, y, color);
            }
        }
        
        upscaledTexture.Apply();

        return upscaledTexture;
    }
}
