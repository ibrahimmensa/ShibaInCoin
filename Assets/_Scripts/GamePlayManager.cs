using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GamePlayManager : MonoBehaviour
{
    public static GamePlayManager instance;
    public GameObject P_Levelcomplete;
    public GameObject P_LevelFail;
    public GameObject P_Pause;
    public GameObject P_Loading;
    public GameObject P_BlackScreen;
    public GameObject Player;
    public GameObject PlayerObj;

    //levels
    int level;
    bool levelCom;
    public Text Leveltxt;
    public GameObject LevelsManagr;
    public GameObject LevelPosition;

    //coins
    public Text Cointxt;

    //sound and music
    public GameObject Sound;
    public GameObject BG_Music;
    public AudioSource S_Complete;
    public AudioSource S_Failed;

    // Start is called before the first frame update
    private void Awake()
    {
        
    }
    void Start()
    {
        instance = this;

        //select shiba
        if (PlayerPrefs.HasKey("Player"))
        {
            Player = PlayerObj.transform.GetChild(PlayerPrefs.GetInt("Player")).gameObject;
            Player.SetActive(true);
        }
        else
        {
            Player = PlayerObj.transform.GetChild(0).gameObject;
            Player.SetActive(true);
        }

        //OPen saved level or start with level 1
        if (PlayerPrefs.HasKey("Level"))
        {
            if(PlayerPrefs.GetInt("Level") > 15)
            {
                PlayerPrefs.SetInt("Level", 0);
            }
            LevelsManagr.transform.GetChild(PlayerPrefs.GetInt("Level")).gameObject.SetActive(true);
            Player.transform.position = LevelPosition.transform.GetChild(PlayerPrefs.GetInt("Level")).transform.position;
        }
        else
        {
            LevelsManagr.transform.GetChild(PlayerPrefs.GetInt("Level")).gameObject.SetActive(true);
            Player.transform.position = LevelPosition.transform.GetChild(PlayerPrefs.GetInt("Level")).transform.position;
            PlayerPrefs.SetInt("Level", 0);
        }


        //check vibration settings
        if(!PlayerPrefs.HasKey("Vibrate"))
        {
            PlayerPrefs.SetInt("Vibrate", 1);
        }


        //check Sound settings
        if (PlayerPrefs.HasKey("Sound"))
        {
            if(PlayerPrefs.GetInt("Sound") == 1)
            {
                Sound.SetActive(true);
            }
            else
            {
                Sound.SetActive(false);
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
            }
            else
            {
                BG_Music.SetActive(false);
            }

        }
        else
        {
            PlayerPrefs.SetInt("Music", 1);
        }

        Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
        level = PlayerPrefs.GetInt("Level") + 1;
        Leveltxt.text = "Level "+"- "+ level;
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void pauseBtn()
    {
        P_Pause.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
        P_Pause.SetActive(true);
        Time.timeScale = 0;
    }
    public void resumebtn()
    {
        P_Pause.SetActive(false);
        Time.timeScale = 1;
    }
    public void levelComplete()
    {
        levelCom = true;
        if (PlayerPrefs.GetInt("Sound") == 1)
        {
            S_Complete.Play();
        }
        StartCoroutine(LevelCompleted());
    }
    public void levelFail()
    {
        if (PlayerPrefs.GetInt("Sound") == 1)
        {
            S_Failed.Play();
        }
        StartCoroutine(LevelFailed());
    }
    public void Home()
    {
        if(levelCom)
        {
            Debug.Log("LevelComplete Home");
            PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
            levelCom = false;
        }
        else
        {
            Time.timeScale = 1;
            Debug.Log("Pause Home");
        }
    }
    public void Restart()
    {
        SceneManager.LoadScene(1);
    }
    public void Skip()
    {
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
        SceneManager.LoadScene(1);
    }
    public void NextLevel()
    {
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
        SceneManager.LoadScene(1);
    }
    IEnumerator LevelCompleted()
    {
        P_BlackScreen.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        P_Levelcomplete.SetActive(true);
        P_BlackScreen.SetActive(false);
        if(level == 1)
        {
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 25);
            P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();

        }
        else
        {
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 5);
            P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();

        }
        yield return null;
        StopCoroutine(LevelCompleted());
    }
    IEnumerator LevelFailed()
    {
        P_LevelFail.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
        P_BlackScreen.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        P_LevelFail.SetActive(true);
        P_BlackScreen.SetActive(false);
        yield return null;
        StopCoroutine(LevelFailed());
    }
}
