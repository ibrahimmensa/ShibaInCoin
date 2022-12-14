using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    public CHaracterInfo shibaData;
    public SaveData SaveData;
    public GameObject CoinWarning;
    //coins
    public Text Cointxt;
    public GameObject contant;
    public Image[] SelectedShiba;
    public bool dataMapped = false;
    public Button adsBtn, PlayBtn, UnlockBtn;
    public Text adsCount_ToUnlock;
    public CharacterPrefabData previous, Current;
    public CharacterDetails temp;
    // Start is called before the first frame update
    void Start()
    {
        SaveData.readFile();
        temp = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().getCharacterData();
        minButtonNum = 0;
        mapCharacterData();
        Current = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>();

        Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
        
        // span scroll view
        int bttnLenth = bttn.Length;
        distance = new float[bttnLenth];

        bttnDistance = (int)Mathf.Abs(bttn[1].GetComponent<RectTransform>().anchoredPosition.x - bttn[0].GetComponent<RectTransform>().anchoredPosition.x);
        print(bttnDistance);
    }

    private void OnEnable()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButton(0))
        {
            StartDrage();
        }
        else
        {
            EndDrage();
        }
            // span scroll view
        for (int i=0; i<bttn.Length;i++)
        {
            distance[i] = Mathf.Abs(center.transform.position.x - bttn[i].transform.position.x);
            //print(distance);
        }
        float MinDistance = Mathf.Min(distance);
        for(int a=0; a<bttn.Length; a++)
        {
            if(MinDistance == distance[a])
            {
                minButtonNum = a;
            }
        }
        if(!draging)
        {
            LerpToButton(minButtonNum * -bttnDistance);
            if (!dataMapped)
            {
                mapCharacterData();
            }
        }
        Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
        //if(!shibaData.CD[minButtonNum].IsLocked)
        //{
        //    LockCover.SetActive(false);
        //}
    }

    public void mapCharacterData()
    {
        dataMapped = true;
        CharacterDetails temp = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().getCharacterData();
        if (temp.IsLocked)
        {
            adsCount_ToUnlock.text = temp.AdsWatched.ToString()+"/"+temp.AdsToWatch_ToUnlock.ToString();
            adsBtn.gameObject.SetActive(true);

            if (temp.AdsToWatch_ToUnlock == temp.AdsWatched) adsBtn.interactable = false;
            else adsBtn.interactable = true;

            UnlockBtn.gameObject.SetActive(true);
            PlayBtn.gameObject.SetActive(false);
        }
        else
        {
            adsBtn.gameObject.SetActive(false);
            UnlockBtn.gameObject.SetActive(false);
            PlayBtn.gameObject.SetActive(true);
            bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().UnlockUser();
            //if (temp.isSelected)
            //{
            //    bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().SelectCharacter();
            //}
            //else
            //{
            //    bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().UnlockUser();
            //}
        }
        if(temp.ComingSoon)
        {
            adsBtn.gameObject.SetActive(false);
            UnlockBtn.gameObject.SetActive(false);
        }

    }
    public void UnlockShibaWithAds()
    {
        temp = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().getCharacterData();
        temp.AdsWatched++;
        adsCount_ToUnlock.text = temp.AdsWatched.ToString() + "/" + temp.AdsToWatch_ToUnlock.ToString();
        if (temp.AdsToWatch_ToUnlock == temp.AdsWatched)
        {
            adsBtn.interactable = false;
        }
        SaveData.saveFile();
    }
    public void unlockShiba()
    {
        temp = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().getCharacterData();
        if (temp.AdsToWatch_ToUnlock == temp.AdsWatched)
        {
            adsBtn.gameObject.SetActive(false);
            UnlockBtn.gameObject.SetActive(false);
            PlayBtn.gameObject.SetActive(true);
            bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().UnlockUser();
            temp.IsLocked = false;
            //previous.UpdateSelectedBool();
            temp.isSelected = true;
            selectShiba();
            PlayerPrefs.SetInt("Player", minButtonNum);
        }
        else if(PlayerPrefs.GetInt("Coins") > temp.NeedCoins_ToUnlock)
        {
            adsBtn.gameObject.SetActive(false);
            UnlockBtn.gameObject.SetActive(false);
            PlayBtn.gameObject.SetActive(true);
            bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().UnlockUser();
            temp.IsLocked = false;
            //previous.UpdateSelectedBool();
            temp.isSelected = true;
            selectShiba();
            PlayerPrefs.SetInt("Player", minButtonNum);
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - temp.NeedCoins_ToUnlock);
            Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
        }
        else
        {
            CoinWarning.SetActive(true);
        }
        SaveData.saveFile();
    }
    public void selectShiba()
    {
        previous = Current;
        Current = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>();
        previous.unselectCharacter();
        Current.SelectCharacter();
        PlayerPrefs.SetInt("Shiba", minButtonNum);
        SaveData.saveFile();
    } 
    public void selectShiba(CharacterPrefabData c)
    {
        previous = Current;
        Current = c;
        previous.temp.isSelected = false;
        //Current = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>();
        previous.unselectCharacter();
        Current.SelectCharacter();
        PlayerPrefs.SetInt("Shiba", minButtonNum);
        SaveData.saveFile();
    }


    [Header("Span Scroll view")]
    public RectTransform panel;
    public GameObject[] bttn;
    public RectTransform center;

    public float[] distance;
    public bool draging = false;
    private int bttnDistance;
    private int minButtonNum;

    //shiba properties
    public Text AdsCount;
    public GameObject LockCover;
    void LerpToButton( int position)
    {
        float newX = Mathf.Lerp(panel.anchoredPosition.x, position, Time.deltaTime * 10f);
        Vector2 newPosition = new Vector2(newX, panel.anchoredPosition.y);
        panel.anchoredPosition = newPosition;
    }
    public void StartDrage()
    {
        draging = true;
        dataMapped = false;
    }
    public void EndDrage()
    {
        draging = false;
    }


    
}
