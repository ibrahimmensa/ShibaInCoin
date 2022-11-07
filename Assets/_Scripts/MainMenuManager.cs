using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainMenuManager : MonoBehaviour
{
    public int TotalCoins;
    public Text CoinsTxt;
    public static MainMenuManager instance;

    //sound and music
    public GameObject Sound;
    public GameObject BG_Music;
    public GameObject SoundBtn_On;
    public GameObject SoundBtn_Off;
    public GameObject MusicBtn_On;
    public GameObject MusicBtn_Off;
    // Start is called before the first frame update
    void Start()
    {
        instance = this;
        if(PlayerPrefs.HasKey("Coins"))
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
        if (PlayerPrefs.HasKey("Sound"))
        {
            if (PlayerPrefs.GetInt("Sound") == 1)
            {
                Sound.SetActive(true);
                SoundBtn_On.SetActive(true);
                SoundBtn_Off.SetActive(false);
            }
            else
            {
                Sound.SetActive(false);
                SoundBtn_On.SetActive(false);
                SoundBtn_Off.SetActive(true);
            }
        }
        else
        {
            PlayerPrefs.SetInt("Sound", 1);
        }


        //check Music settings
        if (PlayerPrefs.HasKey("Music"))
        {
            if (PlayerPrefs.GetInt("Music") == 1)
            {
                BG_Music.SetActive(true);
                MusicBtn_On.SetActive(true);
                MusicBtn_Off.SetActive(false);
            }
            else
            {
                BG_Music.SetActive(false);
                MusicBtn_On.SetActive(false);
                MusicBtn_Off.SetActive(true);
            }

        }
        else
        {
            PlayerPrefs.SetInt("Music", 1);
        }
    }

    // Update is called once per frame
    void Update()
    {
        CoinsTxt.text = PlayerPrefs.GetInt("Coins").ToString();
    }
    public void VibrationOn()
    {
        PlayerPrefs.SetInt("Vibrate", 1);
    }
    public void VibrationOFF()
    {
        PlayerPrefs.SetInt("Vibrate", 0);
    }
    public void SoundOn()
    {
        PlayerPrefs.SetInt("Sound", 1);
    }
    public void SoundOFF()
    {
        PlayerPrefs.SetInt("Sound", 0);
    }
    public void MusicOn()
    {
        PlayerPrefs.SetInt("Music", 1);
    }
    public void MusicOFF()
    {
        PlayerPrefs.SetInt("Music", 0);
    }
}
