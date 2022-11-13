using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Character_Interactions : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        
        if (collision.gameObject.CompareTag("Basket"))
        {
            if (PlayerPrefs.GetInt("Vibrate") == 1)
            {
                Handheld.Vibrate();
            }
            StopCoroutine(Retry());
            collision.collider.enabled = false;
            GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
            GamePlayManager.instance.levelComplete();
        }

        if(collision.gameObject.CompareTag("Hurdle"))
        {
            if (PlayerPrefs.GetInt("Vibrate") == 1)
            {
                Handheld.Vibrate();
            }
            StopCoroutine(Retry());
            collision.collider.enabled = false;
            GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
            GamePlayManager.instance.levelFail();
        }
        if (collision.gameObject.CompareTag("Ground"))
        {
            StartCoroutine(Retry());
        }
    }
    IEnumerator Retry()
    {
        yield return new WaitForSeconds(2.0f); 
        if(GoogleMobileAdsDemoScript.instance)
        {
            if (GoogleMobileAdsDemoScript.instance.Life > 0)
            {
                GoogleMobileAdsDemoScript.instance.Life--;
                SceneManager.LoadScene(1);
            }
            else
            {
                GamePlayManager.instance.levelFail();
                GoogleMobileAdsDemoScript.instance.Life = 2;
            }
        }
        else
        {
            GamePlayManager.instance.levelFail();
        }
        yield return null;
    }
}
