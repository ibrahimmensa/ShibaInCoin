using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Character_Interactions : MonoBehaviour
{
    int Life = 2;
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
        
        Debug.Log("collision detacted");
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
        if (Life > 0)
        {
            Life--;
            SceneManager.LoadScene(1);
        }
        else
        {
            GamePlayManager.instance.levelFail();
            Life = 2;
        }
        yield return null;
    }
}
