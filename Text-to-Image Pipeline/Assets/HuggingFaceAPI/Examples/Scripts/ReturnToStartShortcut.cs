using UnityEngine;
using UnityEngine.SceneManagement;

public class ReturnToStartShortcut : MonoBehaviour
{
    // You can assign the scene index or name in the Inspector, or just hardcode it
    [SerializeField] private int startSceneIndex = 2;

    void Update()
    {
        // Press Escape OR R to return to the start scene
        if (Input.GetKeyDown(KeyCode.Escape) || Input.GetKeyDown(KeyCode.R))
        {
            Debug.Log("Returning to Start Scene...");
            SceneManager.LoadScene(startSceneIndex);
        }
    }
}
