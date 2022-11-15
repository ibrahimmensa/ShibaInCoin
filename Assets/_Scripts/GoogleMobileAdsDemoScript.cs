using System;
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GoogleMobileAdsDemoScript : MonoBehaviour
{

//    public int Life = 2;
//    private BannerView bannerView;
//    public static GoogleMobileAdsDemoScript instance;

//    void Awake()
//    {
//        DontDestroyOnLoad(transform.gameObject);
//    }
//    public void Start()
//    {
//        instance = this;
//        // Initialize the Google Mobile Ads SDK.
//        MobileAds.Initialize(initStatus => { });

//        this.RequestBanner();
//        StartCoroutine(LoadMainMenu());
//    }

//    private void RequestBanner()
//    {
//#if UNITY_ANDROID
//        string adUnitId = "ca-app-pub-3940256099942544/6300978111";
//#elif UNITY_IPHONE
//            string adUnitId = "ca-app-pub-3940256099942544/2934735716";
//#else
//            string adUnitId = "unexpected_platform";
//#endif

//        // Create a 320x50 banner at the top of the screen.
//        this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
//    }
//    public void showBottomAd()
//    {
//        // Create an empty ad request.
//        AdRequest request = new AdRequest.Builder().Build();

//        // Load the banner with the request.
//        this.bannerView.LoadAd(request);
//    }
//    IEnumerator LoadMainMenu()
//    {
//        yield return new WaitForSeconds(1.0f);
//        SceneManager.LoadScene(0);
//    }
}