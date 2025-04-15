using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DepthMap360 : MonoBehaviour
{
    // Depth Map Settings
    public Texture2D depthMap;
    public float depthScale = 10f;   // Scale for the depth displacement (in addition to the unit sphere)
    public float gamma = 0.8f;       // Gamma value for nonlinear remapping
    public Texture2D environmentImage;
    public Shader baseShader;

    // Mesh Settings
    public int horzResolution = 256; // Number of divisions around the horizontal (360 degrees)
    public int vertResolution = 128; // Number of divisions vertically (180 degrees)
    public Material shaderMat;

    private MeshFilter meshFilter;
    private Mesh mesh;

    // Store overall minimum and maximum grayscale values for normalization
    private float minGray = 1f;
    private float maxGray = 0f;

    // Smoothing kernel size (odd number, e.g., 3 or 5)
    public int smoothingKernelSize = 3;

    void Start()
    {
        environmentImage = FlipTextureVertically(environmentImage); //Neccessity will vary based on the image.
        DepthMaterialCreator dMC = gameObject.GetComponent<DepthMaterialCreator>(); 
        meshFilter = gameObject.AddComponent<MeshFilter>();
        MeshRenderer renderer = gameObject.AddComponent<MeshRenderer>();

        // Assign the provided material or a fallback grayscale material.
        if (shaderMat != null)
        {
            renderer.material = shaderMat;
            renderer.material.mainTexture = environmentImage;
        }
        else
        {
            renderer.material = dMC.GetDepthMaterial();
        }

        // Preprocess the depth map by scanning for overall min and max grayscale values.
        ComputeMinMaxGrayscale();
        GenerateSphereFromDepthMap();
    }

    // This method computes the minimum and maximum grayscale values in the depth map.
    void ComputeMinMaxGrayscale()
    {
        if (depthMap == null)
        {
            Debug.LogError("Depth map not assigned!");
            return;
        }

        for (int y = 0; y < depthMap.height; y++)
        {
            for (int x = 0; x < depthMap.width; x++)
            {
                float g = depthMap.GetPixel(x, y).grayscale;
                if (g < minGray)
                    minGray = g;
                if (g > maxGray)
                    maxGray = g;
            }
        }
        // Debug.Log("Min Gray: " + minGray + "   Max Gray: " + maxGray);
    }

    // This helper method returns a smoothed grayscale value by averaging over a square kernel.
    float GetSmoothedGrayscale(float u, float v, int kernelSize)
    {
        float sum = 0f;
        int count = 0;

        // Determine step sizes (in uv space) based on the depth map dimensions.
        float du = 1f / depthMap.width;
        float dv = 1f / depthMap.height;

        // Loop through the kernel; kernelSize should be an odd number.
        int halfKernel = kernelSize / 2;
        for (int i = -halfKernel; i <= halfKernel; i++)
        {
            for (int j = -halfKernel; j <= halfKernel; j++)
            {
                // Compute neighbor coordinates.
                float sampleU = u + i * du;
                float sampleV = v + j * dv;

                // Wrap the horizontal coordinate.
                sampleU = sampleU % 1f;
                if (sampleU < 0f)
                    sampleU += 1f;

                // Clamp vertical coordinate.
                sampleV = Mathf.Clamp01(sampleV);

                // Note the v coordinate inversion.
                Color sampleColor = depthMap.GetPixelBilinear(sampleU, 1f - sampleV);
                sum += sampleColor.grayscale;
                count++;
            }
        }
        return sum / count;
    }

    void GenerateSphereFromDepthMap()
    {
        if (depthMap == null)
        {
            Debug.LogError("Depth map not assigned!");
            return;
        }

        if (!depthMap.isReadable)
        {
            Debug.LogError("Depth map texture is not readable. Enable Read/Write in the Texture Import Settings.");
            return;
        }

        // Create a new mesh.
        mesh = new Mesh();
        meshFilter.mesh = mesh;

        // Generate a grid of vertices.
        // We use horzResolution + 1 to duplicate the seam (wrap-around) for the horizontal edge.
        int numVerticesX = horzResolution + 1;
        int numVerticesY = vertResolution + 1;
        Vector3[] vertices = new Vector3[numVerticesX * numVerticesY];
        Vector2[] uvs = new Vector2[vertices.Length];

        // For an equirectangular projection:
        // u = 0 to 1 corresponds to phi = 0 to 2PI (360 degrees)
        // v = 0 to 1 corresponds to theta = 0 to PI (180 degrees)
        // Using a base unit sphere, we will displace radially based on our depth map.
        float baseRadius = 1f; // Base sphere radius

        // Factor to boost local differences.
        float amplificationFactor = 1.5f;

        for (int y = 0; y < numVerticesY; y++)
        {
            // v goes from 0 to 1.
            float v = (float)y / vertResolution;
            // theta from 0 to PI.
            float theta = v * Mathf.PI;

            for (int x = 0; x < numVerticesX; x++)
            {
                // u goes from 0 to 1.
                float u = (float)x / horzResolution;
                // phi from 0 to 2PI.
                float phi = u * 2f * Mathf.PI;

                // Use the smoothed grayscale value.
                float smoothedGray = GetSmoothedGrayscale(u, v, smoothingKernelSize);

                // Normalize the grayscale value across the entire texture.
                float normalizedGray = Mathf.InverseLerp(minGray, maxGray, smoothedGray);
                // For an inverse depth map (white means near), invert the normalized value.
                float depthValue = 1f - normalizedGray;

                // Apply a contrast boost.
                depthValue = 1.5f * (depthValue - 0.5f) + 0.5f;
                depthValue = Mathf.Clamp01(depthValue);

                // Apply gamma correction.
                depthValue = Mathf.Pow(depthValue, gamma);

                // Further amplify local differences.
                depthValue = 0.5f + amplificationFactor * (depthValue - 0.5f);
                depthValue = Mathf.Clamp01(depthValue);

                // Compute the final radius at this vertex.
                float finalRadius = baseRadius + depthValue * depthScale;

                // Convert spherical coordinates to Cartesian coordinates.
                // x = sin(theta) * cos(phi)
                // y = cos(theta)
                // z = sin(theta) * sin(phi)
                float sinTheta = Mathf.Sin(theta);
                float cosTheta = Mathf.Cos(theta);
                float cosPhi = Mathf.Cos(phi);
                float sinPhi = Mathf.Sin(phi);

                // The vertex position is the direction multiplied by the final radius.
                Vector3 vertexPos = new Vector3(sinTheta * cosPhi, cosTheta, sinTheta * sinPhi) * finalRadius;
                int index = y * numVerticesX + x;
                vertices[index] = vertexPos;
                uvs[index] = new Vector2(u, v);
            }
        }

        // Create triangles for the mesh.
        List<int> triangles = new List<int>();
        for (int y = 0; y < vertResolution; y++)
        {
            for (int x = 0; x < horzResolution; x++)
            {
                int current = y * numVerticesX + x;
                int next = current + 1;
                int currentRowBelow = current + numVerticesX;
                int nextRowBelow = current + numVerticesX + 1;

                // Two triangles per quad.
                triangles.Add(current);
                triangles.Add(currentRowBelow);
                triangles.Add(next);

                triangles.Add(next);
                triangles.Add(currentRowBelow);
                triangles.Add(nextRowBelow);
            }
        }

        mesh.vertices = vertices;
        mesh.triangles = triangles.ToArray();
        mesh.uv = uvs;
        mesh.RecalculateNormals();


    }
    public static Texture2D FlipTextureVertically(Texture2D source)
    {
        // Create a new readable, uncompressed Texture2D
        RenderTexture rt = RenderTexture.GetTemporary(source.width, source.height, 0, RenderTextureFormat.Default, RenderTextureReadWrite.Linear);
        Graphics.Blit(source, rt);

        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = rt;

        Texture2D readableTex = new Texture2D(source.width, source.height, TextureFormat.RGBA32, false);
        readableTex.ReadPixels(new Rect(0, 0, rt.width, rt.height), 0, 0);
        readableTex.Apply();

        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(rt);

        // Now flip vertically
        Texture2D flipped = new Texture2D(readableTex.width, readableTex.height, TextureFormat.RGBA32, false);

        for (int y = 0; y < readableTex.height; y++)
        {
            Color[] row = readableTex.GetPixels(0, y, readableTex.width, 1);
            flipped.SetPixels(0, readableTex.height - y - 1, readableTex.width, 1, row);
        }

        flipped.Apply();
        return flipped;
    }
}




