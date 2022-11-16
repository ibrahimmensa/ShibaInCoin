using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    public CHaracterInfo shibaData;
    public GameObject[] ShibaLocker;
    public int[] ShibaPrices;
    public GameObject CoinWarning;
    //coins
    public Text Cointxt;
    public GameObject contant;
    public Image[] SelectedShiba;
    public bool dataMapped = false;
    public Button adsBtn, PlayBtn, UnlockBtn;
    public Text adsCount_ToUnlock;
    public CharacterPrefabData previous, Current;
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

        // span scroll view
        int bttnLenth = bttn.Length;
        distance = new float[bttnLenth];

        bttnDistance = (int)Mathf.Abs(bttn[1].GetComponent<RectTransform>().anchoredPosition.x - bttn[0].GetComponent<RectTransform>().anchoredPosition.x);
        print(bttnDistance);
    }

    private void OnEnable()
    {
        minButtonNum = 0;
        mapCharacterData();
        Current = bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>();
    }

    // Update is called once per frame
    void Update()
    {
        // span scroll view
        for(int i=0; i<bttn.Length;i++)
        {
            distance[i] = Mathf.Abs(center.transform.position.x - bttn[i].transform.position.x);
            print(distance);
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
            UnlockBtn.gameObject.SetActive(true);
            PlayBtn.gameObject.SetActive(false);
        }
        else
        {
            adsBtn.gameObject.SetActive(false);
            UnlockBtn.gameObject.SetActive(false);
            PlayBtn.gameObject.SetActive(true);
            bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().UnlockUser();
            if (temp.isSelected)
            {
                bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().SelectCharacter();
            }
            else
            {
                bttn[minButtonNum].gameObject.GetComponent<CharacterPrefabData>().UnlockUser();
            }
        }
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
        previous = Current;
        Current = bttn[ShibaNum].gameObject.GetComponent<CharacterPrefabData>();
        previous.unselectCharacter();
        Current.SelectCharacter();
        PlayerPrefs.SetInt("Shiba", ShibaNum);
        //foreach(Image img in SelectedShiba)
        //{
        //    img.color = new Color32(255, 255, 255, 255);
        //    Debug.Log("color Changed");
        //}

        Debug.Log("chosing the selected color");
        //SelectedShiba[ShibaNum].color = new Color32(103, 221, 68, 255);
        Debug.Log("selected color chnaged");
    }


    [Header("Span Scroll view")]
    public RectTransform panel;
    public GameObject[] bttn;
    public RectTransform center;

    public float[] distance;
    private bool draging = false;
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
