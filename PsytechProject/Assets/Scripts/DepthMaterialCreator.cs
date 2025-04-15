using UnityEngine;

public class DepthMaterialCreator : MonoBehaviour
{
    // Public fields to assign the input image and depth shader in the inspector.
    public Texture2D inputImage;
    public Shader depthShader;

    // The material created from the input image and shader.
    private Material depthMaterial;

    void Start()
    {
        // Validate that the input image is assigned.
        if (inputImage == null)
        {
            Debug.LogError("Input image not assigned!");
            return;
        }

        // Validate that the shader is assigned.
        if (depthShader == null)
        {
            Debug.LogError("Depth shader not assigned!");
            return;
        }

        // Create a new material using the assigned shader.
        depthMaterial = new Material(depthShader);

        // Set the main texture of the material to the input image.
        depthMaterial.mainTexture = inputImage;

        // Optionally assign the created material to the Renderer on this GameObject.
        Renderer rend = GetComponent<Renderer>();
        if (rend != null)
        {
            rend.material = depthMaterial;
        }
    }

    // Public method to retrieve the created depth material.
    public Material GetDepthMaterial()
    {
        return depthMaterial;
    }
}
