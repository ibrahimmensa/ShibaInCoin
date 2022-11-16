using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CharacterPrefabData : MonoBehaviour
{
    public Image lockImage, BG;
    public Text coins;
    public CHaracterInfo characterInfo;
    public int id;
    CharacterDetails temp;
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
    }

    public void unselectCharacter()
    {
        BG.color = new Color32(255, 255, 255, 255);
    }
}
