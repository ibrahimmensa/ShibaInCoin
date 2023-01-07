using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GasExp : MonoBehaviour
{
    public Animator GasExp1;
    public bool Gas;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void changeGasExp()
    {
        if(!Gas)
        {
            GetComponent<Animator>().enabled = false;
            GasExp1.enabled = true;
        }
    }
}
