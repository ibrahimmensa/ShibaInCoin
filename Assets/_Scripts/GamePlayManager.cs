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
    public Text dubbleScore;
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

    private void OnEnable()
    {
        //GoogleAds.Instance.RequestInterstitial();
    }
    void Start()
    {
        instance = this;
        //select shiba
        if (PlayerPrefs.HasKey("Shiba"))
        {
            Player = PlayerObj.transform.GetChild(PlayerPrefs.GetInt("Shiba")).gameObject;
            Player.SetActive(true);
            Ball = Player;
        }
        else
        {
            Player = PlayerObj.transform.GetChild(0).gameObject;
            Player.SetActive(true);
            Ball = Player;
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
        //if(GoogleMobileAdsDemoScript.instance)
        //{
        //    GoogleMobileAdsDemoScript.instance.showBottomAd();
        //}
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        if (!lineCreated)
        {
            if (Input.GetMouseButtonDown(0))
            {
                Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
                if (hit)
                {
                    if (hit.transform.gameObject.CompareTag("Player"))
                    {
                        CreateLine();
                    }
                }
            }
            if (Input.GetMouseButton(0) && startDraw)
            {
                Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
                if (hit)
                {
                    //Debug.Log(hit.transform.name);
                    if (hit.transform.gameObject.CompareTag("Ground"))
                    {
                        StoplineCreated = true;
                    }
                    //RopeStoper
                }
                Vector2 tempFingerPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                if (Vector2.Distance(tempFingerPos, fingerPositions[fingerPositions.Count - 1]) > 0.1f)
                {
                    if (!StoplineCreated)
                    {
                        UpdateLine(tempFingerPos);
                    }
                }
            }
            else
            {
                if (startDraw)
                {
                    lineCreated = true;
                    GenerateWayPoints();
                }
            }
        }
        if (Move)
        {
            //Ball.GetComponent<Rigidbody2D>().simulated = false;
            MoveCharacter();
        }
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
        AdsInitializer.Instance.ShowAdInterstitial();
        //GoogleAds.Instance.showInterstitial();
        levelCom = true;
        if (PlayerPrefs.GetInt("Sound") == 1)
        {
            S_Complete.Play();
        }
        StartCoroutine(LevelCompleted());
    }
    public void levelFail()
    {
        AdsInitializer.Instance.ShowAdInterstitial();
        if (PlayerPrefs.GetInt("Sound") == 1)
        {
            S_Failed.Play();
        }
        StartCoroutine(LevelFailed());
    }
    public void Home()
    {
        AdsInitializer.Instance.ShowAdInterstitial();
        if (levelCom)
        {
            Debug.Log("LevelComplete Home");

            if (level == 15)
            {
                PlayerPrefs.SetInt("Level", -1);
            }
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
        Time.timeScale = 1;
        SceneManager.LoadScene(1);
    }
    public void Skip()
    {
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
        SceneManager.LoadScene(1);
    }
    public void NextLevel()
    {

        if (level == 15)
        {
            PlayerPrefs.SetInt("Level", -1);
        }
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
        SceneManager.LoadScene(1);
    }
    int totl;
    IEnumerator LevelCompleted()
    {
        P_BlackScreen.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        P_Levelcomplete.SetActive(true);
        P_BlackScreen.SetActive(false);
        totl = 20 + 5 * (PlayerPrefs.GetInt("Level") + 1);
        dubbleScore.text = totl.ToString(); 
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins")+totl);
        P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
        Debug.Log("score is:" + PlayerPrefs.GetInt("Coins"));
        //if (level == 1)
        //{
        //    PlayerPrefs.SetInt("Coins", 20 +  ( PlayerPrefs.GetInt("Level")*5));
        //    P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();

        //}
        //else
        //{
        //    PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 5);
        //    P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
           
        //}
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


    [Header("Line Management Variables")]
    [Space]
    public GameObject linePrefab;
    public GameObject currentLine;

    public LineRenderer lineRenderer;
    //public EdgeCollider2D EdgeCollider2D;
    public List<Vector2> fingerPositions;

    //myCode
    public GameObject Ball;
    public Transform WayPointParent;
    public GameObject Obj;
    public bool create;
    public bool Move;
    public bool lineCreated;
    public bool StoplineCreated;
    public bool startDraw;

    void CreateLine()
    {
        startDraw = true;
        currentLine = Instantiate(linePrefab, Vector3.zero, Quaternion.identity);
        lineRenderer = currentLine.GetComponent<LineRenderer>();
        //EdgeCollider2D = currentLine.GetComponent<EdgeCollider2D>();
        fingerPositions.Clear();
        fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
        fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
        lineRenderer.SetPosition(0, fingerPositions[0]);
        lineRenderer.SetPosition(1, fingerPositions[1]);
        //EdgeCollider2D.points = fingerPositions.ToArray();
    }
    void UpdateLine(Vector2 newFingerPos)
    {
        fingerPositions.Add(newFingerPos);
        lineRenderer.positionCount++;
        lineRenderer.SetPosition(lineRenderer.positionCount - 1, newFingerPos);
        //EdgeCollider2D.points = fingerPositions.ToArray();

        
    }
    public void GenerateWayPoints()
    {
        foreach (Vector2 WayPoint in fingerPositions)
        {
            Instantiate(Obj, new Vector2(WayPoint.x, WayPoint.y), Quaternion.identity, WayPointParent);
            //Obj.transform.SetParent(,false);
        }
        create = false;
        Move = true;
    }
    int i = 0;
    public void MoveCharacter()
    {
        if (Vector2.Distance(Ball.transform.localPosition, WayPointParent.transform.GetChild(i).transform.localPosition) < 0.1)
        {
            if (i < WayPointParent.transform.childCount - 1)
            {
                i++;

                //Debug.Log("Android , Moving to point :"+i);
            }
            else
            {
                Ball.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                // Debug.Log("Android , Movement Eneded");
                //Ball.GetComponent<Rigidbody2D>().simulated = true;
                currentLine.GetComponent<EdgeCollider2D>().enabled = false;
                Move = false;
                return;
            }
        }
        Ball.transform.localPosition = Vector2.MoveTowards(Ball.transform.position,
                WayPointParent.transform.GetChild(i).transform.localPosition, 0.05f * Time.timeScale);
    }
}
