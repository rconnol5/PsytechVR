using UnityEngine;
using System.Diagnostics;
using System.IO;

public class DepthMapLoader : MonoBehaviour
{
    public string pythonScriptPath = "path/to/DepthTest.py";
    public string pythonExePath = "python"; // or full path to python executable
    public string inputImagePath = "path/to/input/image.jpg";
    public string outputImagePath = "path/to/output/depthmap.png";

    public Renderer targetRenderer; // e.g., a Quad's renderer

    void Start()
    {
        GenerateDepthMap();
        LoadDepthMapTexture();
    }

    void GenerateDepthMap()
    {
        ProcessStartInfo psi = new ProcessStartInfo();
        psi.FileName = pythonExePath;
        psi.Arguments = $"\"{pythonScriptPath}\" \"{inputImagePath}\" \"{outputImagePath}\"";
        psi.UseShellExecute = false;
        psi.CreateNoWindow = true;
        psi.RedirectStandardOutput = true;
        psi.RedirectStandardError = true;

        using (Process process = Process.Start(psi))
        {
            string stdout = process.StandardOutput.ReadToEnd();
            string stderr = process.StandardError.ReadToEnd();
            process.WaitForExit();

            UnityEngine.Debug.Log("Python Output: " + stdout);
            if (!string.IsNullOrEmpty(stderr))
                UnityEngine.Debug.LogError("Python Error: " + stderr);
        }
    }

    void LoadDepthMapTexture()
    {
        if (File.Exists(outputImagePath))
        {
            byte[] fileData = File.ReadAllBytes(outputImagePath);
            Texture2D depthTexture = new Texture2D(2, 2);
            depthTexture.LoadImage(fileData);

            // Apply texture to material
            if (targetRenderer != null)
                targetRenderer.material.mainTexture = depthTexture;
        }
        else
        {
            UnityEngine.Debug.LogError("Depth map file not found: " + outputImagePath);
        }
    }
}

