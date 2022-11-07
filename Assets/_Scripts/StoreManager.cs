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
    // Start is called before the first frame update
    void Start()
    {
        Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
        if(PlayerPrefs.HasKey("Shiba"))
        {
            for(int sh=0; sh< PlayerPrefs.GetInt("Shiba"); sh++)
            {
                ShibaLocker[sh].SetActive(false);
            }
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
            PlayerPrefs.SetInt("Shiba", num);
        }
        else
        {
            CoinWarning.SetActive(true);
        }
    }
}
