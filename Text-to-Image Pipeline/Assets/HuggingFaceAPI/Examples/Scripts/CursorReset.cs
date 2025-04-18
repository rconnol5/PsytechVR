using UnityEngine;

public class CursorReset : MonoBehaviour
{
    void Start()
    {
        // Unlock and show the cursor when the scene starts
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }
}
