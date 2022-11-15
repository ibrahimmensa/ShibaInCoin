#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t499394A204AB9C6D5A32B67E62315CB4C9F3DB81;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// GoogleMobileAds.Api.AdError
struct AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50;
// GoogleMobileAds.Api.AdSize
struct AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B;
// GoogleMobileAds.Api.AdValue
struct AdValue_t62B3CCF65613068D5E70D6F3A5B2FE0CA8F0A115;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Api.BannerView
struct BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_tF7EA334C31E085646AA44A53664DBB8691DECD06;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t588078125444856498C8BD606951C430B2180CD2;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t4AC13636F66D78D7E73170FCFCA58B11FB1F6555;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_t60AA60AD8AA8A532A797A3F2DC99326A52F88DDF;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_t60AA60AD8AA8A532A797A3F2DC99326A52F88DDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_tCD45AF9A6ABEDAEDAE1B5988051E70ADA091B2D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD960C7F2536D284A403754E86DA8B5FE4E99DE7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE5BFAE4FFF70CE598FFD6441D821553B0234E394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m28B5DFAD3BC5A08EFBA75CEA83B209FC20C45177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_m7A0D0747D545DDE615D2DE8F31D22443A810355D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_m358AF93B58EC8322FCDC4B06D5E71FBBADD61CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_m8427EEAA7815AC7A1FF2133C8F382D53DFC16E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_mC3B6EFD9B4C071411C9073A774832CCFAAF88CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m41153A6D841017FBF1A3088BCD6D0669D90100A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mCABEBADB696A07BE73338FC6519BC76CC257E85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_m6CE59BDF51F390F56DCDF1CA7CC170D6705341CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_mA54FD0A8DBB223AA991BAB9DF581DEE70ECD0920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m19931F1086FBD8A0358C3BE582FED2A6AA363535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_mAAD040A392809A26B260D5D0C9A335EA180192FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m6178E329AB7B6A763ACDC3B7E0AC3DAF04BF08B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_mE315980951636BD31D48C8ABE6EFDFEA9BCDBECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_m75170B5FACC8B5D0D61572D0F9B753E563D8D21F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3C0DCE8C1F32A5C11EC003001F2B021FE647DDF2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEEAC2FC8CB81E2CED243FD061980DC7FF0CB5A0F 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;

public:
	inline static int32_t get_offset_of__client_0() { return static_cast<int32_t>(offsetof(AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD, ____client_0)); }
	inline RuntimeObject* get__client_0() const { return ____client_0; }
	inline RuntimeObject** get_address_of__client_0() { return &____client_0; }
	inline void set__client_0(RuntimeObject* value)
	{
		____client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____client_0), (void*)value);
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


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields, ___instance_2)); }
	inline MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
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

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563, ___initCompleteAction_0)); }
	inline Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
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


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t62B3CCF65613068D5E70D6F3A5B2FE0CA8F0A115 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t62B3CCF65613068D5E70D6F3A5B2FE0CA8F0A115 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t62B3CCF65613068D5E70D6F3A5B2FE0CA8F0A115 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t62B3CCF65613068D5E70D6F3A5B2FE0CA8F0A115 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
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


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785  : public AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF  : public MulticastDelegate_t
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


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1  : public MulticastDelegate_t
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


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D  : public MulticastDelegate_t
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


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m63C09A584D2E1F28C8E10A7F9F8E74CBA23E0635 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6 (EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536 (EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mE2FC1C27527411DA78C5954458B6E6E224C96FF2_inline (LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m18C24E8057F18CEAD5D1D87D304CC66A5BD50813 (LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m7CC510006FA6E73CC4E53AC0353E005DA912AC6F (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m5BEF7EF974EE927289473B27224B3D9CA8160D7E_inline (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * __this, LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035 (EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *, RuntimeObject *, AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC (EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * __this, RuntimeObject * ___sender0, AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D *, RuntimeObject *, AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCABEBADB696A07BE73338FC6519BC76CC257E85F (EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mF572ABC9431157176CE112F970EB266E4006B193_inline (AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m67A628997DC73D36A84EAD329C3D42E4698E6E26 (AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mAE59C17F9714FE3866EABCA5B634BF11E571BB70 (AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m1D5EABC4517A98BA073C3E6826266F0ED9D9A36F_inline (AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * __this, AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m41153A6D841017FBF1A3088BCD6D0669D90100A2 (EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 *, RuntimeObject *, AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mD5583BCD46CAB12BC8A1B301DC94B03F045983A1 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mEEEFD17D5D46023E63E0E1638F082714EEFF8CE4 (MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m8646AAD516D0D472B5F9F4E7D087B34295E49724 (U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * MobileAds_get_Instance_mAB932B8D23D5FF42FF3E4838754A194ADD3CA386 (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE5BFAE4FFF70CE598FFD6441D821553B0234E394 (Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m77065C660EBB3A0398712B519D3CA7E1FE9DE280 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m7148D1A99BA95FBFA85CDF4C0E52DFCE75C79473 (InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_mD960C7F2536D284A403754E86DA8B5FE4E99DE7E (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * __this, InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE *, InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m67A628997DC73D36A84EAD329C3D42E4698E6E26 (AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set__client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m6B21C3738D63BB7DAEB29C3F31BE71E1B1538512 (AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mAE59C17F9714FE3866EABCA5B634BF11E571BB70 (AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m1D5EABC4517A98BA073C3E6826266F0ED9D9A36F (AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * __this, AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * ___value0, const RuntimeMethod* method)
{
	{
		AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m7CC510006FA6E73CC4E53AC0353E005DA912AC6F (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m5BEF7EF974EE927289473B27224B3D9CA8160D7E (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * __this, LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m56A50D92B1D0659C0D321CE547BBB4D7504DE408 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, String_t* ___adUnitId0, AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * ___adSize1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		String_t* L_3 = ___adUnitId0;
		AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B * L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_t94BAF2D72DC3706E919BFE17169A1D86894F167B *, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m63C09A584D2E1F28C8E10A7F9F8E74CBA23E0635(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_mA08498FFFF3C753CA730DC08A61A362C4E55E406 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_m501B54DE9595F73867FDE54B827F63F1A0563BF6 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(15 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m63C09A584D2E1F28C8E10A7F9F8E74CBA23E0635 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_m28B5DFAD3BC5A08EFBA75CEA83B209FC20C45177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_m7A0D0747D545DDE615D2DE8F31D22443A810355D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_m358AF93B58EC8322FCDC4B06D5E71FBBADD61CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_m8427EEAA7815AC7A1FF2133C8F382D53DFC16E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_mC3B6EFD9B4C071411C9073A774832CCFAAF88CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__0_m28B5DFAD3BC5A08EFBA75CEA83B209FC20C45177_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C * L_3 = (EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C *)il2cpp_codegen_object_new(EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6(L_3, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__1_m7A0D0747D545DDE615D2DE8F31D22443A810355D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__2_m358AF93B58EC8322FCDC4B06D5E71FBBADD61CA9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__3_m8427EEAA7815AC7A1FF2133C8F382D53DFC16E46_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * L_9 = (EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D *)il2cpp_codegen_object_new(EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536(L_9, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__4_mC3B6EFD9B4C071411C9073A774832CCFAAF88CA9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t6323D823C01202727F4D4B1C75B1C3EADBECE638_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m28B5DFAD3BC5A08EFBA75CEA83B209FC20C45177 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_m7A0D0747D545DDE615D2DE8F31D22443A810355D (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * V_0 = NULL;
	AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * V_1 = NULL;
	{
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_0 = __this->get_OnAdFailedToLoad_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mE2FC1C27527411DA78C5954458B6E6E224C96FF2_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * L_3 = (LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 *)il2cpp_codegen_object_new(LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m18C24E8057F18CEAD5D1D87D304CC66A5BD50813(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_4 = __this->get_OnAdFailedToLoad_2();
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_5 = (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m7CC510006FA6E73CC4E53AC0353E005DA912AC6F(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_6 = V_1;
		LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_m5BEF7EF974EE927289473B27224B3D9CA8160D7E_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_m358AF93B58EC8322FCDC4B06D5E71FBBADD61CA9 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_m8427EEAA7815AC7A1FF2133C8F382D53DFC16E46 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_4();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_mC3B6EFD9B4C071411C9073A774832CCFAAF88CA9 (BannerView_t6B4ADF139E73B33B0F5CE98558D747384AA06699 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * L_0 = __this->get_OnPaidEvent_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * L_1 = __this->get_OnPaidEvent_5();
		AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC_RuntimeMethod_var);
	}

IL_0018:
	{
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
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m7148D1A99BA95FBFA85CDF4C0E52DFCE75C79473 (InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
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
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m762615D731A25CAE1043113E2E083DB52065C6B4 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mCABEBADB696A07BE73338FC6519BC76CC257E85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__0_m6CE59BDF51F390F56DCDF1CA7CC170D6705341CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__1_mA54FD0A8DBB223AA991BAB9DF581DEE70ECD0920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__2_m19931F1086FBD8A0358C3BE582FED2A6AA363535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__3_mAAD040A392809A26B260D5D0C9A335EA180192FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__4_m6178E329AB7B6A763ACDC3B7E0AC3DAF04BF08B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__5_mE315980951636BD31D48C8ABE6EFDFEA9BCDBECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__6_m75170B5FACC8B5D0D61572D0F9B753E563D8D21F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_m6CE59BDF51F390F56DCDF1CA7CC170D6705341CC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C * L_7 = (EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C *)il2cpp_codegen_object_new(EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_mA54FD0A8DBB223AA991BAB9DF581DEE70ECD0920_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD08958B77555C48D939B35A8C52D40F10F3208D6_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tA5C9F9BEBDE423F1C76CC5FBD45979AAAEEC9D4C * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_m19931F1086FBD8A0358C3BE582FED2A6AA363535_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_mAAD040A392809A26B260D5D0C9A335EA180192FC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539 * L_13 = (EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539 *)il2cpp_codegen_object_new(EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mCABEBADB696A07BE73338FC6519BC76CC257E85F(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_m6178E329AB7B6A763ACDC3B7E0AC3DAF04BF08B8_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mCABEBADB696A07BE73338FC6519BC76CC257E85F_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t6FC70A8A5F995EBD5EA636F764FEF027F38E3539 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_15 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_mE315980951636BD31D48C8ABE6EFDFEA9BCDBECF_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * L_17 = (EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D *)il2cpp_codegen_object_new(EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_m75170B5FACC8B5D0D61572D0F9B753E563D8D21F_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7534FD3A6DADCA422A73CB1696A7535A6BB00536_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_m2E78F878381DDA8835212FCDC95839E4A84B179C (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m79662E6EDFC635A387724884B685D66AEE95F616 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m041F111940223B2BD44820929AC6F277945FE052 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * V_0 = NULL;
	EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * V_1 = NULL;
	{
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_3 = V_1;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_6 = V_0;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *>((EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B **)L_2, ((EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_8 = V_0;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)L_8) == ((RuntimeObject*)(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_m2F9B41B290A7F6132929B6450CE3E7E3597F4F80 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * V_0 = NULL;
	EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * V_1 = NULL;
	{
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_3 = V_1;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_6 = V_0;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *>((EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B **)L_2, ((EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_8 = V_0;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)L_8) == ((RuntimeObject*)(EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_mD4FFB16FA69F0A5C1AB24667DE45F77360B1B0C6 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m4CFB65CAA1B09A898AC7F5A88D057EE5BC3704DF (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m5ECD82470821301B48C14394AE7AC215F97B78F5 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m7470037F5DC5E7BF13D8F64159B63AB1257305A5 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m4FF64B2AF7C2EB0EC08158CC9AF04D068F588637 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tBDAA5F5D4FBE5895618278C50F31F72733F81E50 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m922208EC2691E82816C084314D6517AB5F85EE22 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m143F5C83F1F6D10E15390929702A733EB858BC0D (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t4983A078E16DD41AD87148421226DEFD4F20448C_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_m6CE59BDF51F390F56DCDF1CA7CC170D6705341CC (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_mA54FD0A8DBB223AA991BAB9DF581DEE70ECD0920 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * V_0 = NULL;
	AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * V_1 = NULL;
	{
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mE2FC1C27527411DA78C5954458B6E6E224C96FF2_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * L_3 = (LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 *)il2cpp_codegen_object_new(LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m18C24E8057F18CEAD5D1D87D304CC66A5BD50813(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tA083672A65D17DB6E3FAEF219369CE25A7CE733B * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_5 = (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m7CC510006FA6E73CC4E53AC0353E005DA912AC6F(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_6 = V_1;
		LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_m5BEF7EF974EE927289473B27224B3D9CA8160D7E_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mABDB73745EBCE53B003642525B8B2566FE5E6035_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m19931F1086FBD8A0358C3BE582FED2A6AA363535 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_5();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_mAAD040A392809A26B260D5D0C9A335EA180192FC (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_6();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m6178E329AB7B6A763ACDC3B7E0AC3DAF04BF08B8 (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m41153A6D841017FBF1A3088BCD6D0669D90100A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * V_0 = NULL;
	AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * V_1 = NULL;
	{
		EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mF572ABC9431157176CE112F970EB266E4006B193_inline(L_1, /*hidden argument*/NULL);
		AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * L_3 = (AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD *)il2cpp_codegen_object_new(AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD_il2cpp_TypeInfo_var);
		AdError__ctor_m67A628997DC73D36A84EAD329C3D42E4698E6E26(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t298A788101AD6064E22EB97340A6DC5397EB73D1 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * L_5 = (AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 *)il2cpp_codegen_object_new(AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mAE59C17F9714FE3866EABCA5B634BF11E571BB70(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * L_6 = V_1;
		AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m1D5EABC4517A98BA073C3E6826266F0ED9D9A36F_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m41153A6D841017FBF1A3088BCD6D0669D90100A2(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m41153A6D841017FBF1A3088BCD6D0669D90100A2_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_mE315980951636BD31D48C8ABE6EFDFEA9BCDBECF (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_m75170B5FACC8B5D0D61572D0F9B753E563D8D21F (InterstitialAd_t35ABAF09AB8C3B0E411A1B44A8D92CB0EC56AAE5 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tBD730E88A626E9F35C4184A08A365C51948EDF4D * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_tBC55ECF827FF246BD8E42F2C06DF7025F6C8F872 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mCBC628D1FE91F5715B3A9DE6C5E0519D2A573BCC_RuntimeMethod_var);
	}

IL_0018:
	{
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m18C24E8057F18CEAD5D1D87D304CC66A5BD50813 (LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m67A628997DC73D36A84EAD329C3D42E4698E6E26(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mE06B60FC31210D8E98991DEF9864B42F5CC47498 (LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mEEEFD17D5D46023E63E0E1638F082714EEFF8CE4 (MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_mD5583BCD46CAB12BC8A1B301DC94B03F045983A1(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * MobileAds_get_Instance_mAB932B8D23D5FF42FF3E4838754A194ADD3CA386 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * L_0 = ((MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * L_1 = (MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 *)il2cpp_codegen_object_new(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var);
		MobileAds__ctor_mEEEFD17D5D46023E63E0E1638F082714EEFF8CE4(L_1, /*hidden argument*/NULL);
		((MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * L_2 = ((MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_mF49A2BB05D621013B80FE2FD36BA2EA2C6A31A5A (Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE5BFAE4FFF70CE598FFD6441D821553B0234E394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_t60AA60AD8AA8A532A797A3F2DC99326A52F88DDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tCD45AF9A6ABEDAEDAE1B5988051E70ADA091B2D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3C0DCE8C1F32A5C11EC003001F2B021FE647DDF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * L_0 = (U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m8646AAD516D0D472B5F9F4E7D087B34295E49724(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * L_1 = V_0;
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9 * L_3;
		L_3 = MobileAds_get_Instance_mAB932B8D23D5FF42FF3E4838754A194ADD3CA386(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * L_5 = V_0;
		Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF * L_6 = (Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF *)il2cpp_codegen_object_new(Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF_il2cpp_TypeInfo_var);
		Action_1__ctor_mE5BFAE4FFF70CE598FFD6441D821553B0234E394(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3C0DCE8C1F32A5C11EC003001F2B021FE647DDF2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE5BFAE4FFF70CE598FFD6441D821553B0234E394_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_tDDD8BC198F92CC2BC07BDFD674B516F0C0CF13CF * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_t60AA60AD8AA8A532A797A3F2DC99326A52F88DDF_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tCD45AF9A6ABEDAEDAE1B5988051E70ADA091B2D3_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m77065C660EBB3A0398712B519D3CA7E1FE9DE280(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		((MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t8A43ABE72454879BAF39F5A72DAEEA9DC9917BF9_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mD5583BCD46CAB12BC8A1B301DC94B03F045983A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m746742BB56B763B023C79A6042BE83FC473B3B3E(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_t2D17240D46ED45C87703FEF4E2C3DE0D83B427CF_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m8646AAD516D0D472B5F9F4E7D087B34295E49724 (U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3C0DCE8C1F32A5C11EC003001F2B021FE647DDF2 (U3CInitializeU3Ec__AnonStorey0_t6A922E80107D695735F8589E89A3F9D1CBA59563 * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD960C7F2536D284A403754E86DA8B5FE4E99DE7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_tD2F098EF69069734EB427E8A38E417BD1D49FBBE * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 * L_3 = (InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88 *)il2cpp_codegen_object_new(InitializationStatus_t908EE2150A8F9ADA4653EBFEB555770B8DF1EE88_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_m7148D1A99BA95FBFA85CDF4C0E52DFCE75C79473(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mD960C7F2536D284A403754E86DA8B5FE4E99DE7E(L_1, L_3, /*hidden argument*/Action_1_Invoke_mD960C7F2536D284A403754E86DA8B5FE4E99DE7E_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mE2FC1C27527411DA78C5954458B6E6E224C96FF2_inline (LoadAdErrorClientEventArgs_tE0B05E21479A7AF1C4BD8C4EB71B23DF0AC17D95 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m5BEF7EF974EE927289473B27224B3D9CA8160D7E_inline (AdFailedToLoadEventArgs_t487A3DAC90ED09690F09B324815EC25DC1059FDF * __this, LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_tB5BA73BFF9F02266CB4526AF5546F1B90420C785 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mF572ABC9431157176CE112F970EB266E4006B193_inline (AdErrorClientEventArgs_tD7905ECB7813C868B6689224E161B0E1C7EB9094 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m1D5EABC4517A98BA073C3E6826266F0ED9D9A36F_inline (AdErrorEventArgs_tB76F873BDE826ADD2754A6BA4BA685B433BF0F69 * __this, AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * ___value0, const RuntimeMethod* method)
{
	{
		AdError_tBAEF28A7B48673DAF72EF66BEBA3C957BA54D3BD * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
