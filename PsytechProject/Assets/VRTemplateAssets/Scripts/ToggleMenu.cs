using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleMenu : MonoBehaviour
{
    // Start is called before the first frame update
    GameObject Canvas;
    void Start()
    {
        Canvas = GameObject.Find("MenuCube");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.T))
        {
            if(Canvas.activeSelf)
            {
                Canvas.SetActive(false);
            }
            else
            {
                Canvas.SetActive(true);
            }
            
        }
    }
}
