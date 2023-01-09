using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainMenuManager : MonoBehaviour
{
    public int TotalCoins;
    public Text CoinsTxt;
    public static MainMenuManager instance;
    public StoreManager StoreManager;

    [Header("Sound Music and Vibrations")]
    //sound and music
    public GameObject Sound;
    public GameObject BG_Music;
    [Space()]
    [Header("Sound")]
    public GameObject SoundBtn_On;
    public GameObject SoundBtn_Off;
    [Space()]
    [Header("Music")]
    public GameObject MusicBtn_On;
    public GameObject MusicBtn_Off;
    [Space()]
    [Header("Vibration")]
    public GameObject VibBtn_On;
    public GameObject VibBtn_Off;



    // Start is called before the first frame update
    private void OnEnable()
    {
    }
    void Start()
    {
        instance = this;
        if(GoogleAds.Instance)
        {
            GoogleAds.Instance.RequestBanner();
        }


        //coins
        if (PlayerPrefs.HasKey("Coins"))
        {
            TotalCoins = PlayerPrefs.GetInt("Coins");
            CoinsTxt.text = TotalCoins.ToString();
        }
        else
        {
            PlayerPrefs.SetInt("Coins", 0);
            TotalCoins = PlayerPrefs.GetInt("Coins");
            CoinsTxt.text = TotalCoins.ToString();
        }

        //sound
        if (PlayerPrefs.HasKey("Sound"))
        {
            if (PlayerPrefs.GetInt("Sound") == 1)
            {
                Sound.SetActive(true);
                SoundBtn_On.SetActive(true);
                SoundBtn_Off.SetActive(false);
                Debug.Log("sound on");
            }
            else
            {
                Sound.SetActive(false);
                SoundBtn_On.SetActive(false);
                SoundBtn_Off.SetActive(true);
                Debug.Log("sound off");
            }
        }
        else
        {
            PlayerPrefs.SetInt("Sound", 1);
            Debug.Log("sound no key");
        }


        //check Music settings
        if (PlayerPrefs.HasKey("Music"))
        {
            if (PlayerPrefs.GetInt("Music") == 1)
            {
                BG_Music.SetActive(true);
                MusicBtn_On.SetActive(true);
                MusicBtn_Off.SetActive(false);
                Debug.Log("music on");
            }
            else
            {
                BG_Music.SetActive(false);
                MusicBtn_On.SetActive(false);
                MusicBtn_Off.SetActive(true);
                Debug.Log("music off");
            }

        }
        else
        {
            PlayerPrefs.SetInt("Music", 1);
            Debug.Log("music no key");
        }


        //vib setting
        if (PlayerPrefs.HasKey("Vibrate"))
        {
            if (PlayerPrefs.GetInt("Vibrate") == 1)
            {
                VibBtn_On.SetActive(true);
                VibBtn_Off.SetActive(false);
                Debug.Log("vib on");
            }
            else
            {
                VibBtn_On.SetActive(false);
                VibBtn_Off.SetActive(true);
                Debug.Log("sound off");
            }

        }
        else
        {
            PlayerPrefs.SetInt("Vibrate", 1);
            Debug.Log("vib no key");
        }
    }

    // Update is called once per frame
    void Update()
    {
        CoinsTxt.text = PlayerPrefs.GetInt("Coins").ToString();
    }
    public void Privacy()
    {
        Application.OpenURL("https://mensaplay.com/wensa/privacy-policy.html");
    }
    public void VibrationOn()
    {
        PlayerPrefs.SetInt("Vibrate", 1);
        Debug.Log("Vib set on");
    }
    public void VibrationOFF()
    {
        PlayerPrefs.SetInt("Vibrate", 0);
        Debug.Log("Vib set off");
    }
    public void SoundOn()
    {
        PlayerPrefs.SetInt("Sound", 1);
        Debug.Log("sound set on");
    }
    public void SoundOFF()
    {
        PlayerPrefs.SetInt("Sound", 0);
        Debug.Log("sound set off");
    }
    public void MusicOn()
    {
        PlayerPrefs.SetInt("Music", 1);
        Debug.Log("music set on");
    }
    public void MusicOFF()
    {
        PlayerPrefs.SetInt("Music", 0);
        Debug.Log("music set off");
    }
    public void adsToUnlockShiba()
    {
        AdsInitializer.Instance.ShowAd(RewardedAdType.UNLOCKSHIBA);
    }
    public void freecoins()
    {
        AdsInitializer.Instance.ShowAd(RewardedAdType.FREECOINS);
    }
    public void SavePrefs()
    {
        PlayerPrefs.Save();
        Debug.Log("pref Save");
    }
}
