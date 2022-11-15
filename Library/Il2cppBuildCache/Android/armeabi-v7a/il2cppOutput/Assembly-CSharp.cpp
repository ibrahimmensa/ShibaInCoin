#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50;
// GoogleMobileAds.Api.AdSize
struct AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// GoogleMobileAds.Api.BannerView
struct BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Character_Interactions
struct Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913;
// CoinWarning
struct CoinWarning_tE63A80C19C022C244C26D5A3304CD04E061AB852;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DrawLine
struct DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GamePlayManager
struct GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0;
// GoogleAdsManager
struct GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53;
// GoogleMobileAdsDemoScript
struct GoogleMobileAdsDemoScript_t0F6E2335673EB408B4FB53DF29BF6BD018CC4149;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t588078125444856498C8BD606951C430B2180CD2;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785;
// Loading
struct Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7;
// MainMenuManager
struct MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE;
// MainScreen
struct MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Movement
struct Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Object_Movement
struct Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StoreManager
struct StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Character_Interactions/<Retry>d__5
struct U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C;
// GamePlayManager/<LevelCompleted>d__32
struct U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8;
// GamePlayManager/<LevelFailed>d__33
struct U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3;
// GoogleAdsManager/<>c
struct U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01C1EA0321FD298E596F2F859DC5F40D36E2677B;
IL2CPP_EXTERN_C String_t* _stringLiteral034283865E30C0CE8971200466E3585778482E78;
IL2CPP_EXTERN_C String_t* _stringLiteral03E0345113F68A7A72170991D8777B3365231AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral068D9B7B4B9A4B3AAE9402DF3C9C3524C535E040;
IL2CPP_EXTERN_C String_t* _stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2;
IL2CPP_EXTERN_C String_t* _stringLiteral188C1E7793944B8BA9565367C39BADF9EA67A348;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral2F61CA7623C2DAECF6EFAEE7BA82693C44E21C16;
IL2CPP_EXTERN_C String_t* _stringLiteral537F912086D986A329874B8810F39AF7DE0A9C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral544CD8A820A1B02F3B984AA5C01C036BDD5AC6F5;
IL2CPP_EXTERN_C String_t* _stringLiteral75B6CA4FB8DB22D91DF45C8EBA534D73CA55B386;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7C91A6B81CD4894B1B4D1BCDFB1492C4BA49161C;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECF8FB393160C8D44EBD80BDB79E8E6B5081E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral87828E5384D17067A8B8AA2E0A037D3F1A185F14;
IL2CPP_EXTERN_C String_t* _stringLiteral930B1358F66BE6CB2F4FF18F039AB396AB859F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA274ED2E6D8673116A56687FC4BB27880FC5CF78;
IL2CPP_EXTERN_C String_t* _stringLiteralA6880EA5264F697CB4936ACCA1E5F8B2FE27FAB0;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895;
IL2CPP_EXTERN_C String_t* _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC74DC486B381A14EB0E4907B61F034ED9AD52AED;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9D03EB933B0B046F313BCB1BEC2E63D5861A7D;
IL2CPP_EXTERN_C String_t* _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
IL2CPP_EXTERN_C String_t* _stringLiteralE51787EBF3A02DDB9D046253DE238C61262334CA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mBA043381E77D8BA7F64CC06CF29C0F63F918AB1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mA618035D629917D205C59E3522D39839D323F9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAdsManager_HandleOnAdClosed_mB42B22FB664E63C1DB83A20A505C1DB25C6F9AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAdsManager_HandleOnAdFailedToLoad_m72D0C7E7FF85A71A692B280A5D896D6E5240EAB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAdsManager_HandleOnAdLoaded_m08C325E69185042EF8F183E32722A5648A9E3869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAdsManager_HandleOnAdOpening_m19C25F43FAF0CA57001255CC0C136DCA8DCA1F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_Reset_m3FA8256D718FE3626C4ABE33A0B17CFFF6F4083B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_Reset_mAAE92A6D8762EA6597BA549C2B5331931280B1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRetryU3Ed__5_System_Collections_IEnumerator_Reset_m77EF79BF90E96B6B31DD195C6059C30C6BBADE08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__3_0_mF091374F00997AD58B921F7B1F646386E1A6C531_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.BannerView
struct BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699, ___OnAdLoaded_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699, ___OnAdOpening_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699, ___OnAdClosed_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699, ___OnPaidEvent_5)); }
	inline EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5, ___OnPaidEvent_9)); }
	inline EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 * ___U3CMediationExtrasU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398, ___U3CKeywordsU3Ek__BackingField_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_0() const { return ___U3CKeywordsU3Ek__BackingField_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_0() { return &___U3CKeywordsU3Ek__BackingField_0; }
	inline void set_U3CKeywordsU3Ek__BackingField_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398, ___U3CExtrasU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_1() const { return ___U3CExtrasU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_1() { return &___U3CExtrasU3Ek__BackingField_1; }
	inline void set_U3CExtrasU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398, ___U3CMediationExtrasU3Ek__BackingField_2)); }
	inline List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 * get_U3CMediationExtrasU3Ek__BackingField_2() const { return ___U3CMediationExtrasU3Ek__BackingField_2; }
	inline List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_2() { return &___U3CMediationExtrasU3Ek__BackingField_2; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_2(List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_2), (void*)value);
	}
};


// Character_Interactions/<Retry>d__5
struct U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C  : public RuntimeObject
{
public:
	// System.Int32 Character_Interactions/<Retry>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Character_Interactions/<Retry>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// GamePlayManager/<LevelCompleted>d__32
struct U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8  : public RuntimeObject
{
public:
	// System.Int32 GamePlayManager/<LevelCompleted>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GamePlayManager/<LevelCompleted>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GamePlayManager GamePlayManager/<LevelCompleted>d__32::<>4__this
	GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8, ___U3CU3E4__this_2)); }
	inline GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GamePlayManager/<LevelFailed>d__33
struct U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3  : public RuntimeObject
{
public:
	// System.Int32 GamePlayManager/<LevelFailed>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GamePlayManager/<LevelFailed>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GamePlayManager GamePlayManager/<LevelFailed>d__33::<>4__this
	GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3, ___U3CU3E4__this_2)); }
	inline GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GoogleAdsManager/<>c
struct U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields
{
public:
	// GoogleAdsManager/<>c GoogleAdsManager/<>c::<>9
	U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleAdsManager/<>c::<>9__3_0
	Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
struct Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___list_0)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_list_0() const { return ___list_0; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68, ___current_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_current_3() const { return ___current_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___current_3 = value;
	}
};


// GoogleMobileAds.Api.AdPosition
struct AdPosition_t81ED1D35CE2DC6F9197B2D1D5A77275F370ADB32 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_t81ED1D35CE2DC6F9197B2D1D5A77275F370ADB32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GoogleMobileAds.Api.Orientation
struct Orientation_tED989F512FD806AA3E2BAB0B6D599B3065F00DEB 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_tED989F512FD806AA3E2BAB0B6D599B3065F00DEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_tD156EE1A340FA95317DBC92F74CE250FA7AEC291 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tD156EE1A340FA95317DBC92F74CE250FA7AEC291, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields, ___Banner_4)); }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields, ___IABBanner_6)); }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields, ___Leaderboard_7)); }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields, ___SmartBanner_8)); }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Character_Interactions
struct Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Character_Interactions::IsGamePlay
	bool ___IsGamePlay_4;

public:
	inline static int32_t get_offset_of_IsGamePlay_4() { return static_cast<int32_t>(offsetof(Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241, ___IsGamePlay_4)); }
	inline bool get_IsGamePlay_4() const { return ___IsGamePlay_4; }
	inline bool* get_address_of_IsGamePlay_4() { return &___IsGamePlay_4; }
	inline void set_IsGamePlay_4(bool value)
	{
		___IsGamePlay_4 = value;
	}
};


// UnityEngine.CircleCollider2D
struct CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CoinWarning
struct CoinWarning_tE63A80C19C022C244C26D5A3304CD04E061AB852  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DrawLine
struct DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DrawLine::linePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___linePrefab_4;
	// UnityEngine.GameObject DrawLine::currentLine
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentLine_5;
	// UnityEngine.LineRenderer DrawLine::lineRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineRenderer_6;
	// UnityEngine.EdgeCollider2D DrawLine::EdgeCollider2D
	EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * ___EdgeCollider2D_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> DrawLine::fingerPositions
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___fingerPositions_8;
	// UnityEngine.GameObject DrawLine::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_9;
	// UnityEngine.Transform DrawLine::WayPointParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___WayPointParent_10;
	// UnityEngine.GameObject DrawLine::Obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Obj_11;
	// System.Boolean DrawLine::create
	bool ___create_12;
	// System.Boolean DrawLine::Move
	bool ___Move_13;
	// System.Boolean DrawLine::lineCreated
	bool ___lineCreated_14;
	// System.Boolean DrawLine::startDraw
	bool ___startDraw_15;
	// System.Int32 DrawLine::i
	int32_t ___i_16;

public:
	inline static int32_t get_offset_of_linePrefab_4() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___linePrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_linePrefab_4() const { return ___linePrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_linePrefab_4() { return &___linePrefab_4; }
	inline void set_linePrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___linePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentLine_5() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___currentLine_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentLine_5() const { return ___currentLine_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentLine_5() { return &___currentLine_5; }
	inline void set_currentLine_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentLine_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLine_5), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderer_6() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___lineRenderer_6)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineRenderer_6() const { return ___lineRenderer_6; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineRenderer_6() { return &___lineRenderer_6; }
	inline void set_lineRenderer_6(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of_EdgeCollider2D_7() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___EdgeCollider2D_7)); }
	inline EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * get_EdgeCollider2D_7() const { return ___EdgeCollider2D_7; }
	inline EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B ** get_address_of_EdgeCollider2D_7() { return &___EdgeCollider2D_7; }
	inline void set_EdgeCollider2D_7(EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * value)
	{
		___EdgeCollider2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EdgeCollider2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_fingerPositions_8() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___fingerPositions_8)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_fingerPositions_8() const { return ___fingerPositions_8; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_fingerPositions_8() { return &___fingerPositions_8; }
	inline void set_fingerPositions_8(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___fingerPositions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerPositions_8), (void*)value);
	}

	inline static int32_t get_offset_of_Ball_9() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___Ball_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_9() const { return ___Ball_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_9() { return &___Ball_9; }
	inline void set_Ball_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_9), (void*)value);
	}

	inline static int32_t get_offset_of_WayPointParent_10() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___WayPointParent_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_WayPointParent_10() const { return ___WayPointParent_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_WayPointParent_10() { return &___WayPointParent_10; }
	inline void set_WayPointParent_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___WayPointParent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WayPointParent_10), (void*)value);
	}

	inline static int32_t get_offset_of_Obj_11() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___Obj_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Obj_11() const { return ___Obj_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Obj_11() { return &___Obj_11; }
	inline void set_Obj_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Obj_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Obj_11), (void*)value);
	}

	inline static int32_t get_offset_of_create_12() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___create_12)); }
	inline bool get_create_12() const { return ___create_12; }
	inline bool* get_address_of_create_12() { return &___create_12; }
	inline void set_create_12(bool value)
	{
		___create_12 = value;
	}

	inline static int32_t get_offset_of_Move_13() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___Move_13)); }
	inline bool get_Move_13() const { return ___Move_13; }
	inline bool* get_address_of_Move_13() { return &___Move_13; }
	inline void set_Move_13(bool value)
	{
		___Move_13 = value;
	}

	inline static int32_t get_offset_of_lineCreated_14() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___lineCreated_14)); }
	inline bool get_lineCreated_14() const { return ___lineCreated_14; }
	inline bool* get_address_of_lineCreated_14() { return &___lineCreated_14; }
	inline void set_lineCreated_14(bool value)
	{
		___lineCreated_14 = value;
	}

	inline static int32_t get_offset_of_startDraw_15() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___startDraw_15)); }
	inline bool get_startDraw_15() const { return ___startDraw_15; }
	inline bool* get_address_of_startDraw_15() { return &___startDraw_15; }
	inline void set_startDraw_15(bool value)
	{
		___startDraw_15 = value;
	}

	inline static int32_t get_offset_of_i_16() { return static_cast<int32_t>(offsetof(DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B, ___i_16)); }
	inline int32_t get_i_16() const { return ___i_16; }
	inline int32_t* get_address_of_i_16() { return &___i_16; }
	inline void set_i_16(int32_t value)
	{
		___i_16 = value;
	}
};


// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// GamePlayManager
struct GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GamePlayManager::P_Levelcomplete
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___P_Levelcomplete_5;
	// UnityEngine.GameObject GamePlayManager::P_LevelFail
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___P_LevelFail_6;
	// UnityEngine.GameObject GamePlayManager::P_Pause
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___P_Pause_7;
	// UnityEngine.GameObject GamePlayManager::P_Loading
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___P_Loading_8;
	// UnityEngine.GameObject GamePlayManager::P_BlackScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___P_BlackScreen_9;
	// UnityEngine.GameObject GamePlayManager::Player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Player_10;
	// UnityEngine.GameObject GamePlayManager::PlayerObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerObj_11;
	// System.Int32 GamePlayManager::level
	int32_t ___level_12;
	// System.Boolean GamePlayManager::levelCom
	bool ___levelCom_13;
	// UnityEngine.UI.Text GamePlayManager::Leveltxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Leveltxt_14;
	// UnityEngine.UI.Text GamePlayManager::dubbleScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dubbleScore_15;
	// UnityEngine.GameObject GamePlayManager::LevelsManagr
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LevelsManagr_16;
	// UnityEngine.GameObject GamePlayManager::LevelPosition
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LevelPosition_17;
	// UnityEngine.UI.Text GamePlayManager::Cointxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Cointxt_18;
	// UnityEngine.GameObject GamePlayManager::Sound
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Sound_19;
	// UnityEngine.GameObject GamePlayManager::BG_Music
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BG_Music_20;
	// UnityEngine.AudioSource GamePlayManager::S_Complete
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___S_Complete_21;
	// UnityEngine.AudioSource GamePlayManager::S_Failed
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___S_Failed_22;
	// System.Int32 GamePlayManager::totl
	int32_t ___totl_23;
	// UnityEngine.GameObject GamePlayManager::linePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___linePrefab_24;
	// UnityEngine.GameObject GamePlayManager::currentLine
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentLine_25;
	// UnityEngine.LineRenderer GamePlayManager::lineRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineRenderer_26;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> GamePlayManager::fingerPositions
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___fingerPositions_27;
	// UnityEngine.GameObject GamePlayManager::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_28;
	// UnityEngine.Transform GamePlayManager::WayPointParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___WayPointParent_29;
	// UnityEngine.GameObject GamePlayManager::Obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Obj_30;
	// System.Boolean GamePlayManager::create
	bool ___create_31;
	// System.Boolean GamePlayManager::Move
	bool ___Move_32;
	// System.Boolean GamePlayManager::lineCreated
	bool ___lineCreated_33;
	// System.Boolean GamePlayManager::StoplineCreated
	bool ___StoplineCreated_34;
	// System.Boolean GamePlayManager::startDraw
	bool ___startDraw_35;
	// System.Int32 GamePlayManager::i
	int32_t ___i_36;

public:
	inline static int32_t get_offset_of_P_Levelcomplete_5() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___P_Levelcomplete_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_P_Levelcomplete_5() const { return ___P_Levelcomplete_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_P_Levelcomplete_5() { return &___P_Levelcomplete_5; }
	inline void set_P_Levelcomplete_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___P_Levelcomplete_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_Levelcomplete_5), (void*)value);
	}

	inline static int32_t get_offset_of_P_LevelFail_6() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___P_LevelFail_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_P_LevelFail_6() const { return ___P_LevelFail_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_P_LevelFail_6() { return &___P_LevelFail_6; }
	inline void set_P_LevelFail_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___P_LevelFail_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_LevelFail_6), (void*)value);
	}

	inline static int32_t get_offset_of_P_Pause_7() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___P_Pause_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_P_Pause_7() const { return ___P_Pause_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_P_Pause_7() { return &___P_Pause_7; }
	inline void set_P_Pause_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___P_Pause_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_Pause_7), (void*)value);
	}

	inline static int32_t get_offset_of_P_Loading_8() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___P_Loading_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_P_Loading_8() const { return ___P_Loading_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_P_Loading_8() { return &___P_Loading_8; }
	inline void set_P_Loading_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___P_Loading_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_Loading_8), (void*)value);
	}

	inline static int32_t get_offset_of_P_BlackScreen_9() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___P_BlackScreen_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_P_BlackScreen_9() const { return ___P_BlackScreen_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_P_BlackScreen_9() { return &___P_BlackScreen_9; }
	inline void set_P_BlackScreen_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___P_BlackScreen_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_BlackScreen_9), (void*)value);
	}

	inline static int32_t get_offset_of_Player_10() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Player_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Player_10() const { return ___Player_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Player_10() { return &___Player_10; }
	inline void set_Player_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Player_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_10), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerObj_11() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___PlayerObj_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerObj_11() const { return ___PlayerObj_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerObj_11() { return &___PlayerObj_11; }
	inline void set_PlayerObj_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerObj_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerObj_11), (void*)value);
	}

	inline static int32_t get_offset_of_level_12() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___level_12)); }
	inline int32_t get_level_12() const { return ___level_12; }
	inline int32_t* get_address_of_level_12() { return &___level_12; }
	inline void set_level_12(int32_t value)
	{
		___level_12 = value;
	}

	inline static int32_t get_offset_of_levelCom_13() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___levelCom_13)); }
	inline bool get_levelCom_13() const { return ___levelCom_13; }
	inline bool* get_address_of_levelCom_13() { return &___levelCom_13; }
	inline void set_levelCom_13(bool value)
	{
		___levelCom_13 = value;
	}

	inline static int32_t get_offset_of_Leveltxt_14() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Leveltxt_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Leveltxt_14() const { return ___Leveltxt_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Leveltxt_14() { return &___Leveltxt_14; }
	inline void set_Leveltxt_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Leveltxt_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leveltxt_14), (void*)value);
	}

	inline static int32_t get_offset_of_dubbleScore_15() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___dubbleScore_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dubbleScore_15() const { return ___dubbleScore_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dubbleScore_15() { return &___dubbleScore_15; }
	inline void set_dubbleScore_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dubbleScore_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dubbleScore_15), (void*)value);
	}

	inline static int32_t get_offset_of_LevelsManagr_16() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___LevelsManagr_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LevelsManagr_16() const { return ___LevelsManagr_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LevelsManagr_16() { return &___LevelsManagr_16; }
	inline void set_LevelsManagr_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LevelsManagr_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelsManagr_16), (void*)value);
	}

	inline static int32_t get_offset_of_LevelPosition_17() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___LevelPosition_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LevelPosition_17() const { return ___LevelPosition_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LevelPosition_17() { return &___LevelPosition_17; }
	inline void set_LevelPosition_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LevelPosition_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelPosition_17), (void*)value);
	}

	inline static int32_t get_offset_of_Cointxt_18() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Cointxt_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Cointxt_18() const { return ___Cointxt_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Cointxt_18() { return &___Cointxt_18; }
	inline void set_Cointxt_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Cointxt_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cointxt_18), (void*)value);
	}

	inline static int32_t get_offset_of_Sound_19() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Sound_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Sound_19() const { return ___Sound_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Sound_19() { return &___Sound_19; }
	inline void set_Sound_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Sound_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sound_19), (void*)value);
	}

	inline static int32_t get_offset_of_BG_Music_20() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___BG_Music_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BG_Music_20() const { return ___BG_Music_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BG_Music_20() { return &___BG_Music_20; }
	inline void set_BG_Music_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BG_Music_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BG_Music_20), (void*)value);
	}

	inline static int32_t get_offset_of_S_Complete_21() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___S_Complete_21)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_S_Complete_21() const { return ___S_Complete_21; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_S_Complete_21() { return &___S_Complete_21; }
	inline void set_S_Complete_21(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___S_Complete_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___S_Complete_21), (void*)value);
	}

	inline static int32_t get_offset_of_S_Failed_22() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___S_Failed_22)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_S_Failed_22() const { return ___S_Failed_22; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_S_Failed_22() { return &___S_Failed_22; }
	inline void set_S_Failed_22(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___S_Failed_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___S_Failed_22), (void*)value);
	}

	inline static int32_t get_offset_of_totl_23() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___totl_23)); }
	inline int32_t get_totl_23() const { return ___totl_23; }
	inline int32_t* get_address_of_totl_23() { return &___totl_23; }
	inline void set_totl_23(int32_t value)
	{
		___totl_23 = value;
	}

	inline static int32_t get_offset_of_linePrefab_24() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___linePrefab_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_linePrefab_24() const { return ___linePrefab_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_linePrefab_24() { return &___linePrefab_24; }
	inline void set_linePrefab_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___linePrefab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linePrefab_24), (void*)value);
	}

	inline static int32_t get_offset_of_currentLine_25() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___currentLine_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentLine_25() const { return ___currentLine_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentLine_25() { return &___currentLine_25; }
	inline void set_currentLine_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentLine_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLine_25), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderer_26() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___lineRenderer_26)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineRenderer_26() const { return ___lineRenderer_26; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineRenderer_26() { return &___lineRenderer_26; }
	inline void set_lineRenderer_26(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineRenderer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderer_26), (void*)value);
	}

	inline static int32_t get_offset_of_fingerPositions_27() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___fingerPositions_27)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_fingerPositions_27() const { return ___fingerPositions_27; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_fingerPositions_27() { return &___fingerPositions_27; }
	inline void set_fingerPositions_27(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___fingerPositions_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerPositions_27), (void*)value);
	}

	inline static int32_t get_offset_of_Ball_28() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Ball_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_28() const { return ___Ball_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_28() { return &___Ball_28; }
	inline void set_Ball_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_28), (void*)value);
	}

	inline static int32_t get_offset_of_WayPointParent_29() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___WayPointParent_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_WayPointParent_29() const { return ___WayPointParent_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_WayPointParent_29() { return &___WayPointParent_29; }
	inline void set_WayPointParent_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___WayPointParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WayPointParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_Obj_30() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Obj_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Obj_30() const { return ___Obj_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Obj_30() { return &___Obj_30; }
	inline void set_Obj_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Obj_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Obj_30), (void*)value);
	}

	inline static int32_t get_offset_of_create_31() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___create_31)); }
	inline bool get_create_31() const { return ___create_31; }
	inline bool* get_address_of_create_31() { return &___create_31; }
	inline void set_create_31(bool value)
	{
		___create_31 = value;
	}

	inline static int32_t get_offset_of_Move_32() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___Move_32)); }
	inline bool get_Move_32() const { return ___Move_32; }
	inline bool* get_address_of_Move_32() { return &___Move_32; }
	inline void set_Move_32(bool value)
	{
		___Move_32 = value;
	}

	inline static int32_t get_offset_of_lineCreated_33() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___lineCreated_33)); }
	inline bool get_lineCreated_33() const { return ___lineCreated_33; }
	inline bool* get_address_of_lineCreated_33() { return &___lineCreated_33; }
	inline void set_lineCreated_33(bool value)
	{
		___lineCreated_33 = value;
	}

	inline static int32_t get_offset_of_StoplineCreated_34() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___StoplineCreated_34)); }
	inline bool get_StoplineCreated_34() const { return ___StoplineCreated_34; }
	inline bool* get_address_of_StoplineCreated_34() { return &___StoplineCreated_34; }
	inline void set_StoplineCreated_34(bool value)
	{
		___StoplineCreated_34 = value;
	}

	inline static int32_t get_offset_of_startDraw_35() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___startDraw_35)); }
	inline bool get_startDraw_35() const { return ___startDraw_35; }
	inline bool* get_address_of_startDraw_35() { return &___startDraw_35; }
	inline void set_startDraw_35(bool value)
	{
		___startDraw_35 = value;
	}

	inline static int32_t get_offset_of_i_36() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0, ___i_36)); }
	inline int32_t get_i_36() const { return ___i_36; }
	inline int32_t* get_address_of_i_36() { return &___i_36; }
	inline void set_i_36(int32_t value)
	{
		___i_36 = value;
	}
};

struct GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields
{
public:
	// GamePlayManager GamePlayManager::instance
	GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields, ___instance_4)); }
	inline GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * get_instance_4() const { return ___instance_4; }
	inline GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// GoogleAdsManager
struct GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GoogleMobileAds.Api.BannerView GoogleAdsManager::bannerView
	BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * ___bannerView_4;
	// GoogleMobileAds.Api.InterstitialAd GoogleAdsManager::interstitial
	InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * ___interstitial_6;

public:
	inline static int32_t get_offset_of_bannerView_4() { return static_cast<int32_t>(offsetof(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53, ___bannerView_4)); }
	inline BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * get_bannerView_4() const { return ___bannerView_4; }
	inline BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 ** get_address_of_bannerView_4() { return &___bannerView_4; }
	inline void set_bannerView_4(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * value)
	{
		___bannerView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerView_4), (void*)value);
	}

	inline static int32_t get_offset_of_interstitial_6() { return static_cast<int32_t>(offsetof(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53, ___interstitial_6)); }
	inline InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * get_interstitial_6() const { return ___interstitial_6; }
	inline InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 ** get_address_of_interstitial_6() { return &___interstitial_6; }
	inline void set_interstitial_6(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * value)
	{
		___interstitial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitial_6), (void*)value);
	}
};

struct GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_StaticFields
{
public:
	// GoogleAdsManager GoogleAdsManager::Instance
	GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * ___Instance_5;

public:
	inline static int32_t get_offset_of_Instance_5() { return static_cast<int32_t>(offsetof(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_StaticFields, ___Instance_5)); }
	inline GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * get_Instance_5() const { return ___Instance_5; }
	inline GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 ** get_address_of_Instance_5() { return &___Instance_5; }
	inline void set_Instance_5(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * value)
	{
		___Instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_5), (void*)value);
	}
};


// GoogleMobileAdsDemoScript
struct GoogleMobileAdsDemoScript_t0F6E2335673EB408B4FB53DF29BF6BD018CC4149  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Loading
struct Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MainMenuManager
struct MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MainMenuManager::TotalCoins
	int32_t ___TotalCoins_4;
	// UnityEngine.UI.Text MainMenuManager::CoinsTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CoinsTxt_5;
	// UnityEngine.GameObject MainMenuManager::Sound
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Sound_7;
	// UnityEngine.GameObject MainMenuManager::BG_Music
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BG_Music_8;
	// UnityEngine.GameObject MainMenuManager::SoundBtn_On
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SoundBtn_On_9;
	// UnityEngine.GameObject MainMenuManager::SoundBtn_Off
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SoundBtn_Off_10;
	// UnityEngine.GameObject MainMenuManager::MusicBtn_On
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MusicBtn_On_11;
	// UnityEngine.GameObject MainMenuManager::MusicBtn_Off
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MusicBtn_Off_12;

public:
	inline static int32_t get_offset_of_TotalCoins_4() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___TotalCoins_4)); }
	inline int32_t get_TotalCoins_4() const { return ___TotalCoins_4; }
	inline int32_t* get_address_of_TotalCoins_4() { return &___TotalCoins_4; }
	inline void set_TotalCoins_4(int32_t value)
	{
		___TotalCoins_4 = value;
	}

	inline static int32_t get_offset_of_CoinsTxt_5() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___CoinsTxt_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CoinsTxt_5() const { return ___CoinsTxt_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CoinsTxt_5() { return &___CoinsTxt_5; }
	inline void set_CoinsTxt_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CoinsTxt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinsTxt_5), (void*)value);
	}

	inline static int32_t get_offset_of_Sound_7() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___Sound_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Sound_7() const { return ___Sound_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Sound_7() { return &___Sound_7; }
	inline void set_Sound_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Sound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sound_7), (void*)value);
	}

	inline static int32_t get_offset_of_BG_Music_8() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___BG_Music_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BG_Music_8() const { return ___BG_Music_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BG_Music_8() { return &___BG_Music_8; }
	inline void set_BG_Music_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BG_Music_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BG_Music_8), (void*)value);
	}

	inline static int32_t get_offset_of_SoundBtn_On_9() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___SoundBtn_On_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SoundBtn_On_9() const { return ___SoundBtn_On_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SoundBtn_On_9() { return &___SoundBtn_On_9; }
	inline void set_SoundBtn_On_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SoundBtn_On_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundBtn_On_9), (void*)value);
	}

	inline static int32_t get_offset_of_SoundBtn_Off_10() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___SoundBtn_Off_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SoundBtn_Off_10() const { return ___SoundBtn_Off_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SoundBtn_Off_10() { return &___SoundBtn_Off_10; }
	inline void set_SoundBtn_Off_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SoundBtn_Off_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundBtn_Off_10), (void*)value);
	}

	inline static int32_t get_offset_of_MusicBtn_On_11() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___MusicBtn_On_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MusicBtn_On_11() const { return ___MusicBtn_On_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MusicBtn_On_11() { return &___MusicBtn_On_11; }
	inline void set_MusicBtn_On_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MusicBtn_On_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicBtn_On_11), (void*)value);
	}

	inline static int32_t get_offset_of_MusicBtn_Off_12() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___MusicBtn_Off_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MusicBtn_Off_12() const { return ___MusicBtn_Off_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MusicBtn_Off_12() { return &___MusicBtn_Off_12; }
	inline void set_MusicBtn_Off_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MusicBtn_Off_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicBtn_Off_12), (void*)value);
	}
};

struct MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE_StaticFields
{
public:
	// MainMenuManager MainMenuManager::instance
	MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE_StaticFields, ___instance_6)); }
	inline MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * get_instance_6() const { return ___instance_6; }
	inline MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// MainScreen
struct MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Movement
struct Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 Movement::minPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minPos_4;
	// UnityEngine.Vector2 Movement::maxPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maxPos_5;
	// UnityEngine.Transform Movement::moveIf
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___moveIf_6;
	// UnityEngine.Vector3 Movement::movePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movePos_7;
	// UnityEngine.Vector2 Movement::moveValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveValue_8;
	// System.Single Movement::moveSpeed
	float ___moveSpeed_9;

public:
	inline static int32_t get_offset_of_minPos_4() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___minPos_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minPos_4() const { return ___minPos_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minPos_4() { return &___minPos_4; }
	inline void set_minPos_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minPos_4 = value;
	}

	inline static int32_t get_offset_of_maxPos_5() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___maxPos_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maxPos_5() const { return ___maxPos_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maxPos_5() { return &___maxPos_5; }
	inline void set_maxPos_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maxPos_5 = value;
	}

	inline static int32_t get_offset_of_moveIf_6() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___moveIf_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_moveIf_6() const { return ___moveIf_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_moveIf_6() { return &___moveIf_6; }
	inline void set_moveIf_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___moveIf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveIf_6), (void*)value);
	}

	inline static int32_t get_offset_of_movePos_7() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___movePos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movePos_7() const { return ___movePos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movePos_7() { return &___movePos_7; }
	inline void set_movePos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movePos_7 = value;
	}

	inline static int32_t get_offset_of_moveValue_8() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___moveValue_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_moveValue_8() const { return ___moveValue_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_moveValue_8() { return &___moveValue_8; }
	inline void set_moveValue_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___moveValue_8 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_9() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___moveSpeed_9)); }
	inline float get_moveSpeed_9() const { return ___moveSpeed_9; }
	inline float* get_address_of_moveSpeed_9() { return &___moveSpeed_9; }
	inline void set_moveSpeed_9(float value)
	{
		___moveSpeed_9 = value;
	}
};


// Object_Movement
struct Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Object_Movement::Snake
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Snake_4;
	// UnityEngine.Transform Object_Movement::Start_point
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Start_point_5;
	// UnityEngine.Transform Object_Movement::End_point
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___End_point_6;
	// System.Single Object_Movement::speed
	float ___speed_7;
	// System.Boolean Object_Movement::started
	bool ___started_8;

public:
	inline static int32_t get_offset_of_Snake_4() { return static_cast<int32_t>(offsetof(Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9, ___Snake_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Snake_4() const { return ___Snake_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Snake_4() { return &___Snake_4; }
	inline void set_Snake_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Snake_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Snake_4), (void*)value);
	}

	inline static int32_t get_offset_of_Start_point_5() { return static_cast<int32_t>(offsetof(Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9, ___Start_point_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Start_point_5() const { return ___Start_point_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Start_point_5() { return &___Start_point_5; }
	inline void set_Start_point_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Start_point_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_point_5), (void*)value);
	}

	inline static int32_t get_offset_of_End_point_6() { return static_cast<int32_t>(offsetof(Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9, ___End_point_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_End_point_6() const { return ___End_point_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_End_point_6() { return &___End_point_6; }
	inline void set_End_point_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___End_point_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___End_point_6), (void*)value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_started_8() { return static_cast<int32_t>(offsetof(Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9, ___started_8)); }
	inline bool get_started_8() const { return ___started_8; }
	inline bool* get_address_of_started_8() { return &___started_8; }
	inline void set_started_8(bool value)
	{
		___started_8 = value;
	}
};


// StoreManager
struct StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] StoreManager::ShibaLocker
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___ShibaLocker_4;
	// System.Int32[] StoreManager::ShibaPrices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ShibaPrices_5;
	// UnityEngine.GameObject StoreManager::CoinWarning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CoinWarning_6;
	// UnityEngine.UI.Text StoreManager::Cointxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Cointxt_7;
	// UnityEngine.GameObject StoreManager::contant
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___contant_8;
	// UnityEngine.UI.Image[] StoreManager::SelectedShiba
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___SelectedShiba_9;

public:
	inline static int32_t get_offset_of_ShibaLocker_4() { return static_cast<int32_t>(offsetof(StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3, ___ShibaLocker_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_ShibaLocker_4() const { return ___ShibaLocker_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_ShibaLocker_4() { return &___ShibaLocker_4; }
	inline void set_ShibaLocker_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___ShibaLocker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShibaLocker_4), (void*)value);
	}

	inline static int32_t get_offset_of_ShibaPrices_5() { return static_cast<int32_t>(offsetof(StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3, ___ShibaPrices_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ShibaPrices_5() const { return ___ShibaPrices_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ShibaPrices_5() { return &___ShibaPrices_5; }
	inline void set_ShibaPrices_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ShibaPrices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShibaPrices_5), (void*)value);
	}

	inline static int32_t get_offset_of_CoinWarning_6() { return static_cast<int32_t>(offsetof(StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3, ___CoinWarning_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CoinWarning_6() const { return ___CoinWarning_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CoinWarning_6() { return &___CoinWarning_6; }
	inline void set_CoinWarning_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CoinWarning_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinWarning_6), (void*)value);
	}

	inline static int32_t get_offset_of_Cointxt_7() { return static_cast<int32_t>(offsetof(StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3, ___Cointxt_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Cointxt_7() const { return ___Cointxt_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Cointxt_7() { return &___Cointxt_7; }
	inline void set_Cointxt_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Cointxt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cointxt_7), (void*)value);
	}

	inline static int32_t get_offset_of_contant_8() { return static_cast<int32_t>(offsetof(StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3, ___contant_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_contant_8() const { return ___contant_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_contant_8() { return &___contant_8; }
	inline void set_contant_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___contant_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contant_8), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedShiba_9() { return static_cast<int32_t>(offsetof(StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3, ___SelectedShiba_9)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_SelectedShiba_9() const { return ___SelectedShiba_9; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_SelectedShiba_9() { return &___SelectedShiba_9; }
	inline void set_SelectedShiba_9(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___SelectedShiba_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedShiba_9), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_gshared_inline (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_gshared (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_gshared (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void Character_Interactions/<Retry>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5__ctor_m32F0074948B5E29651D6FD096F1D1871609CF3B2 (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.IEnumerator Character_Interactions::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_Interactions_Retry_m2D8C600D947516B367B9C39602B998AC1EEA5C04 (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m521B854160443BEBA8D2D3BE63641000E1DAA82E (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GamePlayManager::levelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelComplete_mCDDC00D15C440D0C3D4CABF85C3DABD1C4316438 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// System.Void GamePlayManager::levelFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelFail_mE42095B5A7628827D7EA9BAF633F5A2EFA05E174 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___hit0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Void DrawLine::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_CreateLine_m6DFADEA0A555336B585F9D6DC5720C60AE2EF79D (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline)(__this, ___index0, method);
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void DrawLine::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_UpdateLine_m42DC4AC7FC032167940103E09E993EFBB0FF0B62 (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newFingerPos0, const RuntimeMethod* method);
// System.Void DrawLine::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_GenerateWayPoints_m02B079B2A004EC0CACC8D4924D233FC2F7ABDA62 (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method);
// System.Void DrawLine::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_MoveCharacter_m1397332B064B44DD0B46884489C7336D203D052C (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EdgeCollider2D>()
inline EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_gshared)(__this, method);
}
// System.Void UnityEngine.EdgeCollider2D::set_points(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeCollider2D_set_points_m8A6DD1D62CCF4CE90AA079BC59FA62796E1667E3 (EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
inline Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_inline (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *, const RuntimeMethod*))Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
inline bool Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *, const RuntimeMethod*))Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
inline void Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *, const RuntimeMethod*))Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GamePlayManager::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_CreateLine_m93201C67197DECE553DB84C4198C0FE6DD0258F4 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// System.Void GamePlayManager::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_UpdateLine_m56BC7D552C2D0389F026A42BBFFF832B7672C00F (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newFingerPos0, const RuntimeMethod* method);
// System.Void GamePlayManager::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_GenerateWayPoints_mDF1D53A426CEA5184154CDA36AC3B1884F96C108 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// System.Void GamePlayManager::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_MoveCharacter_m5757AF7E43766D49B6F7CC9B253651880A66189A (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void GoogleAdsManager::showInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_showInterstitial_m181C5B81ED21B3F050F0740C57F090B6C3F3FC6D (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GamePlayManager::LevelCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelCompleted_mDAC3EEFFEC95A18A3023D3114D314D6921CC46BD (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GamePlayManager::LevelFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelFailed_m8923C379A4EAD36B8F3562AD0DB5131DEA242D4D (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void GamePlayManager/<LevelCompleted>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32__ctor_m6AF9ED017F1AF96D2F0BD9794714E27E66223EB0 (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GamePlayManager/<LevelFailed>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33__ctor_mCCF6E9F2CD5E80AF88B417E47132EDA1E0BB2857 (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBA043381E77D8BA7F64CC06CF29C0F63F918AB1F (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_mF49A2BB05D621013B80FE2FD36BA2EA2C6A31A5A (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * ___initCompleteAction0, const RuntimeMethod* method);
// System.Void GoogleAdsManager::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_RequestBanner_mB4432A32DCC3911B178893D1D8FC19A2B6A92CA5 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method);
// System.Void GoogleAdsManager::RequestInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_RequestInterstitial_m6170CC47B6654375DA4CA2B9DF0E08CEDB5EEE85 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m56A50D92B1D0659C0D321CE547BBB4D7504DE408 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, String_t* ___adUnitId0, AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___adSize1, int32_t ___position2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m4E1D5A173742EE3B20E450CA3E41AAC0AE5C7510 (Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * Builder_Build_m92AB6404D57A7D3C3034DDDD15213FF7C53246CC (Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_mA08498FFFF3C753CA730DC08A61A362C4E55E406 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * ___request0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_m501B54DE9595F73867FDE54B827F63F1A0563BF6 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m762615D731A25CAE1043113E2E083DB52065C6B4 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, String_t* ___adUnitId0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m4FF64B2AF7C2EB0EC08158CC9AF04D068F588637 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * ___request0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_m2E78F878381DDA8835212FCDC95839E4A84B179C (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA618035D629917D205C59E3522D39839D323F9F7 (EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m041F111940223B2BD44820929AC6F277945FE052 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_mD4FFB16FA69F0A5C1AB24667DE45F77360B1B0C6 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m5ECD82470821301B48C14394AE7AC215F97B78F5 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m922208EC2691E82816C084314D6517AB5F85EE22_inline (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m143F5C83F1F6D10E15390929702A733EB858BC0D (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void StoreManager::selectShiba(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_selectShiba_mE2C18C19079BD2E1434D8EADF722D9E67AEDCCA7 (StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3 * __this, int32_t ___ShibaNum0, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void GoogleAdsManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9E6AEF6B7C8A0717BB00F0A647262196B7271836 (U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Character_Interactions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_OnEnable_m1E356329F1F2FA8148A1504ECC21165210D5AE8E (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, const RuntimeMethod* method)
{
	{
		// IsGamePlay = true;
		__this->set_IsGamePlay_4((bool)1);
		// }
		return;
	}
}
// System.Void Character_Interactions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_Start_m452848697897AE37D30EFCA7D79CD80592E00570 (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Character_Interactions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_Update_m443360D8AE08930CBC910641598411DE496E63E9 (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Character_Interactions::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_OnCollisionEnter2D_m94753538F077B3017F4454AC77F4B95D78252474 (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Character_Interactions::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_Interactions_Retry_m2D8C600D947516B367B9C39602B998AC1EEA5C04 (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * L_0 = (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C *)il2cpp_codegen_object_new(U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C_il2cpp_TypeInfo_var);
		U3CRetryU3Ed__5__ctor_m32F0074948B5E29651D6FD096F1D1871609CF3B2(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Character_Interactions::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_OnTriggerEnter2D_mB0145BC2BE37CF57ABB3B7C220531349CACDA4D2 (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B6CA4FB8DB22D91DF45C8EBA534D73CA55B386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C91A6B81CD4894B1B4D1BCDFB1492C4BA49161C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC74DC486B381A14EB0E4907B61F034ED9AD52AED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GamePlayManager.instance.Move = false;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_0 = ((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		L_0->set_Move_32((bool)0);
		// if (collision.gameObject.CompareTag("Basket"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_2, _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.Log("Android , Basket collision");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7C91A6B81CD4894B1B4D1BCDFB1492C4BA49161C, /*hidden argument*/NULL);
		// if (!IsGamePlay)
		bool L_4 = __this->get_IsGamePlay_4();
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		// return;
		return;
	}

IL_0030:
	{
		// IsGamePlay = false;
		__this->set_IsGamePlay_4((bool)0);
		// StopCoroutine(Retry());
		RuntimeObject* L_5;
		L_5 = Character_Interactions_Retry_m2D8C600D947516B367B9C39602B998AC1EEA5C04(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(__this, L_5, /*hidden argument*/NULL);
		// Debug.Log("basket");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, /*hidden argument*/NULL);
		// gameObject.GetComponent<CircleCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_7;
		L_7 = GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36(L_6, /*hidden argument*/GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetInt("Vibrate") == 1)
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m521B854160443BEBA8D2D3BE63641000E1DAA82E(/*hidden argument*/NULL);
	}

IL_0070:
	{
		// GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_9 = ((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_Player_10();
		NullCheck(L_10);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11;
		L_11 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_10, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_11);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_11, 2, /*hidden argument*/NULL);
		// GamePlayManager.instance.levelComplete();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_12 = ((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_12);
		GamePlayManager_levelComplete_mCDDC00D15C440D0C3D4CABF85C3DABD1C4316438(L_12, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// if (collision.gameObject.CompareTag("Hurdle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_14, _stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0113;
		}
	}
	{
		// Debug.Log("Android , Hurdle collision");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral75B6CA4FB8DB22D91DF45C8EBA534D73CA55B386, /*hidden argument*/NULL);
		// if (!IsGamePlay)
		bool L_16 = __this->get_IsGamePlay_4();
		if (L_16)
		{
			goto IL_00b4;
		}
	}
	{
		// return;
		return;
	}

IL_00b4:
	{
		// IsGamePlay = false;
		__this->set_IsGamePlay_4((bool)0);
		// StopCoroutine(Retry());
		RuntimeObject* L_17;
		L_17 = Character_Interactions_Retry_m2D8C600D947516B367B9C39602B998AC1EEA5C04(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(__this, L_17, /*hidden argument*/NULL);
		// Debug.Log("Hurdle");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0, /*hidden argument*/NULL);
		// gameObject.GetComponent<CircleCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_19;
		L_19 = GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36(L_18, /*hidden argument*/GameObject_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m9F95DC5C01C4333F89E3996D2CFE4A32B9CC7F36_RuntimeMethod_var);
		NullCheck(L_19);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)0, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetInt("Vibrate") == 1)
		int32_t L_20;
		L_20 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00f4;
		}
	}
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m521B854160443BEBA8D2D3BE63641000E1DAA82E(/*hidden argument*/NULL);
	}

IL_00f4:
	{
		// GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_21 = ((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_21->get_Player_10();
		NullCheck(L_22);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_23;
		L_23 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_22, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_23);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_23, 2, /*hidden argument*/NULL);
		// GamePlayManager.instance.levelFail();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_24 = ((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_24);
		GamePlayManager_levelFail_mE42095B5A7628827D7EA9BAF633F5A2EFA05E174(L_24, /*hidden argument*/NULL);
	}

IL_0113:
	{
		// if (collision.gameObject.CompareTag("Ground"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = ___collision0;
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27;
		L_27 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_26, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_014c;
		}
	}
	{
		// Debug.Log("Android , ground collision");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC74DC486B381A14EB0E4907B61F034ED9AD52AED, /*hidden argument*/NULL);
		// if (!IsGamePlay)
		bool L_28 = __this->get_IsGamePlay_4();
		if (L_28)
		{
			goto IL_0138;
		}
	}
	{
		// return;
		return;
	}

IL_0138:
	{
		// IsGamePlay = false;
		__this->set_IsGamePlay_4((bool)0);
		// StartCoroutine(Retry());
		RuntimeObject* L_29;
		L_29 = Character_Interactions_Retry_m2D8C600D947516B367B9C39602B998AC1EEA5C04(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_30;
		L_30 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_29, /*hidden argument*/NULL);
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Void Character_Interactions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions__ctor_m7A13313D99F33EA99BE2990C0E82C13DBA54111D (Character_Interactions_tBAB9CFBA7A171A4A30F749BE0BD0E5A717946241 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoinWarning::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning_Start_m840B33521524F1B376E3F4F9B29ABDD71A7DE8E2 (CoinWarning_tE63A80C19C022C244C26D5A3304CD04E061AB852 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CoinWarning::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning_Update_mCA7709851C64A38BDA584FB6BE26A48D63C56BCF (CoinWarning_tE63A80C19C022C244C26D5A3304CD04E061AB852 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CoinWarning::turnOffObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning_turnOffObj_mD3479DC989B43F861E80ABE27BBE59357296D832 (CoinWarning_tE63A80C19C022C244C26D5A3304CD04E061AB852 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Transform>().gameObject.SetActive(false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoinWarning::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning__ctor_m652897C08BEB47EC3C5AC1FC60F781F3A7C7FF07 (CoinWarning_tE63A80C19C022C244C26D5A3304CD04E061AB852 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DrawLine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_Update_m707166BCDD346A55544527D1C963D88CB2C1377B (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(!lineCreated)
		bool L_0 = __this->get_lineCreated_14();
		if (L_0)
		{
			goto IL_00c0;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		// RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_7;
		L_7 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if(hit)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_8 = V_0;
		bool L_9;
		L_9 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// if (hit.transform.gameObject.CompareTag("Player"))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_11, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// CreateLine();
		DrawLine_CreateLine_m6DFADEA0A555336B585F9D6DC5720C60AE2EF79D(__this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (Input.GetMouseButton(0) && startDraw)
		bool L_13;
		L_13 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ab;
		}
	}
	{
		bool L_14 = __this->get_startDraw_15();
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		// Vector2 tempFingerPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_15, L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// if (Vector2.Distance(tempFingerPos, fingerPositions[fingerPositions.Count - 1]) > 0.1f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_1;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_20 = __this->get_fingerPositions_8();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_21 = __this->get_fingerPositions_8();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_21, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		NullCheck(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_24;
		L_24 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_19, L_23, /*hidden argument*/NULL);
		if ((!(((float)L_24) > ((float)(0.100000001f)))))
		{
			goto IL_00c0;
		}
	}
	{
		// UpdateLine(tempFingerPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_1;
		DrawLine_UpdateLine_m42DC4AC7FC032167940103E09E993EFBB0FF0B62(__this, L_25, /*hidden argument*/NULL);
		// }
		goto IL_00c0;
	}

IL_00ab:
	{
		// if (startDraw)
		bool L_26 = __this->get_startDraw_15();
		if (!L_26)
		{
			goto IL_00c0;
		}
	}
	{
		// lineCreated = true;
		__this->set_lineCreated_14((bool)1);
		// GenerateWayPoints();
		DrawLine_GenerateWayPoints_m02B079B2A004EC0CACC8D4924D233FC2F7ABDA62(__this, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// if(Move)
		bool L_27 = __this->get_Move_13();
		if (!L_27)
		{
			goto IL_00ce;
		}
	}
	{
		// MoveCharacter();
		DrawLine_MoveCharacter_m1397332B064B44DD0B46884489C7336D203D052C(__this, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void DrawLine::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_CreateLine_m6DFADEA0A555336B585F9D6DC5720C60AE2EF79D (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startDraw = true;
		__this->set_startDraw_15((bool)1);
		// currentLine = Instantiate(linePrefab , Vector3.zero,Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_linePrefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_currentLine_5(L_3);
		// lineRenderer = currentLine.GetComponent<LineRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_currentLine_5();
		NullCheck(L_4);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_4, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		__this->set_lineRenderer_6(L_5);
		// EdgeCollider2D = currentLine.GetComponent<EdgeCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_currentLine_5();
		NullCheck(L_6);
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_7;
		L_7 = GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B(L_6, /*hidden argument*/GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		__this->set_EdgeCollider2D_7(L_7);
		// fingerPositions.Clear();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_8 = __this->get_fingerPositions_8();
		NullCheck(L_8);
		List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50(L_8, /*hidden argument*/List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_9 = __this->get_fingerPositions_8();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_10, L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_9, L_13, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_14 = __this->get_fingerPositions_8();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_15, L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_14, L_18, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// lineRenderer.SetPosition(0, fingerPositions[0]);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_19 = __this->get_lineRenderer_6();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_20 = __this->get_fingerPositions_8();
		NullCheck(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_20, 0, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_19, 0, L_22, /*hidden argument*/NULL);
		// lineRenderer.SetPosition(1, fingerPositions[1]);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_23 = __this->get_lineRenderer_6();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_24 = __this->get_fingerPositions_8();
		NullCheck(L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_24, 1, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_23, 1, L_26, /*hidden argument*/NULL);
		// EdgeCollider2D.points = fingerPositions.ToArray();
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_27 = __this->get_EdgeCollider2D_7();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_28 = __this->get_fingerPositions_8();
		NullCheck(L_28);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29;
		L_29 = List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F(L_28, /*hidden argument*/List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_RuntimeMethod_var);
		NullCheck(L_27);
		EdgeCollider2D_set_points_m8A6DD1D62CCF4CE90AA079BC59FA62796E1667E3(L_27, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DrawLine::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_UpdateLine_m42DC4AC7FC032167940103E09E993EFBB0FF0B62 (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newFingerPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// fingerPositions.Add(newFingerPos);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = __this->get_fingerPositions_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___newFingerPos0;
		NullCheck(L_0);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_0, L_1, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// lineRenderer.positionCount++;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lineRenderer_6();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		// lineRenderer.SetPosition(lineRenderer.positionCount -1, newFingerPos);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lineRenderer_6();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_lineRenderer_6();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___newFingerPos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), L_10, /*hidden argument*/NULL);
		// EdgeCollider2D.points = fingerPositions.ToArray();
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_11 = __this->get_EdgeCollider2D_7();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_12 = __this->get_fingerPositions_8();
		NullCheck(L_12);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13;
		L_13 = List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F(L_12, /*hidden argument*/List_1_ToArray_mE7962CB31C80E199328B4EF0D79E1937AA5EE32F_RuntimeMethod_var);
		NullCheck(L_11);
		EdgeCollider2D_set_points_m8A6DD1D62CCF4CE90AA079BC59FA62796E1667E3(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DrawLine::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_GenerateWayPoints_m02B079B2A004EC0CACC8D4924D233FC2F7ABDA62 (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Vector2 WayPoint in fingerPositions)
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = __this->get_fingerPositions_8();
		NullCheck(L_0);
		Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  L_1;
		L_1 = List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1(L_0, /*hidden argument*/List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_000e:
		{
			// foreach(Vector2 WayPoint in fingerPositions)
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
			L_2 = Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_inline((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
			V_1 = L_2;
			// Instantiate(Obj, new Vector2(WayPoint.x, WayPoint.y), Quaternion.identity, WayPointParent);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Obj_11();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_1;
			float L_5 = L_4.get_x_0();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_1;
			float L_7 = L_6.get_y_1();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
			memset((&L_8), 0, sizeof(L_8));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
			L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_WayPointParent_10();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
			L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_3, L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		}

IL_0043:
		{
			// foreach(Vector2 WayPoint in fingerPositions)
			bool L_13;
			L_13 = Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_000e;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// create = false;
		__this->set_create_12((bool)0);
		// Move = true;
		__this->set_Move_13((bool)1);
		// }
		return;
	}
}
// System.Void DrawLine::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_MoveCharacter_m1397332B064B44DD0B46884489C7336D203D052C (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector2.Distance(Ball.transform.localPosition, WayPointParent.transform.GetChild(i).transform.localPosition)<0.1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Ball_9();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_WayPointParent_10();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_i_16();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		float L_11;
		L_11 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_3, L_10, /*hidden argument*/NULL);
		if ((!(((double)((double)((double)L_11))) < ((double)(0.10000000000000001)))))
		{
			goto IL_009f;
		}
	}
	{
		// if (i < WayPointParent.transform.childCount -1)
		int32_t L_12 = __this->get_i_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_WayPointParent_10();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))))
		{
			goto IL_0075;
		}
	}
	{
		// i++;
		int32_t L_16 = __this->get_i_16();
		__this->set_i_16(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// }
		goto IL_009f;
	}

IL_0075:
	{
		// Ball.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_Ball_9();
		NullCheck(L_17);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_18);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_18, 0, /*hidden argument*/NULL);
		// currentLine.GetComponent<EdgeCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_currentLine_5();
		NullCheck(L_19);
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_20;
		L_20 = GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B(L_19, /*hidden argument*/GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
		// Move = false;
		__this->set_Move_13((bool)0);
		// return;
		return;
	}

IL_009f:
	{
		// Ball.transform.localPosition = Vector2.MoveTowards(Ball.transform.position,
		//         WayPointParent.transform.GetChild(i).transform.localPosition, 0.05f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_Ball_9();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_Ball_9();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_WayPointParent_10();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		int32_t L_29 = __this->get_i_16();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_32, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_26, L_33, (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_22, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DrawLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine__ctor_m8609DDD68BCAF632AA855FF766E69B83D1AD01C4 (DrawLine_t7306F42FCBCFC616EB6BF99A7820AEB4568FA77B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePlayManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Awake_m1F3308A511CB42273B06466B7E50BC79A51C886B (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Start_m322FD9D98E76804E521101745284F267AD02E1FC (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034283865E30C0CE8971200466E3585778482E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87828E5384D17067A8B8AA2E0A037D3F1A185F14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// instance = this;
		((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// if (PlayerPrefs.HasKey("Shiba"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral034283865E30C0CE8971200466E3585778482E78, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// Player = PlayerObj.transform.GetChild(PlayerPrefs.GetInt("Shiba")).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PlayerObj_11();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral034283865E30C0CE8971200466E3585778482E78, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_Player_10(L_5);
		// Player.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Player_10();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// Ball = Player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Player_10();
		__this->set_Ball_28(L_7);
		// }
		goto IL_0085;
	}

IL_0051:
	{
		// Player = PlayerObj.transform.GetChild(0).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_PlayerObj_11();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		__this->set_Player_10(L_11);
		// Player.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Player_10();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// Ball = Player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Player_10();
		__this->set_Ball_28(L_13);
	}

IL_0085:
	{
		// if (PlayerPrefs.HasKey("Level"))
		bool L_14;
		L_14 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0105;
		}
	}
	{
		// if(PlayerPrefs.GetInt("Level") > 15)
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)15))))
		{
			goto IL_00aa;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, 0, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// LevelsManagr.transform.GetChild(PlayerPrefs.GetInt("Level")).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_LevelsManagr_16();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// Player.transform.position = LevelPosition.transform.GetChild(PlayerPrefs.GetInt("Level")).transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_Player_10();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_LevelPosition_17();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_28, /*hidden argument*/NULL);
		// }
		goto IL_0169;
	}

IL_0105:
	{
		// LevelsManagr.transform.GetChild(PlayerPrefs.GetInt("Level")).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_LevelsManagr_16();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		int32_t L_31;
		L_31 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_33, (bool)1, /*hidden argument*/NULL);
		// Player.transform.position = LevelPosition.transform.GetChild(PlayerPrefs.GetInt("Level")).transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_Player_10();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_LevelPosition_17();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		int32_t L_38;
		L_38 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_41, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Level", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, 0, /*hidden argument*/NULL);
	}

IL_0169:
	{
		// if(!PlayerPrefs.HasKey("Vibrate"))
		bool L_42;
		L_42 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0180;
		}
	}
	{
		// PlayerPrefs.SetInt("Vibrate", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, 1, /*hidden argument*/NULL);
	}

IL_0180:
	{
		// if (PlayerPrefs.HasKey("Sound"))
		bool L_43;
		L_43 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01b5;
		}
	}
	{
		// if(PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_44;
		L_44 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_01a7;
		}
	}
	{
		// Sound.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_Sound_19();
		NullCheck(L_45);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_45, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_01c0;
	}

IL_01a7:
	{
		// Sound.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_Sound_19();
		NullCheck(L_46);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_46, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_01c0;
	}

IL_01b5:
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		// if (PlayerPrefs.HasKey("Music"))
		bool L_47;
		L_47 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01f5;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_48;
		L_48 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_01e7;
		}
	}
	{
		// BG_Music.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_BG_Music_20();
		NullCheck(L_49);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_49, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0200;
	}

IL_01e7:
	{
		// BG_Music.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_BG_Music_20();
		NullCheck(L_50);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_50, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0200;
	}

IL_01f5:
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, /*hidden argument*/NULL);
	}

IL_0200:
	{
		// Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_51 = __this->get_Cointxt_18();
		int32_t L_52;
		L_52 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_0 = L_52;
		String_t* L_53;
		L_53 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_53);
		// level = PlayerPrefs.GetInt("Level") + 1;
		int32_t L_54;
		L_54 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		__this->set_level_12(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)));
		// Leveltxt.text = "Level "+"- "+ level;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_55 = __this->get_Leveltxt_14();
		int32_t* L_56 = __this->get_address_of_level_12();
		String_t* L_57;
		L_57 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_56, /*hidden argument*/NULL);
		String_t* L_58;
		L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral87828E5384D17067A8B8AA2E0A037D3F1A185F14, L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_55, L_58);
		// }
		return;
	}
}
// System.Void GamePlayManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Update_m5AED6965CBBA9D15D0CF8E58BFB2B3738B410D08 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_FixedUpdate_mECEFAEE617D4F98FD2B8ED9DE857F89B1191CB4A (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!lineCreated)
		bool L_0 = __this->get_lineCreated_33();
		if (L_0)
		{
			goto IL_0114;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		// RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_7;
		L_7 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (hit)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_8 = V_0;
		bool L_9;
		L_9 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// if (hit.transform.gameObject.CompareTag("Player"))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_11, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// CreateLine();
		GamePlayManager_CreateLine_m93201C67197DECE553DB84C4198C0FE6DD0258F4(__this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (Input.GetMouseButton(0) && startDraw)
		bool L_13;
		L_13 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ff;
		}
	}
	{
		bool L_14 = __this->get_startDraw_35();
		if (!L_14)
		{
			goto IL_00ff;
		}
	}
	{
		// Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_15, L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_17, /*hidden argument*/NULL);
		// RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_20;
		L_20 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// if (hit)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_21 = V_1;
		bool L_22;
		L_22 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		// if (hit.transform.gameObject.CompareTag("Ground"))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_24, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		// StoplineCreated = true;
		__this->set_StoplineCreated_34((bool)1);
	}

IL_00b4:
	{
		// Vector2 tempFingerPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26;
		L_26 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_26, L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		// if (Vector2.Distance(tempFingerPos, fingerPositions[fingerPositions.Count - 1]) > 0.1f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_2;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_31 = __this->get_fingerPositions_27();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_32 = __this->get_fingerPositions_27();
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_32, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		NullCheck(L_31);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_31, ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		float L_35;
		L_35 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_30, L_34, /*hidden argument*/NULL);
		if ((!(((float)L_35) > ((float)(0.100000001f)))))
		{
			goto IL_0114;
		}
	}
	{
		// if (!StoplineCreated)
		bool L_36 = __this->get_StoplineCreated_34();
		if (L_36)
		{
			goto IL_0114;
		}
	}
	{
		// UpdateLine(tempFingerPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_2;
		GamePlayManager_UpdateLine_m56BC7D552C2D0389F026A42BBFFF832B7672C00F(__this, L_37, /*hidden argument*/NULL);
		// }
		goto IL_0114;
	}

IL_00ff:
	{
		// if (startDraw)
		bool L_38 = __this->get_startDraw_35();
		if (!L_38)
		{
			goto IL_0114;
		}
	}
	{
		// lineCreated = true;
		__this->set_lineCreated_33((bool)1);
		// GenerateWayPoints();
		GamePlayManager_GenerateWayPoints_mDF1D53A426CEA5184154CDA36AC3B1884F96C108(__this, /*hidden argument*/NULL);
	}

IL_0114:
	{
		// if (Move)
		bool L_39 = __this->get_Move_32();
		if (!L_39)
		{
			goto IL_0122;
		}
	}
	{
		// MoveCharacter();
		GamePlayManager_MoveCharacter_m5757AF7E43766D49B6F7CC9B253651880A66189A(__this, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::pauseBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_pauseBtn_mC3A4CBF1CDBC57E3DB3625D70DF3489F34DF68CC (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// P_Pause.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_P_Pause_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// P_Pause.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_P_Pause_7();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::resumebtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_resumebtn_m952DFA966F141D71F57489C10B2BAAC52BB5E093 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	{
		// P_Pause.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_P_Pause_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::levelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelComplete_mCDDC00D15C440D0C3D4CABF85C3DABD1C4316438 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GoogleAdsManager.Instance)
		GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * L_0 = ((GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_StaticFields*)il2cpp_codegen_static_fields_for(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_il2cpp_TypeInfo_var))->get_Instance_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// GoogleAdsManager.Instance.showInterstitial();
		GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * L_2 = ((GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_StaticFields*)il2cpp_codegen_static_fields_for(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_il2cpp_TypeInfo_var))->get_Instance_5();
		NullCheck(L_2);
		GoogleAdsManager_showInterstitial_m181C5B81ED21B3F050F0740C57F090B6C3F3FC6D(L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// levelCom = true;
		__this->set_levelCom_13((bool)1);
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		// S_Complete.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_S_Complete_21();
		NullCheck(L_4);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_4, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// StartCoroutine(LevelCompleted());
		RuntimeObject* L_5;
		L_5 = GamePlayManager_LevelCompleted_mDAC3EEFFEC95A18A3023D3114D314D6921CC46BD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::levelFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelFail_mE42095B5A7628827D7EA9BAF633F5A2EFA05E174 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// S_Failed.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_S_Failed_22();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// StartCoroutine(LevelFailed());
		RuntimeObject* L_2;
		L_2 = GamePlayManager_LevelFailed_m8923C379A4EAD36B8F3562AD0DB5131DEA242D4D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::Home()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Home_mDF82809F051F654861645E883EFB2EB700EECFB5 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068D9B7B4B9A4B3AAE9402DF3C9C3524C535E040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6880EA5264F697CB4936ACCA1E5F8B2FE27FAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(levelCom)
		bool L_0 = __this->get_levelCom_13();
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.Log("LevelComplete Home");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral068D9B7B4B9A4B3AAE9402DF3C9C3524C535E040, /*hidden argument*/NULL);
		// if (level == 15)
		int32_t L_1 = __this->get_level_12();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0027;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", -1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, (-1), /*hidden argument*/NULL);
	}

IL_0027:
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		// levelCom = false;
		__this->set_levelCom_13((bool)0);
		// }
		return;
	}

IL_0045:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// Debug.Log("Pause Home");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA6880EA5264F697CB4936ACCA1E5F8B2FE27FAB0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Restart_m0D96CAAB5775398489AAC8812C9BAC5B07C7DCBD (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::Skip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Skip_m7B8033E7B9D8C31C86D2746CABF71659106CEC57 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_NextLevel_mEDB8EB9209F8C9884763314498C8161B91FEF363 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (level == 15)
		int32_t L_0 = __this->get_level_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0015;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", -1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, (-1), /*hidden argument*/NULL);
	}

IL_0015:
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GamePlayManager::LevelCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelCompleted_mDAC3EEFFEC95A18A3023D3114D314D6921CC46BD (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * L_0 = (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 *)il2cpp_codegen_object_new(U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8_il2cpp_TypeInfo_var);
		U3CLevelCompletedU3Ed__32__ctor_m6AF9ED017F1AF96D2F0BD9794714E27E66223EB0(L_0, 0, /*hidden argument*/NULL);
		U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GamePlayManager::LevelFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelFailed_m8923C379A4EAD36B8F3562AD0DB5131DEA242D4D (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * L_0 = (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 *)il2cpp_codegen_object_new(U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3_il2cpp_TypeInfo_var);
		U3CLevelFailedU3Ed__33__ctor_mCCF6E9F2CD5E80AF88B417E47132EDA1E0BB2857(L_0, 0, /*hidden argument*/NULL);
		U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GamePlayManager::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_CreateLine_m93201C67197DECE553DB84C4198C0FE6DD0258F4 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startDraw = true;
		__this->set_startDraw_35((bool)1);
		// currentLine = Instantiate(linePrefab, Vector3.zero, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_linePrefab_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_currentLine_25(L_3);
		// lineRenderer = currentLine.GetComponent<LineRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_currentLine_25();
		NullCheck(L_4);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_4, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		__this->set_lineRenderer_26(L_5);
		// fingerPositions.Clear();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_6 = __this->get_fingerPositions_27();
		NullCheck(L_6);
		List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50(L_6, /*hidden argument*/List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_7 = __this->get_fingerPositions_27();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_8, L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_7, L_11, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_12 = __this->get_fingerPositions_27();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_13, L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_12, L_16, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// lineRenderer.SetPosition(0, fingerPositions[0]);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_17 = __this->get_lineRenderer_26();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_18 = __this->get_fingerPositions_27();
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_18, 0, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_17, 0, L_20, /*hidden argument*/NULL);
		// lineRenderer.SetPosition(1, fingerPositions[1]);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_21 = __this->get_lineRenderer_26();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_22 = __this->get_fingerPositions_27();
		NullCheck(L_22);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_22, 1, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_21, 1, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_UpdateLine_m56BC7D552C2D0389F026A42BBFFF832B7672C00F (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newFingerPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// fingerPositions.Add(newFingerPos);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = __this->get_fingerPositions_27();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___newFingerPos0;
		NullCheck(L_0);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_0, L_1, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// lineRenderer.positionCount++;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lineRenderer_26();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		// lineRenderer.SetPosition(lineRenderer.positionCount - 1, newFingerPos);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lineRenderer_26();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_lineRenderer_26();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___newFingerPos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_GenerateWayPoints_mDF1D53A426CEA5184154CDA36AC3B1884F96C108 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Vector2 WayPoint in fingerPositions)
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = __this->get_fingerPositions_27();
		NullCheck(L_0);
		Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68  L_1;
		L_1 = List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1(L_0, /*hidden argument*/List_1_GetEnumerator_m26277B0DF6F011A0C4ED64A6C149FC87164ECEB1_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_000e:
		{
			// foreach (Vector2 WayPoint in fingerPositions)
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
			L_2 = Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_inline((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_RuntimeMethod_var);
			V_1 = L_2;
			// Instantiate(Obj, new Vector2(WayPoint.x, WayPoint.y), Quaternion.identity, WayPointParent);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Obj_30();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_1;
			float L_5 = L_4.get_x_0();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_1;
			float L_7 = L_6.get_y_1();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
			memset((&L_8), 0, sizeof(L_8));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
			L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_WayPointParent_29();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
			L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_3, L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		}

IL_0043:
		{
			// foreach (Vector2 WayPoint in fingerPositions)
			bool L_13;
			L_13 = Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7A577B0782F0D174CEA921C7B67075BD60034A6C_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_000e;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F((Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m9293ECF37A918B4294B53F02354AEFE42400F44F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// create = false;
		__this->set_create_31((bool)0);
		// Move = true;
		__this->set_Move_32((bool)1);
		// }
		return;
	}
}
// System.Void GamePlayManager::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_MoveCharacter_m5757AF7E43766D49B6F7CC9B253651880A66189A (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector2.Distance(Ball.transform.localPosition, WayPointParent.transform.GetChild(i).transform.localPosition) < 0.1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Ball_28();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_WayPointParent_29();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_i_36();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		float L_11;
		L_11 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_3, L_10, /*hidden argument*/NULL);
		if ((!(((double)((double)((double)L_11))) < ((double)(0.10000000000000001)))))
		{
			goto IL_009f;
		}
	}
	{
		// if (i < WayPointParent.transform.childCount - 1)
		int32_t L_12 = __this->get_i_36();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_WayPointParent_29();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))))
		{
			goto IL_0075;
		}
	}
	{
		// i++;
		int32_t L_16 = __this->get_i_36();
		__this->set_i_36(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// }
		goto IL_009f;
	}

IL_0075:
	{
		// Ball.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_Ball_28();
		NullCheck(L_17);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_18);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_18, 0, /*hidden argument*/NULL);
		// currentLine.GetComponent<EdgeCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_currentLine_25();
		NullCheck(L_19);
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_20;
		L_20 = GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B(L_19, /*hidden argument*/GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
		// Move = false;
		__this->set_Move_32((bool)0);
		// return;
		return;
	}

IL_009f:
	{
		// Ball.transform.localPosition = Vector2.MoveTowards(Ball.transform.position,
		//         WayPointParent.transform.GetChild(i).transform.localPosition, 0.05f * Time.timeScale);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_Ball_28();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_Ball_28();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_WayPointParent_29();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		int32_t L_29 = __this->get_i_36();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_32, /*hidden argument*/NULL);
		float L_34;
		L_34 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_26, L_33, ((float)il2cpp_codegen_multiply((float)(0.0500000007f), (float)L_34)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_22, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager__ctor_m09C2D6D7B65119B2858076BE5656A92FED194E12 (GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleAdsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_Awake_m005A449C0008048FEEB47EAC2A6249CBD0D7AA85 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA274ED2E6D8673116A56687FC4BB27880FC5CF78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] objs = GameObject.FindGameObjectsWithTag("Ads");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralA274ED2E6D8673116A56687FC4BB27880FC5CF78, /*hidden argument*/NULL);
		// if (objs.Length > 1)
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_Start_mEC8EB59E523A7622D8C8C4818BAAEC8ABD6D7127 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mBA043381E77D8BA7F64CC06CF29C0F63F918AB1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__3_0_mF091374F00997AD58B921F7B1F646386E1A6C531_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * G_B2_0 = NULL;
	Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * G_B1_0 = NULL;
	{
		// Instance = this;
		((GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_StaticFields*)il2cpp_codegen_static_fields_for(GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53_il2cpp_TypeInfo_var))->set_Instance_5(__this);
		// MobileAds.Initialize(initStatus => { });
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var);
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_0 = ((U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var);
		U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * L_2 = ((U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_3 = (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE *)il2cpp_codegen_object_new(Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE_il2cpp_TypeInfo_var);
		Action_1__ctor_mBA043381E77D8BA7F64CC06CF29C0F63F918AB1F(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__3_0_mF091374F00997AD58B921F7B1F646386E1A6C531_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBA043381E77D8BA7F64CC06CF29C0F63F918AB1F_RuntimeMethod_var);
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_4 = L_3;
		((U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_0025:
	{
		MobileAds_Initialize_mF49A2BB05D621013B80FE2FD36BA2EA2C6A31A5A(G_B2_0, /*hidden argument*/NULL);
		// this.RequestBanner();
		GoogleAdsManager_RequestBanner_mB4432A32DCC3911B178893D1D8FC19A2B6A92CA5(__this, /*hidden argument*/NULL);
		// RequestInterstitial();
		GoogleAdsManager_RequestInterstitial_m6170CC47B6654375DA4CA2B9DF0E08CEDB5EEE85(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_RequestBanner_mB4432A32DCC3911B178893D1D8FC19A2B6A92CA5 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * V_1 = NULL;
	{
		// string adUnitId = "ca-app-pub-3940256099942544/6300978111";
		V_0 = _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
		// this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
		String_t* L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_il2cpp_TypeInfo_var);
		AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * L_1 = ((AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B_il2cpp_TypeInfo_var))->get_Banner_4();
		BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * L_2 = (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 *)il2cpp_codegen_object_new(BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699_il2cpp_TypeInfo_var);
		BannerView__ctor_m56A50D92B1D0659C0D321CE547BBB4D7504DE408(L_2, L_0, L_1, 1, /*hidden argument*/NULL);
		__this->set_bannerView_4(L_2);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398 * L_3 = (Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398 *)il2cpp_codegen_object_new(Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398_il2cpp_TypeInfo_var);
		Builder__ctor_m4E1D5A173742EE3B20E450CA3E41AAC0AE5C7510(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * L_4;
		L_4 = Builder_Build_m92AB6404D57A7D3C3034DDDD15213FF7C53246CC(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// this.bannerView.LoadAd(request);
		BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * L_5 = __this->get_bannerView_4();
		AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * L_6 = V_1;
		NullCheck(L_5);
		BannerView_LoadAd_mA08498FFFF3C753CA730DC08A61A362C4E55E406(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::destroyBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_destroyBanner_m075BD9DA76F852A352536B7403BD943917FB95F5 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	{
		// bannerView.Destroy();
		BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * L_0 = __this->get_bannerView_4();
		NullCheck(L_0);
		BannerView_Destroy_m501B54DE9595F73867FDE54B827F63F1A0563BF6(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::RequestInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_RequestInterstitial_m6170CC47B6654375DA4CA2B9DF0E08CEDB5EEE85 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mA618035D629917D205C59E3522D39839D323F9F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAdsManager_HandleOnAdClosed_mB42B22FB664E63C1DB83A20A505C1DB25C6F9AA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAdsManager_HandleOnAdFailedToLoad_m72D0C7E7FF85A71A692B280A5D896D6E5240EAB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAdsManager_HandleOnAdLoaded_m08C325E69185042EF8F183E32722A5648A9E3869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAdsManager_HandleOnAdOpening_m19C25F43FAF0CA57001255CC0C136DCA8DCA1F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * V_1 = NULL;
	{
		// string adUnitId = "ca-app-pub-3940256099942544/1033173712";
		V_0 = _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8;
		// this.interstitial = new InterstitialAd(adUnitId);
		String_t* L_0 = V_0;
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_1 = (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 *)il2cpp_codegen_object_new(InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m762615D731A25CAE1043113E2E083DB52065C6B4(L_1, L_0, /*hidden argument*/NULL);
		__this->set_interstitial_6(L_1);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398 * L_2 = (Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398 *)il2cpp_codegen_object_new(Builder_tBA8CC9D57A77CAFBBAD58F6C2FC6B0D7ED573398_il2cpp_TypeInfo_var);
		Builder__ctor_m4E1D5A173742EE3B20E450CA3E41AAC0AE5C7510(L_2, /*hidden argument*/NULL);
		NullCheck(L_2);
		AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * L_3;
		L_3 = Builder_Build_m92AB6404D57A7D3C3034DDDD15213FF7C53246CC(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// this.interstitial.LoadAd(request);
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_4 = __this->get_interstitial_6();
		AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * L_5 = V_1;
		NullCheck(L_4);
		InterstitialAd_LoadAd_m4FF64B2AF7C2EB0EC08158CC9AF04D068F588637(L_4, L_5, /*hidden argument*/NULL);
		// this.interstitial.OnAdLoaded += HandleOnAdLoaded;
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_6 = __this->get_interstitial_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)GoogleAdsManager_HandleOnAdLoaded_m08C325E69185042EF8F183E32722A5648A9E3869_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterstitialAd_add_OnAdLoaded_m2E78F878381DDA8835212FCDC95839E4A84B179C(L_6, L_7, /*hidden argument*/NULL);
		// this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_8 = __this->get_interstitial_6();
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_9 = (EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)il2cpp_codegen_object_new(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA618035D629917D205C59E3522D39839D323F9F7(L_9, __this, (intptr_t)((intptr_t)GoogleAdsManager_HandleOnAdFailedToLoad_m72D0C7E7FF85A71A692B280A5D896D6E5240EAB1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mA618035D629917D205C59E3522D39839D323F9F7_RuntimeMethod_var);
		NullCheck(L_8);
		InterstitialAd_add_OnAdFailedToLoad_m041F111940223B2BD44820929AC6F277945FE052(L_8, L_9, /*hidden argument*/NULL);
		// this.interstitial.OnAdOpening += HandleOnAdOpening;
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_10 = __this->get_interstitial_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)GoogleAdsManager_HandleOnAdOpening_m19C25F43FAF0CA57001255CC0C136DCA8DCA1F3E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterstitialAd_add_OnAdOpening_mD4FFB16FA69F0A5C1AB24667DE45F77360B1B0C6(L_10, L_11, /*hidden argument*/NULL);
		// this.interstitial.OnAdClosed += HandleOnAdClosed;
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_12 = __this->get_interstitial_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_13 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_13, __this, (intptr_t)((intptr_t)GoogleAdsManager_HandleOnAdClosed_mB42B22FB664E63C1DB83A20A505C1DB25C6F9AA4_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_12);
		InterstitialAd_add_OnAdClosed_m5ECD82470821301B48C14394AE7AC215F97B78F5(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::showInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_showInterstitial_m181C5B81ED21B3F050F0740C57F090B6C3F3FC6D (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	{
		// if (this.interstitial.IsLoaded())
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_0 = __this->get_interstitial_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m922208EC2691E82816C084314D6517AB5F85EE22_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// this.interstitial.Show();
		InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * L_2 = __this->get_interstitial_6();
		NullCheck(L_2);
		InterstitialAd_Show_m143F5C83F1F6D10E15390929702A733EB858BC0D(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GoogleAdsManager::HandleOnAdLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_HandleOnAdLoaded_m08C325E69185042EF8F183E32722A5648A9E3869 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9D03EB933B0B046F313BCB1BEC2E63D5861A7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleAdLoaded event received");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralCB9D03EB933B0B046F313BCB1BEC2E63D5861A7D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::HandleOnAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_HandleOnAdFailedToLoad_m72D0C7E7FF85A71A692B280A5D896D6E5240EAB1 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ECF8FB393160C8D44EBD80BDB79E8E6B5081E0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleFailedToReceiveAd event received with message: "
		//                     + args.ToString());
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7ECF8FB393160C8D44EBD80BDB79E8E6B5081E0C, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::HandleOnAdOpening(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_HandleOnAdOpening_m19C25F43FAF0CA57001255CC0C136DCA8DCA1F3E (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51787EBF3A02DDB9D046253DE238C61262334CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleAdOpening event received");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralE51787EBF3A02DDB9D046253DE238C61262334CA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::HandleOnAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager_HandleOnAdClosed_mB42B22FB664E63C1DB83A20A505C1DB25C6F9AA4 (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F61CA7623C2DAECF6EFAEE7BA82693C44E21C16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleAdClosed event received");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral2F61CA7623C2DAECF6EFAEE7BA82693C44E21C16, /*hidden argument*/NULL);
		// RequestInterstitial();
		GoogleAdsManager_RequestInterstitial_m6170CC47B6654375DA4CA2B9DF0E08CEDB5EEE85(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleAdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAdsManager__ctor_m8555A1DADBDF9089634F56D8B12B579ADD3AECEA (GoogleAdsManager_tA4066C9993867FE60F3486BAAF5A4994C2EE0D53 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAdsDemoScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMobileAdsDemoScript__ctor_m48B3E925F49AB203248C2D0AF43ED4AAF39F6531 (GoogleMobileAdsDemoScript_t0F6E2335673EB408B4FB53DF29BF6BD018CC4149 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Start_m1316F0CDD41DDDAD4416B98FCFF89ED3228ABE42 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Loading::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Update_m3387E377C5F2EB1A36FF2B0DD0ABE39E29368E93 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Loading::LoadGamePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_LoadGamePlay_m03315B245A708D9470F316A8665F81FB1CE6D49F (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Loading::LoadHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_LoadHome_mE8840924994CA7C7580EB7DA47C022D1E82BE30C (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Loading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading__ctor_mE163CCF6BD5A7EDA90F61A352261F32C2DE99FFB (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Start_mF4446A5FDE97841590C718B06B5DDDC188B228E2 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// if(PlayerPrefs.HasKey("Coins"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// TotalCoins = PlayerPrefs.GetInt("Coins");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		__this->set_TotalCoins_4(L_1);
		// CoinsTxt.text = TotalCoins.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_CoinsTxt_5();
		int32_t* L_3 = __this->get_address_of_TotalCoins_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		goto IL_006b;
	}

IL_003a:
	{
		// PlayerPrefs.SetInt("Coins", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, 0, /*hidden argument*/NULL);
		// TotalCoins = PlayerPrefs.GetInt("Coins");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		__this->set_TotalCoins_4(L_5);
		// CoinsTxt.text = TotalCoins.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_CoinsTxt_5();
		int32_t* L_7 = __this->get_address_of_TotalCoins_4();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
	}

IL_006b:
	{
		// if (PlayerPrefs.HasKey("Sound"))
		bool L_9;
		L_9 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		// Sound.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Sound_7();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// SoundBtn_On.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_SoundBtn_On_9();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// SoundBtn_Off.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_SoundBtn_Off_10();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00db;
	}

IL_00aa:
	{
		// Sound.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Sound_7();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// SoundBtn_On.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_SoundBtn_On_9();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// SoundBtn_Off.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_SoundBtn_Off_10();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00db;
	}

IL_00d0:
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// if (PlayerPrefs.HasKey("Music"))
		bool L_17;
		L_17 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_013e;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_18;
		L_18 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0119;
		}
	}
	{
		// BG_Music.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_BG_Music_8();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// MusicBtn_On.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_MusicBtn_On_11();
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// MusicBtn_Off.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_MusicBtn_Off_12();
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0119:
	{
		// BG_Music.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_BG_Music_8();
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)0, /*hidden argument*/NULL);
		// MusicBtn_On.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_MusicBtn_On_11();
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)0, /*hidden argument*/NULL);
		// MusicBtn_Off.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_MusicBtn_Off_12();
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_013e:
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Update_m3433178EDAF25B8CD00B3F4DDC8F0408580470F5 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// CoinsTxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_CoinsTxt_5();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void MainMenuManager::Privacy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Privacy_m0FFE73E93F687D32668FC849BA53F3365EC2E353 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C1EA0321FD298E596F2F859DC5F40D36E2677B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://mensaplay.com/wensa/privacy-policy.html");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteral01C1EA0321FD298E596F2F859DC5F40D36E2677B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::VibrationOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_VibrationOn_mB49CEFF17FD94C8AE18A3EB5301C72CF3512AC63 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Vibrate", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::VibrationOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_VibrationOFF_m58367ED91CF5FA65C3CDEA94D19496EDF04BC729 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Vibrate", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::SoundOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_SoundOn_m85DB7C6B35A301FC0617FC34A5222BA360EF890D (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::SoundOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_SoundOFF_mE382B8C52399519E57D52F5D6E16912725CEB490 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::MusicOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_MusicOn_m7FBCE922070CADB789324A0D65CEDE3193306BC2 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::MusicOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_MusicOFF_m6D3346D308CECB12D87BB21742FE86CC91BEFE6A (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager__ctor_m39846598ADB8889025A11166F08497A1E99D13BF (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Start_m861DC6C96019338D34FEE2B155CDAB40EB89FD2B (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Update_m5062165719CA6CFFDF44C59F5B826674DB700C9C (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::PlayBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_PlayBtn_m9C02F8B8670BCDD5F7520037399172DFE2A3BEF3 (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Setting_m9898ED5409C2B5B2303A57492B88E5343720D5CB (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Levels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Levels_m73E9F1691D02FB56262D4DC6620D873F8B3B404E (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Store()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Store_m39E750EF7B5FCD1FB26381C8640319C589575950 (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::FreeCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_FreeCoins_m8BF1464BFE863B0DC0D487B0817A789D683488D6 (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::RemoveAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_RemoveAds_m1B6D9F3A4E22ED65A36B69525A8CD4D04D47A3B1 (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::BonusMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_BonusMode_m459F97E178AE293D84AE4D29D9CB87495018CE21 (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen__ctor_mABD200A07E1139B17098595037F0CA5D142B162E (MainScreen_t09D10A0FE341E3154A0FF9E1F87A24E7DA885567 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Movement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Awake_mC24012D10E5FE2E1CF2B188AA4EFC347C0DA7A93 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// moveIf = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_moveIf_6(L_0);
		// movePos = moveIf.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_moveIf_6();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_movePos_7(L_2);
		// moveValue = Vector2.one;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		__this->set_moveValue_8(L_3);
		// }
		return;
	}
}
// System.Void Movement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_FixedUpdate_mACA59B810F6DAD27F591A83046A0643AADBAF1EB (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// movePos.x += moveSpeed * moveValue.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_movePos_7();
		float* L_1 = L_0->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->get_moveSpeed_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_moveValue_8();
		float L_6 = L_5->get_x_0();
		*((float*)L_2) = (float)((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_6))));
		// movePos.y += moveSpeed * moveValue.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_movePos_7();
		float* L_8 = L_7->get_address_of_y_3();
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = __this->get_moveSpeed_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_moveValue_8();
		float L_13 = L_12->get_y_1();
		*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13))));
		// if(movePos.x < minPos.x)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_movePos_7();
		float L_15 = L_14->get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_minPos_4();
		float L_17 = L_16->get_x_0();
		if ((!(((float)L_15) < ((float)L_17))))
		{
			goto IL_0096;
		}
	}
	{
		// moveValue.x *= -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_moveValue_8();
		float* L_19 = L_18->get_address_of_x_0();
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		*((float*)L_20) = (float)((float)il2cpp_codegen_multiply((float)L_21, (float)(-1.0f)));
		// movePos.x += minPos.x - movePos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_movePos_7();
		float* L_23 = L_22->get_address_of_x_2();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_minPos_4();
		float L_27 = L_26->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_movePos_7();
		float L_29 = L_28->get_x_2();
		*((float*)L_24) = (float)((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_subtract((float)L_27, (float)L_29))));
		// }
		goto IL_00e8;
	}

IL_0096:
	{
		// else if(movePos.x > maxPos.x)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_movePos_7();
		float L_31 = L_30->get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = __this->get_address_of_maxPos_5();
		float L_33 = L_32->get_x_0();
		if ((!(((float)L_31) > ((float)L_33))))
		{
			goto IL_00e8;
		}
	}
	{
		// moveValue.x *= -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = __this->get_address_of_moveValue_8();
		float* L_35 = L_34->get_address_of_x_0();
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		*((float*)L_36) = (float)((float)il2cpp_codegen_multiply((float)L_37, (float)(-1.0f)));
		// movePos.x += maxPos.x - movePos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_38 = __this->get_address_of_movePos_7();
		float* L_39 = L_38->get_address_of_x_2();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_maxPos_5();
		float L_43 = L_42->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_44 = __this->get_address_of_movePos_7();
		float L_45 = L_44->get_x_2();
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)((float)il2cpp_codegen_subtract((float)L_43, (float)L_45))));
	}

IL_00e8:
	{
		// if (movePos.y < minPos.y)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = __this->get_address_of_movePos_7();
		float L_47 = L_46->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_48 = __this->get_address_of_minPos_4();
		float L_49 = L_48->get_y_1();
		if ((!(((float)L_47) < ((float)L_49))))
		{
			goto IL_013c;
		}
	}
	{
		// moveValue.y *= -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_50 = __this->get_address_of_moveValue_8();
		float* L_51 = L_50->get_address_of_y_1();
		float* L_52 = L_51;
		float L_53 = *((float*)L_52);
		*((float*)L_52) = (float)((float)il2cpp_codegen_multiply((float)L_53, (float)(-1.0f)));
		// movePos.y += minPos.y - movePos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_54 = __this->get_address_of_movePos_7();
		float* L_55 = L_54->get_address_of_y_3();
		float* L_56 = L_55;
		float L_57 = *((float*)L_56);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_58 = __this->get_address_of_minPos_4();
		float L_59 = L_58->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_60 = __this->get_address_of_movePos_7();
		float L_61 = L_60->get_y_3();
		*((float*)L_56) = (float)((float)il2cpp_codegen_add((float)L_57, (float)((float)il2cpp_codegen_subtract((float)L_59, (float)L_61))));
		// }
		goto IL_018e;
	}

IL_013c:
	{
		// else if (movePos.y > maxPos.y)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_62 = __this->get_address_of_movePos_7();
		float L_63 = L_62->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_64 = __this->get_address_of_maxPos_5();
		float L_65 = L_64->get_y_1();
		if ((!(((float)L_63) > ((float)L_65))))
		{
			goto IL_018e;
		}
	}
	{
		// moveValue.y *= -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_66 = __this->get_address_of_moveValue_8();
		float* L_67 = L_66->get_address_of_y_1();
		float* L_68 = L_67;
		float L_69 = *((float*)L_68);
		*((float*)L_68) = (float)((float)il2cpp_codegen_multiply((float)L_69, (float)(-1.0f)));
		// movePos.y += maxPos.y - movePos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_70 = __this->get_address_of_movePos_7();
		float* L_71 = L_70->get_address_of_y_3();
		float* L_72 = L_71;
		float L_73 = *((float*)L_72);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_74 = __this->get_address_of_maxPos_5();
		float L_75 = L_74->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_76 = __this->get_address_of_movePos_7();
		float L_77 = L_76->get_y_3();
		*((float*)L_72) = (float)((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_subtract((float)L_75, (float)L_77))));
	}

IL_018e:
	{
		// moveIf.position = movePos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78 = __this->get_moveIf_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = __this->get_movePos_7();
		NullCheck(L_78);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_78, L_79, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mEA4800F5BE98787C0ACA8CDF85918B56DE62A2AB (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 0.04f;
		__this->set_moveSpeed_9((0.0399999991f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Object_Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Movement_Start_mCC8A22B15E9C15E0AE83872EE63633F671447C66 (Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9 * __this, const RuntimeMethod* method)
{
	{
		// Start_point.position = Snake.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Start_point_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Snake_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Object_Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Movement_Update_m3AC499B35D7DF0064CACD1DB0E11E8A874225A60 (Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9 * __this, const RuntimeMethod* method)
{
	{
		// if(Vector2.Distance(Snake.transform.position,End_point.position) < 0.01f)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Snake_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_End_point_6();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_3, L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) < ((float)(0.00999999978f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// if(!started)
		bool L_8 = __this->get_started_8();
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		// Snake.transform.rotation = End_point.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Snake_4();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_End_point_6();
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_10, L_12, /*hidden argument*/NULL);
		// started = true;
		__this->set_started_8((bool)1);
		// }
		goto IL_007f;
	}

IL_005d:
	{
		// Snake.transform.rotation = Start_point.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Snake_4();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_Start_point_5();
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_14, L_16, /*hidden argument*/NULL);
		// started=false;
		__this->set_started_8((bool)0);
	}

IL_007f:
	{
		// End_point.position = Start_point.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_End_point_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_Start_point_5();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_19, /*hidden argument*/NULL);
		// Start_point.position = Snake.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_Start_point_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_Snake_4();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_23, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// Snake.transform.position =
		//     Vector2.MoveTowards(Snake.transform.position, End_point.position, speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_Snake_4();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_Snake_4();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_End_point_6();
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_speed_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_29, L_32, L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Object_Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Movement__ctor_mDD847FBAE1DBD7D0DAD17410EA7925C9FC7F6AE5 (Object_Movement_tE4C696F6A9F1FD88F8EB2BA593FDE823CA64F3A9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_Start_mE6736A487845B534F505245E87BB26259BBCAA8B (StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Cointxt_7();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// if(PlayerPrefs.HasKey("ShibaLock"))
		bool L_3;
		L_3 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
		V_1 = 0;
		goto IL_003f;
	}

IL_002d:
	{
		// ShibaLocker[sh].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_ShibaLocker_4();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003f:
	{
		// for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_002d;
		}
	}

IL_004c:
	{
		// for (int i = 0; i < contant.transform.childCount; i++)
		V_2 = 0;
		goto IL_0072;
	}

IL_0050:
	{
		// SelectedShiba[i] = contant.transform.GetChild(i).GetComponent<Image>();
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_11 = __this->get_SelectedShiba_9();
		int32_t L_12 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_contant_8();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17;
		L_17 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_16, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_17);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)L_17);
		// for (int i = 0; i < contant.transform.childCount; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0072:
	{
		// for (int i = 0; i < contant.transform.childCount; i++)
		int32_t L_19 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_contant_8();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_22)))
		{
			goto IL_0050;
		}
	}
	{
		// }
		return;
	}
}
// System.Void StoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_Update_m78CA47073CB4288AFBC099811D5542F6A55F035E (StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StoreManager::unlockShiba(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_unlockShiba_m5A13C18E29102693815416013BC1D6BAB53A205F (StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(PlayerPrefs.GetInt("Coins") > ShibaPrices[num-1])
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_ShibaPrices_5();
		int32_t L_2 = ___num0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_0) <= ((int32_t)L_4)))
		{
			goto IL_0089;
		}
	}
	{
		// PlayerPrefs.SetInt("Player", num);
		int32_t L_5 = ___num0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_5, /*hidden argument*/NULL);
		// ShibaLocker[PlayerPrefs.GetInt("Player")-1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_ShibaLocker_4();
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - ShibaPrices[num-1]);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get_ShibaPrices_5();
		int32_t L_12 = ___num0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_14)), /*hidden argument*/NULL);
		// Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_Cointxt_7();
		int32_t L_16;
		L_16 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// PlayerPrefs.SetInt("ShibaLock", num);
		int32_t L_18 = ___num0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2, L_18, /*hidden argument*/NULL);
		// selectShiba(num);
		int32_t L_19 = ___num0;
		StoreManager_selectShiba_mE2C18C19079BD2E1434D8EADF722D9E67AEDCCA7(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0089:
	{
		// CoinWarning.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_CoinWarning_6();
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StoreManager::selectShiba(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_selectShiba_mE2C18C19079BD2E1434D8EADF722D9E67AEDCCA7 (StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3 * __this, int32_t ___ShibaNum0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034283865E30C0CE8971200466E3585778482E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E0345113F68A7A72170991D8777B3365231AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral188C1E7793944B8BA9565367C39BADF9EA67A348);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544CD8A820A1B02F3B984AA5C01C036BDD5AC6F5);
		s_Il2CppMethodInitialized = true;
	}
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// PlayerPrefs.SetInt("Shiba", ShibaNum);
		int32_t L_0 = ___ShibaNum0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral034283865E30C0CE8971200466E3585778482E78, L_0, /*hidden argument*/NULL);
		// foreach(Image img in SelectedShiba)
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_1 = __this->get_SelectedShiba_9();
		V_0 = L_1;
		V_1 = 0;
		goto IL_004a;
	}

IL_0016:
	{
		// foreach(Image img in SelectedShiba)
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// img.color = new Color32(255, 255, 255, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_6), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// Debug.Log("color Changed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral188C1E7793944B8BA9565367C39BADF9EA67A348, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004a:
	{
		// foreach(Image img in SelectedShiba)
		int32_t L_9 = V_1;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// Debug.Log("chosing the selected color");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral03E0345113F68A7A72170991D8777B3365231AFB, /*hidden argument*/NULL);
		// SelectedShiba[ShibaNum].color = new Color32(103, 221, 68, 255);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_11 = __this->get_SelectedShiba_9();
		int32_t L_12 = ___ShibaNum0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_15), (uint8_t)((int32_t)103), (uint8_t)((int32_t)221), (uint8_t)((int32_t)68), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_16);
		// Debug.Log("selected color chnaged");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral544CD8A820A1B02F3B984AA5C01C036BDD5AC6F5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager__ctor_m168C02EA2DE05F4B25AD1B94DED2A3DA142D75A9 (StoreManager_t0DBFBC01FB7064D695205E774043DDA7A49202C3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Character_Interactions/<Retry>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5__ctor_m32F0074948B5E29651D6FD096F1D1871609CF3B2 (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Character_Interactions/<Retry>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5_System_IDisposable_Dispose_mB1089430D8C9E1040F093A24C02D8F4759D10305 (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Character_Interactions/<Retry>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRetryU3Ed__5_MoveNext_m78D969D7BD098944FC9EB662E7BF5BA9475896AB (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral930B1358F66BE6CB2F4FF18F039AB396AB859F2D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Android , Retry collision");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral930B1358F66BE6CB2F4FF18F039AB396AB859F2D, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_2 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_2, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_2);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GamePlayManager.instance.levelFail();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_3 = ((GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		GamePlayManager_levelFail_mE42095B5A7628827D7EA9BAF633F5A2EFA05E174(L_3, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Character_Interactions/<Retry>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRetryU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0530CEECB7E061966FF331FEB27C5B2FBC272857 (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Character_Interactions/<Retry>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5_System_Collections_IEnumerator_Reset_m77EF79BF90E96B6B31DD195C6059C30C6BBADE08 (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRetryU3Ed__5_System_Collections_IEnumerator_Reset_m77EF79BF90E96B6B31DD195C6059C30C6BBADE08_RuntimeMethod_var)));
	}
}
// System.Object Character_Interactions/<Retry>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRetryU3Ed__5_System_Collections_IEnumerator_get_Current_m2411FAB9DE8700B53FCA7AFC0F7B12F6D738518D (U3CRetryU3Ed__5_t7383B2154A18D0D4CD0C278B837A9387C74DE15C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePlayManager/<LevelCompleted>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32__ctor_m6AF9ED017F1AF96D2F0BD9794714E27E66223EB0 (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GamePlayManager/<LevelCompleted>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32_System_IDisposable_Dispose_m5C115DBF39EF6A8D07AFC734B737D782413E0925 (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GamePlayManager/<LevelCompleted>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelCompletedU3Ed__32_MoveNext_m07A0C6EB6CE8E8669A2BBEC050F2742ECFBED1AF (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537F912086D986A329874B8810F39AF7DE0A9C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_0122;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// P_BlackScreen.SetActive(true);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_P_BlackScreen_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// P_Levelcomplete.SetActive(true);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_P_Levelcomplete_5();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// P_BlackScreen.SetActive(false);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_P_BlackScreen_9();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// totl = 20 + 5 * (PlayerPrefs.GetInt("Level") + 1);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_10 = V_1;
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_totl_23(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)20), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)5, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)))))));
		// dubbleScore.text = totl.ToString();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_12 = V_1;
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_dubbleScore_15();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_14 = V_1;
		NullCheck(L_14);
		int32_t* L_15 = L_14->get_address_of_totl_23();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins")+totl);
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_totl_23();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_19)), /*hidden argument*/NULL);
		// P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_20 = V_1;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_P_Levelcomplete_5();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_22, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26;
		L_26 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_25, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t L_27;
		L_27 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_2 = L_27;
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_28);
		// Debug.Log("score is:" + PlayerPrefs.GetInt("Coins"));
		int32_t L_29;
		L_29 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_2 = L_29;
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral537F912086D986A329874B8810F39AF7DE0A9C5A, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0122:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StopCoroutine(LevelCompleted());
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_32 = V_1;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_33 = V_1;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = GamePlayManager_LevelCompleted_mDAC3EEFFEC95A18A3023D3114D314D6921CC46BD(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_32, L_34, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GamePlayManager/<LevelCompleted>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLevelCompletedU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5EE0096863D838E09A7EC6A455099DC82CF0378C (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GamePlayManager/<LevelCompleted>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_Reset_m3FA8256D718FE3626C4ABE33A0B17CFFF6F4083B (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_Reset_m3FA8256D718FE3626C4ABE33A0B17CFFF6F4083B_RuntimeMethod_var)));
	}
}
// System.Object GamePlayManager/<LevelCompleted>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_get_Current_m57AF2AA8F9631794EFA959FF1E40B03B74CDD750 (U3CLevelCompletedU3Ed__32_tFF9DFB8D70B4758D514CA792C69BACEE88BF3FD8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePlayManager/<LevelFailed>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33__ctor_mCCF6E9F2CD5E80AF88B417E47132EDA1E0BB2857 (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GamePlayManager/<LevelFailed>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33_System_IDisposable_Dispose_mA181BD085617224DF70666A29F77F68A095D7D02 (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GamePlayManager/<LevelFailed>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelFailedU3Ed__33_MoveNext_m7CA79951456FDC23B241DF70074A1852B7EFE21F (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00b9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// P_LevelFail.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_P_LevelFail_6();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_5, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_8, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// P_BlackScreen.SetActive(true);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_P_BlackScreen_9();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// P_LevelFail.SetActive(true);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_15 = V_1;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_P_LevelFail_6();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// P_BlackScreen.SetActive(false);
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_17 = V_1;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_P_BlackScreen_9();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StopCoroutine(LevelFailed());
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_19 = V_1;
		GamePlayManager_t34BB104AD013D0F8983C486D3ABD35EEF065B6D0 * L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = GamePlayManager_LevelFailed_m8923C379A4EAD36B8F3562AD0DB5131DEA242D4D(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_19, L_21, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GamePlayManager/<LevelFailed>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLevelFailedU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m585B03D75DA084AD08AA5B123447AB299EA24F49 (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GamePlayManager/<LevelFailed>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_Reset_mAAE92A6D8762EA6597BA549C2B5331931280B1F7 (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_Reset_mAAE92A6D8762EA6597BA549C2B5331931280B1F7_RuntimeMethod_var)));
	}
}
// System.Object GamePlayManager/<LevelFailed>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_get_Current_m3A0766025755539A9F9D88F0CE5E1F75E80AEBB9 (U3CLevelFailedU3Ed__33_tE3F1DBBD9DE19E19F08F1D8F6499FF184AD683A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleAdsManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF38070D7A8B802B7031ABCCFA8A22737A21667E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * L_0 = (U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 *)il2cpp_codegen_object_new(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9E6AEF6B7C8A0717BB00F0A647262196B7271836(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GoogleAdsManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9E6AEF6B7C8A0717BB00F0A647262196B7271836 (U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsManager/<>c::<Start>b__3_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__3_0_mF091374F00997AD58B921F7B1F646386E1A6C531 (U3CU3Ec_t0FF73311F05CE07E019A280509FC3467B9F6CF27 * __this, InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 * ___initStatus0, const RuntimeMethod* method)
{
	{
		// MobileAds.Initialize(initStatus => { });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m922208EC2691E82816C084314D6517AB5F85EE22_inline (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_2, (int32_t)L_3);
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Enumerator_get_Current_mFA4853D063467DAFFBDF729420AF7FE91BD77160_gshared_inline (Enumerator_tA0E560D0AB839E2C4C1012238EA327E24F1A1E68 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )__this->get_current_3();
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
