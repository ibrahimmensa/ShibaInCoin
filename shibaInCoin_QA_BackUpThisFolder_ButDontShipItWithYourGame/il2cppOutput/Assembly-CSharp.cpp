#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// Singleton`1<AdsInitializer>
struct Singleton_1_t631EA2F966F8D3CC1E7937E5B97D4F5D69911F9A;
// Singleton`1<GoogleAds>
struct Singleton_1_tC3FB057808F9FDB8993D682527B45C8152997733;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// CharacterDetails[]
struct CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// AdsInitializer
struct AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// CHaracterInfo
struct CHaracterInfo_t08C778B6C7EA61A104A6D03F046208EB35F99D70;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CharacterDetails
struct CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC;
// Character_Interactions
struct Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// CoinWarning
struct CoinWarning_t2BE6751A9B8F115DA720F78342E0C2C1861A27D3;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DrawLine
struct DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GamePlayManager
struct GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42;
// GoogleAds
struct GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// Loading
struct Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED;
// MainMenuManager
struct MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94;
// MainScreen
struct MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Object_Movement
struct Object_Movement_tFE4314A52CAB4F25E01329A640CCAF5039A6F3BB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StoreManager
struct StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Character_Interactions/<Retry>d__5
struct U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C;
// GamePlayManager/<LevelCompleted>d__32
struct U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883;
// GamePlayManager/<LevelFailed>d__33
struct U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01C1EA0321FD298E596F2F859DC5F40D36E2677B;
IL2CPP_EXTERN_C String_t* _stringLiteral034283865E30C0CE8971200466E3585778482E78;
IL2CPP_EXTERN_C String_t* _stringLiteral03E0345113F68A7A72170991D8777B3365231AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral068D9B7B4B9A4B3AAE9402DF3C9C3524C535E040;
IL2CPP_EXTERN_C String_t* _stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral188C1E7793944B8BA9565367C39BADF9EA67A348;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral2125C89B0CDED5CBA6AB97A25614858AC78251F8;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1D937636CFB020695F7D0EB16A71A65E8AA70D;
IL2CPP_EXTERN_C String_t* _stringLiteral2F61CA7623C2DAECF6EFAEE7BA82693C44E21C16;
IL2CPP_EXTERN_C String_t* _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5EA2F6EFFD82311C11121AD44AE63BA8354376;
IL2CPP_EXTERN_C String_t* _stringLiteral413785E787B417D99CA8D014FEC90303EDF1971A;
IL2CPP_EXTERN_C String_t* _stringLiteral537F912086D986A329874B8810F39AF7DE0A9C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral544CD8A820A1B02F3B984AA5C01C036BDD5AC6F5;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676;
IL2CPP_EXTERN_C String_t* _stringLiteral6B60D9181B5A3D802927654CB58780C8EDB509A8;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral75B6CA4FB8DB22D91DF45C8EBA534D73CA55B386;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83;
IL2CPP_EXTERN_C String_t* _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7C91A6B81CD4894B1B4D1BCDFB1492C4BA49161C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECF8FB393160C8D44EBD80BDB79E8E6B5081E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral87828E5384D17067A8B8AA2E0A037D3F1A185F14;
IL2CPP_EXTERN_C String_t* _stringLiteral930B1358F66BE6CB2F4FF18F039AB396AB859F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA6880EA5264F697CB4936ACCA1E5F8B2FE27FAB0;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0;
IL2CPP_EXTERN_C String_t* _stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895;
IL2CPP_EXTERN_C String_t* _stringLiteralC74DC486B381A14EB0E4907B61F034ED9AD52AED;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9D03EB933B0B046F313BCB1BEC2E63D5861A7D;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D;
IL2CPP_EXTERN_C String_t* _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
IL2CPP_EXTERN_C String_t* _stringLiteralE51787EBF3A02DDB9D046253DE238C61262334CA;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF025B32BBA3B30F7B0AE193967663F6AF4F5AD20;
IL2CPP_EXTERN_C String_t* _stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAds_HandleOnAdClosed_mC09A4AA523CA0B05EA3D2F451995E0D3DF533089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAds_HandleOnAdFailedToLoad_m798D50ECAD1FA54F714EA1D21C53EB872AB276B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAds_HandleOnAdLoaded_mD0DC193DB66EA78DC1A60D95135BFD63ED3B894D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAds_HandleOnAdOpening_m0CA29815E31D305735F6E3F3BDA4CE4324A7394C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAds_U3CStartU3Eb__1_0_m9F5F1F7172A901C7F9AC8C3406453F07FC6EB44A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m066AF32CCC7417DC5105E50955CB687F86051F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mC6232579750974E01FBE34274BBA5E35BE475A39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m1B9E28B11F9332FFA858B2115698695B2035692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_Reset_m2AE5C864966AF7F013E3C822B198ED8A0E1A4D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_Reset_mB4CC433DD0C59CA8BAB2700F8D5DA46E1B43A49D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRetryU3Ed__5_System_Collections_IEnumerator_Reset_mAFF87AB321B725005553ACA3F3F33F99031FE9DE_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;
};

struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_5;
};

// CharacterDetails
struct CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC  : public RuntimeObject
{
	// System.String CharacterDetails::Character_Name
	String_t* ___Character_Name_0;
	// System.Boolean CharacterDetails::CanUnlockByAds
	bool ___CanUnlockByAds_1;
	// System.Boolean CharacterDetails::ComingSoon
	bool ___ComingSoon_2;
	// System.Boolean CharacterDetails::IsLocked
	bool ___IsLocked_3;
	// System.Int32 CharacterDetails::AdsToWatch_ToUnlock
	int32_t ___AdsToWatch_ToUnlock_4;
	// System.Int32 CharacterDetails::AdsWatched
	int32_t ___AdsWatched_5;
	// System.Int32 CharacterDetails::NeedCoins_ToUnlock
	int32_t ___NeedCoins_ToUnlock_6;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_9;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_2;
};

// Character_Interactions/<Retry>d__5
struct U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C  : public RuntimeObject
{
	// System.Int32 Character_Interactions/<Retry>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Character_Interactions/<Retry>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Character_Interactions Character_Interactions/<Retry>d__5::<>4__this
	Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* ___U3CU3E4__this_2;
};

// GamePlayManager/<LevelCompleted>d__32
struct U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883  : public RuntimeObject
{
	// System.Int32 GamePlayManager/<LevelCompleted>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GamePlayManager/<LevelCompleted>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GamePlayManager GamePlayManager/<LevelCompleted>d__32::<>4__this
	GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* ___U3CU3E4__this_2;
};

// GamePlayManager/<LevelFailed>d__33
struct U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0  : public RuntimeObject
{
	// System.Int32 GamePlayManager/<LevelFailed>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GamePlayManager/<LevelFailed>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GamePlayManager GamePlayManager/<LevelFailed>d__33::<>4__this
	GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* ___U3CU3E4__this_2;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
struct Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____current_3;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CHaracterInfo
struct CHaracterInfo_t08C778B6C7EA61A104A6D03F046208EB35F99D70  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// CharacterDetails[] CHaracterInfo::CD
	CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4* ___CD_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Singleton`1<AdsInitializer>
struct Singleton_1_t631EA2F966F8D3CC1E7937E5B97D4F5D69911F9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t631EA2F966F8D3CC1E7937E5B97D4F5D69911F9A_StaticFields
{
	// T Singleton`1::instance
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* ___instance_4;
};

// Singleton`1<GoogleAds>
struct Singleton_1_tC3FB057808F9FDB8993D682527B45C8152997733  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tC3FB057808F9FDB8993D682527B45C8152997733_StaticFields
{
	// T Singleton`1::instance
	GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* ___instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Character_Interactions
struct Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Character_Interactions::IsGamePlay
	bool ___IsGamePlay_4;
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// CoinWarning
struct CoinWarning_t2BE6751A9B8F115DA720F78342E0C2C1861A27D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DrawLine
struct DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DrawLine::linePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___linePrefab_4;
	// UnityEngine.GameObject DrawLine::currentLine
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentLine_5;
	// UnityEngine.LineRenderer DrawLine::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_6;
	// UnityEngine.EdgeCollider2D DrawLine::EdgeCollider2D
	EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* ___EdgeCollider2D_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> DrawLine::fingerPositions
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___fingerPositions_8;
	// UnityEngine.GameObject DrawLine::Ball
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ball_9;
	// UnityEngine.Transform DrawLine::WayPointParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___WayPointParent_10;
	// UnityEngine.GameObject DrawLine::Obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Obj_11;
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
};

// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// GamePlayManager
struct GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GamePlayManager::P_Levelcomplete
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___P_Levelcomplete_5;
	// UnityEngine.GameObject GamePlayManager::P_LevelFail
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___P_LevelFail_6;
	// UnityEngine.GameObject GamePlayManager::P_Pause
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___P_Pause_7;
	// UnityEngine.GameObject GamePlayManager::P_Loading
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___P_Loading_8;
	// UnityEngine.GameObject GamePlayManager::P_BlackScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___P_BlackScreen_9;
	// UnityEngine.GameObject GamePlayManager::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_10;
	// UnityEngine.GameObject GamePlayManager::PlayerObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerObj_11;
	// System.Int32 GamePlayManager::level
	int32_t ___level_12;
	// System.Boolean GamePlayManager::levelCom
	bool ___levelCom_13;
	// UnityEngine.UI.Text GamePlayManager::Leveltxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Leveltxt_14;
	// UnityEngine.UI.Text GamePlayManager::dubbleScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dubbleScore_15;
	// UnityEngine.GameObject GamePlayManager::LevelsManagr
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LevelsManagr_16;
	// UnityEngine.GameObject GamePlayManager::LevelPosition
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LevelPosition_17;
	// UnityEngine.UI.Text GamePlayManager::Cointxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Cointxt_18;
	// UnityEngine.GameObject GamePlayManager::Sound
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Sound_19;
	// UnityEngine.GameObject GamePlayManager::BG_Music
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BG_Music_20;
	// UnityEngine.AudioSource GamePlayManager::S_Complete
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___S_Complete_21;
	// UnityEngine.AudioSource GamePlayManager::S_Failed
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___S_Failed_22;
	// System.Int32 GamePlayManager::totl
	int32_t ___totl_23;
	// UnityEngine.GameObject GamePlayManager::linePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___linePrefab_24;
	// UnityEngine.GameObject GamePlayManager::currentLine
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentLine_25;
	// UnityEngine.LineRenderer GamePlayManager::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_26;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> GamePlayManager::fingerPositions
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___fingerPositions_27;
	// UnityEngine.GameObject GamePlayManager::Ball
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ball_28;
	// UnityEngine.Transform GamePlayManager::WayPointParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___WayPointParent_29;
	// UnityEngine.GameObject GamePlayManager::Obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Obj_30;
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
};

struct GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields
{
	// GamePlayManager GamePlayManager::instance
	GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* ___instance_4;
};

// Loading
struct Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MainMenuManager
struct MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MainMenuManager::TotalCoins
	int32_t ___TotalCoins_4;
	// UnityEngine.UI.Text MainMenuManager::CoinsTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CoinsTxt_5;
	// UnityEngine.GameObject MainMenuManager::Sound
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Sound_7;
	// UnityEngine.GameObject MainMenuManager::BG_Music
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BG_Music_8;
	// UnityEngine.GameObject MainMenuManager::SoundBtn_On
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SoundBtn_On_9;
	// UnityEngine.GameObject MainMenuManager::SoundBtn_Off
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SoundBtn_Off_10;
	// UnityEngine.GameObject MainMenuManager::MusicBtn_On
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MusicBtn_On_11;
	// UnityEngine.GameObject MainMenuManager::MusicBtn_Off
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MusicBtn_Off_12;
};

struct MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_StaticFields
{
	// MainMenuManager MainMenuManager::instance
	MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* ___instance_6;
};

// MainScreen
struct MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 Movement::minPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minPos_4;
	// UnityEngine.Vector2 Movement::maxPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maxPos_5;
	// UnityEngine.Transform Movement::moveIf
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___moveIf_6;
	// UnityEngine.Vector3 Movement::movePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___movePos_7;
	// UnityEngine.Vector2 Movement::moveValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___moveValue_8;
	// System.Single Movement::moveSpeed
	float ___moveSpeed_9;
};

// Object_Movement
struct Object_Movement_tFE4314A52CAB4F25E01329A640CCAF5039A6F3BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Object_Movement::Snake
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Snake_4;
	// UnityEngine.Transform Object_Movement::Start_point
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Start_point_5;
	// UnityEngine.Transform Object_Movement::End_point
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___End_point_6;
	// System.Single Object_Movement::speed
	float ___speed_7;
	// System.Boolean Object_Movement::started
	bool ___started_8;
};

// StoreManager
struct StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CHaracterInfo StoreManager::shibaData
	CHaracterInfo_t08C778B6C7EA61A104A6D03F046208EB35F99D70* ___shibaData_4;
	// UnityEngine.GameObject[] StoreManager::ShibaLocker
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ShibaLocker_5;
	// System.Int32[] StoreManager::ShibaPrices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ShibaPrices_6;
	// UnityEngine.GameObject StoreManager::CoinWarning
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CoinWarning_7;
	// UnityEngine.UI.Text StoreManager::Cointxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Cointxt_8;
	// UnityEngine.GameObject StoreManager::contant
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contant_9;
	// UnityEngine.UI.Image[] StoreManager::SelectedShiba
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___SelectedShiba_10;
	// UnityEngine.RectTransform StoreManager::panel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___panel_11;
	// UnityEngine.GameObject[] StoreManager::bttn
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bttn_12;
	// UnityEngine.RectTransform StoreManager::center
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___center_13;
	// System.Single[] StoreManager::distance
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___distance_14;
	// System.Boolean StoreManager::draging
	bool ___draging_15;
	// System.Int32 StoreManager::bttnDistance
	int32_t ___bttnDistance_16;
	// System.Int32 StoreManager::minButtonNum
	int32_t ___minButtonNum_17;
	// UnityEngine.UI.Text StoreManager::AdsCount
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___AdsCount_18;
	// UnityEngine.GameObject StoreManager::LockCover
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LockCover_19;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AdsInitializer
struct AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2  : public Singleton_1_t631EA2F966F8D3CC1E7937E5B97D4F5D69911F9A
{
	// System.String AdsInitializer::_androidGameId
	String_t* ____androidGameId_5;
	// System.String AdsInitializer::_iOSGameId
	String_t* ____iOSGameId_6;
	// System.Boolean AdsInitializer::_testMode
	bool ____testMode_7;
	// System.String AdsInitializer::_gameId
	String_t* ____gameId_8;
	// System.String AdsInitializer::_androidAdUnitId
	String_t* ____androidAdUnitId_9;
	// System.String AdsInitializer::_iOSAdUnitId
	String_t* ____iOSAdUnitId_10;
	// System.String AdsInitializer::_androidAdUnitIdInterstitial
	String_t* ____androidAdUnitIdInterstitial_11;
	// System.String AdsInitializer::_iOsAdUnitIdInterstitial
	String_t* ____iOsAdUnitIdInterstitial_12;
	// RewardedAdType AdsInitializer::currentAdType
	int32_t ___currentAdType_13;
	// System.String AdsInitializer::_adUnitId
	String_t* ____adUnitId_14;
	// System.String AdsInitializer::_adUnitIdInterstitial
	String_t* ____adUnitIdInterstitial_15;
};

// GoogleAds
struct GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C  : public Singleton_1_tC3FB057808F9FDB8993D682527B45C8152997733
{
	// GoogleMobileAds.Api.BannerView GoogleAds::bannerView
	BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* ___bannerView_5;
	// GoogleMobileAds.Api.InterstitialAd GoogleAds::interstitial
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___interstitial_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
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
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CharacterDetails[]
struct CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4  : public RuntimeArray
{
	ALIGN_FIELD (8) CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC* m_Items[1];

	inline CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared (const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_gshared (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_gshared_inline (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_gshared (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T Singleton`1<AdsInitializer>::get_Instance()
inline AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A (const RuntimeMethod* method)
{
	return ((  AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void AdsInitializer::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343 (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) ;
// System.Void AdsInitializer::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_LoadAd_m5D53B0A75D0CB1D1CA6F6C072D764C49E66522F6 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) ;
// System.Void AdsInitializer::LoadAdInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_LoadAdInterstitial_m9B428F99DDBAC00B04E373EE9D16CCF417421589 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void Singleton`1<AdsInitializer>::.ctor()
inline void Singleton_1__ctor_mC6232579750974E01FBE34274BBA5E35BE475A39 (Singleton_1_t631EA2F966F8D3CC1E7937E5B97D4F5D69911F9A* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t631EA2F966F8D3CC1E7937E5B97D4F5D69911F9A*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Character_Interactions/<Retry>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5__ctor_m3F210D0BB93AF08F2753316FFAF546EEC700F345 (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Character_Interactions::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_Interactions_Retry_mC97F23119BB3E500F3F22F2D21D7A2F73BDE646F (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GamePlayManager::levelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelComplete_mBA1A44469AEF4EF308ECFBC80A35CBD55355A902 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// System.Void GamePlayManager::levelFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelFail_mCA80DB5D76FD5E512B855CD78A52F128B245B5BA (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Void DrawLine::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_CreateLine_mBD08F12001FFA85CE53DC40119FA0B714D5F5183 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void DrawLine::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_UpdateLine_m2E32A79483B32648F787FEADB9A4B44FE5DEAA6D (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newFingerPos0, const RuntimeMethod* method) ;
// System.Void DrawLine::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_GenerateWayPoints_mC49E46A31F4D44504B726F3B42CAEBBEF1F54590 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) ;
// System.Void DrawLine::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_MoveCharacter_m269D6BE1E80173FF7D0910002995E4EFE032CF99 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.EdgeCollider2D>()
inline EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_gshared)(__this, method);
}
// System.Void UnityEngine.EdgeCollider2D::set_points(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeCollider2D_set_points_mFF49E39867F376E313D50F57531C28A1F715D02F (EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
inline Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
inline void Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931*, const RuntimeMethod*))Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_inline (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931*, const RuntimeMethod*))Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
inline bool Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931*, const RuntimeMethod*))Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void GamePlayManager::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_CreateLine_mDFD7AD8C3EDC51070A8932DFE05FC94FADF002A9 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// System.Void GamePlayManager::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_UpdateLine_mF791A4807143A00535E027CFD109D2B85E5DF3A6 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newFingerPos0, const RuntimeMethod* method) ;
// System.Void GamePlayManager::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_GenerateWayPoints_m876082A1E5E8B2E66D514FD6D2FB8448E381C23B (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// System.Void GamePlayManager::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_MoveCharacter_m8588AF5D679D06924981574A1F6903EFCB877FEC (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GamePlayManager::LevelCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelCompleted_m335A47ECB13C23E7F2186DF685ADDCC163240D16 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GamePlayManager::LevelFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelFailed_mDA6DD23823665304B86C60DB5D9CBABA5ADDA4AD (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) ;
// System.Void AdsInitializer::ShowAdInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_ShowAdInterstitial_m82E5CF1655BBF4EEF28EC1D41C15A41B29470789 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) ;
// System.Void GamePlayManager/<LevelCompleted>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32__ctor_m70122AD2907ED9830965689B9E2FC85E5EE6CCBD (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GamePlayManager/<LevelFailed>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33__ctor_m3B802102C12380DA89AC4B7960922501FB1A5530 (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void AdsInitializer::ShowAd(RewardedAdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_ShowAd_m421F6AA93E15EAC4B56D41153039282472E3A256 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___position2, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85 (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___adUnitId0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189 (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void GoogleAds::RequestInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_RequestInterstitial_m32BE1F9EF1F7E3F12842D099E2DF4DDD631EF495 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) ;
// System.Void Singleton`1<GoogleAds>::.ctor()
inline void Singleton_1__ctor_m066AF32CCC7417DC5105E50955CB687F86051F94 (Singleton_1_tC3FB057808F9FDB8993D682527B45C8152997733* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC3FB057808F9FDB8993D682527B45C8152997733*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void GoogleAds::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_RequestBanner_mC5EB68248D8C9FEEE4A45666AFE7AFD2F9640A97 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) ;
// T Singleton`1<GoogleAds>::get_Instance()
inline GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* Singleton_1_get_Instance_m1B9E28B11F9332FFA858B2115698695B2035692F (const RuntimeMethod* method)
{
	return ((  GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared)(method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Void StoreManager::LerpToButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_LerpToButton_m66BFE90ECBAE1B54DD8CBED0F0EF1F4396CFB765 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, int32_t ___position0, const RuntimeMethod* method) ;
// System.Void StoreManager::selectShiba(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_selectShiba_mE86422058573CACF6AD30E3027C3E2E6420A5E08 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, int32_t ___ShibaNum0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void CoinWarning::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning_Start_m9DDE59FA9BAEEEF71DA55650149C64470982B4BA (CoinWarning_t2BE6751A9B8F115DA720F78342E0C2C1861A27D3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CoinWarning::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning_Update_m74B6A6774CB96FB9A2CB6624B75D9DB3ED4739CF (CoinWarning_t2BE6751A9B8F115DA720F78342E0C2C1861A27D3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CoinWarning::turnOffObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning_turnOffObj_mE1ADE327D260DF32D25E4349B7AA7F72221E4277 (CoinWarning_t2BE6751A9B8F115DA720F78342E0C2C1861A27D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Transform>().gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CoinWarning::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinWarning__ctor_m01481D66A043F11EBF99DE5FC5D8204A276BAA41 (CoinWarning_t2BE6751A9B8F115DA720F78342E0C2C1861A27D3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Awake_mACC9CCA53B481EA603EC44E14E6E312F905F2728 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// moveIf = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___moveIf_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveIf_6), (void*)L_0);
		// movePos = moveIf.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___moveIf_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___movePos_7 = L_2;
		// moveValue = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		__this->___moveValue_8 = L_3;
		// }
		return;
	}
}
// System.Void Movement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_FixedUpdate_mBAFAFB0C3B305F3F3FCDE7E0AE3B61C89E84B6CC (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// movePos.x += moveSpeed * moveValue.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___movePos_7);
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___moveSpeed_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___moveValue_8);
		float L_6 = L_5->___x_0;
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_6))));
		// movePos.y += moveSpeed * moveValue.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___movePos_7);
		float* L_8 = (&L_7->___y_3);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = __this->___moveSpeed_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___moveValue_8);
		float L_13 = L_12->___y_1;
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_11, L_13))));
		// if(movePos.x < minPos.x)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___movePos_7);
		float L_15 = L_14->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___minPos_4);
		float L_17 = L_16->___x_0;
		V_0 = (bool)((((float)L_15) < ((float)L_17))? 1 : 0);
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_009d;
		}
	}
	{
		// moveValue.x *= -1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___moveValue_8);
		float* L_20 = (&L_19->___x_0);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, (-1.0f)));
		// movePos.x += minPos.x - movePos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___movePos_7);
		float* L_24 = (&L_23->___x_2);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (&__this->___minPos_4);
		float L_28 = L_27->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___movePos_7);
		float L_30 = L_29->___x_2;
		*((float*)L_25) = (float)((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_subtract(L_28, L_30))));
		goto IL_00f5;
	}

IL_009d:
	{
		// else if(movePos.x > maxPos.x)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___movePos_7);
		float L_32 = L_31->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___maxPos_5);
		float L_34 = L_33->___x_0;
		V_1 = (bool)((((float)L_32) > ((float)L_34))? 1 : 0);
		bool L_35 = V_1;
		if (!L_35)
		{
			goto IL_00f5;
		}
	}
	{
		// moveValue.x *= -1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&__this->___moveValue_8);
		float* L_37 = (&L_36->___x_0);
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		*((float*)L_38) = (float)((float)il2cpp_codegen_multiply(L_39, (-1.0f)));
		// movePos.x += maxPos.x - movePos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___movePos_7);
		float* L_41 = (&L_40->___x_2);
		float* L_42 = L_41;
		float L_43 = *((float*)L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___maxPos_5);
		float L_45 = L_44->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->___movePos_7);
		float L_47 = L_46->___x_2;
		*((float*)L_42) = (float)((float)il2cpp_codegen_add(L_43, ((float)il2cpp_codegen_subtract(L_45, L_47))));
	}

IL_00f5:
	{
		// if (movePos.y < minPos.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&__this->___movePos_7);
		float L_49 = L_48->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = (&__this->___minPos_4);
		float L_51 = L_50->___y_1;
		V_2 = (bool)((((float)L_49) < ((float)L_51))? 1 : 0);
		bool L_52 = V_2;
		if (!L_52)
		{
			goto IL_014f;
		}
	}
	{
		// moveValue.y *= -1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53 = (&__this->___moveValue_8);
		float* L_54 = (&L_53->___y_1);
		float* L_55 = L_54;
		float L_56 = *((float*)L_55);
		*((float*)L_55) = (float)((float)il2cpp_codegen_multiply(L_56, (-1.0f)));
		// movePos.y += minPos.y - movePos.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = (&__this->___movePos_7);
		float* L_58 = (&L_57->___y_3);
		float* L_59 = L_58;
		float L_60 = *((float*)L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___minPos_4);
		float L_62 = L_61->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_63 = (&__this->___movePos_7);
		float L_64 = L_63->___y_3;
		*((float*)L_59) = (float)((float)il2cpp_codegen_add(L_60, ((float)il2cpp_codegen_subtract(L_62, L_64))));
		goto IL_01a7;
	}

IL_014f:
	{
		// else if (movePos.y > maxPos.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = (&__this->___movePos_7);
		float L_66 = L_65->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = (&__this->___maxPos_5);
		float L_68 = L_67->___y_1;
		V_3 = (bool)((((float)L_66) > ((float)L_68))? 1 : 0);
		bool L_69 = V_3;
		if (!L_69)
		{
			goto IL_01a7;
		}
	}
	{
		// moveValue.y *= -1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = (&__this->___moveValue_8);
		float* L_71 = (&L_70->___y_1);
		float* L_72 = L_71;
		float L_73 = *((float*)L_72);
		*((float*)L_72) = (float)((float)il2cpp_codegen_multiply(L_73, (-1.0f)));
		// movePos.y += maxPos.y - movePos.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = (&__this->___movePos_7);
		float* L_75 = (&L_74->___y_3);
		float* L_76 = L_75;
		float L_77 = *((float*)L_76);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78 = (&__this->___maxPos_5);
		float L_79 = L_78->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_80 = (&__this->___movePos_7);
		float L_81 = L_80->___y_3;
		*((float*)L_76) = (float)((float)il2cpp_codegen_add(L_77, ((float)il2cpp_codegen_subtract(L_79, L_81))));
	}

IL_01a7:
	{
		// moveIf.position = movePos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = __this->___moveIf_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = __this->___movePos_7;
		NullCheck(L_82);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_82, L_83, NULL);
		// }
		return;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mCB72C1AD57256D73959D74FB86C5D0AA69EAE7ED (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// private float moveSpeed = 0.04f;
		__this->___moveSpeed_9 = (0.0399999991f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AdsInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_Awake_m04671CB71AEE8EF08CC710D12FA78A141067E377 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5EA2F6EFFD82311C11121AD44AE63BA8354376);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(AdsInitializer.Instance  != this)
		AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* L_0;
		L_0 = Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A(Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001e:
	{
		// Debug.Log("Initializing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C5EA2F6EFFD82311C11121AD44AE63BA8354376, NULL);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// InitializeAds();
		AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B60D9181B5A3D802927654CB58780C8EDB509A8);
		s_Il2CppMethodInitialized = true;
	}
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B2_0 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B3_1 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B5_0 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B6_1 = NULL;
	{
		// _gameId = (Application.platform == RuntimePlatform.IPhonePlayer)
		//     ? _iOSGameId
		//     : _androidGameId;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->____androidGameId_5;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		String_t* L_2 = __this->____iOSGameId_6;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->____gameId_8 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____gameId_8), (void*)G_B3_0);
		// Advertisement.Initialize(_gameId, _testMode, this);
		String_t* L_3 = __this->____gameId_8;
		bool L_4 = __this->____testMode_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343(L_3, L_4, __this, NULL);
		// _adUnitId = _androidAdUnitId;
		String_t* L_5 = __this->____androidAdUnitId_9;
		__this->____adUnitId_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_14), (void*)L_5);
		// Debug.Log("Android initializing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6B60D9181B5A3D802927654CB58780C8EDB509A8, NULL);
		// _adUnitIdInterstitial = (Application.platform == RuntimePlatform.IPhonePlayer)
		//     ? _iOsAdUnitIdInterstitial
		//     : _androidAdUnitIdInterstitial;
		int32_t L_6;
		L_6 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B4_0 = __this;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			G_B5_0 = __this;
			goto IL_0058;
		}
	}
	{
		String_t* L_7 = __this->____androidAdUnitIdInterstitial_11;
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_005e;
	}

IL_0058:
	{
		String_t* L_8 = __this->____iOsAdUnitIdInterstitial_12;
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
	}

IL_005e:
	{
		NullCheck(G_B6_1);
		G_B6_1->____adUnitIdInterstitial_15 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->____adUnitIdInterstitial_15), (void*)G_B6_0);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnInitializationComplete_m6242C2C23BE6944E499C403BA6A3CD57BC0D7A7F (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Unity Ads initialization complete.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676, NULL);
		// LoadAd();
		AdsInitializer_LoadAd_m5D53B0A75D0CB1D1CA6F6C072D764C49E66522F6(__this, NULL);
		// LoadAdInterstitial();
		AdsInitializer_LoadAdInterstitial_m9B428F99DDBAC00B04E373EE9D16CCF417421589(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnInitializationFailed_m09D61E0D7B4209B86ECB588A714B59680997410C (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
		Il2CppFakeBox<int32_t> L_0(UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var, (&___error0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2 = ___message1;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259, L_1, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_LoadAd_m5D53B0A75D0CB1D1CA6F6C072D764C49E66522F6 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_14;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_14;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnUnityAdsAdLoaded_mA1F87CA78E6CAA0F67120E8A59F6F9D59F25465D (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2125C89B0CDED5CBA6AB97A25614858AC78251F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF025B32BBA3B30F7B0AE193967663F6AF4F5AD20);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// Debug.Log("Ad Loaded: " + adUnitId);
		String_t* L_0 = ___adUnitId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if (adUnitId.Equals(_adUnitId))
		String_t* L_2 = ___adUnitId0;
		String_t* L_3 = __this->____adUnitId_14;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log("Rewarded Ad loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF025B32BBA3B30F7B0AE193967663F6AF4F5AD20, NULL);
	}

IL_002f:
	{
		// if (adUnitId.Equals(_adUnitIdInterstitial))
		String_t* L_6 = ___adUnitId0;
		String_t* L_7 = __this->____adUnitIdInterstitial_15;
		NullCheck(L_6);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.Log("Interstitial Loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2125C89B0CDED5CBA6AB97A25614858AC78251F8, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void AdsInitializer::ShowAd(RewardedAdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_ShowAd_m421F6AA93E15EAC4B56D41153039282472E3A256 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1D937636CFB020695F7D0EB16A71A65E8AA70D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Showing Ad");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2C1D937636CFB020695F7D0EB16A71A65E8AA70D, NULL);
		// currentAdType = type;
		int32_t L_0 = ___type0;
		__this->___currentAdType_13 = L_0;
		// Advertisement.Show(_adUnitId, this);
		String_t* L_1 = __this->____adUnitId_14;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnUnityAdsShowComplete_mA362F2257A8D53BC8309FF85BB8ACD69F54C6539 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, String_t* ___adUnitId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (adUnitId.Equals(_adUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		String_t* L_0 = ___adUnitId0;
		String_t* L_1 = __this->____adUnitId_14;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, (&___showCompletionState1));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0145;
		}
	}
	{
		// Debug.Log("Unity Ads Rewarded Ad Completed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_8 = __this->____adUnitId_14;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_8, __this, NULL);
		// switch (currentAdType)
		int32_t L_9 = __this->___currentAdType_13;
		V_2 = L_9;
		int32_t L_10 = V_2;
		V_1 = L_10;
		int32_t L_11 = V_1;
		switch (L_11)
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_0142;
			}
			case 2:
			{
				goto IL_0142;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_0122;
			}
		}
	}
	{
		goto IL_0142;
	}

IL_006d:
	{
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 15);
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)15))), NULL);
		// break;
		goto IL_0142;
	}

IL_008a:
	{
		// GamePlayManager.instance.totl = GamePlayManager.instance.totl * 2;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_13 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_14 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_14);
		int32_t L_15 = L_14->___totl_23;
		NullCheck(L_13);
		L_13->___totl_23 = ((int32_t)il2cpp_codegen_multiply(L_15, 2));
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + GamePlayManager.instance.totl);
		int32_t L_16;
		L_16 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_17 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_17);
		int32_t L_18 = L_17->___totl_23;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_add(L_16, L_18)), NULL);
		// GamePlayManager.instance.dubbleScore.text = GamePlayManager.instance.totl.ToString();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_19 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_19);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = L_19->___dubbleScore_15;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_21 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_21);
		int32_t* L_22 = (&L_21->___totl_23);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_22, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// GamePlayManager.instance.P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_24 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___P_Levelcomplete_5;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_26, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_28, 0, NULL);
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30;
		L_30 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_29, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		int32_t L_31;
		L_31 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_3 = L_31;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_32);
		// break;
		goto IL_0142;
	}

IL_0122:
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
		int32_t L_33;
		L_33 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add(L_33, 1)), NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// break;
		goto IL_0142;
	}

IL_0142:
	{
		goto IL_014e;
	}

IL_0145:
	{
		// LoadAdInterstitial();
		AdsInitializer_LoadAdInterstitial_m9B428F99DDBAC00B04E373EE9D16CCF417421589(__this, NULL);
	}

IL_014e:
	{
		// }
		return;
	}
}
// System.Void AdsInitializer::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnUnityAdsFailedToLoad_m7C278A0F61A1E809321CAC2EC89ED0B2CBF6C9FB (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// LoadAd();
		AdsInitializer_LoadAd_m5D53B0A75D0CB1D1CA6F6C072D764C49E66522F6(__this, NULL);
		// LoadAdInterstitial();
		AdsInitializer_LoadAdInterstitial_m9B428F99DDBAC00B04E373EE9D16CCF417421589(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnUnityAdsShowFailure_m50F90BFE6CA4B3035C28A4EB1351B3B7EEC20F8C (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// LoadAd();
		AdsInitializer_LoadAd_m5D53B0A75D0CB1D1CA6F6C072D764C49E66522F6(__this, NULL);
		// LoadAdInterstitial();
		AdsInitializer_LoadAdInterstitial_m9B428F99DDBAC00B04E373EE9D16CCF417421589(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnUnityAdsShowStart_m880E4FC607387CB9BBF3F4E99B48AD2243C961E3 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowStart(string adUnitId) { }
		return;
	}
}
// System.Void AdsInitializer::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnUnityAdsShowClick_mF68AF9BA7629EED963E58DA5B73B65FF6FD3C4ED (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string adUnitId) { }
		return;
	}
}
// System.Void AdsInitializer::LoadAdInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_LoadAdInterstitial_m9B428F99DDBAC00B04E373EE9D16CCF417421589 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitIdInterstitial);
		String_t* L_0 = __this->____adUnitIdInterstitial_15;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_adUnitIdInterstitial, this);
		String_t* L_2 = __this->____adUnitIdInterstitial_15;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::ShowAdInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_ShowAdInterstitial_m82E5CF1655BBF4EEF28EC1D41C15A41B29470789 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Showing Ad: " + _adUnitIdInterstitial);
		String_t* L_0 = __this->____adUnitIdInterstitial_15;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Show(_adUnitIdInterstitial, this);
		String_t* L_2 = __this->____adUnitIdInterstitial_15;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer__ctor_m99EF1AA6834703CA8F5F965F86A325105DA88A46 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mC6232579750974E01FBE34274BBA5E35BE475A39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] bool _testMode = true;
		__this->____testMode_7 = (bool)1;
		// [SerializeField] string _androidAdUnitId = "Rewarded_Android";
		__this->____androidAdUnitId_9 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_9), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		// [SerializeField] string _iOSAdUnitId = "Rewarded_iOS";
		__this->____iOSAdUnitId_10 = _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOSAdUnitId_10), (void*)_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		// [SerializeField] string _androidAdUnitIdInterstitial = "Interstitial_Android";
		__this->____androidAdUnitIdInterstitial_11 = _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitIdInterstitial_11), (void*)_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		// [SerializeField] string _iOsAdUnitIdInterstitial = "Interstitial_iOS";
		__this->____iOsAdUnitIdInterstitial_12 = _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iOsAdUnitIdInterstitial_12), (void*)_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		// string _adUnitId = null; // This will remain null for unsupported platforms
		__this->____adUnitId_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_14), (void*)(String_t*)NULL);
		// string _adUnitIdInterstitial = null;
		__this->____adUnitIdInterstitial_15 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitIdInterstitial_15), (void*)(String_t*)NULL);
		Singleton_1__ctor_mC6232579750974E01FBE34274BBA5E35BE475A39(__this, Singleton_1__ctor_mC6232579750974E01FBE34274BBA5E35BE475A39_RuntimeMethod_var);
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
// System.Void CHaracterInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHaracterInfo__ctor_m6F95DDBF3E16209F7EF7394D939A3FE75082D52D (CHaracterInfo_t08C778B6C7EA61A104A6D03F046208EB35F99D70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CharacterDetails[] CD = new CharacterDetails[11];
		CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4* L_0 = (CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4*)(CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4*)SZArrayNew(CharacterDetailsU5BU5D_tEBBC356A11AC87322FB92C8C14022A888D2DCAE4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		__this->___CD_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CD_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void CharacterDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterDetails__ctor_m4AB7590CBC925542AE9309F5435B49463611584F (CharacterDetails_tACA8EE7DE3ABEC9EA1319CA125E0F8484185AAAC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLocked = true;
		__this->___IsLocked_3 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Character_Interactions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_OnEnable_m4BE5C124E29D631917C887F49DF166E44C3646EC (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, const RuntimeMethod* method) 
{
	{
		// IsGamePlay = true;
		__this->___IsGamePlay_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Character_Interactions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_Start_m1878FB9C070B20ECF5766FCAFE796C1998BFD52B (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Character_Interactions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_Update_m9A1A605F8FBA58539C0BCB5BFB414FCB8508E713 (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Character_Interactions::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_OnCollisionEnter2D_m443D323D61BE64B1DBA7BE1E34F6200C3AC45D1C (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Character_Interactions::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_Interactions_Retry_mC97F23119BB3E500F3F22F2D21D7A2F73BDE646F (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* L_0 = (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C*)il2cpp_codegen_object_new(U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRetryU3Ed__5__ctor_m3F210D0BB93AF08F2753316FFAF546EEC700F345(L_0, 0, NULL);
		U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Character_Interactions::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions_OnTriggerEnter2D_m4138EA0E3EA9FDE44E587F2C2E505025FD4C9637 (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var);
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
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// GamePlayManager.instance.Move = false;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_0 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		L_0->___Move_32 = (bool)0;
		// if (collision.gameObject.CompareTag("Basket"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00ad;
		}
	}
	{
		// Debug.Log("Android , Basket collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7C91A6B81CD4894B1B4D1BCDFB1492C4BA49161C, NULL);
		// if (!IsGamePlay)
		bool L_5 = __this->___IsGamePlay_4;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// return;
		goto IL_019a;
	}

IL_0041:
	{
		// IsGamePlay = false;
		__this->___IsGamePlay_4 = (bool)0;
		// StopCoroutine(Retry());
		RuntimeObject* L_7;
		L_7 = Character_Interactions_Retry_mC97F23119BB3E500F3F22F2D21D7A2F73BDE646F(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_7, NULL);
		// Debug.Log("basket");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, NULL);
		// gameObject.GetComponent<CircleCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_9;
		L_9 = GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D(L_8, GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// if (PlayerPrefs.GetInt("Vibrate") == 1)
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9(NULL);
	}

IL_008b:
	{
		// GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_12 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___Player_10;
		NullCheck(L_13);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14;
		L_14 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_13, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_14);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_14, 2, NULL);
		// GamePlayManager.instance.levelComplete();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_15 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_15);
		GamePlayManager_levelComplete_mBA1A44469AEF4EF308ECFBC80A35CBD55355A902(L_15, NULL);
	}

IL_00ad:
	{
		// if (collision.gameObject.CompareTag("Hurdle"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = ___collision0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_17, _stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0, NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0152;
		}
	}
	{
		// Debug.Log("Android , Hurdle collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral75B6CA4FB8DB22D91DF45C8EBA534D73CA55B386, NULL);
		// if (!IsGamePlay)
		bool L_20 = __this->___IsGamePlay_4;
		V_4 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00e4;
		}
	}
	{
		// return;
		goto IL_019a;
	}

IL_00e4:
	{
		// IsGamePlay = false;
		__this->___IsGamePlay_4 = (bool)0;
		// StopCoroutine(Retry());
		RuntimeObject* L_22;
		L_22 = Character_Interactions_Retry_mC97F23119BB3E500F3F22F2D21D7A2F73BDE646F(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_22, NULL);
		// Debug.Log("Hurdle");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBD0DD55124900FD1F40F19AB7555CC9B4C9CBCA0, NULL);
		// gameObject.GetComponent<CircleCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_23);
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_24;
		L_24 = GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D(L_23, GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)0, NULL);
		// if (PlayerPrefs.GetInt("Vibrate") == 1)
		int32_t L_25;
		L_25 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, NULL);
		V_5 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0130;
		}
	}
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9(NULL);
	}

IL_0130:
	{
		// GamePlayManager.instance.Player.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_27 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___Player_10;
		NullCheck(L_28);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_29;
		L_29 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_28, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_29);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_29, 2, NULL);
		// GamePlayManager.instance.levelFail();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_30 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_30);
		GamePlayManager_levelFail_mCA80DB5D76FD5E512B855CD78A52F128B245B5BA(L_30, NULL);
	}

IL_0152:
	{
		// if (collision.gameObject.CompareTag("Ground"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_31 = ___collision0;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_32, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_019a;
		}
	}
	{
		// Debug.Log("Android , ground collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC74DC486B381A14EB0E4907B61F034ED9AD52AED, NULL);
		// if (!IsGamePlay)
		bool L_35 = __this->___IsGamePlay_4;
		V_7 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_0185;
		}
	}
	{
		// return;
		goto IL_019a;
	}

IL_0185:
	{
		// IsGamePlay = false;
		__this->___IsGamePlay_4 = (bool)0;
		// StartCoroutine(Retry());
		RuntimeObject* L_37;
		L_37 = Character_Interactions_Retry_mC97F23119BB3E500F3F22F2D21D7A2F73BDE646F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
	}

IL_019a:
	{
		// }
		return;
	}
}
// System.Void Character_Interactions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Interactions__ctor_m360F90CC122C21DB984D3638228116EA9ED92130 (Character_Interactions_t632FFE6C5E6B4F76CB349652C055BD71B8ED2CA4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5__ctor_m3F210D0BB93AF08F2753316FFAF546EEC700F345 (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Character_Interactions/<Retry>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5_System_IDisposable_Dispose_mB707178CF137CDA7E9EDAFD08FA26B61657E0DBA (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Character_Interactions/<Retry>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRetryU3Ed__5_MoveNext_m179F6F482E0EA43EBDDF967B0F352CDB4B7D7FEE (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral930B1358F66BE6CB2F4FF18F039AB396AB859F2D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_004f;
	}

IL_001f:
	{
		goto IL_0071;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Android , Retry collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral930B1358F66BE6CB2F4FF18F039AB396AB859F2D, NULL);
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_2 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_2, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_2);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GamePlayManager.instance.levelFail();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_3 = ((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		GamePlayManager_levelFail_mCA80DB5D76FD5E512B855CD78A52F128B245B5BA(L_3, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0071:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Character_Interactions/<Retry>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetryU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m36A9531A7E4787E8C25D70128B9254087B465765 (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Character_Interactions/<Retry>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetryU3Ed__5_System_Collections_IEnumerator_Reset_mAFF87AB321B725005553ACA3F3F33F99031FE9DE (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRetryU3Ed__5_System_Collections_IEnumerator_Reset_mAFF87AB321B725005553ACA3F3F33F99031FE9DE_RuntimeMethod_var)));
	}
}
// System.Object Character_Interactions/<Retry>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetryU3Ed__5_System_Collections_IEnumerator_get_Current_mB7718845D252DFF338F5456AB766513067873CC6 (U3CRetryU3Ed__5_tE641A03B474C70EC9AC4C95D0EDC3E687597AE0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DrawLine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_Update_mEE917873D34A5C977A4CE725DE6CBB4AB8563CBE (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B10_0 = 0;
	{
		// if(!lineCreated)
		bool L_0 = __this->___lineCreated_14;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00f9;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		// Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		V_2 = L_7;
		// RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_10;
		L_10 = Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947(L_8, L_9, NULL);
		V_3 = L_10;
		// if(hit)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_11 = V_3;
		bool L_12;
		L_12 = RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11(L_11, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// if (hit.transform.gameObject.CompareTag("Player"))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A((&V_3), NULL);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_15, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// CreateLine();
		DrawLine_CreateLine_mBD08F12001FFA85CE53DC40119FA0B714D5F5183(__this, NULL);
	}

IL_0070:
	{
	}

IL_0071:
	{
	}

IL_0072:
	{
		// if (Input.GetMouseButton(0) && startDraw)
		bool L_18;
		L_18 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		bool L_19 = __this->___startDraw_15;
		G_B10_0 = ((int32_t)(L_19));
		goto IL_0083;
	}

IL_0082:
	{
		G_B10_0 = 0;
	}

IL_0083:
	{
		V_6 = (bool)G_B10_0;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00da;
		}
	}
	{
		// Vector2 tempFingerPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21;
		L_21 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_21, L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		V_7 = L_24;
		// if (Vector2.Distance(tempFingerPos, fingerPositions[fingerPositions.Count - 1]) > 0.1f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_7;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_26 = __this->___fingerPositions_8;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_27 = __this->___fingerPositions_8;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_27, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_26, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_30;
		L_30 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_25, L_29, NULL);
		V_8 = (bool)((((float)L_30) > ((float)(0.100000001f)))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00d7;
		}
	}
	{
		// UpdateLine(tempFingerPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_7;
		DrawLine_UpdateLine_m2E32A79483B32648F787FEADB9A4B44FE5DEAA6D(__this, L_32, NULL);
	}

IL_00d7:
	{
		goto IL_00f8;
	}

IL_00da:
	{
		// if (startDraw)
		bool L_33 = __this->___startDraw_15;
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_00f7;
		}
	}
	{
		// lineCreated = true;
		__this->___lineCreated_14 = (bool)1;
		// GenerateWayPoints();
		DrawLine_GenerateWayPoints_mC49E46A31F4D44504B726F3B42CAEBBEF1F54590(__this, NULL);
	}

IL_00f7:
	{
	}

IL_00f8:
	{
	}

IL_00f9:
	{
		// if(Move)
		bool L_35 = __this->___Move_13;
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_010e;
		}
	}
	{
		// MoveCharacter();
		DrawLine_MoveCharacter_m269D6BE1E80173FF7D0910002995E4EFE032CF99(__this, NULL);
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void DrawLine::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_CreateLine_mBD08F12001FFA85CE53DC40119FA0B714D5F5183 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startDraw = true;
		__this->___startDraw_15 = (bool)1;
		// currentLine = Instantiate(linePrefab , Vector3.zero,Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___linePrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___currentLine_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLine_5), (void*)L_3);
		// lineRenderer = currentLine.GetComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___currentLine_5;
		NullCheck(L_4);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_4, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		__this->___lineRenderer_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_6), (void*)L_5);
		// EdgeCollider2D = currentLine.GetComponent<EdgeCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___currentLine_5;
		NullCheck(L_6);
		EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* L_7;
		L_7 = GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9(L_6, GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var);
		__this->___EdgeCollider2D_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EdgeCollider2D_7), (void*)L_7);
		// fingerPositions.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_8 = __this->___fingerPositions_8;
		NullCheck(L_8);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_8, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_9 = __this->___fingerPositions_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_10, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		NullCheck(L_9);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_9, L_13, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_14 = __this->___fingerPositions_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_15, L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_17, NULL);
		NullCheck(L_14);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_14, L_18, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// lineRenderer.SetPosition(0, fingerPositions[0]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_19 = __this->___lineRenderer_6;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_20 = __this->___fingerPositions_8;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_20, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_21, NULL);
		NullCheck(L_19);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_19, 0, L_22, NULL);
		// lineRenderer.SetPosition(1, fingerPositions[1]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_23 = __this->___lineRenderer_6;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_24 = __this->___fingerPositions_8;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_24, 1, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_25, NULL);
		NullCheck(L_23);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_23, 1, L_26, NULL);
		// EdgeCollider2D.points = fingerPositions.ToArray();
		EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* L_27 = __this->___EdgeCollider2D_7;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_28 = __this->___fingerPositions_8;
		NullCheck(L_28);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29;
		L_29 = List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5(L_28, List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var);
		NullCheck(L_27);
		EdgeCollider2D_set_points_mFF49E39867F376E313D50F57531C28A1F715D02F(L_27, L_29, NULL);
		// }
		return;
	}
}
// System.Void DrawLine::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_UpdateLine_m2E32A79483B32648F787FEADB9A4B44FE5DEAA6D (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newFingerPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// fingerPositions.Add(newFingerPos);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___fingerPositions_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newFingerPos0;
		NullCheck(L_0);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_0, L_1, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// lineRenderer.positionCount++;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lineRenderer_6;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// lineRenderer.SetPosition(lineRenderer.positionCount -1, newFingerPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_6;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___lineRenderer_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___newFingerPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), L_10, NULL);
		// EdgeCollider2D.points = fingerPositions.ToArray();
		EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* L_11 = __this->___EdgeCollider2D_7;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_12 = __this->___fingerPositions_8;
		NullCheck(L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13;
		L_13 = List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5(L_12, List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var);
		NullCheck(L_11);
		EdgeCollider2D_set_points_mFF49E39867F376E313D50F57531C28A1F715D02F(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void DrawLine::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_GenerateWayPoints_mC49E46A31F4D44504B726F3B42CAEBBEF1F54590 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach(Vector2 WayPoint in fingerPositions)
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___fingerPositions_8;
		NullCheck(L_0);
		Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 L_1;
		L_1 = List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA(L_0, List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C((&V_0), Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0010_1:
			{
				// foreach(Vector2 WayPoint in fingerPositions)
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
				L_2 = Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_inline((&V_0), Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_RuntimeMethod_var);
				V_1 = L_2;
				// Instantiate(Obj, new Vector2(WayPoint.x, WayPoint.y), Quaternion.identity, WayPointParent);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Obj_11;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
				float L_5 = L_4.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
				float L_7 = L_6.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
				memset((&L_8), 0, sizeof(L_8));
				Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
				L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___WayPointParent_10;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_3, L_9, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
			}

IL_0047_1:
			{
				// foreach(Vector2 WayPoint in fingerPositions)
				bool L_13;
				L_13 = Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA((&V_0), Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// create = false;
		__this->___create_12 = (bool)0;
		// Move = true;
		__this->___Move_13 = (bool)1;
		// }
		return;
	}
}
// System.Void DrawLine::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine_MoveCharacter_m269D6BE1E80173FF7D0910002995E4EFE032CF99 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Vector2.Distance(Ball.transform.localPosition, WayPointParent.transform.GetChild(i).transform.localPosition)<0.1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Ball_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___WayPointParent_10;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		int32_t L_6 = __this->___i_16;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		float L_11;
		L_11 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_3, L_10, NULL);
		V_0 = (bool)((((double)((double)L_11)) < ((double)(0.10000000000000001)))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_00b0;
		}
	}
	{
		// if (i < WayPointParent.transform.childCount -1)
		int32_t L_13 = __this->___i_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___WayPointParent_10;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_15, NULL);
		V_1 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))))? 1 : 0);
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0081;
		}
	}
	{
		// i++;
		int32_t L_18 = __this->___i_16;
		__this->___i_16 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_00af;
	}

IL_0081:
	{
		// Ball.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___Ball_9;
		NullCheck(L_19);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20;
		L_20 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_19, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_20);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_20, 0, NULL);
		// currentLine.GetComponent<EdgeCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___currentLine_5;
		NullCheck(L_21);
		EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* L_22;
		L_22 = GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9(L_21, GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var);
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
		// Move = false;
		__this->___Move_13 = (bool)0;
		// return;
		goto IL_010a;
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// Ball.transform.localPosition = Vector2.MoveTowards(Ball.transform.position,
		//         WayPointParent.transform.GetChild(i).transform.localPosition, 0.05f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___Ball_9;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___Ball_9;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___WayPointParent_10;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		int32_t L_31 = __this->___i_16;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_28, L_35, (0.0500000007f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_36, NULL);
		NullCheck(L_24);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_24, L_37, NULL);
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void DrawLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawLine__ctor_m1CB031CD80211C3BE2C55D55FF3FA116B7647E74 (DrawLine_t65E610A6574E6218DA359514E60A7E0408E9EA31* __this, const RuntimeMethod* method) 
{
	{
		// int i = 0;
		__this->___i_16 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Awake_mC793CF8D6463EF8A5A92BE0EC3BD6D1FAB2A100C (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_OnEnable_mD8F0C6BED75F31315AEA8AF42BDD39F420D875D0 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Start_mCEDAFB73A2C0AFBA3DBFD91AE76360676D030CF4 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034283865E30C0CE8971200466E3585778482E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87828E5384D17067A8B8AA2E0A037D3F1A185F14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		// instance = this;
		((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// if (PlayerPrefs.HasKey("Shiba"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral034283865E30C0CE8971200466E3585778482E78, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		// Player = PlayerObj.transform.GetChild(PlayerPrefs.GetInt("Shiba")).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PlayerObj_11;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral034283865E30C0CE8971200466E3585778482E78, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___Player_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Player_10), (void*)L_6);
		// Player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Player_10;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// Ball = Player;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___Player_10;
		__this->___Ball_28 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Ball_28), (void*)L_8);
		goto IL_008e;
	}

IL_0057:
	{
		// Player = PlayerObj.transform.GetChild(0).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___PlayerObj_11;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 0, NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		__this->___Player_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Player_10), (void*)L_12);
		// Player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___Player_10;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// Ball = Player;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___Player_10;
		__this->___Ball_28 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Ball_28), (void*)L_14);
	}

IL_008e:
	{
		// if (PlayerPrefs.HasKey("Level"))
		bool L_15;
		L_15 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		V_1 = L_15;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_011b;
		}
	}
	{
		// if(PlayerPrefs.GetInt("Level") > 15)
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		V_2 = (bool)((((int32_t)L_17) > ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00bd;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, 0, NULL);
	}

IL_00bd:
	{
		// LevelsManagr.transform.GetChild(PlayerPrefs.GetInt("Level")).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___LevelsManagr_16;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		int32_t L_21;
		L_21 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_20, L_21, NULL);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// Player.transform.position = LevelPosition.transform.GetChild(PlayerPrefs.GetInt("Level")).transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___Player_10;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___LevelPosition_17;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		int32_t L_28;
		L_28 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_31, NULL);
		goto IL_0184;
	}

IL_011b:
	{
		// LevelsManagr.transform.GetChild(PlayerPrefs.GetInt("Level")).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___LevelsManagr_16;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		int32_t L_34;
		L_34 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_33, L_34, NULL);
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// Player.transform.position = LevelPosition.transform.GetChild(PlayerPrefs.GetInt("Level")).transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___Player_10;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___LevelPosition_17;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		int32_t L_41;
		L_41 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_40, L_41, NULL);
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		NullCheck(L_38);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_44, NULL);
		// PlayerPrefs.SetInt("Level", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, 0, NULL);
	}

IL_0184:
	{
		// if(!PlayerPrefs.HasKey("Vibrate"))
		bool L_45;
		L_45 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, NULL);
		V_3 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_3;
		if (!L_46)
		{
			goto IL_01a3;
		}
	}
	{
		// PlayerPrefs.SetInt("Vibrate", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, 1, NULL);
	}

IL_01a3:
	{
		// if (PlayerPrefs.HasKey("Sound"))
		bool L_47;
		L_47 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		V_4 = L_47;
		bool L_48 = V_4;
		if (!L_48)
		{
			goto IL_01ea;
		}
	}
	{
		// if(PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_49;
		L_49 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		V_5 = (bool)((((int32_t)L_49) == ((int32_t)1))? 1 : 0);
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_01d8;
		}
	}
	{
		// Sound.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___Sound_19;
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)1, NULL);
		goto IL_01e7;
	}

IL_01d8:
	{
		// Sound.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___Sound_19;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
	}

IL_01e7:
	{
		goto IL_01f8;
	}

IL_01ea:
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, NULL);
	}

IL_01f8:
	{
		// if (PlayerPrefs.HasKey("Music"))
		bool L_53;
		L_53 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, NULL);
		V_6 = L_53;
		bool L_54 = V_6;
		if (!L_54)
		{
			goto IL_023f;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_55;
		L_55 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, NULL);
		V_7 = (bool)((((int32_t)L_55) == ((int32_t)1))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_022d;
		}
	}
	{
		// BG_Music.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___BG_Music_20;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
		goto IL_023c;
	}

IL_022d:
	{
		// BG_Music.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___BG_Music_20;
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
	}

IL_023c:
	{
		goto IL_024d;
	}

IL_023f:
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, NULL);
	}

IL_024d:
	{
		// Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_59 = __this->___Cointxt_18;
		int32_t L_60;
		L_60 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_8 = L_60;
		String_t* L_61;
		L_61 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_8), NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, L_61);
		// level = PlayerPrefs.GetInt("Level") + 1;
		int32_t L_62;
		L_62 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		__this->___level_12 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		// Leveltxt.text = "Level "+"- "+ level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = __this->___Leveltxt_14;
		int32_t* L_64 = (&__this->___level_12);
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_64, NULL);
		String_t* L_66;
		L_66 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral87828E5384D17067A8B8AA2E0A037D3F1A185F14, L_65, NULL);
		NullCheck(L_63);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_63, L_66);
		// }
		return;
	}
}
// System.Void GamePlayManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Update_mE282C0E0F93509A21DCA021EB01FC84896844442 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_FixedUpdate_m7616220B83657FB701599ADE42CACC122CB130B8 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B10_0 = 0;
	{
		// if (!lineCreated)
		bool L_0 = __this->___lineCreated_33;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0165;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		// Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		V_2 = L_7;
		// RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_10;
		L_10 = Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947(L_8, L_9, NULL);
		V_3 = L_10;
		// if (hit)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_11 = V_3;
		bool L_12;
		L_12 = RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11(L_11, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// if (hit.transform.gameObject.CompareTag("Player"))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A((&V_3), NULL);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_15, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// CreateLine();
		GamePlayManager_CreateLine_mDFD7AD8C3EDC51070A8932DFE05FC94FADF002A9(__this, NULL);
	}

IL_0070:
	{
	}

IL_0071:
	{
	}

IL_0072:
	{
		// if (Input.GetMouseButton(0) && startDraw)
		bool L_18;
		L_18 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		bool L_19 = __this->___startDraw_35;
		G_B10_0 = ((int32_t)(L_19));
		goto IL_0083;
	}

IL_0082:
	{
		G_B10_0 = 0;
	}

IL_0083:
	{
		V_6 = (bool)G_B10_0;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0146;
		}
	}
	{
		// Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21;
		L_21 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_21, L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		V_7 = L_24;
		// RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_27;
		L_27 = Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947(L_25, L_26, NULL);
		V_8 = L_27;
		// if (hit)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_28 = V_8;
		bool L_29;
		L_29 = RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11(L_28, NULL);
		V_10 = L_29;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00e5;
		}
	}
	{
		// if (hit.transform.gameObject.CompareTag("Ground"))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A((&V_8), NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_32, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		V_11 = L_33;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_00e4;
		}
	}
	{
		// StoplineCreated = true;
		__this->___StoplineCreated_34 = (bool)1;
	}

IL_00e4:
	{
	}

IL_00e5:
	{
		// Vector2 tempFingerPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35;
		L_35 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_35, L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_37, NULL);
		V_9 = L_38;
		// if (Vector2.Distance(tempFingerPos, fingerPositions[fingerPositions.Count - 1]) > 0.1f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_9;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_40 = __this->___fingerPositions_27;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_41 = __this->___fingerPositions_27;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_41, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		NullCheck(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_40, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_44;
		L_44 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_39, L_43, NULL);
		V_12 = (bool)((((float)L_44) > ((float)(0.100000001f)))? 1 : 0);
		bool L_45 = V_12;
		if (!L_45)
		{
			goto IL_0143;
		}
	}
	{
		// if (!StoplineCreated)
		bool L_46 = __this->___StoplineCreated_34;
		V_13 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_0142;
		}
	}
	{
		// UpdateLine(tempFingerPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_9;
		GamePlayManager_UpdateLine_mF791A4807143A00535E027CFD109D2B85E5DF3A6(__this, L_48, NULL);
	}

IL_0142:
	{
	}

IL_0143:
	{
		goto IL_0164;
	}

IL_0146:
	{
		// if (startDraw)
		bool L_49 = __this->___startDraw_35;
		V_14 = L_49;
		bool L_50 = V_14;
		if (!L_50)
		{
			goto IL_0163;
		}
	}
	{
		// lineCreated = true;
		__this->___lineCreated_33 = (bool)1;
		// GenerateWayPoints();
		GamePlayManager_GenerateWayPoints_m876082A1E5E8B2E66D514FD6D2FB8448E381C23B(__this, NULL);
	}

IL_0163:
	{
	}

IL_0164:
	{
	}

IL_0165:
	{
		// if (Move)
		bool L_51 = __this->___Move_32;
		V_15 = L_51;
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_017a;
		}
	}
	{
		// MoveCharacter();
		GamePlayManager_MoveCharacter_m8588AF5D679D06924981574A1F6903EFCB877FEC(__this, NULL);
	}

IL_017a:
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::pauseBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_pauseBtn_mF90EB57011BE8AB4EC95FA0493B9C9008F456752 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// P_Pause.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___P_Pause_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_4, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// P_Pause.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___P_Pause_7;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::resumebtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_resumebtn_m488F8E26AF9434C3AC0BA4DC023A1441D14C1BA9 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	{
		// P_Pause.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___P_Pause_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::levelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelComplete_mBA1A44469AEF4EF308ECFBC80A35CBD55355A902 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// levelCom = true;
		__this->___levelCom_13 = (bool)1;
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// S_Complete.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___S_Complete_21;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_0027:
	{
		// StartCoroutine(LevelCompleted());
		RuntimeObject* L_3;
		L_3 = GamePlayManager_LevelCompleted_m335A47ECB13C23E7F2186DF685ADDCC163240D16(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::levelFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_levelFail_mCA80DB5D76FD5E512B855CD78A52F128B245B5BA (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// S_Failed.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___S_Failed_22;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_0020:
	{
		// StartCoroutine(LevelFailed());
		RuntimeObject* L_3;
		L_3 = GamePlayManager_LevelFailed_mDA6DD23823665304B86C60DB5D9CBABA5ADDA4AD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::Home()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Home_mA64BBF77A619E9BF3214F286403FB7CD110FF537 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068D9B7B4B9A4B3AAE9402DF3C9C3524C535E040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6880EA5264F697CB4936ACCA1E5F8B2FE27FAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// AdsInitializer.Instance.ShowAdInterstitial();
		AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* L_0;
		L_0 = Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A(Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		NullCheck(L_0);
		AdsInitializer_ShowAdInterstitial_m82E5CF1655BBF4EEF28EC1D41C15A41B29470789(L_0, NULL);
		// if (levelCom)
		bool L_1 = __this->___levelCom_13;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// Debug.Log("LevelComplete Home");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral068D9B7B4B9A4B3AAE9402DF3C9C3524C535E040, NULL);
		// if (level == 15)
		int32_t L_3 = __this->___level_12;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", -1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, (-1), NULL);
	}

IL_003e:
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// levelCom = false;
		__this->___levelCom_13 = (bool)0;
		goto IL_0077;
	}

IL_005f:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// Debug.Log("Pause Home");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA6880EA5264F697CB4936ACCA1E5F8B2FE27FAB0, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_Restart_m1967666849897DD3DFA17B7F0A7A4D391C7C7D64 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_NextLevel_m1CFBB839AEE1E936531694D7B0AD7741D47808D5 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (level == 15)
		int32_t L_0 = __this->___level_12;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// PlayerPrefs.SetInt("Level", -1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, (-1), NULL);
	}

IL_001d:
	{
		// PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level") + 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GamePlayManager::LevelCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelCompleted_m335A47ECB13C23E7F2186DF685ADDCC163240D16 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* L_0 = (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883*)il2cpp_codegen_object_new(U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLevelCompletedU3Ed__32__ctor_m70122AD2907ED9830965689B9E2FC85E5EE6CCBD(L_0, 0, NULL);
		U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GamePlayManager::LevelFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayManager_LevelFailed_mDA6DD23823665304B86C60DB5D9CBABA5ADDA4AD (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* L_0 = (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0*)il2cpp_codegen_object_new(U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLevelFailedU3Ed__33__ctor_m3B802102C12380DA89AC4B7960922501FB1A5530(L_0, 0, NULL);
		U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GamePlayManager::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_CreateLine_mDFD7AD8C3EDC51070A8932DFE05FC94FADF002A9 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startDraw = true;
		__this->___startDraw_35 = (bool)1;
		// currentLine = Instantiate(linePrefab, Vector3.zero, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___linePrefab_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___currentLine_25 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLine_25), (void*)L_3);
		// lineRenderer = currentLine.GetComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___currentLine_25;
		NullCheck(L_4);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_4, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		__this->___lineRenderer_26 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_26), (void*)L_5);
		// fingerPositions.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_6 = __this->___fingerPositions_27;
		NullCheck(L_6);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_6, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_7 = __this->___fingerPositions_27;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_8, L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_10, NULL);
		NullCheck(L_7);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_7, L_11, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_12 = __this->___fingerPositions_27;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_13, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_15, NULL);
		NullCheck(L_12);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_12, L_16, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// lineRenderer.SetPosition(0, fingerPositions[0]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_17 = __this->___lineRenderer_26;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_18 = __this->___fingerPositions_27;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_18, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_19, NULL);
		NullCheck(L_17);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_17, 0, L_20, NULL);
		// lineRenderer.SetPosition(1, fingerPositions[1]);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21 = __this->___lineRenderer_26;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_22 = __this->___fingerPositions_27;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_22, 1, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_23, NULL);
		NullCheck(L_21);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_21, 1, L_24, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::UpdateLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_UpdateLine_mF791A4807143A00535E027CFD109D2B85E5DF3A6 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newFingerPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// fingerPositions.Add(newFingerPos);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___fingerPositions_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newFingerPos0;
		NullCheck(L_0);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_0, L_1, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// lineRenderer.positionCount++;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lineRenderer_26;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// lineRenderer.SetPosition(lineRenderer.positionCount - 1, newFingerPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_26;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___lineRenderer_26;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___newFingerPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_6);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), L_10, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::GenerateWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_GenerateWayPoints_m876082A1E5E8B2E66D514FD6D2FB8448E381C23B (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (Vector2 WayPoint in fingerPositions)
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___fingerPositions_27;
		NullCheck(L_0);
		Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 L_1;
		L_1 = List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA(L_0, List_1_GetEnumerator_m3FE49C02F31954ACBAF7DF56A1CFED61E50524BA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C((&V_0), Enumerator_Dispose_mCD48FDD0F418E976C266AF07E14C127B6E896A8C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0010_1:
			{
				// foreach (Vector2 WayPoint in fingerPositions)
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
				L_2 = Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_inline((&V_0), Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_RuntimeMethod_var);
				V_1 = L_2;
				// Instantiate(Obj, new Vector2(WayPoint.x, WayPoint.y), Quaternion.identity, WayPointParent);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Obj_30;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
				float L_5 = L_4.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
				float L_7 = L_6.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
				memset((&L_8), 0, sizeof(L_8));
				Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
				L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___WayPointParent_29;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_3, L_9, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
			}

IL_0047_1:
			{
				// foreach (Vector2 WayPoint in fingerPositions)
				bool L_13;
				L_13 = Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA((&V_0), Enumerator_MoveNext_m5DDD3E697A492E99DDE91E6AB7B2390C491F89AA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// create = false;
		__this->___create_31 = (bool)0;
		// Move = true;
		__this->___Move_32 = (bool)1;
		// }
		return;
	}
}
// System.Void GamePlayManager::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_MoveCharacter_m8588AF5D679D06924981574A1F6903EFCB877FEC (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Vector2.Distance(Ball.transform.localPosition, WayPointParent.transform.GetChild(i).transform.localPosition) < 0.1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Ball_28;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___WayPointParent_29;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		int32_t L_6 = __this->___i_36;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		float L_11;
		L_11 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_3, L_10, NULL);
		V_0 = (bool)((((double)((double)L_11)) < ((double)(0.10000000000000001)))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_00b0;
		}
	}
	{
		// if (i < WayPointParent.transform.childCount - 1)
		int32_t L_13 = __this->___i_36;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___WayPointParent_29;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_15, NULL);
		V_1 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))))? 1 : 0);
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0081;
		}
	}
	{
		// i++;
		int32_t L_18 = __this->___i_36;
		__this->___i_36 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_00af;
	}

IL_0081:
	{
		// Ball.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___Ball_28;
		NullCheck(L_19);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20;
		L_20 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_19, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_20);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_20, 0, NULL);
		// currentLine.GetComponent<EdgeCollider2D>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___currentLine_25;
		NullCheck(L_21);
		EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* L_22;
		L_22 = GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9(L_21, GameObject_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_mA269CFDBF7C290C9B90297A456B785BFF71223E9_RuntimeMethod_var);
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
		// Move = false;
		__this->___Move_32 = (bool)0;
		// return;
		goto IL_0110;
	}

IL_00af:
	{
	}

IL_00b0:
	{
		// Ball.transform.localPosition = Vector2.MoveTowards(Ball.transform.position,
		//         WayPointParent.transform.GetChild(i).transform.localPosition, 0.05f * Time.timeScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___Ball_28;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___Ball_28;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___WayPointParent_29;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		int32_t L_31 = __this->___i_36;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_34, NULL);
		float L_36;
		L_36 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_28, L_35, ((float)il2cpp_codegen_multiply((0.0500000007f), L_36)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_37, NULL);
		NullCheck(L_24);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_24, L_38, NULL);
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Void GamePlayManager::freeCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_freeCoins_m9E643FFB9B28118F537F8D892A806A0BD3DBF1CB (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdsInitializer.Instance.ShowAd(RewardedAdType.FREECOINS);
		AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* L_0;
		L_0 = Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A(Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		NullCheck(L_0);
		AdsInitializer_ShowAd_m421F6AA93E15EAC4B56D41153039282472E3A256(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::DubbleReeard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_DubbleReeard_m055F1CADFD2DA06C74F69B9449127C7E9D2C9753 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdsInitializer.Instance.ShowAd(RewardedAdType.DOUBLEREWARD);
		AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* L_0;
		L_0 = Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A(Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		NullCheck(L_0);
		AdsInitializer_ShowAd_m421F6AA93E15EAC4B56D41153039282472E3A256(L_0, 3, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::skipLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager_skipLevel_m439948036EFFFBE34EDAEEC50C7294BDD6A6BF83 (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdsInitializer.Instance.ShowAd(RewardedAdType.SKIPLEVEL);
		AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* L_0;
		L_0 = Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A(Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		NullCheck(L_0);
		AdsInitializer_ShowAd_m421F6AA93E15EAC4B56D41153039282472E3A256(L_0, 4, NULL);
		// }
		return;
	}
}
// System.Void GamePlayManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayManager__ctor_m98EBAA455904D66AB82EB3FC3D53581E386B2E3B (GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* __this, const RuntimeMethod* method) 
{
	{
		// int i = 0;
		__this->___i_36 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GamePlayManager/<LevelCompleted>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32__ctor_m70122AD2907ED9830965689B9E2FC85E5EE6CCBD (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GamePlayManager/<LevelCompleted>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32_System_IDisposable_Dispose_mFF71E95203E822FADA00B0AD53AB3CCDED1D4BD4 (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GamePlayManager/<LevelCompleted>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelCompletedU3Ed__32_MoveNext_m93DC75C30C98AF2A765F6938B55CC6EA21CB0C9E (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537F912086D986A329874B8810F39AF7DE0A9C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0059;
	}

IL_001f:
	{
		goto IL_0156;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// P_BlackScreen.SetActive(true);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___P_BlackScreen_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0059:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// P_Levelcomplete.SetActive(true);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___P_Levelcomplete_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// P_BlackScreen.SetActive(false);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___P_BlackScreen_9;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// totl = 20 + 5 * (PlayerPrefs.GetInt("Level") + 1);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_9 = __this->___U3CU3E4__this_2;
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		NullCheck(L_9);
		L_9->___totl_23 = ((int32_t)il2cpp_codegen_add(((int32_t)20), ((int32_t)il2cpp_codegen_multiply(5, ((int32_t)il2cpp_codegen_add(L_10, 1))))));
		// dubbleScore.text = totl.ToString();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___dubbleScore_15;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___totl_23);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins")+totl);
		int32_t L_16;
		L_16 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___totl_23;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_add(L_16, L_18)), NULL);
		// P_Levelcomplete.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___P_Levelcomplete_5;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_21, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, 0, NULL);
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25;
		L_25 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_24, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		int32_t L_26;
		L_26 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_1 = L_26;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_27);
		// Debug.Log("score is:" + PlayerPrefs.GetInt("Coins"));
		int32_t L_28;
		L_28 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_1 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral537F912086D986A329874B8810F39AF7DE0A9C5A, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_30, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0156:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StopCoroutine(LevelCompleted());
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_31 = __this->___U3CU3E4__this_2;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_32 = __this->___U3CU3E4__this_2;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = GamePlayManager_LevelCompleted_m335A47ECB13C23E7F2186DF685ADDCC163240D16(L_32, NULL);
		NullCheck(L_31);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_31, L_33, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GamePlayManager/<LevelCompleted>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelCompletedU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m57D9270EC98A25B0AF3E2F3FA019A174C38B5367 (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GamePlayManager/<LevelCompleted>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_Reset_m2AE5C864966AF7F013E3C822B198ED8A0E1A4D45 (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_Reset_m2AE5C864966AF7F013E3C822B198ED8A0E1A4D45_RuntimeMethod_var)));
	}
}
// System.Object GamePlayManager/<LevelCompleted>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelCompletedU3Ed__32_System_Collections_IEnumerator_get_Current_mCB936919D641B7A389B2EA2435729E7295084C81 (U3CLevelCompletedU3Ed__32_tC5D43E7B0DF1B6BEF40990FF020E23A9B6004883* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33__ctor_m3B802102C12380DA89AC4B7960922501FB1A5530 (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GamePlayManager/<LevelFailed>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33_System_IDisposable_Dispose_mE7425BD8CAFA0E979BCDAB775A6E1C23DE75DB23 (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GamePlayManager/<LevelFailed>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelFailedU3Ed__33_MoveNext_m928E7289B9D9CD8DF2FDF37F16DECA97CCDFA109 (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_009b;
	}

IL_001f:
	{
		goto IL_00d6;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// P_LevelFail.transform.Find("Coins").transform.GetChild(0).GetComponent<Text>().text = PlayerPrefs.GetInt("Coins").ToString();
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___P_LevelFail_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, 0, NULL);
		NullCheck(L_7);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8;
		L_8 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_7, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_1 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// P_BlackScreen.SetActive(true);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___P_BlackScreen_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// P_LevelFail.SetActive(true);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___P_LevelFail_6;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// P_BlackScreen.SetActive(false);
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___P_BlackScreen_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StopCoroutine(LevelFailed());
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_18 = __this->___U3CU3E4__this_2;
		GamePlayManager_tB470F0B321EF1C06EA84E5365E8BC759478FFA42* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = GamePlayManager_LevelFailed_mDA6DD23823665304B86C60DB5D9CBABA5ADDA4AD(L_19, NULL);
		NullCheck(L_18);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_18, L_20, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GamePlayManager/<LevelFailed>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelFailedU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2482026F8A8C7E687C3A484BAFA8314A015C15A6 (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GamePlayManager/<LevelFailed>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_Reset_mB4CC433DD0C59CA8BAB2700F8D5DA46E1B43A49D (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_Reset_mB4CC433DD0C59CA8BAB2700F8D5DA46E1B43A49D_RuntimeMethod_var)));
	}
}
// System.Object GamePlayManager/<LevelFailed>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelFailedU3Ed__33_System_Collections_IEnumerator_get_Current_mFB4A4B7EE898499DD4AD2F2F07B46D50119ED3F7 (U3CLevelFailedU3Ed__33_tE33FFCF1E72AB6C9575D7FC8FC2ED2991699C7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GoogleAds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_Start_mE78DE03B5ED7DFA4576FCE933D47F0C31CB3D97F (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAds_U3CStartU3Eb__1_0_m9F5F1F7172A901C7F9AC8C3406453F07FC6EB44A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MobileAds.Initialize(initStatus => {
		//     Debug.Log(initStatus.ToString());
		//     this.RequestBanner();
		//     RequestInterstitial();
		// });
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_0, __this, (intptr_t)((void*)GoogleAds_U3CStartU3Eb__1_0_m9F5F1F7172A901C7F9AC8C3406453F07FC6EB44A_RuntimeMethod_var), NULL);
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(L_0, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_RequestBanner_mC5EB68248D8C9FEEE4A45666AFE7AFD2F9640A97 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_1 = NULL;
	{
		// string adUnitId = "ca-app-pub-3940256099942544/6300978111";
		V_0 = _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
		// this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
		String_t* L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_1 = ((AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var))->___Banner_4;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_2 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC(L_2, L_0, L_1, 1, NULL);
		__this->___bannerView_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerView_5), (void*)L_2);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_3 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_3, NULL);
		NullCheck(L_3);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_4;
		L_4 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_3, NULL);
		V_1 = L_4;
		// this.bannerView.LoadAd(request);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_5 = __this->___bannerView_5;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_6 = V_1;
		NullCheck(L_5);
		BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::destroyBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_destroyBanner_m6AEFD3DCAB6B99DD25AF94FA5C5973B2EA11A7BA (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) 
{
	{
		// bannerView.Destroy();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->___bannerView_5;
		NullCheck(L_0);
		BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01(L_0, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::RequestInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_RequestInterstitial_m32BE1F9EF1F7E3F12842D099E2DF4DDD631EF495 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAds_HandleOnAdClosed_mC09A4AA523CA0B05EA3D2F451995E0D3DF533089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAds_HandleOnAdFailedToLoad_m798D50ECAD1FA54F714EA1D21C53EB872AB276B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAds_HandleOnAdLoaded_mD0DC193DB66EA78DC1A60D95135BFD63ED3B894D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAds_HandleOnAdOpening_m0CA29815E31D305735F6E3F3BDA4CE4324A7394C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413785E787B417D99CA8D014FEC90303EDF1971A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_1 = NULL;
	{
		// string adUnitId = "ca-app-pub-9962568154534727/6704727385";
		V_0 = _stringLiteral413785E787B417D99CA8D014FEC90303EDF1971A;
		// this.interstitial = new InterstitialAd(adUnitId);
		String_t* L_0 = V_0;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9(L_1, L_0, NULL);
		__this->___interstitial_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitial_6), (void*)L_1);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_2 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_2, NULL);
		NullCheck(L_2);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_3;
		L_3 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_2, NULL);
		V_1 = L_3;
		// this.interstitial.LoadAd(request);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_4 = __this->___interstitial_6;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_5 = V_1;
		NullCheck(L_4);
		InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117(L_4, L_5, NULL);
		// this.interstitial.OnAdLoaded += HandleOnAdLoaded;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_6 = __this->___interstitial_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)GoogleAds_HandleOnAdLoaded_mD0DC193DB66EA78DC1A60D95135BFD63ED3B894D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D(L_6, L_7, NULL);
		// this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_8 = __this->___interstitial_6;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_9, __this, (intptr_t)((void*)GoogleAds_HandleOnAdFailedToLoad_m798D50ECAD1FA54F714EA1D21C53EB872AB276B6_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525(L_8, L_9, NULL);
		// this.interstitial.OnAdOpening += HandleOnAdOpening;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_10 = __this->___interstitial_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)GoogleAds_HandleOnAdOpening_m0CA29815E31D305735F6E3F3BDA4CE4324A7394C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97(L_10, L_11, NULL);
		// this.interstitial.OnAdClosed += HandleOnAdClosed;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_12 = __this->___interstitial_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, __this, (intptr_t)((void*)GoogleAds_HandleOnAdClosed_mC09A4AA523CA0B05EA3D2F451995E0D3DF533089_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::showInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_showInterstitial_mEB664512DB4F4A663B791A66C89043E54E16D33F (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.interstitial.IsLoaded())
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitial_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// this.interstitial.Show();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_3 = __this->___interstitial_6;
		NullCheck(L_3);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GoogleAds::HandleOnAdLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_HandleOnAdLoaded_mD0DC193DB66EA78DC1A60D95135BFD63ED3B894D (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9D03EB933B0B046F313BCB1BEC2E63D5861A7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleAdLoaded event received");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralCB9D03EB933B0B046F313BCB1BEC2E63D5861A7D, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::HandleOnAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_HandleOnAdFailedToLoad_m798D50ECAD1FA54F714EA1D21C53EB872AB276B6 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___args1, const RuntimeMethod* method) 
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
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7ECF8FB393160C8D44EBD80BDB79E8E6B5081E0C, L_1, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_2, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::HandleOnAdOpening(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_HandleOnAdOpening_m0CA29815E31D305735F6E3F3BDA4CE4324A7394C (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51787EBF3A02DDB9D046253DE238C61262334CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleAdOpening event received");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralE51787EBF3A02DDB9D046253DE238C61262334CA, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::HandleOnAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_HandleOnAdClosed_mC09A4AA523CA0B05EA3D2F451995E0D3DF533089 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F61CA7623C2DAECF6EFAEE7BA82693C44E21C16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("HandleAdClosed event received");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2F61CA7623C2DAECF6EFAEE7BA82693C44E21C16, NULL);
		// RequestInterstitial();
		GoogleAds_RequestInterstitial_m32BE1F9EF1F7E3F12842D099E2DF4DDD631EF495(__this, NULL);
		// }
		return;
	}
}
// System.Void GoogleAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds__ctor_m2A719E487D3EBE617B3FA4EE53C0447BC010BDA7 (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m066AF32CCC7417DC5105E50955CB687F86051F94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m066AF32CCC7417DC5105E50955CB687F86051F94(__this, Singleton_1__ctor_m066AF32CCC7417DC5105E50955CB687F86051F94_RuntimeMethod_var);
		return;
	}
}
// System.Void GoogleAds::<Start>b__1_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAds_U3CStartU3Eb__1_0_m9F5F1F7172A901C7F9AC8C3406453F07FC6EB44A (GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___initStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(initStatus.ToString());
		InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* L_0 = ___initStatus0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// this.RequestBanner();
		GoogleAds_RequestBanner_mC5EB68248D8C9FEEE4A45666AFE7AFD2F9640A97(__this, NULL);
		// RequestInterstitial();
		GoogleAds_RequestInterstitial_m32BE1F9EF1F7E3F12842D099E2DF4DDD631EF495(__this, NULL);
		// });
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Start_mEFEEDC3894328DB8F818B306D94EDEB908C7E3EB (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Loading::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Update_mB447BE44BF622F104CFA9F345E142504998A64AB (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Loading::LoadGamePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_LoadGamePlay_mC95E7B18467991848D43E0DC25651E5157C69732 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void Loading::LoadHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_LoadHome_m307B646F7CADC5B2C2D35DB5A11F4A2D3EBC84F3 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void Loading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading__ctor_m31B31EDD4F300E61A5C50027AC65AB632B916DD6 (Loading_t6350A09007C2B39E25AF6A41C010701D847B60ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Start_m0DE5C20FF402B377BA9FD8819426F55C9289A55A (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m1B9E28B11F9332FFA858B2115698695B2035692F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// instance = this;
		((MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		// GoogleAds.Instance.RequestBanner();
		GoogleAds_t982B1072826DFF6E2E16A8771581673A94FBE07C* L_0;
		L_0 = Singleton_1_get_Instance_m1B9E28B11F9332FFA858B2115698695B2035692F(Singleton_1_get_Instance_m1B9E28B11F9332FFA858B2115698695B2035692F_RuntimeMethod_var);
		NullCheck(L_0);
		GoogleAds_RequestBanner_mC5EB68248D8C9FEEE4A45666AFE7AFD2F9640A97(L_0, NULL);
		// if(PlayerPrefs.HasKey("Coins"))
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// TotalCoins = PlayerPrefs.GetInt("Coins");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		__this->___TotalCoins_4 = L_3;
		// CoinsTxt.text = TotalCoins.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___CoinsTxt_5;
		int32_t* L_5 = (&__this->___TotalCoins_4);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		goto IL_0080;
	}

IL_004b:
	{
		// PlayerPrefs.SetInt("Coins", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, 0, NULL);
		// TotalCoins = PlayerPrefs.GetInt("Coins");
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		__this->___TotalCoins_4 = L_7;
		// CoinsTxt.text = TotalCoins.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___CoinsTxt_5;
		int32_t* L_9 = (&__this->___TotalCoins_4);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
	}

IL_0080:
	{
		// if (PlayerPrefs.HasKey("Sound"))
		bool L_11;
		L_11 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		V_1 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_00f7;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00cb;
		}
	}
	{
		// Sound.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___Sound_7;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// SoundBtn_On.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___SoundBtn_On_9;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// SoundBtn_Off.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___SoundBtn_Off_10;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		goto IL_00f4;
	}

IL_00cb:
	{
		// Sound.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___Sound_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// SoundBtn_On.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___SoundBtn_On_9;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// SoundBtn_Off.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___SoundBtn_Off_10;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
	}

IL_00f4:
	{
		goto IL_0105;
	}

IL_00f7:
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, NULL);
	}

IL_0105:
	{
		// if (PlayerPrefs.HasKey("Music"))
		bool L_21;
		L_21 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_017e;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_23;
		L_23 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, NULL);
		V_4 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0152;
		}
	}
	{
		// BG_Music.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___BG_Music_8;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// MusicBtn_On.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___MusicBtn_On_11;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		// MusicBtn_Off.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___MusicBtn_Off_12;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		goto IL_017b;
	}

IL_0152:
	{
		// BG_Music.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___BG_Music_8;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// MusicBtn_On.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___MusicBtn_On_11;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// MusicBtn_Off.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___MusicBtn_Off_12;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
	}

IL_017b:
	{
		goto IL_018c;
	}

IL_017e:
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, NULL);
	}

IL_018c:
	{
		// }
		return;
	}
}
// System.Void MainMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Update_mAA4CF1D462BFFD3E5B84FB1B79B53AF29452FDB9 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
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
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___CoinsTxt_5;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void MainMenuManager::Privacy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Privacy_m6F0930A81210D98D5B74F098CE6B5CEF0524962A (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C1EA0321FD298E596F2F859DC5F40D36E2677B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://mensaplay.com/wensa/privacy-policy.html");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral01C1EA0321FD298E596F2F859DC5F40D36E2677B, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::VibrationOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_VibrationOn_m9DA8CD6114BA705F2A261C77378F03E26CEE0857 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Vibrate", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, 1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::VibrationOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_VibrationOFF_mC25005851EC0BDD1D731483780AA7AC1E1FB9C1D (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Vibrate", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, 0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::SoundOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_SoundOn_m51D8A40E144A4BE240C1873217BC531A9C28C4D6 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::SoundOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_SoundOFF_mC64DA63108E3EB342FC630C008C89E91B8AF355D (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::MusicOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_MusicOn_mE149C628C2C2EAE08C98997E8F150FC9AE71A6B5 (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::MusicOFF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_MusicOFF_m6D9CB1A642A314C96E13F7667AB61A384CC0791F (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager__ctor_m9CF8E7F30CE180004AA0DFF1229FC615B531542B (MainMenuManager_tF7A52AE15B4646A6080DC28A83B82CB4ACF46B94* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Start_m0F41267779EA7E4E2D83E3181E2F92A088D77BFC (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Update_m88234F8E10FF5FA348775286333783FAF4EC1F19 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::PlayBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_PlayBtn_m58C91D636A30B16AC9FFDA1E6AB0633631DB4F22 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Setting_m94E41A5F85BA924508360C54CBAFBE83DD181A19 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Levels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Levels_m0B51D8DC04CA022F231E7191008BEABC59239E4C (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::Store()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_Store_mA39D7778EB2624ECF8B1719BFBAAA76AB9848F6A (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::FreeCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_FreeCoins_mED32F6F14B341B089FE596DB1A48DB28F6065B84 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdsInitializer.Instance.ShowAd(RewardedAdType.FREECOINS);
		AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* L_0;
		L_0 = Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A(Singleton_1_get_Instance_m9EA6849EBA4452334AC4B6A79D7D7DEA99A9CB7A_RuntimeMethod_var);
		NullCheck(L_0);
		AdsInitializer_ShowAd_m421F6AA93E15EAC4B56D41153039282472E3A256(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void MainScreen::RemoveAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_RemoveAds_mAF04F2B84C0FA7259855762979A82B2AF5F8EFA0 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::BonusMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen_BonusMode_mFCAC22F19924C008FCEEBC9B8C1AE7A8D2E3D571 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScreen__ctor_m55103F042181B0B138F8317A147AC773A5722985 (MainScreen_tF95EB7BC5C68A0301EC8CB65FAD7715F4A113C42* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Movement_Start_m1586C9F6E219A26EDFFD05F61E2FBCC57CCCA517 (Object_Movement_tFE4314A52CAB4F25E01329A640CCAF5039A6F3BB* __this, const RuntimeMethod* method) 
{
	{
		// Start_point.position = Snake.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Start_point_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Snake_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Object_Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Movement_Update_m34F22EB04C6CD792508DB91B3C721F1FE55828ED (Object_Movement_tFE4314A52CAB4F25E01329A640CCAF5039A6F3BB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(Vector2.Distance(Snake.transform.position,End_point.position) < 0.01f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Snake_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___End_point_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		float L_7;
		L_7 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_3, L_6, NULL);
		V_0 = (bool)((((float)L_7) < ((float)(0.00999999978f)))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_00c7;
		}
	}
	{
		// if(!started)
		bool L_9 = __this->___started_8;
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// Snake.transform.rotation = End_point.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Snake_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___End_point_6;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// started = true;
		__this->___started_8 = (bool)1;
		goto IL_0093;
	}

IL_006e:
	{
		// Snake.transform.rotation = Start_point.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___Snake_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___Start_point_5;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_18, NULL);
		// started=false;
		__this->___started_8 = (bool)0;
	}

IL_0093:
	{
		// End_point.position = Start_point.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___End_point_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___Start_point_5;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_21, NULL);
		// Start_point.position = Snake.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___Start_point_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___Snake_4;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_25, NULL);
	}

IL_00c7:
	{
		// Snake.transform.position =
		//     Vector2.MoveTowards(Snake.transform.position, End_point.position, speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___Snake_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___Snake_4;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___End_point_6;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_33, NULL);
		float L_35 = __this->___speed_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_31, L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_36, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_37, NULL);
		// }
		return;
	}
}
// System.Void Object_Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Movement__ctor_m04BE15139E699D96DCBCA61783A98EE962ADF73C (Object_Movement_tFE4314A52CAB4F25E01329A640CCAF5039A6F3BB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_Start_m06BA4C37BD04BAAA47131FDFA341EA661E740B04 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Cointxt_8;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// if(PlayerPrefs.HasKey("ShibaLock"))
		bool L_3;
		L_3 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		// for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
		V_3 = 0;
		goto IL_0047;
	}

IL_0032:
	{
		// ShibaLocker[sh].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___ShibaLocker_5;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0047:
	{
		// for(int sh=0; sh< PlayerPrefs.GetInt("ShibaLock"); sh++)
		int32_t L_10 = V_3;
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2, NULL);
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
	}

IL_005b:
	{
		// for (int i = 0; i < contant.transform.childCount; i++)
		V_5 = 0;
		goto IL_0088;
	}

IL_0060:
	{
		// SelectedShiba[i] = contant.transform.GetChild(i).GetComponent<Image>();
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_13 = __this->___SelectedShiba_10;
		int32_t L_14 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___contant_9;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_16, L_17, NULL);
		NullCheck(L_18);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19;
		L_19 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_18, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_19);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)L_19);
		// for (int i = 0; i < contant.transform.childCount; i++)
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0088:
	{
		// for (int i = 0; i < contant.transform.childCount; i++)
		int32_t L_21 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___contant_9;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_23, NULL);
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_6;
		if (L_25)
		{
			goto IL_0060;
		}
	}
	{
		// int bttnLenth = bttn.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___bttn_12;
		NullCheck(L_26);
		V_0 = ((int32_t)(((RuntimeArray*)L_26)->max_length));
		// distance = new float[bttnLenth];
		int32_t L_27 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->___distance_14 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___distance_14), (void*)L_28);
		// bttnDistance = (int)Mathf.Abs(bttn[1].GetComponent<RectTransform>().anchoredPosition.x - bttn[0].GetComponent<RectTransform>().anchoredPosition.x);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___bttn_12;
		NullCheck(L_29);
		int32_t L_30 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32;
		L_32 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_31, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_32, NULL);
		float L_34 = L_33.___x_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___bttn_12;
		NullCheck(L_35);
		int32_t L_36 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_37, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_38, NULL);
		float L_40 = L_39.___x_0;
		float L_41;
		L_41 = fabsf(((float)il2cpp_codegen_subtract(L_34, L_40)));
		__this->___bttnDistance_16 = il2cpp_codegen_cast_double_to_int<int32_t>(L_41);
		// print(bttnDistance);
		int32_t L_42 = __this->___bttnDistance_16;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_44, NULL);
		// }
		return;
	}
}
// System.Void StoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_Update_m7755CF4F956C759D8590870D9353AC9649CF9986 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// for(int i=0; i<bttn.Length;i++)
		V_1 = 0;
		goto IL_0051;
	}

IL_0005:
	{
		// distance[i] = Mathf.Abs(center.transform.position.x - bttn[i].transform.position.x);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___distance_14;
		int32_t L_1 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___center_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___bttn_12;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		float L_13;
		L_13 = fabsf(((float)il2cpp_codegen_subtract(L_5, L_12)));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)L_13);
		// print(distance);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___distance_14;
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6((RuntimeObject*)L_14, NULL);
		// for(int i=0; i<bttn.Length;i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0051:
	{
		// for(int i=0; i<bttn.Length;i++)
		int32_t L_16 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___bttn_12;
		NullCheck(L_17);
		V_2 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0005;
		}
	}
	{
		// float MinDistance = Mathf.Min(distance);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___distance_14;
		float L_20;
		L_20 = Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline(L_19, NULL);
		V_0 = L_20;
		// for(int a=0; a<bttn.Length; a++)
		V_3 = 0;
		goto IL_0090;
	}

IL_0070:
	{
		// if(MinDistance == distance[a])
		float L_21 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___distance_14;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = (bool)((((float)L_21) == ((float)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_008b;
		}
	}
	{
		// minButtonNum = a;
		int32_t L_27 = V_3;
		__this->___minButtonNum_17 = L_27;
	}

IL_008b:
	{
		// for(int a=0; a<bttn.Length; a++)
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0090:
	{
		// for(int a=0; a<bttn.Length; a++)
		int32_t L_29 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = __this->___bttn_12;
		NullCheck(L_30);
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0070;
		}
	}
	{
		// if(!draging)
		bool L_32 = __this->___draging_15;
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00c7;
		}
	}
	{
		// LerpToButton(minButtonNum * -bttnDistance);
		int32_t L_34 = __this->___minButtonNum_17;
		int32_t L_35 = __this->___bttnDistance_16;
		StoreManager_LerpToButton_m66BFE90ECBAE1B54DD8CBED0F0EF1F4396CFB765(__this, ((int32_t)il2cpp_codegen_multiply(L_34, ((-L_35)))), NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void StoreManager::unlockShiba(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_unlockShiba_mA3895D2FB31E0565F2D7B47D6280CC25F8F3039F (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, int32_t ___num0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if(PlayerPrefs.GetInt("Coins") > ShibaPrices[num-1])
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___ShibaPrices_6;
		int32_t L_2 = ___num0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0097;
		}
	}
	{
		// PlayerPrefs.SetInt("Player", num);
		int32_t L_6 = ___num0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_6, NULL);
		// ShibaLocker[PlayerPrefs.GetInt("Player")-1].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___ShibaLocker_5;
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - ShibaPrices[num-1]);
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ShibaPrices_6;
		int32_t L_13 = ___num0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_subtract(L_11, L_15)), NULL);
		// Cointxt.text = PlayerPrefs.GetInt("Coins").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___Cointxt_8;
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		// PlayerPrefs.SetInt("ShibaLock", num);
		int32_t L_19 = ___num0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral10D6082A5D5447BF1DCEFAD8B147585227A89CD2, L_19, NULL);
		// selectShiba(num);
		int32_t L_20 = ___num0;
		StoreManager_selectShiba_mE86422058573CACF6AD30E3027C3E2E6420A5E08(__this, L_20, NULL);
		goto IL_00a6;
	}

IL_0097:
	{
		// CoinWarning.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___CoinWarning_7;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void StoreManager::selectShiba(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_selectShiba_mE86422058573CACF6AD30E3027C3E2E6420A5E08 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, int32_t ___ShibaNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034283865E30C0CE8971200466E3585778482E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E0345113F68A7A72170991D8777B3365231AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral188C1E7793944B8BA9565367C39BADF9EA67A348);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544CD8A820A1B02F3B984AA5C01C036BDD5AC6F5);
		s_Il2CppMethodInitialized = true;
	}
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* V_0 = NULL;
	int32_t V_1 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	{
		// PlayerPrefs.SetInt("Shiba", ShibaNum);
		int32_t L_0 = ___ShibaNum0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral034283865E30C0CE8971200466E3585778482E78, L_0, NULL);
		// foreach(Image img in SelectedShiba)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = __this->___SelectedShiba_10;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0053;
	}

IL_0019:
	{
		// foreach(Image img in SelectedShiba)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// img.color = new Color32(255, 255, 255, 255);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_7), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
		// Debug.Log("color Changed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral188C1E7793944B8BA9565367C39BADF9EA67A348, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0053:
	{
		// foreach(Image img in SelectedShiba)
		int32_t L_10 = V_1;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// Debug.Log("chosing the selected color");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral03E0345113F68A7A72170991D8777B3365231AFB, NULL);
		// SelectedShiba[ShibaNum].color = new Color32(103, 221, 68, 255);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_12 = __this->___SelectedShiba_10;
		int32_t L_13 = ___ShibaNum0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)((int32_t)103), (uint8_t)((int32_t)221), (uint8_t)((int32_t)68), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_16, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
		// Debug.Log("selected color chnaged");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral544CD8A820A1B02F3B984AA5C01C036BDD5AC6F5, NULL);
		// }
		return;
	}
}
// System.Void StoreManager::LerpToButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_LerpToButton_m66BFE90ECBAE1B54DD8CBED0F0EF1F4396CFB765 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float newX = Mathf.Lerp(panel.anchoredPosition.x, position, Time.deltaTime * 10f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___panel_11;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		float L_2 = L_1.___x_0;
		int32_t L_3 = ___position0;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5;
		L_5 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_2, ((float)L_3), ((float)il2cpp_codegen_multiply(L_4, (10.0f))), NULL);
		V_0 = L_5;
		// Vector2 newPosition = new Vector2(newX, panel.anchoredPosition.y);
		float L_6 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___panel_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_7, NULL);
		float L_9 = L_8.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_6, L_9, NULL);
		// panel.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___panel_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void StoreManager::StartDrage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_StartDrage_m4F68B363BB98A60F38A81F965F4444A6568BEA5E (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, const RuntimeMethod* method) 
{
	{
		// draging = true;
		__this->___draging_15 = (bool)1;
		// }
		return;
	}
}
// System.Void StoreManager::EndDrage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager_EndDrage_mDAB0E29EEC85F752C465CC2B224C2550FB72B3F4 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, const RuntimeMethod* method) 
{
	{
		// draging = false;
		__this->___draging_15 = (bool)0;
		// }
		return;
	}
}
// System.Void StoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreManager__ctor_m88D03BE902D61363210B08ECD6430F3AFCAC4562 (StoreManager_t1F347E0FAC21A65F295C448A68E7C1A6317FEF32* __this, const RuntimeMethod* method) 
{
	{
		// private bool draging = false;
		__this->___draging_15 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) < ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Enumerator_get_Current_m03DDB9D6C95434581544F1F2FF0D1A36EEAB09AF_gshared_inline (Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
