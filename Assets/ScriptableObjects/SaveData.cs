using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

[System.Serializable]
public class SaveData 
{
    public CHaracterInfo shibaData;
    public void saveFile()
    {
        string data = JsonUtility.ToJson(shibaData);
        File.WriteAllText(Application.persistentDataPath + "/PlayerData.txt", data);
    }

    public void readFile()
    {
        if (File.Exists(Application.persistentDataPath + "/PlayerData.txt"))
        {
            string recoveredData = File.ReadAllText(Application.persistentDataPath + "/PlayerData.txt");
            if (recoveredData != null)
            {
                shibaData = JsonUtility.FromJson<CHaracterInfo>(recoveredData);
            }
        }
    }
}
