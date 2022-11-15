using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Character_Interactions : MonoBehaviour
{
    public bool IsGamePlay;
    // Start is called before the first frame update
    private void OnEnable()
    {
        IsGamePlay = true;
    }
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        
       
    }
    IEnumerator Retry()
    {
        Debug.Log("Android , Retry collision");
        yield return new WaitForSeconds(2.0f);
        //if(GoogleMobileAdsDemoScript.instance)
        //{
        //    if (GoogleMobileAdsDemoScript.instance.Life > 0)
        //    {
        //        GoogleMobileAdsDemoScript.instance.Life--;
        //        SceneManager.LoadScene(1);
        //    }
        //    else
        //    {
        //        GamePlayManager.instance.levelFail();
        //        GoogleMobileAdsDemoScript.instance.Life = 2;
        //    }
        //}
        //else
        //{
        //}

        GamePlayManager.instance.levelFail();
        yield return null;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        GamePlayManager.instance.Move = false;
        if (collision.gameObject.CompareTag("Basket"))
        {
            Debug.Log("Android , Basket collision");
            if (!IsGamePlay)
                return;
            IsGamePlay = false;
            StopCoroutine(Retry());
            Debug.Log("basket");
            gameObject.GetComponent<CircleCollider2D>().enabled = false;
            if (PlayerPrefs.GetInt("Vibrate") == 1)
            {
                Handheld.Vibrate();
            }
            //collision.collider.enabled = false;
            GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
            GamePlayManager.instance.levelComplete();
        }

        if (collision.gameObject.CompareTag("Hurdle"))
        {
            Debug.Log("Android , Hurdle collision");
            if (!IsGamePlay)
                return;
            IsGamePlay = false;
            StopCoroutine(Retry());
            Debug.Log("Hurdle");
            gameObject.GetComponent<CircleCollider2D>().enabled = false;
            if (PlayerPrefs.GetInt("Vibrate") == 1)
            {
                Handheld.Vibrate();
            }
            //collision.collider.enabled = false;
            GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
            GamePlayManager.instance.levelFail();
        }
        if (collision.gameObject.CompareTag("Ground"))
        {
            Debug.Log("Android , ground collision");
            if (!IsGamePlay)
                return;
            IsGamePlay = false;
            StartCoroutine(Retry());
        }
    }
}
