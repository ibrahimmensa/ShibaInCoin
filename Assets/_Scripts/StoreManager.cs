using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    public GameObject[] ShibaLocker;
    public int[] ShibaPrices;
    public GameObject CoinWarning;
    //coins
    public Text Cointxt;
    public GameObject contant;
    public Image[] SelectedShiba;
    // Start is called before the first frame update
    void Start()
    {
        Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
        if(PlayerPrefs.HasKey("ShibaLock"))
        {
            for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
            {
                ShibaLocker[sh].SetActive(false);
            }
        }
        for (int i = 0; i < contant.transform.childCount; i++)
        {
            SelectedShiba[i] = contant.transform.GetChild(i).GetComponent<Image>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void unlockShiba(int num)
    {
        if(PlayerPrefs.GetInt("Coins") > ShibaPrices[num-1])
        {
            PlayerPrefs.SetInt("Player", num);
            ShibaLocker[PlayerPrefs.GetInt("Player")-1].SetActive(false);
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - ShibaPrices[num-1]);
            Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
            PlayerPrefs.SetInt("ShibaLock", num);
            selectShiba(num);
        }
        else
        {
            CoinWarning.SetActive(true);
        }
    }
    public void selectShiba(int ShibaNum)
    {
        PlayerPrefs.SetInt("Shiba", ShibaNum);
        foreach(Image img in SelectedShiba)
        {
            img.color = new Color32(255, 255, 255, 255);
            Debug.Log("color Changed");
        }

        Debug.Log("chosing the selected color");
        SelectedShiba[ShibaNum].color = new Color32(103, 221, 68, 255);
        Debug.Log("selected color chnaged");
    }
}
