using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class DepthMapTesting : MonoBehaviour
{
    public Texture2D depthMap;
    public float depthScale = 10f;
    public int meshResolution = 256;

    private MeshFilter meshFilter;
    private Mesh mesh;

    void Start()
    {
        meshFilter = gameObject.AddComponent<MeshFilter>();
        gameObject.AddComponent<MeshRenderer>();
        GenerateMeshFromDepthMap();
    }

    void GenerateMeshFromDepthMap()
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

        mesh = new Mesh();
        meshFilter.mesh = mesh;

        Vector3[] vertices = new Vector3[meshResolution * meshResolution];
        int[] triangles = new int[(meshResolution - 1) * (meshResolution - 1) * 6];
        Vector2[] uvs = new Vector2[vertices.Length];

        for (int z = 0; z < meshResolution; z++)
        {
            for (int x = 0; x < meshResolution; x++)
            {
                Color pixelColor = depthMap.GetPixelBilinear((float)x / meshResolution, (float)z / meshResolution);
                float depthValue = pixelColor.grayscale; // Using grayscale for depth
                vertices[z * meshResolution + x] = new Vector3(x, depthValue * depthScale, z);
                uvs[z * meshResolution + x] = new Vector2((float)x / meshResolution, (float)z / meshResolution);
            }
        }

        int triIndex = 0;
        for (int z = 0; z < meshResolution - 1; z++)
        {
            for (int x = 0; x < meshResolution - 1; x++)
            {
                int topLeft = z * meshResolution + x;
                int topRight = topLeft + 1;
                int bottomLeft = topLeft + meshResolution;
                int bottomRight = bottomLeft + 1;

                triangles[triIndex++] = topLeft;
                triangles[triIndex++] = bottomLeft;
                triangles[triIndex++] = topRight;

                triangles[triIndex++] = topRight;
                triangles[triIndex++] = bottomLeft;
                triangles[triIndex++] = bottomRight;
            }
        }

        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.uv = uvs;
        mesh.RecalculateNormals();
    }
}

