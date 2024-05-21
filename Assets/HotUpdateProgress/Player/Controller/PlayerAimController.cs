using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAimController : MonoBehaviour
{   
    [Range(-180, 180f)]
    public float x;
    
    [Range(-180, 180f)]
    public float y;
    
    [Range(-180, 180f)]
    public float z;
    private Vector3 currentVelocity;
    private void Update()
    {
        transform.position = Vector3.SmoothDamp
        (
            transform.position, 
            Camera.main.transform.position + Camera.main.transform.rotation * new Vector3(x, y, z),
            ref currentVelocity, 
            5 * Time.deltaTime 
        );
        // transform.position = Camera.main.transform.position + Camera.main.transform.rotation * new Vector3(x, y, z);
    }
    public Texture2D crosshairTexture; // 拖放一个准星纹理到这里
    public float crosshairSize = 10.0f; // 设置准星的大小

    void OnGUI()
    {
        // 确保已经指定了准星纹理
        if (crosshairTexture != null)
        {
            // 计算准星的中心位置
            float xMin = (Screen.width / 2) - (crosshairSize / 2);
            float yMin = (Screen.height / 2) - (crosshairSize / 2);
            // 绘制准星
            GUI.DrawTexture(new Rect(xMin, yMin, crosshairSize, crosshairSize), crosshairTexture);
        }
    }
}
