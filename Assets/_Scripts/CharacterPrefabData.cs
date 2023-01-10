using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
public class CharacterPrefabData : MonoBehaviour
{
    public Image lockImage, BG,CharacterImg,CoinsImg;
    public Text coins,CommingSoon;
    public CHaracterInfo characterInfo;
    public int id;
    public CharacterDetails temp;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnEnable()
    {
        temp = characterInfo.CD[id];
        mapData();
    }

    public void mapData()
    {
        temp = characterInfo.CD[id];
        if (temp.IsLocked)
        {
            lockImage.gameObject.SetActive(true);
            coins.text = /*"Coins: " + */temp.NeedCoins_ToUnlock.ToString();
        }
        else {
            lockImage.gameObject.SetActive(false);
            coins.gameObject.SetActive(false);
        }
        CharacterImg.sprite = temp.CHaracterImg;
        if(temp.ComingSoon)
        {
            CoinsImg.gameObject.SetActive(false);
            CommingSoon.gameObject.SetActive(true);
            coins.gameObject.SetActive(false);
        }
        else
        {

            CoinsImg.gameObject.SetActive(true);
            CommingSoon.gameObject.SetActive(false);
            coins.gameObject.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void UnlockUser()
    {
        lockImage.gameObject.SetActive(false);
        coins.gameObject.SetActive(false);
    }

    public CharacterDetails getCharacterData()
    {
        //CharacterDetails temp = characterInfo.CD[id];
        return temp;
    }

    public void SelectCharacter()
    {
        BG.color = new Color32(103, 221, 68, 255);
        temp.isSelected = true;
    }

    public void unselectCharacter()
    {
        BG.color = new Color32(255, 255, 255, 255);
        temp.isSelected = false;
    }
    public void OnSelect()
    {
        MainMenuManager.instance.StoreManager.selectShiba(this);
        temp.isSelected = true;

    }
}
