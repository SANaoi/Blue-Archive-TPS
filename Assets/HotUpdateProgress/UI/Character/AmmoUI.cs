using UnityEngine;
using UnityEngine.UI;

public class AmmoUI : BasePanel
{
    private int maxAmmoClip;
    private int currentAmmoClip;
    

    private Transform Bg;
    private Transform MagazineUI;
    private Text MagazineUI_Text;
    public bool isReload;

    void Start()
    {  
        InitUI();    
    }

    private void InitUI()
    {
        InitAmmo();  
        InitUIName();
    }

    private void InitAmmo()
    {
        ShootConfig_SO shootConfig = GetComponentInParent<PlayerShootController>().shootConfig;
        if (shootConfig == null) 
        {
            Debug.LogError("未找到shootConfig");
            return;
        }
        isReload = false;
        maxAmmoClip = shootConfig.Capacity;
        currentAmmoClip = shootConfig.Capacity;
    }

    private void InitUIName()
    {
        Bg = transform.Find("Bg");
        MagazineUI = transform.Find("Bg/Magazine");
        MagazineUI_Text = MagazineUI.GetComponent<Text>();
        MagazineUI_Text.text = maxAmmoClip.ToString();
    }

    public void shootRefreshUI()
    {
        print(currentAmmoClip);
        if (currentAmmoClip == 0)
        { 
            isReload = true;
            return; 
        }

        currentAmmoClip -= 1;

        MagazineUI_Text.text = currentAmmoClip.ToString();

    }

    public void reloadRefreshUI()
    {
        currentAmmoClip = maxAmmoClip;
        MagazineUI_Text.text = currentAmmoClip.ToString();
        isReload = false;
    }
}
