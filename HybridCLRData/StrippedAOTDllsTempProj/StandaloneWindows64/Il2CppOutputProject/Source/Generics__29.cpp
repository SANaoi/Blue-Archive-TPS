#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct ConstrainedActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct ConstrainedActionInvoker5<T1, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { &p1, p2, p3, p4, p5 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct ConstrainedActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct ConstrainedActionInvoker6<T1, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { &p1, p2, p3, p4, p5, p6 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[5]);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F;
struct CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024;
struct CombineLatest_10_t57EF6A4D7704DDA7A6F119F16FB5B4D3B42BA0DB;
struct CombineLatest_11_tFB8520EB60392016728569634AF63EDE02990D79;
struct CombineLatest_12_tF2422C877616E279B098180601F937CD3EF2F40C;
struct CombineLatest_13_tF0702EE5CB65EC95C3408156DDF9B8A0E3377EFF;
struct CombineLatest_14_tE561921BB0EAD0BC0D35ACAB8300A5703EC3D73B;
struct CombineLatest_15_tCAD929D23EC0E908D501B213F813673012564AA1;
struct CombineLatest_16_t5FB104E5E4C7E1235CC7A6CBAF3CA27CCF0FEB5A;
struct CombineLatest_3_tF39418B68A255ABA3C52FD154B0930ACC42C44E6;
struct CombineLatest_4_t7C4922D38E8CFABCA31EC31FFF71C597B725D153;
struct CombineLatest_5_t1B0E99708840A45351D99AFBBFDCFF441807DEFC;
struct CombineLatest_6_tF4CD28F89A34944D2D26F1F65728B4749CEA36F1;
struct CombineLatest_7_tABFBBB513635348CF9FC852C0D04C69BD13C0CEE;
struct CombineLatest_8_t84A6EFAA6A9E92F57845025BCE4A67DE3E0E51ED;
struct CombineLatest_9_t80049DAEA48E65AFB4213D0850A61873C8807218;
struct CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518;
struct Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB;
struct Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681;
struct Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656;
struct Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089;
struct Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF;
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE;
struct Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64;
struct Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD;
struct Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA;
struct Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05;
struct Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D;
struct Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD;
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079;
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397;
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320;
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80;
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E;
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375;
struct IObjectPool_1_tE8CA6468BE6707A63684BDE52B62C116D73785BA;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57;
struct ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C;
struct ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C;
struct ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8;
struct ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30;
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
struct ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DerObjectIdentifierU5BU5D_tD2CFD10A2D7EFA54014F4A5FDA4A3DA8A852F42F;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF;
struct Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B;
struct Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IRandomGenerator_t7E843F4456A9C306B8158B975352B907634D0A42;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB  : public RuntimeObject
{
};
struct U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108  : public RuntimeObject
{
};
struct U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72  : public RuntimeObject
{
};
struct U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E  : public RuntimeObject
{
};
struct U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669  : public RuntimeObject
{
};
struct U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8  : public RuntimeObject
{
};
struct U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC  : public RuntimeObject
{
};
struct U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B  : public RuntimeObject
{
};
struct U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD  : public RuntimeObject
{
};
struct U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12  : public RuntimeObject
{
};
struct CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024 : public RuntimeObject {};
struct CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993  : public RuntimeObject
{
};
struct CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7  : public RuntimeObject
{
};
struct CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296  : public RuntimeObject
{
};
struct CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4  : public RuntimeObject
{
};
struct CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183  : public RuntimeObject
{
};
struct CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B  : public RuntimeObject
{
};
struct CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87  : public RuntimeObject
{
};
struct CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC  : public RuntimeObject
{
};
struct CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904  : public RuntimeObject
{
};
struct CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60  : public RuntimeObject
{
};
struct CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79  : public RuntimeObject
{
};
struct CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33  : public RuntimeObject
{
};
struct CombineLatest_10_t57EF6A4D7704DDA7A6F119F16FB5B4D3B42BA0DB  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE* ___resultSelector;
};
struct CombineLatest_11_tFB8520EB60392016728569634AF63EDE02990D79  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	RuntimeObject* ___source10;
	Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64* ___resultSelector;
};
struct CombineLatest_12_tF2422C877616E279B098180601F937CD3EF2F40C  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	RuntimeObject* ___source10;
	RuntimeObject* ___source11;
	Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD* ___resultSelector;
};
struct CombineLatest_13_tF0702EE5CB65EC95C3408156DDF9B8A0E3377EFF  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	RuntimeObject* ___source10;
	RuntimeObject* ___source11;
	RuntimeObject* ___source12;
	Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA* ___resultSelector;
};
struct CombineLatest_14_tE561921BB0EAD0BC0D35ACAB8300A5703EC3D73B  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	RuntimeObject* ___source10;
	RuntimeObject* ___source11;
	RuntimeObject* ___source12;
	RuntimeObject* ___source13;
	Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05* ___resultSelector;
};
struct CombineLatest_15_tCAD929D23EC0E908D501B213F813673012564AA1  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	RuntimeObject* ___source10;
	RuntimeObject* ___source11;
	RuntimeObject* ___source12;
	RuntimeObject* ___source13;
	RuntimeObject* ___source14;
	Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D* ___resultSelector;
};
struct CombineLatest_16_t5FB104E5E4C7E1235CC7A6CBAF3CA27CCF0FEB5A  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	RuntimeObject* ___source9;
	RuntimeObject* ___source10;
	RuntimeObject* ___source11;
	RuntimeObject* ___source12;
	RuntimeObject* ___source13;
	RuntimeObject* ___source14;
	RuntimeObject* ___source15;
	Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD* ___resultSelector;
};
struct CombineLatest_3_tF39418B68A255ABA3C52FD154B0930ACC42C44E6  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___resultSelector;
};
struct CombineLatest_4_t7C4922D38E8CFABCA31EC31FFF71C597B725D153  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* ___resultSelector;
};
struct CombineLatest_5_t1B0E99708840A45351D99AFBBFDCFF441807DEFC  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* ___resultSelector;
};
struct CombineLatest_6_tF4CD28F89A34944D2D26F1F65728B4749CEA36F1  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* ___resultSelector;
};
struct CombineLatest_7_tABFBBB513635348CF9FC852C0D04C69BD13C0CEE  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* ___resultSelector;
};
struct CombineLatest_8_t84A6EFAA6A9E92F57845025BCE4A67DE3E0E51ED  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* ___resultSelector;
};
struct CombineLatest_9_t80049DAEA48E65AFB4213D0850A61873C8807218  : public RuntimeObject
{
	RuntimeObject* ___source1;
	RuntimeObject* ___source2;
	RuntimeObject* ___source3;
	RuntimeObject* ___source4;
	RuntimeObject* ___source5;
	RuntimeObject* ___source6;
	RuntimeObject* ___source7;
	RuntimeObject* ___source8;
	Func_9_tCA208DB676270504B9EA383199B74083CECB6375* ___resultSelector;
};
struct Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB  : public RuntimeObject
{
};
struct Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681  : public RuntimeObject
{
};
struct Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656  : public RuntimeObject
{
};
struct Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089  : public RuntimeObject
{
};
struct Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF  : public RuntimeObject
{
};
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259  : public RuntimeObject
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_List;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_CreateFunc;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnGet;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnRelease;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct Asn1Encodable_tFEE0B0C4179DE5C1AA6C81FA97029DCE75244389  : public RuntimeObject
{
};
struct Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF  : public RuntimeObject
{
	int32_t ___SYS_N;
	int32_t ___SYS_T;
	int32_t ___GFBITS;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F  : public RuntimeObject
{
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Change_t854CBA093D42417E5519F076CCDA910A2AB6700A 
{
	uint8_t ___operation;
	int32_t ___index;
	int32_t ___item;
};
struct Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00 
{
	uint8_t ___operation;
	int32_t ___index;
	RuntimeObject* ___item;
};
struct Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E 
{
	int64_t ___intervalStart;
	int64_t ___intervalEnd;
	RuntimeObject* ___item;
};
struct ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57  : public Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB
{
};
struct ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C  : public Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681
{
};
struct ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C  : public Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656
{
};
struct ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8  : public Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089
{
};
struct ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30  : public Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF
{
};
struct PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E 
{
	RuntimeObject* ___m_ToReturn;
	RuntimeObject* ___m_Pool;
};
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	bool ___result;
	RuntimeObject* ___error;
	int16_t ___version;
	bool ___hasUnhandledError;
	int32_t ___completedCount;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation;
	RuntimeObject* ___continuationState;
};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
struct Asn1Object_t88A4CCA55F497755711F405EE399C0720E53976B  : public Asn1Encodable_tFEE0B0C4179DE5C1AA6C81FA97029DCE75244389
{
};
struct Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B  : public Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF
{
};
struct Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239  : public Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB 
{
	union
	{
		struct
		{
		};
		uint8_t GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB__padding[1];
	};
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MatchPlayerData_t8CBE176A0E06C3BDF615BAAF008FBD6E419977A9 
{
	int32_t ___playerIndex;
	int32_t ___wins;
	uint16_t ___currentScore;
};
struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	RuntimeObject* ___generator;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
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
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
struct Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952 
{
	uint8_t ___operation;
	RuntimeObject* ___key;
	MatchPlayerData_t8CBE176A0E06C3BDF615BAAF008FBD6E419977A9 ___item;
};
struct CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F  : public RuntimeObject
{
	int32_t ___SYS_N;
	int32_t ___SYS_T;
	int32_t ___GFBITS;
	int32_t ___IRR_BYTES;
	int32_t ___COND_BYTES;
	int32_t ___PK_NROWS;
	int32_t ___PK_NCOLS;
	int32_t ___PK_ROW_BYTES;
	int32_t ___SYND_BYTES;
	int32_t ___GFMASK;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___poly;
	int32_t ___defaultKeySize;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB ___gf;
	Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF* ___benes;
	bool ___usePadding;
	bool ___countErrorIndices;
	bool ___usePivots;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7  : public Asn1Object_t88A4CCA55F497755711F405EE399C0720E53976B
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_contents;
	String_t* ___m_identifier;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoryU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___U3CpathU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField;
	RuntimeObject* ___m_Target;
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518  : public EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1
{
	String_t* ___m_CommandName;
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE  : public MulticastDelegate_t
{
};
struct Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64  : public MulticastDelegate_t
{
};
struct Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD  : public MulticastDelegate_t
{
};
struct Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA  : public MulticastDelegate_t
{
};
struct Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05  : public MulticastDelegate_t
{
};
struct Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D  : public MulticastDelegate_t
{
};
struct Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079  : public MulticastDelegate_t
{
};
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397  : public MulticastDelegate_t
{
};
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320  : public MulticastDelegate_t
{
};
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80  : public MulticastDelegate_t
{
};
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E  : public MulticastDelegate_t
{
};
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375  : public MulticastDelegate_t
{
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info;
	RuntimeObject* ___GenericCache;
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor;
};
struct U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB_StaticFields
{
	U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB* ___U3CU3E9;
};
struct U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108_StaticFields
{
	U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108* ___U3CU3E9;
};
struct U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72_StaticFields
{
	U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72* ___U3CU3E9;
};
struct U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E_StaticFields
{
	U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E* ___U3CU3E9;
};
struct U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669_StaticFields
{
	U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669* ___U3CU3E9;
};
struct U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8_StaticFields
{
	U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8* ___U3CU3E9;
};
struct U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC_StaticFields
{
	U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC* ___U3CU3E9;
};
struct U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B_StaticFields
{
	U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B* ___U3CU3E9;
};
struct U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD_StaticFields
{
	U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD* ___U3CU3E9;
};
struct U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12_StaticFields
{
	U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12* ___U3CU3E9;
};
struct CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB_StaticFields
{
	Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* ___defaultComparer;
};
struct Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681_StaticFields
{
	Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* ___defaultComparer;
};
struct Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656_StaticFields
{
	Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* ___defaultComparer;
};
struct Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089_StaticFields
{
	Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* ___defaultComparer;
};
struct Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF_StaticFields
{
	Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* ___defaultComparer;
};
struct Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___TransposeMasks;
};
struct NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields
{
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___NistAlgorithm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___HashAlgs;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha512;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha512_224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha512_256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha3_224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha3_256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha3_384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdSha3_512;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdShake128;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdShake256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdHMacWithSha3_224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdHMacWithSha3_256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdHMacWithSha3_384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdHMacWithSha3_512;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdShake128Len;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdShake256Len;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdKmacWithShake128;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdKmacWithShake256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___Aes;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Ecb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Cbc;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Ofb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Cfb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Wrap;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Gcm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128Ccm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128WrapPad;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes128GMac;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Ecb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Cbc;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Ofb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Cfb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Wrap;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Gcm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192Ccm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192WrapPad;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes192GMac;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Ecb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Cbc;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Ofb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Cfb;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Wrap;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Gcm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256Ccm;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256WrapPad;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdAes256GMac;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___SigAlgs;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdDsaWithSha2;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___DsaWithSha224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___DsaWithSha256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___DsaWithSha384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___DsaWithSha512;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdDsaWithSha3_224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdDsaWithSha3_256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdDsaWithSha3_384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdDsaWithSha3_512;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdEcdsaWithSha3_224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdEcdsaWithSha3_256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdEcdsaWithSha3_384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdEcdsaWithSha3_512;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdRsassaPkcs1V15WithSha3_224;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdRsassaPkcs1V15WithSha3_256;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdRsassaPkcs1V15WithSha3_384;
	DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___IdRsassaPkcs1V15WithSha3_512;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8_StaticFields
{
	int64_t ___counter;
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___MasterRandom;
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___ArbitraryRandom;
	double ___DoubleScale;
};
struct DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7_StaticFields
{
	DerObjectIdentifierU5BU5D_tD2CFD10A2D7EFA54014F4A5FDA4A3DA8A852F42F* ___Cache;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6* ___s_Pool;
	int32_t ___EventCategory;
};
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
};
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
};
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
};
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
};
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
};
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
};
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
};
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
};
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
};
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
};
struct _CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
};
struct _CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed13Delegate;
};
struct _CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed13Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed14Delegate;
};
struct _CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed12Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed13Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed14Delegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed15Delegate;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes;
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* m_Items[1];

	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PublicKeySize_mE79C85F1001A9FB1F91505FC7325BC8D2D39E558_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PrivateKeySize_mA121FA49ED5622F5B5B189451FF66B113DD3E1E9_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_GenerateIrrPoly_m2B3231BEF77FD6DCCEFC15A99D7E987826FA05EF_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort64_mE88513A6417DDBB181D0F45C702F82DE4B4C0F35_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_ControlBitsFromPermutation_m9E32CC9BEE23A6361BA846B360CB824667F746AD_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CmceEngine_1_SameMask32_m98BDEF88573DBFAEABA391C9DB358A7C874C7BE9_gshared (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_GenerateErrorVector_m74F213B3E968A23FCC2BF8D3DCAC4DF9D7555413_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___1_random, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Syndrome_m700034DE41AF73D60DAD971DA9987CA220FDB7C7_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckPKPadding_m5A667A5217AA10231C2AEBF8F6CB097A7A161DD2_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Encrypt_m09DD041B344B5AB6E05C1D5C93E1F642364EC737_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___3_random, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckCPadding_m5DD7A9E9662AFA8F46468927CC2E8856218F5DB9_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Decrypt_m76EFBD6BB8D5CC9FE163D90D9DE8C9469CA61B0B_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Synd_m2232987D0D5FC906533925319CB71D198FADF85C_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_BM_m205F09B6C820C8F2C19F28FAAFD21D429C2810EB_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Root_m44C6D1DBD0146309E5883A35344C66BFE300F480_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Min_m3BE4737D5469BF249C99FB6D8104D36166A8E2C9_gshared (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Ctz_m32737077DF21D5CB7D59ED298126C3D96FB965A4_gshared (uint64_t ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CmceEngine_1_SameMask64_mC83F7272AF9B630C91DA27D039B794383CB05FFB_gshared (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Layer_m471FA41AE48FC01A03FA64945341CF2AE15A72C1_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_MovColumns_m212E31505217F58BA50B9B3675D4C15CF455610E_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject** ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_mD11258015D6778B557F3DED4696BEF3335FD66C3_gshared (EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_LocalInit_m119651F69F8102214FF57766757D77B3D27DC41A_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_mB7260F34FCF8D401B1D05C4B0205DCA9B415E3E3_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventBase_1_GetPooled_mBD7595B7D0C2B6D191690953CCBC74F4120FBD01_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_m385124A7A8517F869B52108A7FC234225AFBB4A0_gshared (EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* Comparer_1_CreateComparer_m0EB57BB5CFE513E94A963C16A9CA5868C418EF2F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectComparer_1__ctor_m3D43EC544AB9C2C5EDE66376D1CA378F43231187_gshared (ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* Comparer_1_CreateComparer_mE8DEE23A5CD56B8B9A17D6BB40D7C43F51C4E927_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectComparer_1__ctor_m75E1CDF502AEA13A8CC2DF4C626430ECCBF6E77A_gshared (ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* Comparer_1_CreateComparer_m88C9298ED045C3F9A20742C86300B2420B72FE9C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectComparer_1__ctor_mCF00A6D2A3B8A4245F14345842C136D03EC83E4B_gshared (ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* Comparer_1_CreateComparer_m420EECDB3C3DEEAC1F90C0C3E7FA0FFC4ED3C5F8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectComparer_1__ctor_m6163DBF51841D6151A9E21CEF1B1EF2F6A09A6C9_gshared (ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* Comparer_1_CreateComparer_mB28E9162423F7FABE5899C1C5DE9934E645EBFF4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectComparer_1__ctor_m5CB9035FE761D75E86D6A19AA0775C3003467B3C_gshared (ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Benes12__ctor_mD277DFEA0C344530E7F2D5A220CE9C4D916A32FC (Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B* __this, int32_t ___0_n, int32_t ___1_t, int32_t ___2_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Benes13__ctor_m3CE1241A07F26383594C28FA7885F83B9E133AAC (Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239* __this, int32_t ___0_n, int32_t ___1_t, int32_t ___2_m, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_get_PublicKeySize_mE79C85F1001A9FB1F91505FC7325BC8D2D39E558 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, const RuntimeMethod*))CmceEngine_1_get_PublicKeySize_mE79C85F1001A9FB1F91505FC7325BC8D2D39E558_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6 (DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9_gshared)(__this, ___0_pk, ___1_sk, ___2_perm, ___3_pi, ___4_pivots, method);
}
inline int32_t CmceEngine_1_get_PrivateKeySize_mA121FA49ED5622F5B5B189451FF66B113DD3E1E9 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, const RuntimeMethod*))CmceEngine_1_get_PrivateKeySize_mA121FA49ED5622F5B5B189451FF66B113DD3E1E9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_offset, int32_t ___2_gfmask, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_GenerateIrrPoly_m2B3231BEF77FD6DCCEFC15A99D7E987826FA05EF (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))CmceEngine_1_GenerateIrrPoly_m2B3231BEF77FD6DCCEFC15A99D7E987826FA05EF_gshared)(__this, ___0_field, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_StoreGF_m01953FF9B94D6BF58CC3C48DBCE581F78E8535F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dest, int32_t ___1_offset, uint16_t ___2_a, const RuntimeMethod* method) ;
inline void CmceEngine_1_Sort64_mE88513A6417DDBB181D0F45C702F82DE4B4C0F35 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method)
{
	((  void (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int32_t, int32_t, const RuntimeMethod*))CmceEngine_1_Sort64_mE88513A6417DDBB181D0F45C702F82DE4B4C0F35_gshared)(___0_temp, ___1_from, ___2_to, method);
}
inline void CmceEngine_1_ControlBitsFromPermutation_m9E32CC9BEE23A6361BA846B360CB824667F746AD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int64_t, int64_t, const RuntimeMethod*))CmceEngine_1_ControlBitsFromPermutation_m9E32CC9BEE23A6361BA846B360CB824667F746AD_gshared)(___0_output, ___1_pi, ___2_w, ___3_n, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_offset, uint64_t ___2_input, const RuntimeMethod* method) ;
inline uint8_t CmceEngine_1_SameMask32_m98BDEF88573DBFAEABA391C9DB358A7C874C7BE9 (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (int16_t, int16_t, const RuntimeMethod*))CmceEngine_1_SameMask32_m98BDEF88573DBFAEABA391C9DB358A7C874C7BE9_gshared)(___0_x, ___1_y, method);
}
inline void CmceEngine_1_GenerateErrorVector_m74F213B3E968A23FCC2BF8D3DCAC4DF9D7555413 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___1_random, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8*, const RuntimeMethod*))CmceEngine_1_GenerateErrorVector_m74F213B3E968A23FCC2BF8D3DCAC4DF9D7555413_gshared)(__this, ___0_error_vector, ___1_random, method);
}
inline void CmceEngine_1_Syndrome_m700034DE41AF73D60DAD971DA9987CA220FDB7C7 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_Syndrome_m700034DE41AF73D60DAD971DA9987CA220FDB7C7_gshared)(__this, ___0_cipher_text, ___1_pk, ___2_error_vector, method);
}
inline int32_t CmceEngine_1_CheckPKPadding_m5A667A5217AA10231C2AEBF8F6CB097A7A161DD2 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_CheckPKPadding_m5A667A5217AA10231C2AEBF8F6CB097A7A161DD2_gshared)(__this, ___0_pk, method);
}
inline void CmceEngine_1_Encrypt_m09DD041B344B5AB6E05C1D5C93E1F642364EC737 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___3_random, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8*, const RuntimeMethod*))CmceEngine_1_Encrypt_m09DD041B344B5AB6E05C1D5C93E1F642364EC737_gshared)(__this, ___0_cipher_text, ___1_pk, ___2_error_vector, ___3_random, method);
}
inline int32_t CmceEngine_1_CheckCPadding_m5DD7A9E9662AFA8F46468927CC2E8856218F5DB9 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_CheckCPadding_m5DD7A9E9662AFA8F46468927CC2E8856218F5DB9_gshared)(__this, ___0_c, method);
}
inline int32_t CmceEngine_1_Decrypt_m76EFBD6BB8D5CC9FE163D90D9DE8C9469CA61B0B (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_Decrypt_m76EFBD6BB8D5CC9FE163D90D9DE8C9469CA61B0B_gshared)(__this, ___0_error_vector, ___1_sk, ___2_cipher_text, method);
}
inline void CmceEngine_1_Synd_m2232987D0D5FC906533925319CB71D198FADF85C (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_Synd_m2232987D0D5FC906533925319CB71D198FADF85C_gshared)(__this, ___0_output, ___1_f, ___2_L, ___3_r, method);
}
inline void CmceEngine_1_BM_m205F09B6C820C8F2C19F28FAAFD21D429C2810EB (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))CmceEngine_1_BM_m205F09B6C820C8F2C19F28FAAFD21D429C2810EB_gshared)(__this, ___0_output, ___1_s, method);
}
inline void CmceEngine_1_Root_m44C6D1DBD0146309E5883A35344C66BFE300F480 (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))CmceEngine_1_Root_m44C6D1DBD0146309E5883A35344C66BFE300F480_gshared)(__this, ___0_output, ___1_f, ___2_L, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFIsZero_mF86E0A3133F14159BFFFFD810FDA575B098D662F (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint16_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GF13_GFMulExt_m45C02A8D80E43ECB3DE23FE8F9D661671625E45E (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_Min_m3BE4737D5469BF249C99FB6D8104D36166A8E2C9 (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t, int32_t, const RuntimeMethod*))CmceEngine_1_Min_m3BE4737D5469BF249C99FB6D8104D36166A8E2C9_gshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFReduce_m9021290E45CE1F7463A2FB069D0DD9BBC8706257 (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFFrac_m085E4C55F84B3F3EE2CB2D9D048C304D7C8F9E30 (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint16_t ___0_den, uint16_t ___1_num, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint16_t ___0_in0, uint16_t ___1_in1, const RuntimeMethod* method) ;
inline uint16_t CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE_gshared)(__this, ___0_f, ___1_a, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFSq_mF1F075D0A92D91EC767942CDBDC415EE06636FC1 (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint16_t ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFInv_m41ED268B809C91B59BEF21DD1B745F23BD1AE448 (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, uint16_t ___0_den, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_Ctz_m32737077DF21D5CB7D59ED298126C3D96FB965A4 (uint64_t ___0_input, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint64_t, const RuntimeMethod*))CmceEngine_1_Ctz_m32737077DF21D5CB7D59ED298126C3D96FB965A4_gshared)(___0_input, method);
}
inline uint64_t CmceEngine_1_SameMask64_mC83F7272AF9B630C91DA27D039B794383CB05FFB (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (uint16_t, uint16_t, const RuntimeMethod*))CmceEngine_1_SameMask64_mC83F7272AF9B630C91DA27D039B794383CB05FFB_gshared)(___0_x, ___1_y, method);
}
inline void CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1_gshared)(___0_output, ___1_pos, ___2_step, ___3_pi, ___4_qIndex, ___5_w, ___6_n, ___7_temp, method);
}
inline void CmceEngine_1_Layer_m471FA41AE48FC01A03FA64945341CF2AE15A72C1 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method)
{
	((  void (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, const RuntimeMethod*))CmceEngine_1_Layer_m471FA41AE48FC01A03FA64945341CF2AE15A72C1_gshared)(___0_p, ___1_output, ___2_ptrIndex, ___3_s, ___4_n, method);
}
inline int16_t CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method)
{
	return ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7_gshared)(___0_temp, ___1_q_index, method);
}
inline void CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348_gshared)(___0_temp, ___1_from, ___2_to, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Utils_Bitrev_m36DA6A03B52348762665DCBE4625071A10940E2C (uint16_t ___0_a, int32_t ___1_GFBITS, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bits_BitPermuteStep2_m635AC109033719E92C7EAD83721C5F2F881E60FD_inline (uint64_t* ___0_hi, uint64_t* ___1_lo, uint64_t ___2_m, int32_t ___3_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Interleave_Transpose_m80411D9875FDD3547D6D81DCEB7F3F94B045742B (uint64_t ___0_x, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_MovColumns_m212E31505217F58BA50B9B3675D4C15CF455610E (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F*, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))CmceEngine_1_MovColumns_m212E31505217F58BA50B9B3675D4C15CF455610E_gshared)(__this, ___0_mat, ___1_pi, ___2_pivots, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_Low_m4625199858C4FF58A114E7FA22395C767C2FC5D7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_Low_m64CEBDE12D2106C0EBE76BF649FFC419C3C186FA (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, int32_t ___3_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF13_GFSqrPoly_mE6BB55BAF13814E7F78743FDFC7D2A1318F0FBDA (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, int32_t ___0_length, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_poly, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_input, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF13_GFMulPoly_m34C565B0F33A2A87D5AA30FE29567DDBD917D54A (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* __this, int32_t ___0_length, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_poly, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_left, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___4_right, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared)(__this, method);
}
inline PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject** ___0_v, const RuntimeMethod* method)
{
	return ((  PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject**, const RuntimeMethod*))ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9_gshared)(__this, ___0_v, method);
}
inline void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject*, const RuntimeMethod*))ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared)(__this, ___0_element, method);
}
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
inline void EventBase_1_Init_mD11258015D6778B557F3DED4696BEF3335FD66C3 (EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1*, const RuntimeMethod*))EventBase_1_Init_mD11258015D6778B557F3DED4696BEF3335FD66C3_gshared)(__this, method);
}
inline void CommandEventBase_1_LocalInit_m119651F69F8102214FF57766757D77B3D27DC41A (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, const RuntimeMethod* method)
{
	((  void (*) (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518*, const RuntimeMethod*))CommandEventBase_1_LocalInit_m119651F69F8102214FF57766757D77B3D27DC41A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void CommandEventBase_1_set_commandName_mB7260F34FCF8D401B1D05C4B0205DCA9B415E3E3 (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518*, String_t*, const RuntimeMethod*))CommandEventBase_1_set_commandName_mB7260F34FCF8D401B1D05C4B0205DCA9B415E3E3_gshared)(__this, ___0_value, method);
}
inline RuntimeObject* EventBase_1_GetPooled_mBD7595B7D0C2B6D191690953CCBC74F4120FBD01 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))EventBase_1_GetPooled_mBD7595B7D0C2B6D191690953CCBC74F4120FBD01_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_value, const RuntimeMethod* method) ;
inline void EventBase_1__ctor_m385124A7A8517F869B52108A7FC234225AFBB4A0 (EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1*, const RuntimeMethod*))EventBase_1__ctor_m385124A7A8517F869B52108A7FC234225AFBB4A0_gshared)(__this, method);
}
inline Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* Comparer_1_CreateComparer_m0EB57BB5CFE513E94A963C16A9CA5868C418EF2F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* (*) (const RuntimeMethod*))Comparer_1_CreateComparer_m0EB57BB5CFE513E94A963C16A9CA5868C418EF2F_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066 (Type_t* ___0_genericType, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___1_genericArgument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void ObjectComparer_1__ctor_m3D43EC544AB9C2C5EDE66376D1CA378F43231187 (ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57*, const RuntimeMethod*))ObjectComparer_1__ctor_m3D43EC544AB9C2C5EDE66376D1CA378F43231187_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* Comparer_1_CreateComparer_mE8DEE23A5CD56B8B9A17D6BB40D7C43F51C4E927 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* (*) (const RuntimeMethod*))Comparer_1_CreateComparer_mE8DEE23A5CD56B8B9A17D6BB40D7C43F51C4E927_gshared)(method);
}
inline void ObjectComparer_1__ctor_m75E1CDF502AEA13A8CC2DF4C626430ECCBF6E77A (ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C*, const RuntimeMethod*))ObjectComparer_1__ctor_m75E1CDF502AEA13A8CC2DF4C626430ECCBF6E77A_gshared)(__this, method);
}
inline Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* Comparer_1_CreateComparer_m88C9298ED045C3F9A20742C86300B2420B72FE9C (const RuntimeMethod* method)
{
	return ((  Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* (*) (const RuntimeMethod*))Comparer_1_CreateComparer_m88C9298ED045C3F9A20742C86300B2420B72FE9C_gshared)(method);
}
inline void ObjectComparer_1__ctor_mCF00A6D2A3B8A4245F14345842C136D03EC83E4B (ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C*, const RuntimeMethod*))ObjectComparer_1__ctor_mCF00A6D2A3B8A4245F14345842C136D03EC83E4B_gshared)(__this, method);
}
inline Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* Comparer_1_CreateComparer_m420EECDB3C3DEEAC1F90C0C3E7FA0FFC4ED3C5F8 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* (*) (const RuntimeMethod*))Comparer_1_CreateComparer_m420EECDB3C3DEEAC1F90C0C3E7FA0FFC4ED3C5F8_gshared)(method);
}
inline void ObjectComparer_1__ctor_m6163DBF51841D6151A9E21CEF1B1EF2F6A09A6C9 (ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8*, const RuntimeMethod*))ObjectComparer_1__ctor_m6163DBF51841D6151A9E21CEF1B1EF2F6A09A6C9_gshared)(__this, method);
}
inline Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* Comparer_1_CreateComparer_mB28E9162423F7FABE5899C1C5DE9934E645EBFF4 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* (*) (const RuntimeMethod*))Comparer_1_CreateComparer_mB28E9162423F7FABE5899C1C5DE9934E645EBFF4_gshared)(method);
}
inline void ObjectComparer_1__ctor_m5CB9035FE761D75E86D6A19AA0775C3003467B3C (ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30*, const RuntimeMethod*))ObjectComparer_1__ctor_m5CB9035FE761D75E86D6A19AA0775C3003467B3C_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_IrrBytes_m44D558F019CB03D3DA4698BBB19209981E69843C_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___IRR_BYTES;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CondBytes_m26C1ACAACD822245B469C19A6D8A48A208734F14_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___COND_BYTES;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PrivateKeySize_mA121FA49ED5622F5B5B189451FF66B113DD3E1E9_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___COND_BYTES;
		int32_t L_1 = __this->___IRR_BYTES;
		int32_t L_2 = __this->___SYS_N;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)(L_2/8)))), ((int32_t)40)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PublicKeySize_mE79C85F1001A9FB1F91505FC7325BC8D2D39E558_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___usePadding;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___PK_NROWS;
		int32_t L_2 = __this->___PK_NCOLS;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, L_2))/8));
	}

IL_0018:
	{
		int32_t L_3 = __this->___PK_NROWS;
		int32_t L_4 = __this->___SYS_N;
		int32_t L_5 = __this->___PK_NROWS;
		return ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_4/8)), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))/8))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CipherTextSize_m0BA501CA17D5361FF5196865CCAD9179260B48F8_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___SYND_BYTES;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_DefaultSessionKeySize_m3CA74CE2D02D9107F78A632DC29746CBD76D57FA_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___defaultKeySize;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1__ctor_m17720F1307770C30EB1FDD52618FE9FC6914C111_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, int32_t ___0_m, int32_t ___1_n, int32_t ___2_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_p, bool ___4_usePivots, int32_t ___5_defaultKeySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_usePivots;
		__this->___usePivots = L_0;
		int32_t L_1 = ___1_n;
		__this->___SYS_N = L_1;
		int32_t L_2 = ___2_t;
		__this->___SYS_T = L_2;
		int32_t L_3 = ___0_m;
		__this->___GFBITS = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___3_p;
		__this->___poly = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poly), (void*)L_4);
		int32_t L_5 = ___5_defaultKeySize;
		__this->___defaultKeySize = L_5;
		int32_t L_6 = __this->___SYS_T;
		__this->___IRR_BYTES = ((int32_t)il2cpp_codegen_multiply(L_6, 2));
		int32_t L_7 = __this->___GFBITS;
		int32_t L_8 = __this->___GFBITS;
		__this->___COND_BYTES = ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 4))&((int32_t)31))))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_8)), 1))));
		int32_t L_9 = __this->___SYS_T;
		int32_t L_10 = __this->___GFBITS;
		__this->___PK_NROWS = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		int32_t L_11 = __this->___SYS_N;
		int32_t L_12 = __this->___PK_NROWS;
		__this->___PK_NCOLS = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		int32_t L_13 = __this->___PK_NCOLS;
		__this->___PK_ROW_BYTES = ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 7))/8));
		int32_t L_14 = __this->___PK_NROWS;
		__this->___SYND_BYTES = ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 7))/8));
		int32_t L_15 = __this->___GFBITS;
		__this->___GFMASK = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_15&((int32_t)31))))), 1));
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB* L_16 = (GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB*)(&__this->___gf);
		il2cpp_codegen_initobj(L_16, sizeof(GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB));
		int32_t L_17 = __this->___GFBITS;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_18 = __this->___SYS_N;
		int32_t L_19 = __this->___SYS_T;
		int32_t L_20 = __this->___GFBITS;
		Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B* L_21 = (Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B*)il2cpp_codegen_object_new(Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B_il2cpp_TypeInfo_var);
		Benes12__ctor_mD277DFEA0C344530E7F2D5A220CE9C4D916A32FC(L_21, L_18, L_19, L_20, NULL);
		__this->___benes = (Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___benes), (void*)(Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*)L_21);
		goto IL_010a;
	}

IL_00ed:
	{
		int32_t L_22 = __this->___SYS_N;
		int32_t L_23 = __this->___SYS_T;
		int32_t L_24 = __this->___GFBITS;
		Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239* L_25 = (Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239*)il2cpp_codegen_object_new(Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239_il2cpp_TypeInfo_var);
		Benes13__ctor_m3CE1241A07F26383594C28FA7885F83B9E133AAC(L_25, L_22, L_23, L_24, NULL);
		__this->___benes = (Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___benes), (void*)(Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*)L_25);
	}

IL_010a:
	{
		int32_t L_26 = __this->___SYS_T;
		__this->___usePadding = (bool)((!(((uint32_t)((int32_t)(L_26%8))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_27 = __this->___GFBITS;
		int32_t L_28 = __this->___SYS_N;
		__this->___countErrorIndices = (bool)((((int32_t)((int32_t)(1<<((int32_t)(L_27&((int32_t)31)))))) > ((int32_t)L_28))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_GeneratePublicKeyFromPrivateKey_m1B347E31CEA84AFB2BCDA542DE97BD9B236DF844_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = CmceEngine_1_get_PublicKeySize_mE79C85F1001A9FB1F91505FC7325BC8D2D39E558(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___GFBITS;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))));
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_4;
		int32_t L_5 = __this->___GFBITS;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))));
		V_3 = L_6;
		int32_t L_7 = __this->___SYS_N;
		int32_t L_8 = __this->___GFBITS;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_7/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))), 4)))));
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = __this->___IRR_BYTES;
		int32_t L_12 = __this->___GFBITS;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), ((int32_t)32))), L_11)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 4))));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_13 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_13, NULL);
		RuntimeObject* L_15 = L_14;
		NullCheck(L_15);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_15, (uint8_t)((int32_t)64));
		RuntimeObject* L_16 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		V_6 = 0;
		goto IL_00bb;
	}

IL_00a3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		int32_t L_22 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = V_6;
		uint32_t L_26;
		L_26 = Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421(L_23, ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 4)))), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint32_t)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00bb:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = __this->___GFBITS;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(1<<((int32_t)(L_29&((int32_t)31))))))))
		{
			goto IL_00a3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_2;
		int32_t L_35;
		L_35 = CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9(__this, L_30, L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_DecompressPrivateKey_m02137095E131FFA34A27D4D7D41CCEB2AB6D2920_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int32_t L_0;
		L_0 = CmceEngine_1_get_PrivateKeySize_mA121FA49ED5622F5B5B189451FF66B113DD3E1E9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_sk;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		int32_t L_5 = __this->___SYS_N;
		int32_t L_6 = __this->___GFBITS;
		int32_t L_7 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), L_7)), ((int32_t)32))));
		V_1 = L_8;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_9 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_11, (uint8_t)((int32_t)64));
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_sk;
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_16;
		L_16 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) > ((int32_t)((int32_t)40))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_18 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_2 = L_19;
		int32_t L_20 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = __this->___IRR_BYTES;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)32))), L_23));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = V_2;
		int32_t L_25 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = __this->___GFMASK;
		uint16_t L_30;
		L_30 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)))), L_29, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)L_30);
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = __this->___SYS_T;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_34 = V_2;
		int32_t L_35;
		L_35 = CmceEngine_1_GenerateIrrPoly_m2B3231BEF77FD6DCCEFC15A99D7E987826FA05EF(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_6 = 0;
		goto IL_00e8;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		int32_t L_37 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_2;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint16_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Utils_StoreGF_m01953FF9B94D6BF58CC3C48DBCE581F78E8535F8(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, 2)), L_41, NULL);
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e8:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = __this->___SYS_T;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = __this->___IRR_BYTES;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)40), L_47, NULL);
	}

IL_0102:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___0_sk;
		NullCheck(L_48);
		int32_t L_49 = __this->___IRR_BYTES;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)40), L_49)))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_50 = __this->___GFBITS;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_50&((int32_t)31))))));
		V_7 = L_51;
		int32_t L_52 = __this->___GFBITS;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_52&((int32_t)31))))));
		V_8 = L_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = __this->___IRR_BYTES;
		int32_t L_56 = __this->___GFBITS;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_54)->max_length)), ((int32_t)32))), L_55)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_56&((int32_t)31))))), 4))));
		V_11 = 0;
		goto IL_0171;
	}

IL_0159:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_7;
		int32_t L_58 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		int32_t L_60 = V_9;
		int32_t L_61 = V_11;
		uint32_t L_62;
		L_62 = Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421(L_59, ((int32_t)il2cpp_codegen_add(L_60, ((int32_t)il2cpp_codegen_multiply(L_61, 4)))), NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint32_t)L_62);
		int32_t L_63 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0171:
	{
		int32_t L_64 = V_11;
		int32_t L_65 = __this->___GFBITS;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(1<<((int32_t)(L_65&((int32_t)31))))))))
		{
			goto IL_0159;
		}
	}
	{
		bool L_66 = __this->___usePivots;
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_67;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = V_12;
		int32_t L_72;
		L_72 = CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9(__this, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_68, L_69, L_70, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_0218;
	}

IL_01a1:
	{
		int32_t L_73 = __this->___GFBITS;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_74 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_73&((int32_t)31))))));
		V_13 = L_74;
		V_14 = 0;
		goto IL_01d0;
	}

IL_01b8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_75 = V_13;
		int32_t L_76 = V_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_7;
		int32_t L_78 = V_14;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_14;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_80)<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_81)))));
		int32_t L_82 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01d0:
	{
		int32_t L_83 = V_14;
		int32_t L_84 = __this->___GFBITS;
		if ((((int32_t)L_83) < ((int32_t)((int32_t)(1<<((int32_t)(L_84&((int32_t)31))))))))
		{
			goto IL_01b8;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_85 = V_13;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_86 = V_13;
		NullCheck(L_86);
		CmceEngine_1_Sort64_mE88513A6417DDBB181D0F45C702F82DE4B4C0F35(L_85, 0, ((int32_t)(((RuntimeArray*)L_86)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_15 = 0;
		goto IL_0209;
	}

IL_01f0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_8;
		int32_t L_88 = V_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_13;
		int32_t L_90 = V_15;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		int64_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = __this->___GFMASK;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_92&((int64_t)L_93)))));
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0209:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = __this->___GFBITS;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(1<<((int32_t)(L_96&((int32_t)31))))))))
		{
			goto IL_01f0;
		}
	}

IL_0218:
	{
		int32_t L_97 = __this->___COND_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_10 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_8;
		int32_t L_101 = __this->___GFBITS;
		int32_t L_102 = __this->___GFBITS;
		CmceEngine_1_ControlBitsFromPermutation_m9E32CC9BEE23A6361BA846B360CB824667F746AD(L_99, L_100, ((int64_t)L_101), ((int64_t)((int32_t)(1<<((int32_t)(L_102&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_0;
		int32_t L_105 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_10;
		NullCheck(L_106);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_103, 0, (RuntimeArray*)L_104, ((int32_t)il2cpp_codegen_add(L_105, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_106)->max_length)), NULL);
	}

IL_0257:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_0;
		int32_t L_109;
		L_109 = CmceEngine_1_get_PrivateKeySize_mA121FA49ED5622F5B5B189451FF66B113DD3E1E9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_110 = __this->___SYS_N;
		int32_t L_111 = __this->___SYS_N;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_107, 0, (RuntimeArray*)L_108, ((int32_t)il2cpp_codegen_subtract(L_109, ((int32_t)(L_110/8)))), ((int32_t)(L_111/8)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_0;
		return L_112;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_KemKeypair_m39CB32E906ECDA3E9C0D72CD4D74799B57E871B8_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___2_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)64));
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_3 = ___2_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3, L_4);
		int32_t L_5 = __this->___SYS_N;
		int32_t L_6 = __this->___GFBITS;
		int32_t L_7 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), ((int32_t)32))));
		V_2 = L_8;
		V_4 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		V_5 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_10;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_11 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_11, NULL);
		V_7 = L_12;
	}

IL_005d:
	{
		RuntimeObject* L_13 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		NullCheck(L_13);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		RuntimeObject* L_16 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_18);
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
		RuntimeObject* L_19 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_22;
		L_22 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), ((int32_t)32)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_24, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)32))), NULL);
		V_1 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___1_sk;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_30, 0, ((int32_t)32), NULL);
		V_5 = L_31;
		int32_t L_32 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_32);
		V_8 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = __this->___SYS_T;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), ((int32_t)32))), ((int32_t)il2cpp_codegen_multiply(2, L_35))));
		int32_t L_36 = V_9;
		V_3 = L_36;
		V_13 = 0;
		goto IL_00f5;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = V_8;
		int32_t L_38 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t L_40 = V_9;
		int32_t L_41 = V_13;
		int32_t L_42 = __this->___GFMASK;
		uint16_t L_43;
		L_43 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(L_41, 2)))), L_42, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint16_t)L_43);
		int32_t L_44 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f5:
	{
		int32_t L_45 = V_13;
		int32_t L_46 = __this->___SYS_T;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00d7;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_8;
		int32_t L_48;
		L_48 = CmceEngine_1_GenerateIrrPoly_m2B3231BEF77FD6DCCEFC15A99D7E987826FA05EF(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if ((((int32_t)L_48) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		V_4 = ((int32_t)40);
		V_14 = 0;
		goto IL_012e;
	}

IL_0116:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___1_sk;
		int32_t L_50 = V_4;
		int32_t L_51 = V_14;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_8;
		int32_t L_53 = V_14;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Utils_StoreGF_m01953FF9B94D6BF58CC3C48DBCE581F78E8535F8(L_49, ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 2)))), L_55, NULL);
		int32_t L_56 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012e:
	{
		int32_t L_57 = V_14;
		int32_t L_58 = __this->___SYS_T;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_59 = __this->___GFBITS;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_59&((int32_t)31))))));
		V_10 = L_60;
		int32_t L_61 = V_3;
		int32_t L_62 = __this->___GFBITS;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_62&((int32_t)31))))), 4))));
		V_15 = 0;
		goto IL_0176;
	}

IL_015f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_10;
		int32_t L_64 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		int32_t L_66 = V_3;
		int32_t L_67 = V_15;
		uint32_t L_68;
		L_68 = Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421(L_65, ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)il2cpp_codegen_multiply(L_67, 4)))), NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		int32_t L_69 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0176:
	{
		int32_t L_70 = V_15;
		int32_t L_71 = __this->___GFBITS;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(1<<((int32_t)(L_71&((int32_t)31))))))))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_72 = __this->___GFBITS;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_73 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_72&((int32_t)31))))));
		V_11 = L_73;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ___0_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___1_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = V_6;
		int32_t L_79;
		L_79 = CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9(__this, L_74, L_75, L_76, L_77, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((int32_t)L_79) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_80 = __this->___COND_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_80);
		V_12 = L_81;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = V_11;
		int32_t L_84 = __this->___GFBITS;
		int32_t L_85 = __this->___GFBITS;
		CmceEngine_1_ControlBitsFromPermutation_m9E32CC9BEE23A6361BA846B360CB824667F746AD(L_82, L_83, ((int64_t)L_84), ((int64_t)((int32_t)(1<<((int32_t)(L_85&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___1_sk;
		int32_t L_88 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_12;
		NullCheck(L_89);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_86, 0, (RuntimeArray*)L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_89)->max_length)), NULL);
		int32_t L_90 = V_3;
		int32_t L_91 = __this->___SYS_N;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)(L_91/8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_2;
		int32_t L_93 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___1_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___1_sk;
		NullCheck(L_95);
		int32_t L_96 = __this->___SYS_N;
		int32_t L_97 = __this->___SYS_N;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_92, L_93, (RuntimeArray*)L_94, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), ((int32_t)(L_96/8)))), ((int32_t)(L_97/8)), NULL);
		bool L_98 = __this->___usePivots;
		if (L_98)
		{
			goto IL_0224;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___1_sk;
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_99, ((int32_t)32), (uint64_t)((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		return;
	}

IL_0224:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___1_sk;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_6;
		NullCheck(L_101);
		int32_t L_102 = 0;
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_100, ((int32_t)32), (uint64_t)L_103, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Syndrome_m700034DE41AF73D60DAD971DA9987CA220FDB7C7_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___SYS_N;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		int32_t L_2 = __this->___PK_NROWS;
		V_5 = ((int32_t)(L_2%8));
		V_1 = 0;
		goto IL_0026;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_cipher_text;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)0);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___SYND_BYTES;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = 0;
		goto IL_0156;
	}

IL_0036:
	{
		V_2 = 0;
		goto IL_0042;
	}

IL_003a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int16_t)0);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = __this->___SYS_N;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(L_12/8)))))
		{
			goto IL_003a;
		}
	}
	{
		V_2 = 0;
		goto IL_006d;
	}

IL_0051:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = V_0;
		int32_t L_14 = __this->___SYS_N;
		int32_t L_15 = __this->___PK_ROW_BYTES;
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_pk;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_14/8)), L_15)), L_16))), (int16_t)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = __this->___PK_ROW_BYTES;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_25 = __this->___usePadding;
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_26 = __this->___SYS_N;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_26/8)), 1));
		goto IL_00bc;
	}

IL_008b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_0;
		int32_t L_28 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_5;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int16_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_32&((int32_t)255)))<<((int32_t)(L_33&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_37&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_38))&((int32_t)31)))))))&((int32_t)255)))));
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00bc:
	{
		int32_t L_40 = V_2;
		int32_t L_41 = __this->___SYS_N;
		int32_t L_42 = __this->___PK_ROW_BYTES;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_41/8)), L_42)))))
		{
			goto IL_008b;
		}
	}

IL_00ce:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int16_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_44/8)))));
		int32_t L_46 = *((int16_t*)L_45);
		int32_t L_47 = V_1;
		*((int16_t*)L_45) = (int16_t)((int16_t)((int32_t)(L_46|(int32_t)((int16_t)((int32_t)(1<<((int32_t)(((int32_t)(L_47%8))&((int32_t)31)))))))));
		V_4 = (uint8_t)0;
		V_2 = 0;
		goto IL_00fe;
	}

IL_00ec:
	{
		uint8_t L_48 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = V_0;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int16_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___2_error_vector;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_48^((int32_t)(uint8_t)((int32_t)((int32_t)L_52&(int32_t)L_56))))));
		int32_t L_57 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fe:
	{
		int32_t L_58 = V_2;
		int32_t L_59 = __this->___SYS_N;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(L_59/8)))))
		{
			goto IL_00ec;
		}
	}
	{
		uint8_t L_60 = V_4;
		uint8_t L_61 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_60^((int32_t)(uint8_t)((int32_t)((int32_t)L_61>>4))))));
		uint8_t L_62 = V_4;
		uint8_t L_63 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_62^((int32_t)(uint8_t)((int32_t)((int32_t)L_63>>2))))));
		uint8_t L_64 = V_4;
		uint8_t L_65 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_64^((int32_t)(uint8_t)((int32_t)((int32_t)L_65>>1))))));
		uint8_t L_66 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_66&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___0_cipher_text;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		uint8_t* L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_68/8)))));
		int32_t L_70 = *((uint8_t*)L_69);
		uint8_t L_71 = V_4;
		int32_t L_72 = V_1;
		*((int8_t*)L_69) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_70|((int32_t)(uint8_t)((int32_t)((int32_t)L_71<<((int32_t)(((int32_t)(L_72%8))&((int32_t)31)))))))));
		int32_t L_73 = V_3;
		int32_t L_74 = __this->___PK_ROW_BYTES;
		V_3 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0156:
	{
		int32_t L_76 = V_1;
		int32_t L_77 = __this->___PK_NROWS;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_GenerateErrorVector_m74F213B3E968A23FCC2BF8D3DCAC4DF9D7555413_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___1_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t V_13 = 0;
	int16_t V_14 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)));
		V_1 = L_1;
		int32_t L_2 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		int32_t L_4 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_5;
	}

IL_0026:
	{
		bool L_6 = __this->___countErrorIndices;
		if (!L_6)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_7 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_7, 4)));
		V_0 = L_8;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_9 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9, L_10);
		V_6 = 0;
		goto IL_0065;
	}

IL_004b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_1;
		int32_t L_12 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_6;
		int32_t L_15 = __this->___GFMASK;
		uint16_t L_16;
		L_16 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, 2)), L_15, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint16_t)L_16);
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		int32_t L_18 = V_6;
		int32_t L_19 = __this->___SYS_T;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_004b;
		}
	}
	{
		V_5 = 0;
		V_7 = 0;
		goto IL_0098;
	}

IL_0079:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_20 = V_1;
		int32_t L_21 = V_7;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->___SYS_N;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0092;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = V_1;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint16_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)L_31);
	}

IL_0092:
	{
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0098:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = __this->___SYS_T;
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_34, 2)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->___SYS_T;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0079;
		}
	}

IL_00ae:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = __this->___SYS_T;
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_00fb;
		}
	}
	{
		goto IL_0026;
	}

IL_00bd:
	{
		int32_t L_39 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_39, 2)));
		V_0 = L_40;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_41 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41, L_42);
		V_8 = 0;
		goto IL_00f1;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		int32_t L_44 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_8;
		int32_t L_47 = __this->___GFMASK;
		uint16_t L_48;
		L_48 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_45, ((int32_t)il2cpp_codegen_multiply(L_46, 2)), L_47, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint16_t)L_48);
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00f1:
	{
		int32_t L_50 = V_8;
		int32_t L_51 = __this->___SYS_T;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00d7;
		}
	}

IL_00fb:
	{
		V_4 = 0;
		V_9 = 1;
		goto IL_0129;
	}

IL_0103:
	{
		V_10 = 0;
		goto IL_011d;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_2;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = V_2;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_55) == ((uint32_t)L_59))))
		{
			goto IL_0117;
		}
	}
	{
		V_4 = 1;
		goto IL_0123;
	}

IL_0117:
	{
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_011d:
	{
		int32_t L_61 = V_10;
		int32_t L_62 = V_9;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0108;
		}
	}

IL_0123:
	{
		int32_t L_63 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0129:
	{
		int32_t L_64 = V_9;
		int32_t L_65 = __this->___SYS_T;
		if ((((int32_t)L_64) >= ((int32_t)L_65)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_66 = V_4;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0103;
		}
	}

IL_0138:
	{
		int32_t L_67 = V_4;
		if (L_67)
		{
			goto IL_0026;
		}
	}
	{
		V_11 = 0;
		goto IL_015a;
	}

IL_0144:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_3;
		int32_t L_69 = V_11;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_2;
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint16_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (uint8_t)((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_73&7))&((int32_t)31)))))));
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_015a:
	{
		int32_t L_75 = V_11;
		int32_t L_76 = __this->___SYS_T;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0144;
		}
	}
	{
		V_12 = (int16_t)0;
		goto IL_01ba;
	}

IL_0169:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_error_vector;
		int16_t L_78 = V_12;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)0);
		V_13 = 0;
		goto IL_01a9;
	}

IL_0173:
	{
		int16_t L_79 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = V_2;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		uint16_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		uint8_t L_84;
		L_84 = CmceEngine_1_SameMask32_m98BDEF88573DBFAEABA391C9DB358A7C874C7BE9(L_79, ((int16_t)((int32_t)((int32_t)L_83>>3))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_14 = (int16_t)L_84;
		int16_t L_85 = V_14;
		V_14 = ((int16_t)((int32_t)((int32_t)L_85&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___0_error_vector;
		int16_t L_87 = V_12;
		NullCheck(L_86);
		uint8_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((uint8_t*)L_88);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_3;
		int32_t L_91 = V_13;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int16_t L_94 = V_14;
		*((int8_t*)L_88) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_89|((int32_t)(uint8_t)((int32_t)((int32_t)L_93&(int32_t)L_94))))));
		int32_t L_95 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01a9:
	{
		int32_t L_96 = V_13;
		int32_t L_97 = __this->___SYS_T;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0173;
		}
	}
	{
		int16_t L_98 = V_12;
		V_12 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, 1)));
	}

IL_01ba:
	{
		int16_t L_99 = V_12;
		int32_t L_100 = __this->___SYS_N;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(L_100/8)))))
		{
			goto IL_0169;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Encrypt_m09DD041B344B5AB6E05C1D5C93E1F642364EC737_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___3_random, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_error_vector;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_1 = ___3_random;
		CmceEngine_1_GenerateErrorVector_m74F213B3E968A23FCC2BF8D3DCAC4DF9D7555413(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_error_vector;
		CmceEngine_1_Syndrome_m700034DE41AF73D60DAD971DA9987CA220FDB7C7(__this, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemEnc_mF60F574FCDB51DEFC023FDFE18B3181CB78D3E3C_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___3_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		bool L_2 = __this->___usePadding;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_pk;
		int32_t L_4;
		L_4 = CmceEngine_1_CheckPKPadding_m5A667A5217AA10231C2AEBF8F6CB097A7A161DD2(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_3 = L_4;
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_8 = ___3_random;
		CmceEngine_1_Encrypt_m09DD041B344B5AB6E05C1D5C93E1F642364EC737(__this, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_9 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_11, (uint8_t)1);
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)));
		RuntimeObject* L_15 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_cipher_text;
		NullCheck(L_17);
		NullCheck(L_15);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_key;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		bool L_21 = __this->___usePadding;
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = V_3;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_22);
		uint8_t L_23 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23^((int32_t)255))));
		V_2 = 0;
		goto IL_008b;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_cipher_text;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		uint8_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		int32_t L_27 = *((uint8_t*)L_26);
		uint8_t L_28 = V_1;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_27&(int32_t)L_28)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008b:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = __this->___SYND_BYTES;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_007a;
		}
	}
	{
		V_2 = 0;
		goto IL_00a9;
	}

IL_0098:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_key;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		uint8_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((uint8_t*)L_34);
		uint8_t L_36 = V_1;
		*((int8_t*)L_34) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_35&(int32_t)L_36)));
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a9:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)32))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_39 = V_3;
		return L_39;
	}

IL_00b0:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemDec_mD59F9D5529FA9540668101B3D08A808E3A7BD00F_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int16_t V_5 = 0;
	{
		int32_t L_0 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		int32_t L_2 = __this->___SYS_N;
		int32_t L_3 = __this->___SYND_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_2/8)))), L_3)));
		V_1 = L_4;
		V_3 = 0;
		bool L_5 = __this->___usePadding;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_cipher_text;
		int32_t L_7;
		L_7 = CmceEngine_1_CheckCPadding_m5DD7A9E9662AFA8F46468927CC2E8856218F5DB9(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_7;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_cipher_text;
		int32_t L_11;
		L_11 = CmceEngine_1_Decrypt_m76EFBD6BB8D5CC9FE163D90D9DE8C9469CA61B0B(__this, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_5 = (int16_t)((int32_t)(uint8_t)L_11);
		int16_t L_12 = V_5;
		V_5 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		int16_t L_13 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_13>>8)));
		int16_t L_14 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_14&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int16_t L_16 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16&1))));
		V_2 = 0;
		goto IL_0091;
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		int32_t L_18 = V_2;
		int16_t L_19 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_sk;
		int32_t L_21 = V_2;
		int32_t L_22 = __this->___IRR_BYTES;
		int32_t L_23 = __this->___COND_BYTES;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)40))), L_22)), L_23));
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int16_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_18))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)((~L_19))&(int32_t)L_25))|((int32_t)((int32_t)L_26&(int32_t)L_30))))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0091:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = __this->___SYS_N;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(L_33/8)))))
		{
			goto IL_0068;
		}
	}
	{
		V_2 = 0;
		goto IL_00b5;
	}

IL_00a0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		int32_t L_35 = __this->___SYS_N;
		int32_t L_36 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___1_cipher_text;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_35/8)))), L_36))), (uint8_t)L_40);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b5:
	{
		int32_t L_42 = V_2;
		int32_t L_43 = __this->___SYND_BYTES;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_44 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_45;
		L_45 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_44, NULL);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_46 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		RuntimeObject* L_47;
		L_47 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		NullCheck(L_50);
		NullCheck(L_48);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_48, L_49, 0, ((int32_t)(((RuntimeArray*)L_50)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_key;
		NullCheck(L_52);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_51, 0, ((int32_t)(((RuntimeArray*)L_52)->max_length)));
		bool L_54 = __this->___usePadding;
		if (!L_54)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_55 = V_3;
		V_4 = (uint8_t)((int32_t)(uint8_t)L_55);
		V_2 = 0;
		goto IL_0110;
	}

IL_00fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_key;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		uint8_t* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)));
		int32_t L_59 = *((uint8_t*)L_58);
		uint8_t L_60 = V_4;
		*((int8_t*)L_58) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_59|(int32_t)L_60)));
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0110:
	{
		int32_t L_62 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_key;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_64 = V_3;
		return L_64;
	}

IL_0118:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Decrypt_m76EFBD6BB8D5CC9FE163D90D9DE8C9469CA61B0B_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_3 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	uint16_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		int32_t L_2 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 2)));
		V_2 = L_5;
		int32_t L_6 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		V_3 = L_7;
		int32_t L_8 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_4 = L_9;
		int32_t L_10 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_5 = L_11;
		int32_t L_12 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_12/8)));
		V_7 = L_13;
		V_10 = 0;
		goto IL_0075;
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_7;
		int32_t L_15 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_cipher_text;
		int32_t L_17 = V_10;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_19);
		int32_t L_20 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0075:
	{
		int32_t L_21 = V_10;
		int32_t L_22 = __this->___SYND_BYTES;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = __this->___SYND_BYTES;
		V_11 = L_23;
		goto IL_0095;
	}

IL_0089:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_7;
		int32_t L_25 = V_11;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)0);
		int32_t L_26 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0095:
	{
		int32_t L_27 = V_11;
		int32_t L_28 = __this->___SYS_N;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(L_28/8)))))
		{
			goto IL_0089;
		}
	}
	{
		V_12 = 0;
		goto IL_00c3;
	}

IL_00a6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = V_0;
		int32_t L_30 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_sk;
		int32_t L_32 = V_12;
		int32_t L_33 = __this->___GFMASK;
		uint16_t L_34;
		L_34 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_32, 2)))), L_33, NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint16_t)L_34);
		int32_t L_35 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c3:
	{
		int32_t L_36 = V_12;
		int32_t L_37 = __this->___SYS_T;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00a6;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_0;
		int32_t L_39 = __this->___SYS_T;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint16_t)1);
		Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF* L_40 = __this->___benes;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_41 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___1_sk;
		NullCheck(L_40);
		VirtualActionInvoker2< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_40, L_41, L_42);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_7;
		CmceEngine_1_Synd_m2232987D0D5FC906533925319CB71D198FADF85C(__this, L_43, L_44, L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = V_2;
		CmceEngine_1_BM_m205F09B6C820C8F2C19F28FAAFD21D429C2810EB(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = V_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_51 = V_1;
		CmceEngine_1_Root_m44C6D1DBD0146309E5883A35344C66BFE300F480(__this, L_49, L_50, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_13 = 0;
		goto IL_0112;
	}

IL_0107:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_error_vector;
		int32_t L_53 = V_13;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)0);
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0112:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = __this->___SYS_N;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(L_56/8)))))
		{
			goto IL_0107;
		}
	}
	{
		V_8 = 0;
		V_14 = 0;
		goto IL_016c;
	}

IL_0126:
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_57 = __this->___gf;
		V_15 = L_57;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_58 = V_5;
		int32_t L_59 = V_14;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint16_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		uint16_t L_62;
		L_62 = GF13_GFIsZero_mF86E0A3133F14159BFFFFD810FDA575B098D662F((&V_15), L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_62&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_error_vector;
		int32_t L_64 = V_14;
		NullCheck(L_63);
		uint8_t* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_64/8)))));
		int32_t L_66 = *((uint8_t*)L_65);
		uint16_t L_67 = V_6;
		int32_t L_68 = V_14;
		*((int8_t*)L_65) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_66|((int32_t)(uint8_t)((int32_t)((int32_t)L_67<<((int32_t)(((int32_t)(L_68%8))&((int32_t)31)))))))));
		int32_t L_69 = V_8;
		uint16_t L_70 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_69, (int32_t)L_70));
		int32_t L_71 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_016c:
	{
		int32_t L_72 = V_14;
		int32_t L_73 = __this->___SYS_N;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0126;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_74 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_75 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_76 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_error_vector;
		CmceEngine_1_Synd_m2232987D0D5FC906533925319CB71D198FADF85C(__this, L_74, L_75, L_76, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_78 = V_8;
		V_9 = L_78;
		int32_t L_79 = V_9;
		int32_t L_80 = __this->___SYS_T;
		V_9 = ((int32_t)(L_79^L_80));
		V_16 = 0;
		goto IL_01a8;
	}

IL_0194:
	{
		int32_t L_81 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_82 = V_2;
		int32_t L_83 = V_16;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint16_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_3;
		int32_t L_87 = V_16;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint16_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_9 = ((int32_t)(L_81|((int32_t)((int32_t)L_85^(int32_t)L_89))));
		int32_t L_90 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01a8:
	{
		int32_t L_91 = V_16;
		int32_t L_92 = __this->___SYS_T;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_92, 2)))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		int32_t L_94 = V_9;
		V_9 = ((int32_t)(L_94>>((int32_t)15)));
		int32_t L_95 = V_9;
		V_9 = ((int32_t)(L_95&1));
		int32_t L_96 = V_9;
		int32_t L_97 = V_9;
		return ((int32_t)(L_97^1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Min_m3BE4737D5469BF249C99FB6D8104D36166A8E2C9_gshared (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		uint16_t L_2 = ___0_a;
		return (int32_t)L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___1_b;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_BM_m205F09B6C820C8F2C19F28FAAFD21D429C2810EB_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_4 = L_1;
		int32_t L_2 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_5 = L_3;
		int32_t L_4 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_6 = L_5;
		V_7 = (uint16_t)1;
		V_10 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_5;
		int32_t L_7 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_6;
		int32_t L_9 = V_10;
		int32_t L_10 = 0;
		V_11 = (uint16_t)L_10;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint16_t)L_10);
		uint16_t L_11 = V_11;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_11);
		int32_t L_12 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_10;
		int32_t L_14 = __this->___SYS_T;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1)))))
		{
			goto IL_0039;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = V_5;
		int32_t L_17 = 1;
		V_11 = (uint16_t)L_17;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_17);
		uint16_t L_18 = V_11;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint16_t)L_18);
		V_0 = (uint16_t)0;
		goto IL_01d3;
	}

IL_0070:
	{
		V_12 = (uint32_t)0;
		V_13 = 0;
		goto IL_00a3;
	}

IL_0078:
	{
		uint32_t L_19 = V_12;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_20 = __this->___gf;
		V_14 = L_20;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_5;
		int32_t L_22 = V_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = ___1_s;
		uint16_t L_26 = V_0;
		int32_t L_27 = V_13;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, L_27));
		uint16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_30;
		L_30 = GF13_GFMulExt_m45C02A8D80E43ECB3DE23FE8F9D661671625E45E((&V_14), L_24, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_12 = (uint32_t)((int32_t)((int32_t)L_19^(int32_t)L_30));
		int32_t L_31 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a3:
	{
		int32_t L_32 = V_13;
		uint16_t L_33 = V_0;
		int32_t L_34 = __this->___SYS_T;
		int32_t L_35;
		L_35 = CmceEngine_1_Min_m3BE4737D5469BF249C99FB6D8104D36166A8E2C9(L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_32) <= ((int32_t)L_35)))
		{
			goto IL_0078;
		}
	}
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_36 = __this->___gf;
		V_14 = L_36;
		uint32_t L_37 = V_12;
		uint16_t L_38;
		L_38 = GF13_GFReduce_m9021290E45CE1F7463A2FB069D0DD9BBC8706257((&V_14), L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_8 = L_38;
		uint16_t L_39 = V_8;
		V_3 = L_39;
		uint16_t L_40 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, 1)));
		uint16_t L_41 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_41>>((int32_t)15))));
		uint16_t L_42 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_42&1)));
		uint16_t L_43 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, 1)));
		uint16_t L_44 = V_0;
		V_2 = L_44;
		uint16_t L_45 = V_2;
		uint16_t L_46 = V_1;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_46))))));
		uint16_t L_47 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_47>>((int32_t)15))));
		uint16_t L_48 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_48&1)));
		uint16_t L_49 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_49, 1)));
		uint16_t L_50 = V_2;
		uint16_t L_51 = V_3;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_50&(int32_t)L_51)));
		V_15 = 0;
		goto IL_0118;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_4;
		int32_t L_53 = V_15;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = V_5;
		int32_t L_55 = V_15;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint16_t)L_57);
		int32_t L_58 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0118:
	{
		int32_t L_59 = V_15;
		int32_t L_60 = __this->___SYS_T;
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_0108;
		}
	}
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_61 = __this->___gf;
		V_14 = L_61;
		uint16_t L_62 = V_7;
		uint16_t L_63 = V_8;
		uint16_t L_64;
		L_64 = GF13_GFFrac_m085E4C55F84B3F3EE2CB2D9D048C304D7C8F9E30((&V_14), L_62, L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_9 = L_64;
		V_16 = 0;
		goto IL_0175;
	}

IL_0142:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_65 = V_5;
		int32_t L_66 = V_16;
		NullCheck(L_65);
		uint16_t* L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)));
		int32_t L_68 = *((uint16_t*)L_67);
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_69 = __this->___gf;
		V_14 = L_69;
		uint16_t L_70 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_71 = V_6;
		int32_t L_72 = V_16;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		uint16_t L_75;
		L_75 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_14), L_70, L_74, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		uint16_t L_76 = V_3;
		*((int16_t*)L_67) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_68^((int32_t)(uint16_t)((int32_t)((int32_t)L_75&(int32_t)L_76))))));
		int32_t L_77 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0175:
	{
		int32_t L_78 = V_16;
		int32_t L_79 = __this->___SYS_T;
		if ((((int32_t)L_78) <= ((int32_t)L_79)))
		{
			goto IL_0142;
		}
	}
	{
		uint16_t L_80 = V_1;
		uint16_t L_81 = V_2;
		uint16_t L_82 = V_0;
		uint16_t L_83 = V_1;
		uint16_t L_84 = V_2;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_80&(int32_t)((~L_81))))|((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_82, 1)), (int32_t)L_83))&(int32_t)L_84)))));
		int32_t L_85 = __this->___SYS_T;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
		goto IL_01b7;
	}

IL_0199:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_6;
		int32_t L_87 = V_17;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_88 = V_6;
		int32_t L_89 = V_17;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint16_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		uint16_t L_92 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_93 = V_4;
		int32_t L_94 = V_17;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint16_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		uint16_t L_97 = V_2;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_87, 1))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_91&(int32_t)((~L_92))))|((int32_t)((int32_t)L_96&(int32_t)L_97))))));
		int32_t L_98 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
	}

IL_01b7:
	{
		int32_t L_99 = V_17;
		if ((((int32_t)L_99) >= ((int32_t)0)))
		{
			goto IL_0199;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_6;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)0);
		uint16_t L_101 = V_7;
		uint16_t L_102 = V_2;
		uint16_t L_103 = V_8;
		uint16_t L_104 = V_2;
		V_7 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_101&(int32_t)((~L_102))))|((int32_t)((int32_t)L_103&(int32_t)L_104)))));
		uint16_t L_105 = V_0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_105, 1)));
	}

IL_01d3:
	{
		uint16_t L_106 = V_0;
		int32_t L_107 = __this->___SYS_T;
		if ((((int32_t)L_106) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_107)))))
		{
			goto IL_0070;
		}
	}
	{
		V_18 = 0;
		goto IL_01fc;
	}

IL_01e6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_108 = ___0_output;
		int32_t L_109 = V_18;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_110 = V_5;
		int32_t L_111 = __this->___SYS_T;
		int32_t L_112 = V_18;
		NullCheck(L_110);
		int32_t L_113 = ((int32_t)il2cpp_codegen_subtract(L_111, L_112));
		uint16_t L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint16_t)L_114);
		int32_t L_115 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_01fc:
	{
		int32_t L_116 = V_18;
		int32_t L_117 = __this->___SYS_T;
		if ((((int32_t)L_116) <= ((int32_t)L_117)))
		{
			goto IL_01e6;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Synd_m2232987D0D5FC906533925319CB71D198FADF85C_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_4;
	memset((&V_4), 0, sizeof(V_4));
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	uint16_t V_10 = 0;
	uint16_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t V_13 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___3_r;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint16_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___1_f;
		uint16_t L_7 = V_1;
		uint16_t L_8;
		L_8 = CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE(__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_2 = L_8;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_9 = __this->___gf;
		V_4 = L_9;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_10 = __this->___gf;
		V_5 = L_10;
		uint16_t L_11 = V_2;
		uint16_t L_12;
		L_12 = GF13_GFSq_mF1F075D0A92D91EC767942CDBDC415EE06636FC1((&V_5), L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		uint16_t L_13;
		L_13 = GF13_GFInv_m41ED268B809C91B59BEF21DD1B745F23BD1AE448((&V_4), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		uint16_t L_14 = V_0;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_13&((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_14)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = ___0_output;
		uint16_t L_16 = V_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_16);
		V_6 = 1;
		goto IL_0072;
	}

IL_004f:
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_17 = __this->___gf;
		V_4 = L_17;
		uint16_t L_18 = V_3;
		uint16_t L_19 = V_1;
		uint16_t L_20;
		L_20 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_4), L_18, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_3 = L_20;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = ___0_output;
		int32_t L_22 = V_6;
		uint16_t L_23 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint16_t)L_23);
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0072:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = __this->___SYS_T;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_26)))))
		{
			goto IL_004f;
		}
	}
	{
		V_7 = 1;
		goto IL_0149;
	}

IL_0086:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___3_r;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)(L_28/8));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_7;
		V_8 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_30>>((int32_t)(((int32_t)(L_31%8))&((int32_t)31)))))&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = ___2_L;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint16_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_36 = ___1_f;
		uint16_t L_37 = V_9;
		uint16_t L_38;
		L_38 = CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE(__this, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_10 = L_38;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_39 = __this->___gf;
		V_4 = L_39;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_40 = __this->___gf;
		V_5 = L_40;
		uint16_t L_41 = V_10;
		uint16_t L_42;
		L_42 = GF13_GFSq_mF1F075D0A92D91EC767942CDBDC415EE06636FC1((&V_5), L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		uint16_t L_43;
		L_43 = GF13_GFInv_m41ED268B809C91B59BEF21DD1B745F23BD1AE448((&V_4), L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_11 = L_43;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_44 = __this->___gf;
		V_4 = L_44;
		uint16_t L_45 = V_11;
		uint16_t L_46 = V_8;
		uint16_t L_47;
		L_47 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_4), L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_12 = L_47;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = ___0_output;
		NullCheck(L_48);
		uint16_t* L_49 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_50 = *((uint16_t*)L_49);
		uint16_t L_51 = V_12;
		*((int16_t*)L_49) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_50^(int32_t)L_51)));
		V_13 = 1;
		goto IL_0137;
	}

IL_0107:
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_52 = __this->___gf;
		V_4 = L_52;
		uint16_t L_53 = V_12;
		uint16_t L_54 = V_9;
		uint16_t L_55;
		L_55 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_4), L_53, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_12 = L_55;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = ___0_output;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		uint16_t* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)));
		int32_t L_59 = *((uint16_t*)L_58);
		uint16_t L_60 = V_12;
		*((int16_t*)L_58) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_59^(int32_t)L_60)));
		int32_t L_61 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0137:
	{
		int32_t L_62 = V_13;
		int32_t L_63 = __this->___SYS_T;
		if ((((int32_t)L_62) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_63)))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_64 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0149:
	{
		int32_t L_65 = V_7;
		int32_t L_66 = __this->___SYS_N;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_0086;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_MovColumns_m212E31505217F58BA50B9B3675D4C15CF455610E_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_6 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_7 = L_1;
		V_11 = (uint64_t)((int64_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_12 = L_2;
		int32_t L_3 = __this->___PK_NROWS;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)32)));
		int32_t L_4 = V_4;
		V_3 = ((int32_t)(L_4/8));
		int32_t L_5 = V_4;
		V_5 = ((int32_t)(L_5%8));
		bool L_6 = __this->___usePadding;
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		V_0 = 0;
		goto IL_009c;
	}

IL_0041:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_12;
		int32_t L_8 = V_1;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = ___0_mat;
		int32_t L_10 = V_4;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_17);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)9))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = 0;
		goto IL_0088;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_12;
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_12;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_12;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))>>((int32_t)(L_26&((int32_t)31)))))|((int32_t)((int32_t)L_30<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_31))&((int32_t)31)))))))));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0088:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_6;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_12;
		uint64_t L_37;
		L_37 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_36, 0, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint64_t)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009c:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)32))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_00c0;
	}

IL_00a3:
	{
		V_0 = 0;
		goto IL_00bb;
	}

IL_00a7:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = V_6;
		int32_t L_41 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = ___0_mat;
		int32_t L_43 = V_4;
		int32_t L_44 = V_0;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_3;
		uint64_t L_48;
		L_48 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_46, L_47, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint64_t)L_48);
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00bb:
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)32))))
		{
			goto IL_00a7;
		}
	}

IL_00c0:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = ___2_pivots;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)0));
		V_0 = 0;
		goto IL_0186;
	}

IL_00cc:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_6;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_8 = (uint64_t)L_55;
		int32_t L_56 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_00e5;
	}

IL_00d8:
	{
		uint64_t L_57 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = V_6;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int64_t L_61 = (int64_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_8 = (uint64_t)((int64_t)((int64_t)L_57|L_61));
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00e5:
	{
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)32))))
		{
			goto IL_00d8;
		}
	}
	{
		uint64_t L_64 = V_8;
		if (L_64)
		{
			goto IL_00f0;
		}
	}
	{
		return (-1);
	}

IL_00f0:
	{
		uint64_t L_65 = V_8;
		int32_t L_66;
		L_66 = CmceEngine_1_Ctz_m32737077DF21D5CB7D59ED298126C3D96FB965A4(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_13 = L_66;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_7;
		int32_t L_68 = V_0;
		int32_t L_69 = V_13;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = ___2_pivots;
		NullCheck(L_70);
		uint64_t* L_71 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_72 = *((int64_t*)L_71);
		uint64_t L_73 = V_11;
		int32_t L_74 = V_13;
		*((int64_t*)L_71) = (int64_t)((int64_t)(L_72|((int64_t)((int64_t)L_73<<((int32_t)(L_74&((int32_t)63)))))));
		int32_t L_75 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0145;
	}

IL_0118:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_76 = V_6;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		int64_t L_79 = (int64_t)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_79>>((int32_t)(L_80&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_81 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_81, ((int64_t)1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = V_6;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		uint64_t* L_84 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)));
		int64_t L_85 = *((int64_t*)L_84);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = V_6;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		int64_t L_89 = (int64_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		uint64_t L_90 = V_10;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^((int64_t)(L_89&(int64_t)L_90))));
		int32_t L_91 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0145:
	{
		int32_t L_92 = V_1;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)32))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_93 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		goto IL_017d;
	}

IL_0150:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_94 = V_6;
		int32_t L_95 = V_1;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		int64_t L_97 = (int64_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_97>>((int32_t)(L_98&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_99 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)0), (int64_t)L_99));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_6;
		int32_t L_101 = V_1;
		NullCheck(L_100);
		uint64_t* L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)));
		int64_t L_103 = *((int64_t*)L_102);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = V_6;
		int32_t L_105 = V_0;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int64_t L_107 = (int64_t)(L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		uint64_t L_108 = V_10;
		*((int64_t*)L_102) = (int64_t)((int64_t)(L_103^((int64_t)(L_107&(int64_t)L_108))));
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_017d:
	{
		int32_t L_110 = V_1;
		if ((((int32_t)L_110) < ((int32_t)((int32_t)32))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_111 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0186:
	{
		int32_t L_112 = V_0;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)32))))
		{
			goto IL_00cc;
		}
	}
	{
		V_1 = 0;
		goto IL_01ea;
	}

IL_0192:
	{
		int32_t L_113 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
		goto IL_01e1;
	}

IL_0198:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = ___1_pi;
		int32_t L_115 = V_4;
		int32_t L_116 = V_1;
		NullCheck(L_114);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_115, L_116));
		uint16_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_119 = ___1_pi;
		int32_t L_120 = V_4;
		int32_t L_121 = V_2;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_120, L_121));
		uint16_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_9 = (uint64_t)((int64_t)((int32_t)((int32_t)L_118^(int32_t)L_123)));
		uint64_t L_124 = V_9;
		int32_t L_125 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_7;
		int32_t L_127 = V_1;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint64_t L_130;
		L_130 = CmceEngine_1_SameMask64_mC83F7272AF9B630C91DA27D039B794383CB05FFB((uint16_t)((int32_t)(uint16_t)L_125), (uint16_t)((int32_t)(uint16_t)L_129), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_9 = (uint64_t)((int64_t)((int64_t)L_124&(int64_t)L_130));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_131 = ___1_pi;
		int32_t L_132 = V_4;
		int32_t L_133 = V_1;
		NullCheck(L_131);
		uint16_t* L_134 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_132, L_133)))));
		int32_t L_135 = *((uint16_t*)L_134);
		uint64_t L_136 = V_9;
		*((int16_t*)L_134) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_135^((int32_t)(uint16_t)L_136))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_137 = ___1_pi;
		int32_t L_138 = V_4;
		int32_t L_139 = V_2;
		NullCheck(L_137);
		uint16_t* L_140 = ((L_137)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_138, L_139)))));
		int32_t L_141 = *((uint16_t*)L_140);
		uint64_t L_142 = V_9;
		*((int16_t*)L_140) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_141^((int32_t)(uint16_t)L_142))));
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_01e1:
	{
		int32_t L_144 = V_2;
		if ((((int32_t)L_144) < ((int32_t)((int32_t)64))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_145 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_01ea:
	{
		int32_t L_146 = V_1;
		if ((((int32_t)L_146) < ((int32_t)((int32_t)32))))
		{
			goto IL_0192;
		}
	}
	{
		V_0 = 0;
		goto IL_0369;
	}

IL_01f6:
	{
		bool L_147 = __this->___usePadding;
		if (!L_147)
		{
			goto IL_0252;
		}
	}
	{
		V_2 = 0;
		goto IL_0211;
	}

IL_0202:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = V_12;
		int32_t L_149 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_150 = ___0_mat;
		int32_t L_151 = V_0;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = V_3;
		int32_t L_155 = V_2;
		NullCheck(L_153);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_154, L_155));
		uint8_t L_157 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint8_t)L_157);
		int32_t L_158 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0211:
	{
		int32_t L_159 = V_2;
		if ((((int32_t)L_159) < ((int32_t)((int32_t)9))))
		{
			goto IL_0202;
		}
	}
	{
		V_2 = 0;
		goto IL_0242;
	}

IL_021a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = V_12;
		int32_t L_161 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = V_12;
		int32_t L_163 = V_2;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		uint8_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = V_12;
		int32_t L_168 = V_2;
		NullCheck(L_167);
		int32_t L_169 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		uint8_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = V_5;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_165&((int32_t)255)))>>((int32_t)(L_166&((int32_t)31)))))|((int32_t)((int32_t)L_170<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_171))&((int32_t)31)))))))));
		int32_t L_172 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_0242:
	{
		int32_t L_173 = V_2;
		if ((((int32_t)L_173) < ((int32_t)8)))
		{
			goto IL_021a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_174 = V_12;
		uint64_t L_175;
		L_175 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_174, 0, NULL);
		V_8 = L_175;
		goto IL_025d;
	}

IL_0252:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_176 = ___0_mat;
		int32_t L_177 = V_0;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_3;
		uint64_t L_181;
		L_181 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_179, L_180, NULL);
		V_8 = L_181;
	}

IL_025d:
	{
		V_1 = 0;
		goto IL_029f;
	}

IL_0261:
	{
		uint64_t L_182 = V_8;
		int32_t L_183 = V_1;
		V_9 = (uint64_t)((int64_t)((uint64_t)L_182>>((int32_t)(L_183&((int32_t)63)))));
		uint64_t L_184 = V_9;
		uint64_t L_185 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_7;
		int32_t L_187 = V_1;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		int32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_9 = (uint64_t)((int64_t)((int64_t)L_184^((int64_t)((uint64_t)L_185>>((int32_t)(L_189&((int32_t)63)))))));
		uint64_t L_190 = V_9;
		V_9 = (uint64_t)((int64_t)((int64_t)L_190&((int64_t)1)));
		uint64_t L_191 = V_8;
		uint64_t L_192 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = V_7;
		int32_t L_194 = V_1;
		NullCheck(L_193);
		int32_t L_195 = L_194;
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_8 = (uint64_t)((int64_t)((int64_t)L_191^((int64_t)((int64_t)L_192<<((int32_t)(L_196&((int32_t)63)))))));
		uint64_t L_197 = V_8;
		uint64_t L_198 = V_9;
		int32_t L_199 = V_1;
		V_8 = (uint64_t)((int64_t)((int64_t)L_197^((int64_t)((int64_t)L_198<<((int32_t)(L_199&((int32_t)63)))))));
		int32_t L_200 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_029f:
	{
		int32_t L_201 = V_1;
		if ((((int32_t)L_201) < ((int32_t)((int32_t)32))))
		{
			goto IL_0261;
		}
	}
	{
		bool L_202 = __this->___usePadding;
		if (!L_202)
		{
			goto IL_035a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_12;
		uint64_t L_204 = V_8;
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_203, 0, L_204, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_205 = ___0_mat;
		int32_t L_206 = V_0;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		int32_t L_209 = V_3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_210 = ___0_mat;
		int32_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		int32_t L_214 = V_3;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 8));
		uint8_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_5;
		int32_t L_218 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = V_12;
		NullCheck(L_219);
		int32_t L_220 = 7;
		uint8_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		int32_t L_222 = V_5;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, 8))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_216&((int32_t)255)))>>((int32_t)(L_217&((int32_t)31)))))<<((int32_t)(L_218&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_221&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_222))&((int32_t)31)))))))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_223 = ___0_mat;
		int32_t L_224 = V_0;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_12;
		NullCheck(L_228);
		int32_t L_229 = 0;
		uint8_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_232 = ___0_mat;
		int32_t L_233 = V_0;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = V_3;
		NullCheck(L_235);
		int32_t L_237 = L_236;
		uint8_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = V_5;
		int32_t L_240 = V_5;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(L_227), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_230&((int32_t)255)))<<((int32_t)(L_231&((int32_t)31)))))|((int32_t)(((int32_t)(((int32_t)((int32_t)L_238&((int32_t)255)))<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_239))&((int32_t)31)))))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_240))&((int32_t)31)))))))));
		V_2 = 7;
		goto IL_0354;
	}

IL_0323:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_241 = ___0_mat;
		int32_t L_242 = V_0;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = V_3;
		int32_t L_246 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = V_12;
		int32_t L_248 = V_2;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		uint8_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = V_12;
		int32_t L_253 = V_2;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_subtract(L_253, 1));
		uint8_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		int32_t L_256 = V_5;
		NullCheck(L_244);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_245, L_246))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_250&((int32_t)255)))<<((int32_t)(L_251&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_255&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_256))&((int32_t)31)))))))));
		int32_t L_257 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_257, 1));
	}

IL_0354:
	{
		int32_t L_258 = V_2;
		if ((((int32_t)L_258) >= ((int32_t)1)))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0365;
	}

IL_035a:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_259 = ___0_mat;
		int32_t L_260 = V_0;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = V_3;
		uint64_t L_264 = V_8;
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_262, L_263, L_264, NULL);
	}

IL_0365:
	{
		int32_t L_265 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0369:
	{
		int32_t L_266 = V_0;
		int32_t L_267 = __this->___PK_NROWS;
		if ((((int32_t)L_266) < ((int32_t)L_267)))
		{
			goto IL_01f6;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Ctz_m32737077DF21D5CB7D59ED298126C3D96FB965A4_gshared (uint64_t ___0_input, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = (uint64_t)((int64_t)72340172838076673LL);
		V_1 = (uint64_t)((int64_t)0);
		uint64_t L_0 = ___0_input;
		V_2 = ((~L_0));
		V_5 = 0;
		goto IL_0029;
	}

IL_0015:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_2;
		int32_t L_3 = V_5;
		V_0 = (uint64_t)((int64_t)((int64_t)L_1&((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))));
		uint64_t L_4 = V_1;
		uint64_t L_5 = V_0;
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)L_5));
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0029:
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_8 = V_1;
		V_3 = (uint64_t)((int64_t)((int64_t)L_8&((int64_t)578721382704613384LL)));
		uint64_t L_9 = V_3;
		uint64_t L_10 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_9|((int64_t)((uint64_t)L_10>>1))));
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_11|((int64_t)((uint64_t)L_12>>2))));
		uint64_t L_13 = V_1;
		V_4 = L_13;
		uint64_t L_14 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_14>>8));
		uint64_t L_15 = V_4;
		uint64_t L_16 = V_1;
		uint64_t L_17 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)((int64_t)L_16&(int64_t)L_17))));
		V_6 = 2;
		goto IL_0072;
	}

IL_005a:
	{
		uint64_t L_18 = V_3;
		uint64_t L_19 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_18&((int64_t)((uint64_t)L_19>>8))));
		uint64_t L_20 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_20>>8));
		uint64_t L_21 = V_4;
		uint64_t L_22 = V_1;
		uint64_t L_23 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)((int64_t)L_22&(int64_t)L_23))));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0072:
	{
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) < ((int32_t)8)))
		{
			goto IL_005a;
		}
	}
	{
		uint64_t L_26 = V_4;
		return ((int32_t)(((int32_t)L_26)&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CmceEngine_1_SameMask64_mC83F7272AF9B630C91DA27D039B794383CB05FFB_gshared (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_x;
		uint16_t L_1 = ___1_y;
		return (uint64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)((int32_t)L_0^(int32_t)L_1))), ((int64_t)1)))>>((int32_t)63)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CmceEngine_1_SameMask32_m98BDEF88573DBFAEABA391C9DB358A7C874C7BE9_gshared (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_x;
		int16_t L_1 = ___1_y;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_0^(int32_t)L_1)), 1))>>((int32_t)31))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Layer_m471FA41AE48FC01A03FA64945341CF2AE15A72C1_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_s;
		V_2 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
		V_3 = 0;
		V_0 = 0;
		goto IL_0074;
	}

IL_000d:
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_0011:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_p;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_p;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		uint16_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = ((int32_t)((int32_t)L_5^(int32_t)L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_output;
		int32_t L_13 = ___2_ptrIndex;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14>>3))));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_3;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_16>>((int32_t)(((int32_t)(L_17&7))&((int32_t)31)))))&1));
		int32_t L_18 = V_5;
		V_5 = ((-L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		V_4 = ((int32_t)(L_19&L_20));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = ___0_p;
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		uint16_t* L_24 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))));
		int32_t L_25 = *((uint16_t*)L_24);
		int32_t L_26 = V_4;
		*((int16_t*)L_24) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_25^((int32_t)(uint16_t)L_26))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_27 = ___0_p;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_27);
		uint16_t* L_31 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_28, L_29)), L_30)))));
		int32_t L_32 = *((uint16_t*)L_31);
		int32_t L_33 = V_4;
		*((int16_t*)L_31) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_32^((int32_t)(uint16_t)L_33))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_006a:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply(L_39, 2))));
	}

IL_0074:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = ___4_n;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_ControlBitsFromPermutation_m9E32CC9BEE23A6361BA846B360CB824667F746AD_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_0))));
		V_0 = L_1;
		int64_t L_2 = ___3_n;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_2));
		V_1 = L_3;
	}

IL_0013:
	{
		V_3 = 0;
		goto IL_001f;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_output;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_3;
		int64_t L_8 = ___2_w;
		int64_t L_9 = ___3_n;
		if ((((int64_t)((int64_t)L_7)) < ((int64_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_8)), ((int64_t)1))), L_9))/((int64_t)2))), ((int64_t)7)))/((int64_t)8))))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_output;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___1_pi;
		int64_t L_12 = ___2_w;
		int64_t L_13 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1(L_10, ((int64_t)0), ((int64_t)1), L_11, 0, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_3 = 0;
		goto IL_0051;
	}

IL_0048:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint16_t)((int32_t)(uint16_t)L_17));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0051:
	{
		int32_t L_19 = V_3;
		int64_t L_20 = ___3_n;
		if ((((int64_t)((int64_t)L_19)) < ((int64_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 0;
		V_3 = 0;
		goto IL_0076;
	}

IL_005d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_output;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		int64_t L_25 = ___3_n;
		CmceEngine_1_Layer_m471FA41AE48FC01A03FA64945341CF2AE15A72C1(L_21, L_22, L_23, L_24, ((int32_t)L_25), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_26 = V_4;
		int64_t L_27 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((int32_t)L_27)>>4))));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0076:
	{
		int32_t L_29 = V_3;
		int64_t L_30 = ___2_w;
		if ((((int64_t)((int64_t)L_29)) < ((int64_t)L_30)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_31 = ___2_w;
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_31, ((int64_t)2))));
		goto IL_009c;
	}

IL_0083:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___0_output;
		int32_t L_34 = V_4;
		int32_t L_35 = V_3;
		int64_t L_36 = ___3_n;
		CmceEngine_1_Layer_m471FA41AE48FC01A03FA64945341CF2AE15A72C1(L_32, L_33, L_34, L_35, ((int32_t)L_36), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_37 = V_4;
		int64_t L_38 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(((int32_t)L_38)>>4))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_009c:
	{
		int32_t L_40 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = (uint16_t)0;
		V_3 = 0;
		goto IL_00b6;
	}

IL_00a6:
	{
		uint16_t L_41 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_42 = ___1_pi;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_46 = V_1;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_41|((int32_t)(uint16_t)((int32_t)((int32_t)L_45^(int32_t)L_49))))));
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00b6:
	{
		int32_t L_51 = V_3;
		int64_t L_52 = ___3_n;
		if ((((int64_t)((int64_t)L_51)) < ((int64_t)L_52)))
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_53 = V_2;
		if (L_53)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_q_index;
		V_0 = ((int32_t)(L_0/2));
		int32_t L_1 = ___1_q_index;
		if (((int32_t)(L_1%2)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_temp;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int16_t)L_5);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_temp;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((int16_t)((int64_t)(((int64_t)(((int64_t)L_9)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_4 = NULL;
	uint16_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int64_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		int64_t L_0 = ___5_w;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int64_t L_2 = ___1_pos;
		NullCheck(L_1);
		uint8_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_2>>3))))));
		int32_t L_4 = *((uint8_t*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___7_temp;
		int32_t L_6 = ___4_qIndex;
		int16_t L_7;
		L_7 = CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_8 = ___1_pos;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^((int32_t)(uint8_t)((int32_t)((int32_t)L_7<<((int32_t)(((int32_t)((int64_t)(L_8&((int64_t)7))))&((int32_t)31)))))))));
		return;
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___3_pi;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___7_temp;
		int64_t L_11 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___3_pi;
		int64_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)L_13);
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = ___3_pi;
		int64_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int64_t)(L_17^((int64_t)1))));
		uint16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_11)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_15^1))<<((int32_t)16)))|(int32_t)L_19)));
		int64_t L_20 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)1)));
	}

IL_004c:
	{
		int64_t L_21 = V_0;
		int64_t L_22 = ___6_n;
		if ((((int64_t)L_21) < ((int64_t)L_22)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0094;
	}

IL_0053:
	{
		V_0 = ((int64_t)0);
		goto IL_008f;
	}

IL_0058:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___7_temp;
		int32_t L_24 = ___4_qIndex;
		int64_t L_25 = V_0;
		int16_t L_26;
		L_26 = CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7(L_23, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_24), L_25))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_5 = (uint16_t)((int32_t)(uint16_t)L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___7_temp;
		int32_t L_28 = ___4_qIndex;
		int64_t L_29 = V_0;
		int16_t L_30;
		L_30 = CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7(L_27, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_28), ((int64_t)(L_29^((int64_t)1)))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_6 = (uint16_t)((int32_t)(uint16_t)L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___7_temp;
		int64_t L_32 = V_0;
		uint16_t L_33 = V_5;
		uint16_t L_34 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_32)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_33^1))<<((int32_t)16)))|(int32_t)L_34)));
		int64_t L_35 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_35, ((int64_t)1)));
	}

IL_008f:
	{
		int64_t L_36 = V_0;
		int64_t L_37 = ___6_n;
		if ((((int64_t)L_36) < ((int64_t)L_37)))
		{
			goto IL_0058;
		}
	}

IL_0094:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___7_temp;
		int64_t L_39 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_38, 0, ((int32_t)L_39), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_00d4;
	}

IL_00a4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___7_temp;
		int64_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)L_41);
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_7 = ((int32_t)(L_43&((int32_t)65535)));
		int32_t L_44 = V_7;
		V_8 = L_44;
		int64_t L_45 = V_0;
		int32_t L_46 = V_8;
		if ((((int64_t)L_45) >= ((int64_t)((int64_t)L_46))))
		{
			goto IL_00bf;
		}
	}
	{
		int64_t L_47 = V_0;
		V_8 = ((int32_t)L_47);
	}

IL_00bf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ___7_temp;
		int64_t L_49 = ___6_n;
		int64_t L_50 = V_0;
		int32_t L_51 = V_7;
		int32_t L_52 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_49, L_50)))), (int32_t)((int32_t)(((int32_t)(L_51<<((int32_t)16)))|L_52)));
		int64_t L_53 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_53, ((int64_t)1)));
	}

IL_00d4:
	{
		int64_t L_54 = V_0;
		int64_t L_55 = ___6_n;
		if ((((int64_t)L_54) < ((int64_t)L_55)))
		{
			goto IL_00a4;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_00f4;
	}

IL_00de:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___7_temp;
		int64_t L_57 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ___7_temp;
		int64_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)L_59);
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int64_t L_62 = V_0;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_57)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_61<<((int32_t)16)))))|L_62))));
		int64_t L_63 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_63, ((int64_t)1)));
	}

IL_00f4:
	{
		int64_t L_64 = V_0;
		int64_t L_65 = ___6_n;
		if ((((int64_t)L_64) < ((int64_t)L_65)))
		{
			goto IL_00de;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = ___7_temp;
		int64_t L_67 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_66, 0, ((int32_t)L_67), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0127;
	}

IL_0109:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___7_temp;
		int64_t L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = ___7_temp;
		int64_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)L_71);
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___7_temp;
		int64_t L_75 = ___6_n;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)((int64_t)il2cpp_codegen_add(L_75, L_76)));
		int32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_69)), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_73<<((int32_t)16))), ((int32_t)(L_78>>((int32_t)16))))));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_79, ((int64_t)1)));
	}

IL_0127:
	{
		int64_t L_80 = V_0;
		int64_t L_81 = ___6_n;
		if ((((int64_t)L_80) < ((int64_t)L_81)))
		{
			goto IL_0109;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = ___7_temp;
		int64_t L_83 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_82, 0, ((int32_t)L_83), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_84 = ___5_w;
		if ((((int64_t)L_84) > ((int64_t)((int64_t)((int32_t)10)))))
		{
			goto IL_0265;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0170;
	}

IL_0146:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___7_temp;
		int64_t L_86 = ___6_n;
		int64_t L_87 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___7_temp;
		int64_t L_89 = V_0;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)L_89);
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ___7_temp;
		int64_t L_93 = ___6_n;
		int64_t L_94 = V_0;
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)((int64_t)il2cpp_codegen_add(L_93, L_94)));
		int32_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_86, L_87)))), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_91&((int32_t)65535)))<<((int32_t)10)))|((int32_t)(L_96&((int32_t)1023))))));
		int64_t L_97 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_97, ((int64_t)1)));
	}

IL_0170:
	{
		int64_t L_98 = V_0;
		int64_t L_99 = ___6_n;
		if ((((int64_t)L_98) < ((int64_t)L_99)))
		{
			goto IL_0146;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_0231;
	}

IL_017d:
	{
		V_0 = ((int64_t)0);
		goto IL_01a0;
	}

IL_0182:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___7_temp;
		int64_t L_101 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = ___7_temp;
		int64_t L_103 = ___6_n;
		int64_t L_104 = V_0;
		NullCheck(L_102);
		int32_t L_105 = ((int32_t)((int64_t)il2cpp_codegen_add(L_103, L_104)));
		int32_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int64_t L_107 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_101)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(L_106&((int32_t)-1024)))<<6))))|L_107))));
		int64_t L_108 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)1)));
	}

IL_01a0:
	{
		int64_t L_109 = V_0;
		int64_t L_110 = ___6_n;
		if ((((int64_t)L_109) < ((int64_t)L_110)))
		{
			goto IL_0182;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___7_temp;
		int64_t L_112 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_111, 0, ((int32_t)L_112), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_01d0;
	}

IL_01b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ___7_temp;
		int64_t L_114 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = ___7_temp;
		int64_t L_116 = V_0;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)L_116);
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = ___7_temp;
		int64_t L_120 = ___6_n;
		int64_t L_121 = V_0;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)((int64_t)il2cpp_codegen_add(L_120, L_121)));
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_114)), (int32_t)((int32_t)(((int32_t)(L_118<<((int32_t)20)))|L_123)));
		int64_t L_124 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)1)));
	}

IL_01d0:
	{
		int64_t L_125 = V_0;
		int64_t L_126 = ___6_n;
		if ((((int64_t)L_125) < ((int64_t)L_126)))
		{
			goto IL_01b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = ___7_temp;
		int64_t L_128 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_127, 0, ((int32_t)L_128), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0227;
	}

IL_01e5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ___7_temp;
		int64_t L_130 = V_0;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)L_130);
		int32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_9 = ((int32_t)(L_132&((int32_t)1048575)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___7_temp;
		int64_t L_134 = V_0;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)L_134);
		int32_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___7_temp;
		int64_t L_138 = ___6_n;
		int64_t L_139 = V_0;
		NullCheck(L_137);
		int32_t L_140 = ((int32_t)((int64_t)il2cpp_codegen_add(L_138, L_139)));
		int32_t L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_10 = ((int32_t)(((int32_t)(L_136&((int32_t)1047552)))|((int32_t)(L_141&((int32_t)1023)))));
		int32_t L_142 = V_9;
		int32_t L_143 = V_10;
		if ((((int32_t)L_142) >= ((int32_t)L_143)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_144 = V_9;
		V_10 = L_144;
	}

IL_0218:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = ___7_temp;
		int64_t L_146 = ___6_n;
		int64_t L_147 = V_0;
		int32_t L_148 = V_10;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_146, L_147)))), (int32_t)L_148);
		int64_t L_149 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_149, ((int64_t)1)));
	}

IL_0227:
	{
		int64_t L_150 = V_0;
		int64_t L_151 = ___6_n;
		if ((((int64_t)L_150) < ((int64_t)L_151)))
		{
			goto IL_01e5;
		}
	}
	{
		int64_t L_152 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_152, ((int64_t)1)));
	}

IL_0231:
	{
		int64_t L_153 = V_1;
		int64_t L_154 = ___5_w;
		if ((((int64_t)L_153) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_154, ((int64_t)1))))))
		{
			goto IL_017d;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_025b;
	}

IL_0241:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = ___7_temp;
		int64_t L_156 = ___6_n;
		int64_t L_157 = V_0;
		NullCheck(L_155);
		int32_t* L_158 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_156, L_157))))));
		int32_t L_159 = *((int32_t*)L_158);
		*((int32_t*)L_158) = (int32_t)((int32_t)(L_159&((int32_t)1023)));
		int64_t L_160 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_160, ((int64_t)1)));
	}

IL_025b:
	{
		int64_t L_161 = V_0;
		int64_t L_162 = ___6_n;
		if ((((int64_t)L_161) < ((int64_t)L_162)))
		{
			goto IL_0241;
		}
	}
	{
		goto IL_03eb;
	}

IL_0265:
	{
		V_0 = ((int64_t)0);
		goto IL_028e;
	}

IL_026a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = ___7_temp;
		int64_t L_164 = ___6_n;
		int64_t L_165 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___7_temp;
		int64_t L_167 = V_0;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)L_167);
		int32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = ___7_temp;
		int64_t L_171 = ___6_n;
		int64_t L_172 = V_0;
		NullCheck(L_170);
		int32_t L_173 = ((int32_t)((int64_t)il2cpp_codegen_add(L_171, L_172)));
		int32_t L_174 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_164, L_165)))), (int32_t)((int32_t)(((int32_t)(L_169<<((int32_t)16)))|((int32_t)(L_174&((int32_t)65535))))));
		int64_t L_175 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)1)));
	}

IL_028e:
	{
		int64_t L_176 = V_0;
		int64_t L_177 = ___6_n;
		if ((((int64_t)L_176) < ((int64_t)L_177)))
		{
			goto IL_026a;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_03bc;
	}

IL_029b:
	{
		V_0 = ((int64_t)0);
		goto IL_02bc;
	}

IL_02a0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___7_temp;
		int64_t L_179 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___7_temp;
		int64_t L_181 = ___6_n;
		int64_t L_182 = V_0;
		NullCheck(L_180);
		int32_t L_183 = ((int32_t)((int64_t)il2cpp_codegen_add(L_181, L_182)));
		int32_t L_184 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		int64_t L_185 = V_0;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_179)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_184&((int32_t)-65536)))))|L_185))));
		int64_t L_186 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_186, ((int64_t)1)));
	}

IL_02bc:
	{
		int64_t L_187 = V_0;
		int64_t L_188 = ___6_n;
		if ((((int64_t)L_187) < ((int64_t)L_188)))
		{
			goto IL_02a0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___7_temp;
		int64_t L_190 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_189, 0, ((int32_t)L_190), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_02f2;
	}

IL_02d1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = ___7_temp;
		int64_t L_192 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ___7_temp;
		int64_t L_194 = V_0;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)L_194);
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ___7_temp;
		int64_t L_198 = ___6_n;
		int64_t L_199 = V_0;
		NullCheck(L_197);
		int32_t L_200 = ((int32_t)((int64_t)il2cpp_codegen_add(L_198, L_199)));
		int32_t L_201 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_192)), (int32_t)((int32_t)(((int32_t)(L_196<<((int32_t)16)))|((int32_t)(L_201&((int32_t)65535))))));
		int64_t L_202 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)1)));
	}

IL_02f2:
	{
		int64_t L_203 = V_0;
		int64_t L_204 = ___6_n;
		if ((((int64_t)L_203) < ((int64_t)L_204)))
		{
			goto IL_02d1;
		}
	}
	{
		int64_t L_205 = V_1;
		int64_t L_206 = ___5_w;
		if ((((int64_t)L_205) >= ((int64_t)((int64_t)il2cpp_codegen_subtract(L_206, ((int64_t)2))))))
		{
			goto IL_036b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0328;
	}

IL_0304:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = ___7_temp;
		int64_t L_208 = ___6_n;
		int64_t L_209 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = ___7_temp;
		int64_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = ((int32_t)L_211);
		int32_t L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_214 = ___7_temp;
		int64_t L_215 = ___6_n;
		int64_t L_216 = V_0;
		NullCheck(L_214);
		int32_t L_217 = ((int32_t)((int64_t)il2cpp_codegen_add(L_215, L_216)));
		int32_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_208, L_209)))), (int32_t)((int32_t)(((int32_t)(L_213&((int32_t)-65536)))|((int32_t)(L_218>>((int32_t)16))))));
		int64_t L_219 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)1)));
	}

IL_0328:
	{
		int64_t L_220 = V_0;
		int64_t L_221 = ___6_n;
		if ((((int64_t)L_220) < ((int64_t)L_221)))
		{
			goto IL_0304;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = ___7_temp;
		int64_t L_223 = ___6_n;
		int64_t L_224 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_222, ((int32_t)L_223), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_224, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0366;
	}

IL_0342:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = ___7_temp;
		int64_t L_226 = ___6_n;
		int64_t L_227 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ___7_temp;
		int64_t L_229 = ___6_n;
		int64_t L_230 = V_0;
		NullCheck(L_228);
		int32_t L_231 = ((int32_t)((int64_t)il2cpp_codegen_add(L_229, L_230)));
		int32_t L_232 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ___7_temp;
		int64_t L_234 = V_0;
		NullCheck(L_233);
		int32_t L_235 = ((int32_t)L_234);
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_226, L_227)))), (int32_t)((int32_t)(((int32_t)(L_232<<((int32_t)16)))|((int32_t)(L_236&((int32_t)65535))))));
		int64_t L_237 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_237, ((int64_t)1)));
	}

IL_0366:
	{
		int64_t L_238 = V_0;
		int64_t L_239 = ___6_n;
		if ((((int64_t)L_238) < ((int64_t)L_239)))
		{
			goto IL_0342;
		}
	}

IL_036b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ___7_temp;
		int64_t L_241 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_240, 0, ((int32_t)L_241), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_03b2;
	}

IL_037b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_242 = ___7_temp;
		int64_t L_243 = ___6_n;
		int64_t L_244 = V_0;
		NullCheck(L_242);
		int32_t L_245 = ((int32_t)((int64_t)il2cpp_codegen_add(L_243, L_244)));
		int32_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = ___7_temp;
		int64_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = ((int32_t)L_248);
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_11 = ((int32_t)(((int32_t)(L_246&((int32_t)-65536)))|((int32_t)(L_250&((int32_t)65535)))));
		int32_t L_251 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ___7_temp;
		int64_t L_253 = ___6_n;
		int64_t L_254 = V_0;
		NullCheck(L_252);
		int32_t L_255 = ((int32_t)((int64_t)il2cpp_codegen_add(L_253, L_254)));
		int32_t L_256 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		if ((((int32_t)L_251) >= ((int32_t)L_256)))
		{
			goto IL_03ad;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ___7_temp;
		int64_t L_258 = ___6_n;
		int64_t L_259 = V_0;
		int32_t L_260 = V_11;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_258, L_259)))), (int32_t)L_260);
	}

IL_03ad:
	{
		int64_t L_261 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_261, ((int64_t)1)));
	}

IL_03b2:
	{
		int64_t L_262 = V_0;
		int64_t L_263 = ___6_n;
		if ((((int64_t)L_262) < ((int64_t)L_263)))
		{
			goto IL_037b;
		}
	}
	{
		int64_t L_264 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_264, ((int64_t)1)));
	}

IL_03bc:
	{
		int64_t L_265 = V_1;
		int64_t L_266 = ___5_w;
		if ((((int64_t)L_265) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_266, ((int64_t)1))))))
		{
			goto IL_029b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_03e6;
	}

IL_03cc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = ___7_temp;
		int64_t L_268 = ___6_n;
		int64_t L_269 = V_0;
		NullCheck(L_267);
		int32_t* L_270 = ((L_267)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_268, L_269))))));
		int32_t L_271 = *((int32_t*)L_270);
		*((int32_t*)L_270) = (int32_t)((int32_t)(L_271&((int32_t)65535)));
		int64_t L_272 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_272, ((int64_t)1)));
	}

IL_03e6:
	{
		int64_t L_273 = V_0;
		int64_t L_274 = ___6_n;
		if ((((int64_t)L_273) < ((int64_t)L_274)))
		{
			goto IL_03cc;
		}
	}

IL_03eb:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_275 = ___3_pi;
		if (!L_275)
		{
			goto IL_040f;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0408;
	}

IL_03f3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ___7_temp;
		int64_t L_277 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_278 = ___3_pi;
		int64_t L_279 = V_0;
		NullCheck(L_278);
		int32_t L_280 = ((int32_t)L_279);
		uint16_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int64_t L_282 = V_0;
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_277)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_281<<((int32_t)16)))), L_282))));
		int64_t L_283 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_283, ((int64_t)1)));
	}

IL_0408:
	{
		int64_t L_284 = V_0;
		int64_t L_285 = ___6_n;
		if ((((int64_t)L_284) < ((int64_t)L_285)))
		{
			goto IL_03f3;
		}
	}
	{
		goto IL_0437;
	}

IL_040f:
	{
		V_0 = ((int64_t)0);
		goto IL_0432;
	}

IL_0414:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_286 = ___7_temp;
		int64_t L_287 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ___7_temp;
		int32_t L_289 = ___4_qIndex;
		int64_t L_290 = V_0;
		int16_t L_291;
		L_291 = CmceEngine_1_GetQShort_mC88F8761A061DC03E6F241CD6C429610A767CAE7(L_288, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_289), L_290))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_292 = V_0;
		NullCheck(L_286);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_287)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_291<<((int32_t)16)))), L_292))));
		int64_t L_293 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_293, ((int64_t)1)));
	}

IL_0432:
	{
		int64_t L_294 = V_0;
		int64_t L_295 = ___6_n;
		if ((((int64_t)L_294) < ((int64_t)L_295)))
		{
			goto IL_0414;
		}
	}

IL_0437:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ___7_temp;
		int64_t L_297 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_296, 0, ((int32_t)L_297), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_2 = ((int64_t)0);
		goto IL_04be;
	}

IL_0447:
	{
		int64_t L_298 = V_2;
		V_12 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_298));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = ___7_temp;
		int64_t L_300 = ___6_n;
		int64_t L_301 = V_12;
		NullCheck(L_299);
		int32_t L_302 = ((int32_t)((int64_t)il2cpp_codegen_add(L_300, L_301)));
		int32_t L_303 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_13 = ((int32_t)(L_303&1));
		int64_t L_304 = V_12;
		int32_t L_305 = V_13;
		V_14 = ((int32_t)((int64_t)il2cpp_codegen_add(L_304, ((int64_t)L_305))));
		int32_t L_306 = V_14;
		V_15 = ((int32_t)(L_306^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_307 = ___0_output;
		int64_t L_308 = ___1_pos;
		NullCheck(L_307);
		uint8_t* L_309 = ((L_307)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_308>>3))))));
		int32_t L_310 = *((uint8_t*)L_309);
		int32_t L_311 = V_13;
		int64_t L_312 = ___1_pos;
		*((int8_t*)L_309) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_310^((int32_t)(uint8_t)((int32_t)(L_311<<((int32_t)(((int32_t)((int64_t)(L_312&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_313 = ___1_pos;
		int64_t L_314 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_313, L_314));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = ___7_temp;
		int64_t L_316 = ___6_n;
		int64_t L_317 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = ___7_temp;
		int64_t L_319 = V_12;
		NullCheck(L_318);
		int32_t L_320 = ((int32_t)L_319);
		int32_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		int32_t L_322 = V_14;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_316, L_317)))), (int32_t)((int32_t)(((int32_t)(L_321<<((int32_t)16)))|L_322)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = ___7_temp;
		int64_t L_324 = ___6_n;
		int64_t L_325 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = ___7_temp;
		int64_t L_327 = V_12;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)((int64_t)il2cpp_codegen_add(L_327, ((int64_t)1))));
		int32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		int32_t L_330 = V_15;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_324, L_325)), ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_329<<((int32_t)16)))|L_330)));
		int64_t L_331 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_331, ((int64_t)1)));
	}

IL_04be:
	{
		int64_t L_332 = V_2;
		int64_t L_333 = ___6_n;
		if ((((int64_t)L_332) < ((int64_t)((int64_t)(L_333/((int64_t)2))))))
		{
			goto IL_0447;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_334 = ___7_temp;
		int64_t L_335 = ___6_n;
		int64_t L_336 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_334, ((int32_t)L_335), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_336, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_337 = ___1_pos;
		int64_t L_338 = ___5_w;
		int64_t L_339 = ___2_step;
		int64_t L_340 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_337, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_338)), ((int64_t)3))), L_339)), ((int64_t)(L_340/((int64_t)2)))))));
		V_3 = ((int64_t)0);
		goto IL_0575;
	}

IL_04f2:
	{
		int64_t L_341 = V_3;
		V_16 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_341));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = ___7_temp;
		int64_t L_343 = ___6_n;
		int64_t L_344 = V_16;
		NullCheck(L_342);
		int32_t L_345 = ((int32_t)((int64_t)il2cpp_codegen_add(L_343, L_344)));
		int32_t L_346 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		V_17 = ((int32_t)(L_346&1));
		int64_t L_347 = V_16;
		int32_t L_348 = V_17;
		V_18 = ((int32_t)((int64_t)il2cpp_codegen_add(L_347, ((int64_t)L_348))));
		int32_t L_349 = V_18;
		V_19 = ((int32_t)(L_349^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_350 = ___0_output;
		int64_t L_351 = ___1_pos;
		NullCheck(L_350);
		uint8_t* L_352 = ((L_350)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_351>>3))))));
		int32_t L_353 = *((uint8_t*)L_352);
		int32_t L_354 = V_17;
		int64_t L_355 = ___1_pos;
		*((int8_t*)L_352) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_353^((int32_t)(uint8_t)((int32_t)(L_354<<((int32_t)(((int32_t)((int64_t)(L_355&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_356 = ___1_pos;
		int64_t L_357 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_356, L_357));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = ___7_temp;
		int64_t L_359 = V_16;
		int32_t L_360 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ___7_temp;
		int64_t L_362 = ___6_n;
		int64_t L_363 = V_16;
		NullCheck(L_361);
		int32_t L_364 = ((int32_t)((int64_t)il2cpp_codegen_add(L_362, L_363)));
		int32_t L_365 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_359)), (int32_t)((int32_t)(((int32_t)(L_360<<((int32_t)16)))|((int32_t)(L_365&((int32_t)65535))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = ___7_temp;
		int64_t L_367 = V_16;
		int32_t L_368 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ___7_temp;
		int64_t L_370 = ___6_n;
		int64_t L_371 = V_16;
		NullCheck(L_369);
		int32_t L_372 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_370, L_371)), ((int64_t)1))));
		int32_t L_373 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		NullCheck(L_366);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_367, ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_368<<((int32_t)16)))|((int32_t)(L_373&((int32_t)65535))))));
		int64_t L_374 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_374, ((int64_t)1)));
	}

IL_0575:
	{
		int64_t L_375 = V_3;
		int64_t L_376 = ___6_n;
		if ((((int64_t)L_375) < ((int64_t)((int64_t)(L_376/((int64_t)2))))))
		{
			goto IL_04f2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ___7_temp;
		int64_t L_378 = ___6_n;
		CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348(L_377, 0, ((int32_t)L_378), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_379 = ___1_pos;
		int64_t L_380 = ___5_w;
		int64_t L_381 = ___2_step;
		int64_t L_382 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_subtract(L_379, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_380)), ((int64_t)2))), L_381)), ((int64_t)(L_382/((int64_t)2)))))));
		int64_t L_383 = ___6_n;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_384 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)L_383), 4)));
		V_4 = L_384;
		V_1 = ((int64_t)0);
		goto IL_05df;
	}

IL_05b0:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_385 = V_4;
		int64_t L_386 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = ___7_temp;
		int64_t L_388 = V_1;
		NullCheck(L_387);
		int32_t L_389 = ((int32_t)L_388);
		int32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_multiply(L_386, ((int64_t)2))))), (int16_t)((int16_t)L_390));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_391 = V_4;
		int64_t L_392 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ___7_temp;
		int64_t L_394 = V_1;
		NullCheck(L_393);
		int32_t L_395 = ((int32_t)L_394);
		int32_t L_396 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		NullCheck(L_391);
		(L_391)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_392, ((int64_t)2))), ((int64_t)1))))), (int16_t)((int16_t)((int64_t)(((int64_t)(((int64_t)L_396)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16)))));
		int64_t L_397 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_397, ((int64_t)1)));
	}

IL_05df:
	{
		int64_t L_398 = V_1;
		int64_t L_399 = ___6_n;
		if ((((int64_t)L_398) < ((int64_t)((int64_t)il2cpp_codegen_multiply(L_399, ((int64_t)2))))))
		{
			goto IL_05b0;
		}
	}
	{
		V_2 = ((int64_t)0);
		goto IL_0626;
	}

IL_05ec:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_400 = V_4;
		int64_t L_401 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = ___7_temp;
		int64_t L_403 = V_2;
		NullCheck(L_402);
		int32_t L_404 = ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_403)));
		int32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		NullCheck(L_400);
		(L_400)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_401)), (int16_t)((int16_t)((int32_t)(((int32_t)(L_405&((int32_t)65535)))>>1))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_406 = V_4;
		int64_t L_407 = V_2;
		int64_t L_408 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ___7_temp;
		int64_t L_410 = V_2;
		NullCheck(L_409);
		int32_t L_411 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_410)), ((int64_t)1))));
		int32_t L_412 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_407, ((int64_t)(L_408/((int64_t)2))))))), (int16_t)((int16_t)((int32_t)(((int32_t)(L_412&((int32_t)65535)))>>1))));
		int64_t L_413 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_413, ((int64_t)1)));
	}

IL_0626:
	{
		int64_t L_414 = V_2;
		int64_t L_415 = ___6_n;
		if ((((int64_t)L_414) < ((int64_t)((int64_t)(L_415/((int64_t)2))))))
		{
			goto IL_05ec;
		}
	}
	{
		V_1 = ((int64_t)0);
		goto IL_065d;
	}

IL_0633:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ___7_temp;
		int64_t L_417 = ___6_n;
		int64_t L_418 = ___6_n;
		int64_t L_419 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_420 = V_4;
		int64_t L_421 = V_1;
		NullCheck(L_420);
		int32_t L_422 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_421, ((int64_t)2))), ((int64_t)1))));
		int16_t L_423 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_424 = V_4;
		int64_t L_425 = V_1;
		NullCheck(L_424);
		int32_t L_426 = ((int32_t)((int64_t)il2cpp_codegen_multiply(L_425, ((int64_t)2))));
		int16_t L_427 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		NullCheck(L_416);
		(L_416)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_417, ((int64_t)(L_418/((int64_t)4))))), L_419)))), (int32_t)((int32_t)(((int32_t)((int32_t)L_423<<((int32_t)16)))|(int32_t)L_427)));
		int64_t L_428 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_428, ((int64_t)1)));
	}

IL_065d:
	{
		int64_t L_429 = V_1;
		int64_t L_430 = ___6_n;
		if ((((int64_t)L_429) < ((int64_t)((int64_t)(L_430/((int64_t)2))))))
		{
			goto IL_0633;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_431 = ___0_output;
		int64_t L_432 = ___1_pos;
		int64_t L_433 = ___2_step;
		int64_t L_434 = ___6_n;
		int64_t L_435 = ___6_n;
		int64_t L_436 = ___5_w;
		int64_t L_437 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = ___7_temp;
		CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1(L_431, L_432, ((int64_t)il2cpp_codegen_multiply(L_433, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)il2cpp_codegen_multiply(((int32_t)((int64_t)il2cpp_codegen_add(L_434, ((int64_t)(L_435/((int64_t)4)))))), 2)), ((int64_t)il2cpp_codegen_subtract(L_436, ((int64_t)1))), ((int64_t)(L_437/((int64_t)2))), L_438, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_439 = ___0_output;
		int64_t L_440 = ___1_pos;
		int64_t L_441 = ___2_step;
		int64_t L_442 = ___2_step;
		int64_t L_443 = ___6_n;
		int64_t L_444 = ___6_n;
		int64_t L_445 = ___6_n;
		int64_t L_446 = ___5_w;
		int64_t L_447 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ___7_temp;
		CmceEngine_1_CBRecursion_mC6FE50CF5EC5A9492D8C4BCEB370838ED8868EB1(L_439, ((int64_t)il2cpp_codegen_add(L_440, L_441)), ((int64_t)il2cpp_codegen_multiply(L_442, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_443, ((int64_t)(L_444/((int64_t)4))))), ((int64_t)2))), ((int64_t)(L_445/((int64_t)2)))))), ((int64_t)il2cpp_codegen_subtract(L_446, ((int64_t)1))), ((int64_t)(L_447/((int64_t)2))), L_448, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_PKGen_m2A4F098032E423797777291A68528234D6E84EB9_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	uint8_t V_14 = 0x0;
	int32_t V_15 = 0;
	uint8_t V_16 = 0x0;
	int32_t V_17 = 0;
	uint8_t V_18 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_19 = NULL;
	uint8_t V_20 = 0x0;
	int32_t V_21 = 0;
	uint8_t V_22 = 0x0;
	int32_t V_23 = 0;
	uint8_t V_24 = 0x0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_30 = NULL;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	int32_t V_33 = 0;
	uint64_t V_34 = 0;
	int32_t V_35 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = V_0;
		int32_t L_3 = __this->___SYS_T;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)1);
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_sk;
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___GFMASK;
		uint16_t L_9;
		L_9 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), L_8, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint16_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->___SYS_T;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_13 = __this->___GFBITS;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_13&((int32_t)31))))));
		V_4 = L_14;
		V_1 = 0;
		goto IL_0065;
	}

IL_0053:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = V_4;
		int32_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_perm;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_20)<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_21)))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->___GFBITS;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(1<<((int32_t)(L_24&((int32_t)31))))))))
		{
			goto IL_0053;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_25 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_26 = V_4;
		NullCheck(L_26);
		CmceEngine_1_Sort64_mE88513A6417DDBB181D0F45C702F82DE4B4C0F35(L_25, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = 1;
		goto IL_009b;
	}

IL_0083:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = V_4;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		int64_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31 = V_4;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int64_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint64_t)((int64_t)(L_30>>((int32_t)31)))) == ((uint64_t)((int64_t)(L_34>>((int32_t)31)))))))
		{
			goto IL_0097;
		}
	}
	{
		return (-1);
	}

IL_0097:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009b:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___GFBITS;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(1<<((int32_t)(L_37&((int32_t)31))))))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_39 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_5 = L_39;
		V_1 = 0;
		goto IL_00cf;
	}

IL_00ba:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_40 = ___3_pi;
		int32_t L_41 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = V_4;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int64_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = __this->___GFMASK;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_45&((int64_t)L_46)))));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cf:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = __this->___GFBITS;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(1<<((int32_t)(L_49&((int32_t)31))))))))
		{
			goto IL_00ba;
		}
	}
	{
		V_1 = 0;
		goto IL_00f8;
	}

IL_00e1:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_5;
		int32_t L_51 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = ___3_pi;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = __this->___GFBITS;
		uint16_t L_57;
		L_57 = Utils_Bitrev_m36DA6A03B52348762665DCBE4625071A10940E2C(L_55, L_56, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint16_t)L_57);
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00f8:
	{
		int32_t L_59 = V_1;
		int32_t L_60 = __this->___SYS_N;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_61 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_62 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_6 = L_62;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_63 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_64 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_65 = V_5;
		CmceEngine_1_Root_m44C6D1DBD0146309E5883A35344C66BFE300F480(__this, L_63, L_64, L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = 0;
		goto IL_013e;
	}

IL_011d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = V_6;
		int32_t L_67 = V_1;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_68 = __this->___gf;
		V_8 = L_68;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_69 = V_6;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint16_t L_73;
		L_73 = GF13_GFInv_m41ED268B809C91B59BEF21DD1B745F23BD1AE448((&V_8), L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint16_t)L_73);
		int32_t L_74 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_013e:
	{
		int32_t L_75 = V_1;
		int32_t L_76 = __this->___SYS_N;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_77 = __this->___PK_NROWS;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_78 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_77);
		V_7 = L_78;
		V_1 = 0;
		goto IL_016d;
	}

IL_0158:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_79 = V_7;
		int32_t L_80 = V_1;
		int32_t L_81 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_81/8)));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_82);
		int32_t L_83 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_016d:
	{
		int32_t L_84 = V_1;
		int32_t L_85 = __this->___PK_NROWS;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_0158;
		}
	}
	{
		V_1 = 0;
		goto IL_0370;
	}

IL_017d:
	{
		V_2 = 0;
		goto IL_032e;
	}

IL_0184:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_6;
		int32_t L_87 = V_2;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint16_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_90 = V_6;
		int32_t L_91 = V_2;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 2));
		uint16_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_94 = V_6;
		int32_t L_95 = V_2;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 4));
		uint16_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_98 = V_6;
		int32_t L_99 = V_2;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(L_99, 6));
		uint16_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_9 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_89)|((int64_t)(((int64_t)(uint64_t)L_93)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_97)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_101)<<((int32_t)48)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_102 = V_6;
		int32_t L_103 = V_2;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		uint16_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_106 = V_6;
		int32_t L_107 = V_2;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 3));
		uint16_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_110 = V_6;
		int32_t L_111 = V_2;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 5));
		uint16_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = V_6;
		int32_t L_115 = V_2;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 7));
		uint16_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_10 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_105)|((int64_t)(((int64_t)(uint64_t)L_109)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_113)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_117)<<((int32_t)48)))));
		Bits_BitPermuteStep2_m635AC109033719E92C7EAD83721C5F2F881E60FD_inline((&V_10), (&V_9), (uint64_t)((int64_t)71777214294589695LL), 8, NULL);
		uint64_t L_118 = V_9;
		uint64_t L_119;
		L_119 = Interleave_Transpose_m80411D9875FDD3547D6D81DCEB7F3F94B045742B(L_118, NULL);
		V_9 = L_119;
		uint64_t L_120 = V_10;
		uint64_t L_121;
		L_121 = Interleave_Transpose_m80411D9875FDD3547D6D81DCEB7F3F94B045742B(L_120, NULL);
		V_10 = L_121;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_122 = V_7;
		int32_t L_123 = V_1;
		int32_t L_124 = __this->___GFBITS;
		NullCheck(L_122);
		int32_t L_125 = ((int32_t)il2cpp_codegen_multiply(L_123, L_124));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = V_2;
		uint64_t L_128 = V_9;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_127/8))), (uint8_t)((int32_t)(uint8_t)L_128));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_129 = V_7;
		int32_t L_130 = V_1;
		int32_t L_131 = __this->___GFBITS;
		NullCheck(L_129);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_130, L_131)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_2;
		uint64_t L_135 = V_9;
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_134/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_135>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_136 = V_7;
		int32_t L_137 = V_1;
		int32_t L_138 = __this->___GFBITS;
		NullCheck(L_136);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_137, L_138)), 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		int32_t L_141 = V_2;
		uint64_t L_142 = V_9;
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_141/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_142>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_143 = V_7;
		int32_t L_144 = V_1;
		int32_t L_145 = __this->___GFBITS;
		NullCheck(L_143);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_144, L_145)), 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = V_2;
		uint64_t L_149 = V_9;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_148/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_149>>((int32_t)24)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_150 = V_7;
		int32_t L_151 = V_1;
		int32_t L_152 = __this->___GFBITS;
		NullCheck(L_150);
		int32_t L_153 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_151, L_152)), 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = V_2;
		uint64_t L_156 = V_9;
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_155/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_156>>((int32_t)32)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_157 = V_7;
		int32_t L_158 = V_1;
		int32_t L_159 = __this->___GFBITS;
		NullCheck(L_157);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_158, L_159)), 5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		int32_t L_162 = V_2;
		uint64_t L_163 = V_9;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_162/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_163>>((int32_t)40)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_164 = V_7;
		int32_t L_165 = V_1;
		int32_t L_166 = __this->___GFBITS;
		NullCheck(L_164);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_165, L_166)), 6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		int32_t L_169 = V_2;
		uint64_t L_170 = V_9;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_169/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_170>>((int32_t)48)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_171 = V_7;
		int32_t L_172 = V_1;
		int32_t L_173 = __this->___GFBITS;
		NullCheck(L_171);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_172, L_173)), 7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_175 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_2;
		uint64_t L_177 = V_9;
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_176/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_177>>((int32_t)56)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_178 = V_7;
		int32_t L_179 = V_1;
		int32_t L_180 = __this->___GFBITS;
		NullCheck(L_178);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_179, L_180)), 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_182 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_2;
		uint64_t L_184 = V_10;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_183/8))), (uint8_t)((int32_t)(uint8_t)L_184));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_185 = V_7;
		int32_t L_186 = V_1;
		int32_t L_187 = __this->___GFBITS;
		NullCheck(L_185);
		int32_t L_188 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_186, L_187)), ((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_189 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = V_2;
		uint64_t L_191 = V_10;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_190/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_191>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_192 = V_7;
		int32_t L_193 = V_1;
		int32_t L_194 = __this->___GFBITS;
		NullCheck(L_192);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_193, L_194)), ((int32_t)10)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		int32_t L_197 = V_2;
		uint64_t L_198 = V_10;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_197/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_198>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_199 = V_7;
		int32_t L_200 = V_1;
		int32_t L_201 = __this->___GFBITS;
		NullCheck(L_199);
		int32_t L_202 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_200, L_201)), ((int32_t)11)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		int32_t L_204 = V_2;
		uint64_t L_205 = V_10;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_204/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_205>>((int32_t)24)))));
		int32_t L_206 = __this->___GFBITS;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)12))))
		{
			goto IL_032a;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_207 = V_7;
		int32_t L_208 = V_1;
		int32_t L_209 = __this->___GFBITS;
		NullCheck(L_207);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_208, L_209)), ((int32_t)12)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_211 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		int32_t L_212 = V_2;
		uint64_t L_213 = V_10;
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_212/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_213>>((int32_t)32)))));
	}

IL_032a:
	{
		int32_t L_214 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_214, 8));
	}

IL_032e:
	{
		int32_t L_215 = V_2;
		int32_t L_216 = __this->___SYS_N;
		if ((((int32_t)L_215) < ((int32_t)L_216)))
		{
			goto IL_0184;
		}
	}
	{
		V_2 = 0;
		goto IL_0363;
	}

IL_033e:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_217 = V_6;
		int32_t L_218 = V_2;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_219 = __this->___gf;
		V_8 = L_219;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_220 = V_6;
		int32_t L_221 = V_2;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		uint16_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_224 = V_5;
		int32_t L_225 = V_2;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		uint16_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		uint16_t L_228;
		L_228 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_8), L_223, L_227, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(L_218), (uint16_t)L_228);
		int32_t L_229 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_229, 1));
	}

IL_0363:
	{
		int32_t L_230 = V_2;
		int32_t L_231 = __this->___SYS_N;
		if ((((int32_t)L_230) < ((int32_t)L_231)))
		{
			goto IL_033e;
		}
	}
	{
		int32_t L_232 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_232, 1));
	}

IL_0370:
	{
		int32_t L_233 = V_1;
		int32_t L_234 = __this->___SYS_T;
		if ((((int32_t)L_233) < ((int32_t)L_234)))
		{
			goto IL_017d;
		}
	}
	{
		V_11 = 0;
		goto IL_05bc;
	}

IL_0384:
	{
		int32_t L_235 = V_11;
		V_1 = ((int32_t)(L_235>>3));
		int32_t L_236 = V_11;
		V_2 = ((int32_t)(L_236&7));
		bool L_237 = __this->___usePivots;
		if (!L_237)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_238 = V_11;
		int32_t L_239 = __this->___PK_NROWS;
		if ((!(((uint32_t)L_238) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_239, ((int32_t)32)))))))
		{
			goto IL_03b3;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_240 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_241 = ___3_pi;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_242 = ___4_pivots;
		int32_t L_243;
		L_243 = CmceEngine_1_MovColumns_m212E31505217F58BA50B9B3675D4C15CF455610E(__this, L_240, L_241, L_242, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_243)
		{
			goto IL_03b3;
		}
	}
	{
		return (-1);
	}

IL_03b3:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_244 = V_7;
		int32_t L_245 = V_11;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		V_12 = L_247;
		int32_t L_248 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_248, 1));
		goto IL_04a7;
	}

IL_03c4:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_249 = V_7;
		int32_t L_250 = V_3;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		V_13 = L_252;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = V_12;
		int32_t L_254 = V_1;
		NullCheck(L_253);
		int32_t L_255 = L_254;
		uint8_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_257 = V_13;
		int32_t L_258 = V_1;
		NullCheck(L_257);
		int32_t L_259 = L_258;
		uint8_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_256^(int32_t)L_260)));
		uint8_t L_261 = V_14;
		int32_t L_262 = V_2;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_261>>((int32_t)(L_262&((int32_t)31))))));
		uint8_t L_263 = V_14;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_263&1)));
		V_15 = 0;
		uint8_t L_264 = V_14;
		V_16 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_264))));
		int32_t L_265 = __this->___SYS_N;
		V_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_265/8)), 4));
		goto IL_046c;
	}

IL_03fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_266 = V_12;
		int32_t L_267 = V_15;
		NullCheck(L_266);
		uint8_t* L_268 = ((L_266)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_267)));
		int32_t L_269 = *((uint8_t*)L_268);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_270 = V_13;
		int32_t L_271 = V_15;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		uint8_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		uint8_t L_274 = V_16;
		*((int8_t*)L_268) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_269^((int32_t)(uint8_t)((int32_t)((int32_t)L_273&(int32_t)L_274))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_275 = V_12;
		int32_t L_276 = V_15;
		NullCheck(L_275);
		uint8_t* L_277 = ((L_275)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_276, 1)))));
		int32_t L_278 = *((uint8_t*)L_277);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_279 = V_13;
		int32_t L_280 = V_15;
		NullCheck(L_279);
		int32_t L_281 = ((int32_t)il2cpp_codegen_add(L_280, 1));
		uint8_t L_282 = (L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		uint8_t L_283 = V_16;
		*((int8_t*)L_277) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_278^((int32_t)(uint8_t)((int32_t)((int32_t)L_282&(int32_t)L_283))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_284 = V_12;
		int32_t L_285 = V_15;
		NullCheck(L_284);
		uint8_t* L_286 = ((L_284)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_285, 2)))));
		int32_t L_287 = *((uint8_t*)L_286);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_288 = V_13;
		int32_t L_289 = V_15;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 2));
		uint8_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		uint8_t L_292 = V_16;
		*((int8_t*)L_286) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_287^((int32_t)(uint8_t)((int32_t)((int32_t)L_291&(int32_t)L_292))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_293 = V_12;
		int32_t L_294 = V_15;
		NullCheck(L_293);
		uint8_t* L_295 = ((L_293)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_294, 3)))));
		int32_t L_296 = *((uint8_t*)L_295);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = V_13;
		int32_t L_298 = V_15;
		NullCheck(L_297);
		int32_t L_299 = ((int32_t)il2cpp_codegen_add(L_298, 3));
		uint8_t L_300 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		uint8_t L_301 = V_16;
		*((int8_t*)L_295) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_296^((int32_t)(uint8_t)((int32_t)((int32_t)L_300&(int32_t)L_301))))));
		int32_t L_302 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_302, 4));
	}

IL_046c:
	{
		int32_t L_303 = V_15;
		int32_t L_304 = V_17;
		if ((((int32_t)L_303) <= ((int32_t)L_304)))
		{
			goto IL_03fe;
		}
	}
	{
		uint8_t L_305 = V_14;
		V_18 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_305))));
		goto IL_0497;
	}

IL_047a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_306 = V_12;
		int32_t L_307 = V_15;
		NullCheck(L_306);
		uint8_t* L_308 = ((L_306)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_307)));
		int32_t L_309 = *((uint8_t*)L_308);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_310 = V_13;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = L_311;
		uint8_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		uint8_t L_314 = V_18;
		*((int8_t*)L_308) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_309^((int32_t)(uint8_t)((int32_t)((int32_t)L_313&(int32_t)L_314))))));
		int32_t L_315 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_315, 1));
	}

IL_0497:
	{
		int32_t L_316 = V_15;
		int32_t L_317 = __this->___SYS_N;
		if ((((int32_t)L_316) < ((int32_t)((int32_t)(L_317/8)))))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_318 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_318, 1));
	}

IL_04a7:
	{
		int32_t L_319 = V_3;
		int32_t L_320 = __this->___PK_NROWS;
		if ((((int32_t)L_319) < ((int32_t)L_320)))
		{
			goto IL_03c4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_321 = V_12;
		int32_t L_322 = V_1;
		NullCheck(L_321);
		int32_t L_323 = L_322;
		uint8_t L_324 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		int32_t L_325 = V_2;
		if (((int32_t)(((int32_t)((int32_t)L_324>>((int32_t)(L_325&((int32_t)31)))))&1)))
		{
			goto IL_04c2;
		}
	}
	{
		return (-1);
	}

IL_04c2:
	{
		V_3 = 0;
		goto IL_05aa;
	}

IL_04c9:
	{
		int32_t L_326 = V_3;
		int32_t L_327 = V_11;
		if ((((int32_t)L_326) == ((int32_t)L_327)))
		{
			goto IL_05a6;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_328 = V_7;
		int32_t L_329 = V_3;
		NullCheck(L_328);
		int32_t L_330 = L_329;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_19 = L_331;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_332 = V_19;
		int32_t L_333 = V_1;
		NullCheck(L_332);
		int32_t L_334 = L_333;
		uint8_t L_335 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		int32_t L_336 = V_2;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_335>>((int32_t)(L_336&((int32_t)31))))));
		uint8_t L_337 = V_20;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_337&1)));
		V_21 = 0;
		uint8_t L_338 = V_20;
		V_22 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_338))));
		int32_t L_339 = __this->___SYS_N;
		V_23 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_339/8)), 4));
		goto IL_056f;
	}

IL_0501:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_340 = V_19;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		uint8_t* L_342 = ((L_340)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_341)));
		int32_t L_343 = *((uint8_t*)L_342);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_344 = V_12;
		int32_t L_345 = V_21;
		NullCheck(L_344);
		int32_t L_346 = L_345;
		uint8_t L_347 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		uint8_t L_348 = V_22;
		*((int8_t*)L_342) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_343^((int32_t)(uint8_t)((int32_t)((int32_t)L_347&(int32_t)L_348))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_349 = V_19;
		int32_t L_350 = V_21;
		NullCheck(L_349);
		uint8_t* L_351 = ((L_349)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_350, 1)))));
		int32_t L_352 = *((uint8_t*)L_351);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_353 = V_12;
		int32_t L_354 = V_21;
		NullCheck(L_353);
		int32_t L_355 = ((int32_t)il2cpp_codegen_add(L_354, 1));
		uint8_t L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		uint8_t L_357 = V_22;
		*((int8_t*)L_351) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_352^((int32_t)(uint8_t)((int32_t)((int32_t)L_356&(int32_t)L_357))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_358 = V_19;
		int32_t L_359 = V_21;
		NullCheck(L_358);
		uint8_t* L_360 = ((L_358)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_359, 2)))));
		int32_t L_361 = *((uint8_t*)L_360);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_362 = V_12;
		int32_t L_363 = V_21;
		NullCheck(L_362);
		int32_t L_364 = ((int32_t)il2cpp_codegen_add(L_363, 2));
		uint8_t L_365 = (L_362)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		uint8_t L_366 = V_22;
		*((int8_t*)L_360) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_361^((int32_t)(uint8_t)((int32_t)((int32_t)L_365&(int32_t)L_366))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_367 = V_19;
		int32_t L_368 = V_21;
		NullCheck(L_367);
		uint8_t* L_369 = ((L_367)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_368, 3)))));
		int32_t L_370 = *((uint8_t*)L_369);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_371 = V_12;
		int32_t L_372 = V_21;
		NullCheck(L_371);
		int32_t L_373 = ((int32_t)il2cpp_codegen_add(L_372, 3));
		uint8_t L_374 = (L_371)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		uint8_t L_375 = V_22;
		*((int8_t*)L_369) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_370^((int32_t)(uint8_t)((int32_t)((int32_t)L_374&(int32_t)L_375))))));
		int32_t L_376 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_376, 4));
	}

IL_056f:
	{
		int32_t L_377 = V_21;
		int32_t L_378 = V_23;
		if ((((int32_t)L_377) <= ((int32_t)L_378)))
		{
			goto IL_0501;
		}
	}
	{
		uint8_t L_379 = V_20;
		V_24 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_379))));
		goto IL_059a;
	}

IL_057d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_380 = V_19;
		int32_t L_381 = V_21;
		NullCheck(L_380);
		uint8_t* L_382 = ((L_380)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_381)));
		int32_t L_383 = *((uint8_t*)L_382);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_384 = V_12;
		int32_t L_385 = V_21;
		NullCheck(L_384);
		int32_t L_386 = L_385;
		uint8_t L_387 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		uint8_t L_388 = V_24;
		*((int8_t*)L_382) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_383^((int32_t)(uint8_t)((int32_t)((int32_t)L_387&(int32_t)L_388))))));
		int32_t L_389 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_389, 1));
	}

IL_059a:
	{
		int32_t L_390 = V_21;
		int32_t L_391 = __this->___SYS_N;
		if ((((int32_t)L_390) < ((int32_t)((int32_t)(L_391/8)))))
		{
			goto IL_057d;
		}
	}

IL_05a6:
	{
		int32_t L_392 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_392, 1));
	}

IL_05aa:
	{
		int32_t L_393 = V_3;
		int32_t L_394 = __this->___PK_NROWS;
		if ((((int32_t)L_393) < ((int32_t)L_394)))
		{
			goto IL_04c9;
		}
	}
	{
		int32_t L_395 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_395, 1));
	}

IL_05bc:
	{
		int32_t L_396 = V_11;
		int32_t L_397 = __this->___PK_NROWS;
		if ((((int32_t)L_396) < ((int32_t)L_397)))
		{
			goto IL_0384;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_398 = ___0_pk;
		if (!L_398)
		{
			goto IL_072a;
		}
	}
	{
		bool L_399 = __this->___usePadding;
		if (!L_399)
		{
			goto IL_06ee;
		}
	}
	{
		int32_t L_400 = __this->___PK_NROWS;
		V_25 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_400, 1))/8));
		int32_t L_401 = __this->___SYS_N;
		V_26 = ((int32_t)(L_401/8));
		V_27 = 0;
		int32_t L_402 = __this->___PK_NROWS;
		V_28 = ((int32_t)(L_402%8));
		int32_t L_403 = V_28;
		if (L_403)
		{
			goto IL_0635;
		}
	}
	{
		int32_t L_404 = V_26;
		int32_t L_405 = V_25;
		V_29 = ((int32_t)il2cpp_codegen_subtract(L_404, L_405));
		V_1 = 0;
		goto IL_0627;
	}

IL_060c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_406 = V_7;
		int32_t L_407 = V_1;
		NullCheck(L_406);
		int32_t L_408 = L_407;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		int32_t L_410 = V_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = ___0_pk;
		int32_t L_412 = V_27;
		int32_t L_413 = V_29;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_409, L_410, (RuntimeArray*)L_411, L_412, L_413, NULL);
		int32_t L_414 = V_27;
		int32_t L_415 = V_29;
		V_27 = ((int32_t)il2cpp_codegen_add(L_414, L_415));
		int32_t L_416 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_416, 1));
	}

IL_0627:
	{
		int32_t L_417 = V_1;
		int32_t L_418 = __this->___PK_NROWS;
		if ((((int32_t)L_417) < ((int32_t)L_418)))
		{
			goto IL_060c;
		}
	}
	{
		goto IL_072a;
	}

IL_0635:
	{
		V_1 = 0;
		goto IL_06e0;
	}

IL_063c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_419 = V_7;
		int32_t L_420 = V_1;
		NullCheck(L_419);
		int32_t L_421 = L_420;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_422 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		V_30 = L_422;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_423 = V_30;
		int32_t L_424 = V_25;
		uint64_t L_425;
		L_425 = Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF(L_423, L_424, NULL);
		V_31 = L_425;
		int32_t L_426 = V_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_426, 8));
		goto IL_0688;
	}

IL_0654:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_427 = V_30;
		int32_t L_428 = V_2;
		uint64_t L_429;
		L_429 = Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF(L_427, L_428, NULL);
		V_32 = L_429;
		uint64_t L_430 = V_31;
		int32_t L_431 = V_28;
		uint64_t L_432 = V_32;
		int32_t L_433 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_434 = ___0_pk;
		int32_t L_435 = V_27;
		Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10((uint64_t)((int64_t)(((int64_t)((uint64_t)L_430>>((int32_t)(L_431&((int32_t)63)))))|((int64_t)((int64_t)L_432<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_433))&((int32_t)63))))))), L_434, L_435, NULL);
		int32_t L_436 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_436, 8));
		uint64_t L_437 = V_32;
		V_31 = L_437;
		int32_t L_438 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_438, 8));
	}

IL_0688:
	{
		int32_t L_439 = V_2;
		int32_t L_440 = V_26;
		if ((((int32_t)L_439) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_440, 8)))))
		{
			goto IL_0654;
		}
	}
	{
		int32_t L_441 = V_26;
		int32_t L_442 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_441, L_442));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_443 = V_30;
		int32_t L_444 = V_2;
		int32_t L_445 = V_33;
		uint64_t L_446;
		L_446 = Pack_LE_To_UInt64_Low_m4625199858C4FF58A114E7FA22395C767C2FC5D7(L_443, L_444, L_445, NULL);
		V_34 = L_446;
		uint64_t L_447 = V_31;
		int32_t L_448 = V_28;
		uint64_t L_449 = V_34;
		int32_t L_450 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_451 = ___0_pk;
		int32_t L_452 = V_27;
		Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10((uint64_t)((int64_t)(((int64_t)((uint64_t)L_447>>((int32_t)(L_448&((int32_t)63)))))|((int64_t)((int64_t)L_449<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_450))&((int32_t)63))))))), L_451, L_452, NULL);
		int32_t L_453 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_453, 8));
		uint64_t L_454 = V_34;
		int32_t L_455 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_456 = ___0_pk;
		int32_t L_457 = V_27;
		int32_t L_458 = V_33;
		Pack_UInt64_To_LE_Low_m64CEBDE12D2106C0EBE76BF649FFC419C3C186FA((uint64_t)((int64_t)((uint64_t)L_454>>((int32_t)(L_455&((int32_t)63))))), L_456, L_457, L_458, NULL);
		int32_t L_459 = V_27;
		int32_t L_460 = V_33;
		V_27 = ((int32_t)il2cpp_codegen_add(L_459, L_460));
		int32_t L_461 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_461, 1));
	}

IL_06e0:
	{
		int32_t L_462 = V_1;
		int32_t L_463 = __this->___PK_NROWS;
		if ((((int32_t)L_462) < ((int32_t)L_463)))
		{
			goto IL_063c;
		}
	}
	{
		goto IL_072a;
	}

IL_06ee:
	{
		int32_t L_464 = __this->___SYS_N;
		int32_t L_465 = __this->___PK_NROWS;
		V_35 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_464, L_465)), 7))/8));
		V_1 = 0;
		goto IL_0721;
	}

IL_0705:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_466 = V_7;
		int32_t L_467 = V_1;
		NullCheck(L_466);
		int32_t L_468 = L_467;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_469 = (L_466)->GetAt(static_cast<il2cpp_array_size_t>(L_468));
		int32_t L_470 = __this->___PK_NROWS;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_471 = ___0_pk;
		int32_t L_472 = V_35;
		int32_t L_473 = V_1;
		int32_t L_474 = V_35;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_469, ((int32_t)(L_470/8)), (RuntimeArray*)L_471, ((int32_t)il2cpp_codegen_multiply(L_472, L_473)), L_474, NULL);
		int32_t L_475 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_475, 1));
	}

IL_0721:
	{
		int32_t L_476 = V_1;
		int32_t L_477 = __this->___PK_NROWS;
		if ((((int32_t)L_476) < ((int32_t)L_477)))
		{
			goto IL_0705;
		}
	}

IL_072a:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_f;
		int32_t L_1 = __this->___SYS_T;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = __this->___SYS_T;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0036;
	}

IL_0014:
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_5 = __this->___gf;
		V_2 = L_5;
		uint16_t L_6 = V_0;
		uint16_t L_7 = ___1_a;
		uint16_t L_8;
		L_8 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_2), L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_0 = L_8;
		uint16_t L_9 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = ___0_f;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_9^(int32_t)L_13)));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0036:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Root_m44C6D1DBD0146309E5883A35344C66BFE300F480_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_output;
		int32_t L_1 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___1_f;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = CmceEngine_1_Eval_m8C0EE34057A976720BD53DB86AE3ABC59E02F5BE(__this, L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint16_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0015:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___SYS_N;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_GenerateIrrPoly_m2B3231BEF77FD6DCCEFC15A99D7E987826FA05EF_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint16_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	int32_t V_12 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_1 = (UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)SZArrayNew(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_2 = V_0;
		int32_t L_3 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_3);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_4);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)1);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_8 = V_0;
		int32_t L_9 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_10);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___0_field;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->___SYS_T;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t L_16 = __this->___SYS_T;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_16, 2)), 1)));
		V_1 = L_17;
		V_2 = 2;
		goto IL_00ca;
	}

IL_0055:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_20);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_21);
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_22 = __this->___gf;
		V_3 = L_22;
		int32_t L_23 = __this->___SYS_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___poly;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)(L_30>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		GF13_GFSqrPoly_mE6BB55BAF13814E7F78743FDFC7D2A1318F0FBDA((&V_3), L_23, L_24, L_28, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_34 = V_0;
		int32_t L_35 = V_2;
		int32_t L_36 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_36);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, 1))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_37);
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_38 = __this->___gf;
		V_3 = L_38;
		int32_t L_39 = __this->___SYS_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___poly;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_41 = V_0;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_45 = V_0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = ___0_field;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_1;
		GF13_GFMulPoly_m34C565B0F33A2A87D5AA30FE29567DDBD917D54A((&V_3), L_39, L_40, L_44, L_48, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 2));
	}

IL_00ca:
	{
		int32_t L_52 = V_2;
		int32_t L_53 = __this->___SYS_T;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_54 = V_2;
		int32_t L_55 = __this->___SYS_T;
		if ((!(((uint32_t)L_54) == ((uint32_t)L_55))))
		{
			goto IL_0113;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_56 = V_0;
		int32_t L_57 = V_2;
		int32_t L_58 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_59 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_58);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_59);
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_60 = __this->___gf;
		V_3 = L_60;
		int32_t L_61 = __this->___SYS_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = __this->___poly;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_63 = V_0;
		int32_t L_64 = V_2;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_67 = V_0;
		int32_t L_68 = V_2;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)(L_68>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_1;
		GF13_GFSqrPoly_mE6BB55BAF13814E7F78743FDFC7D2A1318F0FBDA((&V_3), L_61, L_62, L_66, L_70, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
	}

IL_0113:
	{
		V_4 = 0;
		goto IL_0254;
	}

IL_011b:
	{
		int32_t L_72 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		goto IL_0179;
	}

IL_0123:
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_73 = __this->___gf;
		V_3 = L_73;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_74 = V_0;
		int32_t L_75 = V_4;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_4;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint16_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		uint16_t L_81;
		L_81 = GF13_GFIsZero_mF86E0A3133F14159BFFFFD810FDA575B098D662F((&V_3), L_80, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_7 = L_81;
		int32_t L_82 = V_4;
		V_8 = L_82;
		goto IL_0167;
	}

IL_0146:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_83 = V_0;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_4;
		NullCheck(L_86);
		uint16_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((uint16_t*)L_88);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_90 = V_0;
		int32_t L_91 = V_8;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int32_t L_94 = V_6;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint16_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		uint16_t L_97 = V_7;
		*((int16_t*)L_88) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_89^((int32_t)(uint16_t)((int32_t)((int32_t)L_96&(int32_t)L_97))))));
		int32_t L_98 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0167:
	{
		int32_t L_99 = V_8;
		int32_t L_100 = __this->___SYS_T;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_add(L_100, 1)))))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_101 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_0179:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = __this->___SYS_T;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_0123;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_104 = V_0;
		int32_t L_105 = V_4;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		int32_t L_108 = V_4;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		uint16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		if (L_110)
		{
			goto IL_018e;
		}
	}
	{
		return (-1);
	}

IL_018e:
	{
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_111 = __this->___gf;
		V_3 = L_111;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_112 = V_0;
		int32_t L_113 = V_4;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		int32_t L_116 = V_4;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		uint16_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		uint16_t L_119;
		L_119 = GF13_GFInv_m41ED268B809C91B59BEF21DD1B745F23BD1AE448((&V_3), L_118, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_5 = L_119;
		int32_t L_120 = V_4;
		V_9 = L_120;
		goto IL_01db;
	}

IL_01b1:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_121 = V_0;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_4;
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_126 = __this->___gf;
		V_3 = L_126;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_127 = V_0;
		int32_t L_128 = V_9;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = V_4;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		uint16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		uint16_t L_134 = V_5;
		uint16_t L_135;
		L_135 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_3), L_133, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (uint16_t)L_135);
		int32_t L_136 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_01db:
	{
		int32_t L_137 = V_9;
		int32_t L_138 = __this->___SYS_T;
		if ((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_add(L_138, 1)))))
		{
			goto IL_01b1;
		}
	}
	{
		V_10 = 0;
		goto IL_0244;
	}

IL_01ec:
	{
		int32_t L_139 = V_10;
		int32_t L_140 = V_4;
		if ((((int32_t)L_139) == ((int32_t)L_140)))
		{
			goto IL_023e;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_141 = V_0;
		int32_t L_142 = V_4;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		int32_t L_145 = V_10;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		uint16_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		V_11 = L_147;
		int32_t L_148 = V_4;
		V_12 = L_148;
		goto IL_0234;
	}

IL_0201:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_149 = V_0;
		int32_t L_150 = V_12;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = V_10;
		NullCheck(L_152);
		uint16_t* L_154 = ((L_152)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_153)));
		int32_t L_155 = *((uint16_t*)L_154);
		GF13_t94E3DE44B1CE4DB361E16DC8E38F03696135AFBB L_156 = __this->___gf;
		V_3 = L_156;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_157 = V_0;
		int32_t L_158 = V_12;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		int32_t L_161 = V_4;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		uint16_t L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		uint16_t L_164 = V_11;
		uint16_t L_165;
		L_165 = GF13_GFMul_mB70C1C350EFB9FED073D7AEC54B0034805A2C89D((&V_3), L_163, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int16_t*)L_154) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_155^(int32_t)L_165)));
		int32_t L_166 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_166, 1));
	}

IL_0234:
	{
		int32_t L_167 = V_12;
		int32_t L_168 = __this->___SYS_T;
		if ((((int32_t)L_167) <= ((int32_t)L_168)))
		{
			goto IL_0201;
		}
	}

IL_023e:
	{
		int32_t L_169 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_0244:
	{
		int32_t L_170 = V_10;
		int32_t L_171 = __this->___SYS_T;
		if ((((int32_t)L_170) < ((int32_t)L_171)))
		{
			goto IL_01ec;
		}
	}
	{
		int32_t L_172 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_0254:
	{
		int32_t L_173 = V_4;
		int32_t L_174 = __this->___SYS_T;
		if ((((int32_t)L_173) < ((int32_t)L_174)))
		{
			goto IL_011b;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_175 = V_0;
		int32_t L_176 = __this->___SYS_T;
		NullCheck(L_175);
		int32_t L_177 = L_176;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_179 = ___0_field;
		int32_t L_180 = __this->___SYS_T;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_178, (RuntimeArray*)L_179, L_180, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckPKPadding_m5A667A5217AA10231C2AEBF8F6CB097A7A161DD2_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		V_0 = (uint8_t)0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		uint8_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_pk;
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___PK_ROW_BYTES;
		int32_t L_4 = __this->___PK_ROW_BYTES;
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4)), 1));
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_0|(int32_t)L_6)));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___PK_NROWS;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_10 = V_0;
		int32_t L_11 = __this->___PK_NCOLS;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_10&((int32_t)255)))>>((int32_t)(((int32_t)(L_11%8))&((int32_t)31))))));
		uint8_t L_12 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		uint8_t L_13 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13&((int32_t)255)))>>7)));
		uint8_t L_14 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckCPadding_m5DD7A9E9662AFA8F46468927CC2E8856218F5DB9_gshared (CmceEngine_1_tCB006C862354E6CAAC949DAD093200256FD3C30F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_c;
		int32_t L_1 = __this->___SYND_BYTES;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->___PK_NROWS;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))>>((int32_t)(((int32_t)(L_4%8))&((int32_t)31)))))), 1)))&((int32_t)255)))>>7))), 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort32_m3043E169D762FF6EB56A888E12534381357D1348_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0145;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0089;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_0085;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int32_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int32_t)(L_16^L_21));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___0_temp;
		int32_t L_23 = ___1_from;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25));
		int32_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_temp;
		int32_t L_29 = ___1_from;
		int32_t L_30 = V_3;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_27, L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___0_temp;
		int32_t L_37 = ___1_from;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		NullCheck(L_36);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39));
		int32_t L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int32_t)(L_33^((int32_t)(L_34&((int32_t)(L_35^L_41))))));
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(L_42>>((int32_t)31)));
		int32_t L_43 = V_5;
		int32_t L_44 = V_4;
		V_5 = ((int32_t)(L_43&L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___0_temp;
		int32_t L_46 = ___1_from;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		int32_t* L_48 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, L_47)))));
		int32_t L_49 = *((int32_t*)L_48);
		int32_t L_50 = V_5;
		*((int32_t*)L_48) = (int32_t)((int32_t)(L_49^L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___0_temp;
		int32_t L_52 = ___1_from;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		NullCheck(L_51);
		int32_t* L_55 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)))));
		int32_t L_56 = *((int32_t*)L_55);
		int32_t L_57 = V_5;
		*((int32_t*)L_55) = (int32_t)((int32_t)(L_56^L_57));
	}

IL_0085:
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0089:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		int32_t L_61 = V_2;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_60, L_61)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_62 = V_1;
		V_6 = L_62;
		goto IL_0139;
	}

IL_0097:
	{
		V_7 = 0;
		goto IL_0128;
	}

IL_009f:
	{
		int32_t L_63 = V_7;
		int32_t L_64 = V_2;
		if (((int32_t)(L_63&L_64)))
		{
			goto IL_0122;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___0_temp;
		int32_t L_66 = ___1_from;
		int32_t L_67 = V_7;
		int32_t L_68 = V_2;
		NullCheck(L_65);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68));
		int32_t L_70 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_8 = L_70;
		int32_t L_71 = V_6;
		V_9 = L_71;
		goto IL_0113;
	}

IL_00b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_7;
		int32_t L_75 = V_9;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int32_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_8;
		V_10 = ((int32_t)(L_77^L_78));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___0_temp;
		int32_t L_80 = ___1_from;
		int32_t L_81 = V_7;
		int32_t L_82 = V_9;
		NullCheck(L_79);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_80, L_81)), L_82));
		int32_t L_84 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = V_8;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_84, L_85));
		int32_t L_86 = V_11;
		int32_t L_87 = V_10;
		int32_t L_88 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ___0_temp;
		int32_t L_90 = ___1_from;
		int32_t L_91 = V_7;
		int32_t L_92 = V_9;
		NullCheck(L_89);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_90, L_91)), L_92));
		int32_t L_94 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_11 = ((int32_t)(L_86^((int32_t)(L_87&((int32_t)(L_88^L_94))))));
		int32_t L_95 = V_11;
		V_11 = ((int32_t)(L_95>>((int32_t)31)));
		int32_t L_96 = V_11;
		int32_t L_97 = V_10;
		V_11 = ((int32_t)(L_96&L_97));
		int32_t L_98 = V_8;
		int32_t L_99 = V_11;
		V_8 = ((int32_t)(L_98^L_99));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___0_temp;
		int32_t L_101 = ___1_from;
		int32_t L_102 = V_7;
		int32_t L_103 = V_9;
		NullCheck(L_100);
		int32_t* L_104 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_101, L_102)), L_103)))));
		int32_t L_105 = *((int32_t*)L_104);
		int32_t L_106 = V_11;
		*((int32_t*)L_104) = (int32_t)((int32_t)(L_105^L_106));
		int32_t L_107 = V_9;
		V_9 = ((int32_t)(L_107>>1));
	}

IL_0113:
	{
		int32_t L_108 = V_9;
		int32_t L_109 = V_2;
		if ((((int32_t)L_108) > ((int32_t)L_109)))
		{
			goto IL_00b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = ___0_temp;
		int32_t L_111 = ___1_from;
		int32_t L_112 = V_7;
		int32_t L_113 = V_2;
		int32_t L_114 = V_8;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_111, L_112)), L_113))), (int32_t)L_114);
	}

IL_0122:
	{
		int32_t L_115 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0128:
	{
		int32_t L_116 = V_7;
		int32_t L_117 = V_0;
		int32_t L_118 = V_6;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_117, L_118)))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_119 = V_6;
		V_6 = ((int32_t)(L_119>>1));
	}

IL_0139:
	{
		int32_t L_120 = V_6;
		int32_t L_121 = V_2;
		if ((((int32_t)L_120) > ((int32_t)L_121)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_122 = V_2;
		V_2 = ((int32_t)(L_122>>1));
	}

IL_0145:
	{
		int32_t L_123 = V_2;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort64_mE88513A6417DDBB181D0F45C702F82DE4B4C0F35_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0111;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0073;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_006f;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int64_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int64_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_16, L_21));
		int64_t L_22 = V_4;
		V_4 = ((int64_t)(L_22>>((int32_t)63)));
		int64_t L_23 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ___0_temp;
		int32_t L_25 = ___1_from;
		int32_t L_26 = V_3;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int64_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = ___0_temp;
		int32_t L_30 = ___1_from;
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		NullCheck(L_29);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32));
		int64_t L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = ((int64_t)(L_23&((int64_t)(L_28^L_34))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_35 = ___0_temp;
		int32_t L_36 = ___1_from;
		int32_t L_37 = V_3;
		NullCheck(L_35);
		int64_t* L_38 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, L_37)))));
		int64_t L_39 = *((int64_t*)L_38);
		int64_t L_40 = V_4;
		*((int64_t*)L_38) = (int64_t)((int64_t)(L_39^L_40));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41 = ___0_temp;
		int32_t L_42 = ___1_from;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		NullCheck(L_41);
		int64_t* L_45 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_42, L_43)), L_44)))));
		int64_t L_46 = *((int64_t*)L_45);
		int64_t L_47 = V_4;
		*((int64_t*)L_45) = (int64_t)((int64_t)(L_46^L_47));
	}

IL_006f:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0073:
	{
		int32_t L_49 = V_3;
		int32_t L_50 = V_0;
		int32_t L_51 = V_2;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_50, L_51)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_52 = V_1;
		V_5 = L_52;
		goto IL_0105;
	}

IL_0081:
	{
		V_6 = 0;
		goto IL_00f7;
	}

IL_0086:
	{
		int32_t L_53 = V_6;
		int32_t L_54 = V_2;
		if (((int32_t)(L_53&L_54)))
		{
			goto IL_00f1;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55 = ___0_temp;
		int32_t L_56 = ___1_from;
		int32_t L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_55);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_56, L_57)), L_58));
		int64_t L_60 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		int32_t L_61 = V_5;
		V_8 = L_61;
		goto IL_00e2;
	}

IL_009c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_62 = ___0_temp;
		int32_t L_63 = ___1_from;
		int32_t L_64 = V_6;
		int32_t L_65 = V_8;
		NullCheck(L_62);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, L_64)), L_65));
		int64_t L_67 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int64_t L_68 = V_7;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_67, L_68));
		int64_t L_69 = V_9;
		V_9 = ((int64_t)(L_69>>((int32_t)63)));
		int64_t L_70 = V_9;
		int64_t L_71 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_6;
		int32_t L_75 = V_8;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int64_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_9 = ((int64_t)(L_70&((int64_t)(L_71^L_77))));
		int64_t L_78 = V_7;
		int64_t L_79 = V_9;
		V_7 = ((int64_t)(L_78^L_79));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_80 = ___0_temp;
		int32_t L_81 = ___1_from;
		int32_t L_82 = V_6;
		int32_t L_83 = V_8;
		NullCheck(L_80);
		int64_t* L_84 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_81, L_82)), L_83)))));
		int64_t L_85 = *((int64_t*)L_84);
		int64_t L_86 = V_9;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^L_86));
		int32_t L_87 = V_8;
		V_8 = ((int32_t)(L_87>>1));
	}

IL_00e2:
	{
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) > ((int32_t)L_89)))
		{
			goto IL_009c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_90 = ___0_temp;
		int32_t L_91 = ___1_from;
		int32_t L_92 = V_6;
		int32_t L_93 = V_2;
		int64_t L_94 = V_7;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_91, L_92)), L_93))), (int64_t)L_94);
	}

IL_00f1:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_00f7:
	{
		int32_t L_96 = V_6;
		int32_t L_97 = V_0;
		int32_t L_98 = V_5;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_97, L_98)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)(L_99>>1));
	}

IL_0105:
	{
		int32_t L_100 = V_5;
		int32_t L_101 = V_2;
		if ((((int32_t)L_100) > ((int32_t)L_101)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_102 = V_2;
		V_2 = ((int32_t)(L_102>>1));
	}

IL_0111:
	{
		int32_t L_103 = V_2;
		if ((((int32_t)L_103) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_IrrBytes_m2265104983EE06C9200D894833053A5E56A16AE8_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CondBytes_m763DE088F766791613E349AD10C9CF2483E3F5E4_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PrivateKeySize_m6BDD2E556955013F6ABA0F6FB642169FEEFBB83F_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)(L_2/8)))), ((int32_t)40)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PublicKeySize_mDA36484B72AA2955890910C2487BAE3BCCC10CA7_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, L_2))/8));
	}

IL_0018:
	{
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_4/8)), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))/8))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CipherTextSize_m6FEBB6DC6D9FCC26271BCDCD31E5C1A09B43CDEA_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_DefaultSessionKeySize_m241411BE51582981E74BFD5E79BE3B3A553BF016_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1__ctor_mFAFB75F447EDD47B0D77D93BBE9DB244ED307635_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, int32_t ___0_m, int32_t ___1_n, int32_t ___2_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_p, bool ___4_usePivots, int32_t ___5_defaultKeySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_usePivots;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_0);
		int32_t L_1 = ___1_n;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_1);
		int32_t L_2 = ___2_t;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_2);
		int32_t L_3 = ___0_m;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___3_p;
		il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_4);
		int32_t L_5 = ___5_defaultKeySize;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_5);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 4))&((int32_t)31))))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_8)), 1)))));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)il2cpp_codegen_multiply(L_9, L_10)));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)));
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 7))/8)));
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 7))/8)));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_15&((int32_t)31))))), 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B* L_20 = (Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B*)il2cpp_codegen_object_new(Benes12_tA17C2D5E6DD6010C489E56C421780F6A3BCD1C0B_il2cpp_TypeInfo_var);
		Benes12__ctor_mD277DFEA0C344530E7F2D5A220CE9C4D916A32FC(L_20, L_17, L_18, L_19, NULL);
		il2cpp_codegen_write_instance_field_data<Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), (Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*)L_20);
		goto IL_010a;
	}

IL_00ed:
	{
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239* L_24 = (Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239*)il2cpp_codegen_object_new(Benes13_tE70BE636AA8012AAD8865F7F1BF888E62C276239_il2cpp_TypeInfo_var);
		Benes13__ctor_m3CE1241A07F26383594C28FA7885F83B9E133AAC(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_write_instance_field_data<Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), (Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF*)L_24);
	}

IL_010a:
	{
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), (bool)((!(((uint32_t)((int32_t)(L_25%8))) <= ((uint32_t)0)))? 1 : 0));
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), (bool)((((int32_t)((int32_t)(1<<((int32_t)(L_26&((int32_t)31)))))) > ((int32_t)L_27))? 1 : 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_GeneratePublicKeyFromPrivateKey_m70801CB2A0E2BD98761DE973322F083258770309_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))));
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_4;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))));
		V_3 = L_6;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_7/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))), 4)))));
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), ((int32_t)32))), L_11)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 4))));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_13 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_13, NULL);
		RuntimeObject* L_15 = L_14;
		NullCheck(L_15);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_15, (uint8_t)((int32_t)64));
		RuntimeObject* L_16 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		V_6 = 0;
		goto IL_00bb;
	}

IL_00a3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		int32_t L_22 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = V_6;
		uint32_t L_26;
		L_26 = Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421(L_23, ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 4)))), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint32_t)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00bb:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(1<<((int32_t)(L_29&((int32_t)31))))))))
		{
			goto IL_00a3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_2;
		int32_t L_35;
		L_35 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_30, L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_DecompressPrivateKey_m477E8CF556268569531B0E52C45D888E7D914E53_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_sk;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), L_7)), ((int32_t)32))));
		V_1 = L_8;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_9 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_11, (uint8_t)((int32_t)64));
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_sk;
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_16;
		L_16 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) > ((int32_t)((int32_t)40))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_2 = L_19;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)32))), L_23));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = V_2;
		int32_t L_25 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_30;
		L_30 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)))), L_29, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)L_30);
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_34 = V_2;
		int32_t L_35;
		L_35 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_6 = 0;
		goto IL_00e8;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		int32_t L_37 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_2;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint16_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Utils_StoreGF_m01953FF9B94D6BF58CC3C48DBCE581F78E8535F8(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, 2)), L_41, NULL);
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e8:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)40), L_47, NULL);
	}

IL_0102:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___0_sk;
		NullCheck(L_48);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)40), L_49)))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_50&((int32_t)31))))));
		V_7 = L_51;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_52&((int32_t)31))))));
		V_8 = L_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_54)->max_length)), ((int32_t)32))), L_55)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_56&((int32_t)31))))), 4))));
		V_11 = 0;
		goto IL_0171;
	}

IL_0159:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_7;
		int32_t L_58 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		int32_t L_60 = V_9;
		int32_t L_61 = V_11;
		uint32_t L_62;
		L_62 = Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421(L_59, ((int32_t)il2cpp_codegen_add(L_60, ((int32_t)il2cpp_codegen_multiply(L_61, 4)))), NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint32_t)L_62);
		int32_t L_63 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0171:
	{
		int32_t L_64 = V_11;
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(1<<((int32_t)(L_65&((int32_t)31))))))))
		{
			goto IL_0159;
		}
	}
	{
		bool L_66 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_67;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = V_12;
		int32_t L_72;
		L_72 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_68, L_69, L_70, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_0218;
	}

IL_01a1:
	{
		int32_t L_73 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_74 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_73&((int32_t)31))))));
		V_13 = L_74;
		V_14 = 0;
		goto IL_01d0;
	}

IL_01b8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_75 = V_13;
		int32_t L_76 = V_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_7;
		int32_t L_78 = V_14;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_14;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_80)<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_81)))));
		int32_t L_82 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01d0:
	{
		int32_t L_83 = V_14;
		int32_t L_84 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_83) < ((int32_t)((int32_t)(1<<((int32_t)(L_84&((int32_t)31))))))))
		{
			goto IL_01b8;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_85 = V_13;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_86 = V_13;
		NullCheck(L_86);
		((  void (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_85, 0, ((int32_t)(((RuntimeArray*)L_86)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_15 = 0;
		goto IL_0209;
	}

IL_01f0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_8;
		int32_t L_88 = V_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_13;
		int32_t L_90 = V_15;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		int64_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_92&((int64_t)L_93)))));
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0209:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(1<<((int32_t)(L_96&((int32_t)31))))))))
		{
			goto IL_01f0;
		}
	}

IL_0218:
	{
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_10 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_8;
		int32_t L_101 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_102 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int64_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_99, L_100, ((int64_t)L_101), ((int64_t)((int32_t)(1<<((int32_t)(L_102&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_0;
		int32_t L_105 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_10;
		NullCheck(L_106);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_103, 0, (RuntimeArray*)L_104, ((int32_t)il2cpp_codegen_add(L_105, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_106)->max_length)), NULL);
	}

IL_0257:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_0;
		int32_t L_109;
		L_109 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_110 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_111 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_107, 0, (RuntimeArray*)L_108, ((int32_t)il2cpp_codegen_subtract(L_109, ((int32_t)(L_110/8)))), ((int32_t)(L_111/8)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_0;
		return L_112;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_KemKeypair_mAB1BA98F14EC6009CEB454619DA2D81EDCC132E2_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___2_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)64));
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_3 = ___2_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3, L_4);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), ((int32_t)32))));
		V_2 = L_8;
		V_4 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		V_5 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_10;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_11 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_11, NULL);
		V_7 = L_12;
	}

IL_005d:
	{
		RuntimeObject* L_13 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		NullCheck(L_13);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		RuntimeObject* L_16 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_18);
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
		RuntimeObject* L_19 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_22;
		L_22 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), ((int32_t)32)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_24, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)32))), NULL);
		V_1 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___1_sk;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_30, 0, ((int32_t)32), NULL);
		V_5 = L_31;
		int32_t L_32 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_32);
		V_8 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), ((int32_t)32))), ((int32_t)il2cpp_codegen_multiply(2, L_35))));
		int32_t L_36 = V_9;
		V_3 = L_36;
		V_13 = 0;
		goto IL_00f5;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = V_8;
		int32_t L_38 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t L_40 = V_9;
		int32_t L_41 = V_13;
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_43;
		L_43 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(L_41, 2)))), L_42, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint16_t)L_43);
		int32_t L_44 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f5:
	{
		int32_t L_45 = V_13;
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00d7;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_8;
		int32_t L_48;
		L_48 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if ((((int32_t)L_48) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		V_4 = ((int32_t)40);
		V_14 = 0;
		goto IL_012e;
	}

IL_0116:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___1_sk;
		int32_t L_50 = V_4;
		int32_t L_51 = V_14;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_8;
		int32_t L_53 = V_14;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Utils_StoreGF_m01953FF9B94D6BF58CC3C48DBCE581F78E8535F8(L_49, ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 2)))), L_55, NULL);
		int32_t L_56 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012e:
	{
		int32_t L_57 = V_14;
		int32_t L_58 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_59&((int32_t)31))))));
		V_10 = L_60;
		int32_t L_61 = V_3;
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_62&((int32_t)31))))), 4))));
		V_15 = 0;
		goto IL_0176;
	}

IL_015f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_10;
		int32_t L_64 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		int32_t L_66 = V_3;
		int32_t L_67 = V_15;
		uint32_t L_68;
		L_68 = Utils_Load4_m3836A3007DF5AE14AAA6346F9E8635E5F27A6421(L_65, ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)il2cpp_codegen_multiply(L_67, 4)))), NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		int32_t L_69 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0176:
	{
		int32_t L_70 = V_15;
		int32_t L_71 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(1<<((int32_t)(L_71&((int32_t)31))))))))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_72 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_73 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_72&((int32_t)31))))));
		V_11 = L_73;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ___0_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___1_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = V_6;
		int32_t L_79;
		L_79 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_74, L_75, L_76, L_77, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((int32_t)L_79) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_80 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_80);
		V_12 = L_81;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = V_11;
		int32_t L_84 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int64_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_82, L_83, ((int64_t)L_84), ((int64_t)((int32_t)(1<<((int32_t)(L_85&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___1_sk;
		int32_t L_88 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_12;
		NullCheck(L_89);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_86, 0, (RuntimeArray*)L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_89)->max_length)), NULL);
		int32_t L_90 = V_3;
		int32_t L_91 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)(L_91/8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_2;
		int32_t L_93 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___1_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___1_sk;
		NullCheck(L_95);
		int32_t L_96 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_92, L_93, (RuntimeArray*)L_94, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), ((int32_t)(L_96/8)))), ((int32_t)(L_97/8)), NULL);
		bool L_98 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (L_98)
		{
			goto IL_0224;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___1_sk;
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_99, ((int32_t)32), (uint64_t)((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		return;
	}

IL_0224:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___1_sk;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_6;
		NullCheck(L_101);
		int32_t L_102 = 0;
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_100, ((int32_t)32), (uint64_t)L_103, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Syndrome_m3154906035DA43E56D1C2034114E85D231461485_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_5 = ((int32_t)(L_2%8));
		V_1 = 0;
		goto IL_0026;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_cipher_text;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)0);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = 0;
		goto IL_0156;
	}

IL_0036:
	{
		V_2 = 0;
		goto IL_0042;
	}

IL_003a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int16_t)0);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(L_12/8)))))
		{
			goto IL_003a;
		}
	}
	{
		V_2 = 0;
		goto IL_006d;
	}

IL_0051:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = V_0;
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_pk;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_14/8)), L_15)), L_16))), (int16_t)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_26/8)), 1));
		goto IL_00bc;
	}

IL_008b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_0;
		int32_t L_28 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_5;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int16_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_32&((int32_t)255)))<<((int32_t)(L_33&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_37&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_38))&((int32_t)31)))))))&((int32_t)255)))));
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00bc:
	{
		int32_t L_40 = V_2;
		int32_t L_41 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_41/8)), L_42)))))
		{
			goto IL_008b;
		}
	}

IL_00ce:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int16_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_44/8)))));
		int32_t L_46 = *((int16_t*)L_45);
		int32_t L_47 = V_1;
		*((int16_t*)L_45) = (int16_t)((int16_t)((int32_t)(L_46|(int32_t)((int16_t)((int32_t)(1<<((int32_t)(((int32_t)(L_47%8))&((int32_t)31)))))))));
		V_4 = (uint8_t)0;
		V_2 = 0;
		goto IL_00fe;
	}

IL_00ec:
	{
		uint8_t L_48 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = V_0;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int16_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___2_error_vector;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_48^((int32_t)(uint8_t)((int32_t)((int32_t)L_52&(int32_t)L_56))))));
		int32_t L_57 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fe:
	{
		int32_t L_58 = V_2;
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(L_59/8)))))
		{
			goto IL_00ec;
		}
	}
	{
		uint8_t L_60 = V_4;
		uint8_t L_61 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_60^((int32_t)(uint8_t)((int32_t)((int32_t)L_61>>4))))));
		uint8_t L_62 = V_4;
		uint8_t L_63 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_62^((int32_t)(uint8_t)((int32_t)((int32_t)L_63>>2))))));
		uint8_t L_64 = V_4;
		uint8_t L_65 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_64^((int32_t)(uint8_t)((int32_t)((int32_t)L_65>>1))))));
		uint8_t L_66 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_66&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___0_cipher_text;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		uint8_t* L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_68/8)))));
		int32_t L_70 = *((uint8_t*)L_69);
		uint8_t L_71 = V_4;
		int32_t L_72 = V_1;
		*((int8_t*)L_69) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_70|((int32_t)(uint8_t)((int32_t)((int32_t)L_71<<((int32_t)(((int32_t)(L_72%8))&((int32_t)31)))))))));
		int32_t L_73 = V_3;
		int32_t L_74 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		V_3 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0156:
	{
		int32_t L_76 = V_1;
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_GenerateErrorVector_m079FC7273EADAF2178B9D3BE52D345E0864F2015_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___1_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t V_13 = 0;
	int16_t V_14 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)));
		V_1 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_5;
	}

IL_0026:
	{
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
		if (!L_6)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_7, 4)));
		V_0 = L_8;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_9 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9, L_10);
		V_6 = 0;
		goto IL_0065;
	}

IL_004b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_1;
		int32_t L_12 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_6;
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_16;
		L_16 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, 2)), L_15, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint16_t)L_16);
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		int32_t L_18 = V_6;
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_004b;
		}
	}
	{
		V_5 = 0;
		V_7 = 0;
		goto IL_0098;
	}

IL_0079:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_20 = V_1;
		int32_t L_21 = V_7;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0092;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = V_1;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint16_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)L_31);
	}

IL_0092:
	{
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0098:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_34, 2)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_35 = V_5;
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0079;
		}
	}

IL_00ae:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_00fb;
		}
	}
	{
		goto IL_0026;
	}

IL_00bd:
	{
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_39, 2)));
		V_0 = L_40;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_41 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41, L_42);
		V_8 = 0;
		goto IL_00f1;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		int32_t L_44 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_8;
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_48;
		L_48 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_45, ((int32_t)il2cpp_codegen_multiply(L_46, 2)), L_47, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint16_t)L_48);
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00f1:
	{
		int32_t L_50 = V_8;
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00d7;
		}
	}

IL_00fb:
	{
		V_4 = 0;
		V_9 = 1;
		goto IL_0129;
	}

IL_0103:
	{
		V_10 = 0;
		goto IL_011d;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_2;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = V_2;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_55) == ((uint32_t)L_59))))
		{
			goto IL_0117;
		}
	}
	{
		V_4 = 1;
		goto IL_0123;
	}

IL_0117:
	{
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_011d:
	{
		int32_t L_61 = V_10;
		int32_t L_62 = V_9;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0108;
		}
	}

IL_0123:
	{
		int32_t L_63 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0129:
	{
		int32_t L_64 = V_9;
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_64) >= ((int32_t)L_65)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_66 = V_4;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0103;
		}
	}

IL_0138:
	{
		int32_t L_67 = V_4;
		if (L_67)
		{
			goto IL_0026;
		}
	}
	{
		V_11 = 0;
		goto IL_015a;
	}

IL_0144:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_3;
		int32_t L_69 = V_11;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_2;
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint16_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (uint8_t)((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_73&7))&((int32_t)31)))))));
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_015a:
	{
		int32_t L_75 = V_11;
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0144;
		}
	}
	{
		V_12 = (int16_t)0;
		goto IL_01ba;
	}

IL_0169:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_error_vector;
		int16_t L_78 = V_12;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)0);
		V_13 = 0;
		goto IL_01a9;
	}

IL_0173:
	{
		int16_t L_79 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = V_2;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		uint16_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		uint8_t L_84;
		L_84 = ((  uint8_t (*) (int16_t, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_79, ((int16_t)((int32_t)((int32_t)L_83>>3))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_14 = (int16_t)L_84;
		int16_t L_85 = V_14;
		V_14 = ((int16_t)((int32_t)((int32_t)L_85&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___0_error_vector;
		int16_t L_87 = V_12;
		NullCheck(L_86);
		uint8_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((uint8_t*)L_88);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_3;
		int32_t L_91 = V_13;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int16_t L_94 = V_14;
		*((int8_t*)L_88) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_89|((int32_t)(uint8_t)((int32_t)((int32_t)L_93&(int32_t)L_94))))));
		int32_t L_95 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01a9:
	{
		int32_t L_96 = V_13;
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0173;
		}
	}
	{
		int16_t L_98 = V_12;
		V_12 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, 1)));
	}

IL_01ba:
	{
		int16_t L_99 = V_12;
		int32_t L_100 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(L_100/8)))))
		{
			goto IL_0169;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Encrypt_m25714666E54D6FD5F183F4443C723B66EE3F1F55_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___3_random, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_error_vector;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_1 = ___3_random;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_error_vector;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemEnc_m27BDB82B176C976C99308A8FA6A1B5BF80B38584_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___3_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_pk;
		int32_t L_4;
		L_4 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_3 = L_4;
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_8 = ___3_random;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_9 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_11, (uint8_t)1);
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)));
		RuntimeObject* L_15 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_cipher_text;
		NullCheck(L_17);
		NullCheck(L_15);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_key;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = V_3;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_22);
		uint8_t L_23 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23^((int32_t)255))));
		V_2 = 0;
		goto IL_008b;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_cipher_text;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		uint8_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		int32_t L_27 = *((uint8_t*)L_26);
		uint8_t L_28 = V_1;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_27&(int32_t)L_28)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008b:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_007a;
		}
	}
	{
		V_2 = 0;
		goto IL_00a9;
	}

IL_0098:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_key;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		uint8_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((uint8_t*)L_34);
		uint8_t L_36 = V_1;
		*((int8_t*)L_34) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_35&(int32_t)L_36)));
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a9:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)32))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_39 = V_3;
		return L_39;
	}

IL_00b0:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemDec_m8317F48E0B01D4FB9E082D2C02780D47E1F0998E_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int16_t V_5 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_2/8)))), L_3)));
		V_1 = L_4;
		V_3 = 0;
		bool L_5 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_cipher_text;
		int32_t L_7;
		L_7 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_7;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_cipher_text;
		int32_t L_11;
		L_11 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_5 = (int16_t)((int32_t)(uint8_t)L_11);
		int16_t L_12 = V_5;
		V_5 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		int16_t L_13 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_13>>8)));
		int16_t L_14 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_14&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int16_t L_16 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16&1))));
		V_2 = 0;
		goto IL_0091;
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		int32_t L_18 = V_2;
		int16_t L_19 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_sk;
		int32_t L_21 = V_2;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)40))), L_22)), L_23));
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int16_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_18))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)((~L_19))&(int32_t)L_25))|((int32_t)((int32_t)L_26&(int32_t)L_30))))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0091:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(L_33/8)))))
		{
			goto IL_0068;
		}
	}
	{
		V_2 = 0;
		goto IL_00b5;
	}

IL_00a0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_36 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___1_cipher_text;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_35/8)))), L_36))), (uint8_t)L_40);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b5:
	{
		int32_t L_42 = V_2;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_44 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_tE931D6F7B03821F5626898795B732FC9D3984BF8_il2cpp_TypeInfo_var);
		RuntimeObject* L_45;
		L_45 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_44, NULL);
		DerObjectIdentifier_t44979315B19C7F4898F248CEE1CDFB2AC30B52F7* L_46 = ((NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_t6300F42C548B567A97087F3E4C566350B9A9DF6F_il2cpp_TypeInfo_var))->___IdShake256;
		RuntimeObject* L_47;
		L_47 = DigestUtilities_GetDigest_mC7DB29A87F6A5D29DA99508697860061CD65ECF6(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		NullCheck(L_50);
		NullCheck(L_48);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_48, L_49, 0, ((int32_t)(((RuntimeArray*)L_50)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_key;
		NullCheck(L_52);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_51, 0, ((int32_t)(((RuntimeArray*)L_52)->max_length)));
		bool L_54 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_54)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_55 = V_3;
		V_4 = (uint8_t)((int32_t)(uint8_t)L_55);
		V_2 = 0;
		goto IL_0110;
	}

IL_00fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_key;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		uint8_t* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)));
		int32_t L_59 = *((uint8_t*)L_58);
		uint8_t L_60 = V_4;
		*((int8_t*)L_58) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_59|(int32_t)L_60)));
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0110:
	{
		int32_t L_62 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_key;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_64 = V_3;
		return L_64;
	}

IL_0118:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Decrypt_m99DAC7824F187312941378A07C918A58CA742317_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_62 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_57 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_3 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	uint16_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Il2CppFullySharedGenericStruct V_15 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_15, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	int32_t V_16 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 2)));
		V_2 = L_5;
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		V_3 = L_7;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_4 = L_9;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_5 = L_11;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_12/8)));
		V_7 = L_13;
		V_10 = 0;
		goto IL_0075;
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_7;
		int32_t L_15 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_cipher_text;
		int32_t L_17 = V_10;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_19);
		int32_t L_20 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0075:
	{
		int32_t L_21 = V_10;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_11 = L_23;
		goto IL_0095;
	}

IL_0089:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_7;
		int32_t L_25 = V_11;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)0);
		int32_t L_26 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0095:
	{
		int32_t L_27 = V_11;
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(L_28/8)))))
		{
			goto IL_0089;
		}
	}
	{
		V_12 = 0;
		goto IL_00c3;
	}

IL_00a6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = V_0;
		int32_t L_30 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_sk;
		int32_t L_32 = V_12;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_34;
		L_34 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_32, 2)))), L_33, NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint16_t)L_34);
		int32_t L_35 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c3:
	{
		int32_t L_36 = V_12;
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00a6;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_0;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint16_t)1);
		Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF* L_40 = *(Benes_tA170AE3AB49E980DC7F7DD3922106CF135519BCF**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_41 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___1_sk;
		NullCheck(L_40);
		VirtualActionInvoker2< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_40, L_41, L_42);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_7;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_43, L_44, L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = V_2;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = V_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_51 = V_1;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_49, L_50, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_13 = 0;
		goto IL_0112;
	}

IL_0107:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_error_vector;
		int32_t L_53 = V_13;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)0);
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0112:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(L_56/8)))))
		{
			goto IL_0107;
		}
	}
	{
		V_8 = 0;
		V_14 = 0;
		goto IL_016c;
	}

IL_0126:
	{
		il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_15, L_57, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_58 = V_5;
		int32_t L_59 = V_14;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint16_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		uint16_t L_63;
		L_63 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_62, (void*)(Il2CppFullySharedGenericStruct*)V_15, L_61);
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_63&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___0_error_vector;
		int32_t L_65 = V_14;
		NullCheck(L_64);
		uint8_t* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_65/8)))));
		int32_t L_67 = *((uint8_t*)L_66);
		uint16_t L_68 = V_6;
		int32_t L_69 = V_14;
		*((int8_t*)L_66) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_67|((int32_t)(uint8_t)((int32_t)((int32_t)L_68<<((int32_t)(((int32_t)(L_69%8))&((int32_t)31)))))))));
		int32_t L_70 = V_8;
		uint16_t L_71 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_70, (int32_t)L_71));
		int32_t L_72 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_016c:
	{
		int32_t L_73 = V_14;
		int32_t L_74 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0126;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_75 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_76 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___0_error_vector;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_75, L_76, L_77, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_79 = V_8;
		V_9 = L_79;
		int32_t L_80 = V_9;
		int32_t L_81 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_9 = ((int32_t)(L_80^L_81));
		V_16 = 0;
		goto IL_01a8;
	}

IL_0194:
	{
		int32_t L_82 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = V_2;
		int32_t L_84 = V_16;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint16_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_3;
		int32_t L_88 = V_16;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint16_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_9 = ((int32_t)(L_82|((int32_t)((int32_t)L_86^(int32_t)L_90))));
		int32_t L_91 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_01a8:
	{
		int32_t L_92 = V_16;
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_92) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_93, 2)))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_94 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		int32_t L_95 = V_9;
		V_9 = ((int32_t)(L_95>>((int32_t)15)));
		int32_t L_96 = V_9;
		V_9 = ((int32_t)(L_96&1));
		int32_t L_97 = V_9;
		int32_t L_98 = V_9;
		return ((int32_t)(L_98^1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Min_m79498F0A931CD858AC92C6D78AA3A29A76A8EDDE_gshared (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		uint16_t L_2 = ___0_a;
		return (int32_t)L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___1_b;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_BM_mC650C398FE1B377DE742411E2027D4881BCEA203_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_30 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_39 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	const Il2CppFullySharedGenericStruct L_37 = L_20;
	const Il2CppFullySharedGenericStruct L_63 = L_20;
	const Il2CppFullySharedGenericStruct L_72 = L_20;
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	Il2CppFullySharedGenericStruct V_14 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_14, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_4 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_5 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_6 = L_5;
		V_7 = (uint16_t)1;
		V_10 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_5;
		int32_t L_7 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_6;
		int32_t L_9 = V_10;
		int32_t L_10 = 0;
		V_11 = (uint16_t)L_10;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint16_t)L_10);
		uint16_t L_11 = V_11;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_11);
		int32_t L_12 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_10;
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1)))))
		{
			goto IL_0039;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = V_5;
		int32_t L_17 = 1;
		V_11 = (uint16_t)L_17;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_17);
		uint16_t L_18 = V_11;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint16_t)L_18);
		V_0 = (uint16_t)0;
		goto IL_01d3;
	}

IL_0070:
	{
		V_12 = (uint32_t)0;
		V_13 = 0;
		goto IL_00a3;
	}

IL_0078:
	{
		uint32_t L_19 = V_12;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_14, L_20, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_5;
		int32_t L_22 = V_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = ___1_s;
		uint16_t L_26 = V_0;
		int32_t L_27 = V_13;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, L_27));
		uint16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_31;
		L_31 = ConstrainedFuncInvoker2< uint32_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_30, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_24, L_29);
		V_12 = (uint32_t)((int32_t)((int32_t)L_19^(int32_t)L_31));
		int32_t L_32 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00a3:
	{
		int32_t L_33 = V_13;
		uint16_t L_34 = V_0;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_36;
		L_36 = ((  int32_t (*) (uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_34, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_33) <= ((int32_t)L_36)))
		{
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_14, L_37, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint32_t L_38 = V_12;
		uint16_t L_40;
		L_40 = ConstrainedFuncInvoker1< uint16_t, uint32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_39, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_38);
		V_8 = L_40;
		uint16_t L_41 = V_8;
		V_3 = L_41;
		uint16_t L_42 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, 1)));
		uint16_t L_43 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_43>>((int32_t)15))));
		uint16_t L_44 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_44&1)));
		uint16_t L_45 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, 1)));
		uint16_t L_46 = V_0;
		V_2 = L_46;
		uint16_t L_47 = V_2;
		uint16_t L_48 = V_1;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_48))))));
		uint16_t L_49 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_49>>((int32_t)15))));
		uint16_t L_50 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_50&1)));
		uint16_t L_51 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, 1)));
		uint16_t L_52 = V_2;
		uint16_t L_53 = V_3;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_52&(int32_t)L_53)));
		V_15 = 0;
		goto IL_0118;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = V_4;
		int32_t L_55 = V_15;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = V_5;
		int32_t L_57 = V_15;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint16_t)L_59);
		int32_t L_60 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0118:
	{
		int32_t L_61 = V_15;
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_61) <= ((int32_t)L_62)))
		{
			goto IL_0108;
		}
	}
	{
		il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_14, L_63, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_64 = V_7;
		uint16_t L_65 = V_8;
		uint16_t L_67;
		L_67 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_66, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_64, L_65);
		V_9 = L_67;
		V_16 = 0;
		goto IL_0175;
	}

IL_0142:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_68 = V_5;
		int32_t L_69 = V_16;
		NullCheck(L_68);
		uint16_t* L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)));
		int32_t L_71 = *((uint16_t*)L_70);
		il2cpp_codegen_memcpy(L_72, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_14, L_72, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_73 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_74 = V_6;
		int32_t L_75 = V_16;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		uint16_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint16_t L_79;
		L_79 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_78, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_73, L_77);
		uint16_t L_80 = V_3;
		*((int16_t*)L_70) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_71^((int32_t)(uint16_t)((int32_t)((int32_t)L_79&(int32_t)L_80))))));
		int32_t L_81 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0175:
	{
		int32_t L_82 = V_16;
		int32_t L_83 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_82) <= ((int32_t)L_83)))
		{
			goto IL_0142;
		}
	}
	{
		uint16_t L_84 = V_1;
		uint16_t L_85 = V_2;
		uint16_t L_86 = V_0;
		uint16_t L_87 = V_1;
		uint16_t L_88 = V_2;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_84&(int32_t)((~L_85))))|((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_86, 1)), (int32_t)L_87))&(int32_t)L_88)))));
		int32_t L_89 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_89, 1));
		goto IL_01b7;
	}

IL_0199:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_90 = V_6;
		int32_t L_91 = V_17;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_92 = V_6;
		int32_t L_93 = V_17;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		uint16_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		uint16_t L_96 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_97 = V_4;
		int32_t L_98 = V_17;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		uint16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint16_t L_101 = V_2;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 1))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_95&(int32_t)((~L_96))))|((int32_t)((int32_t)L_100&(int32_t)L_101))))));
		int32_t L_102 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
	}

IL_01b7:
	{
		int32_t L_103 = V_17;
		if ((((int32_t)L_103) >= ((int32_t)0)))
		{
			goto IL_0199;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_104 = V_6;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)0);
		uint16_t L_105 = V_7;
		uint16_t L_106 = V_2;
		uint16_t L_107 = V_8;
		uint16_t L_108 = V_2;
		V_7 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_105&(int32_t)((~L_106))))|((int32_t)((int32_t)L_107&(int32_t)L_108)))));
		uint16_t L_109 = V_0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, 1)));
	}

IL_01d3:
	{
		uint16_t L_110 = V_0;
		int32_t L_111 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_110) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_111)))))
		{
			goto IL_0070;
		}
	}
	{
		V_18 = 0;
		goto IL_01fc;
	}

IL_01e6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_112 = ___0_output;
		int32_t L_113 = V_18;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = V_5;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_116 = V_18;
		NullCheck(L_114);
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract(L_115, L_116));
		uint16_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (uint16_t)L_118);
		int32_t L_119 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_119, 1));
	}

IL_01fc:
	{
		int32_t L_120 = V_18;
		int32_t L_121 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_120) <= ((int32_t)L_121)))
		{
			goto IL_01e6;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Synd_mC83F5E55EA1774FDD4625D12BC74C61DB7884243_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_52 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_61 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	const Il2CppFullySharedGenericStruct L_19 = L_9;
	const Il2CppFullySharedGenericStruct L_42 = L_9;
	const Il2CppFullySharedGenericStruct L_58 = L_9;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	const Il2CppFullySharedGenericStruct L_43 = L_10;
	const Il2CppFullySharedGenericStruct L_49 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_4, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	Il2CppFullySharedGenericStruct V_5 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_5, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	uint16_t V_10 = 0;
	uint16_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t V_13 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___3_r;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint16_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___1_f;
		uint16_t L_7 = V_1;
		uint16_t L_8;
		L_8 = ((  uint16_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_2 = L_8;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_4, L_9, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_5, L_10, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_11 = V_2;
		uint16_t L_13;
		L_13 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_12, (void*)(Il2CppFullySharedGenericStruct*)V_5, L_11);
		uint16_t L_15;
		L_15 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_14, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_13);
		uint16_t L_16 = V_0;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_15&((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_16)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_17 = ___0_output;
		uint16_t L_18 = V_3;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_18);
		V_6 = 1;
		goto IL_0072;
	}

IL_004f:
	{
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_4, L_19, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_20 = V_3;
		uint16_t L_21 = V_1;
		uint16_t L_23;
		L_23 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_22, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_20, L_21);
		V_3 = L_23;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = ___0_output;
		int32_t L_25 = V_6;
		uint16_t L_26 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0072:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_28) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_29)))))
		{
			goto IL_004f;
		}
	}
	{
		V_7 = 1;
		goto IL_0149;
	}

IL_0086:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___3_r;
		int32_t L_31 = V_7;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)(L_31/8));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_7;
		V_8 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_33>>((int32_t)(((int32_t)(L_34%8))&((int32_t)31)))))&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_35 = ___2_L;
		int32_t L_36 = V_7;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_9 = L_38;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_39 = ___1_f;
		uint16_t L_40 = V_9;
		uint16_t L_41;
		L_41 = ((  uint16_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_39, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_10 = L_41;
		il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_4, L_42, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_5, L_43, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_44 = V_10;
		uint16_t L_46;
		L_46 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_45, (void*)(Il2CppFullySharedGenericStruct*)V_5, L_44);
		uint16_t L_48;
		L_48 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_47, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_46);
		V_11 = L_48;
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_4, L_49, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_50 = V_11;
		uint16_t L_51 = V_8;
		uint16_t L_53;
		L_53 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_52, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_50, L_51);
		V_12 = L_53;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = ___0_output;
		NullCheck(L_54);
		uint16_t* L_55 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_56 = *((uint16_t*)L_55);
		uint16_t L_57 = V_12;
		*((int16_t*)L_55) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_56^(int32_t)L_57)));
		V_13 = 1;
		goto IL_0137;
	}

IL_0107:
	{
		il2cpp_codegen_memcpy(L_58, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_4, L_58, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_59 = V_12;
		uint16_t L_60 = V_9;
		uint16_t L_62;
		L_62 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_61, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_59, L_60);
		V_12 = L_62;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_63 = ___0_output;
		int32_t L_64 = V_13;
		NullCheck(L_63);
		uint16_t* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)));
		int32_t L_66 = *((uint16_t*)L_65);
		uint16_t L_67 = V_12;
		*((int16_t*)L_65) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_66^(int32_t)L_67)));
		int32_t L_68 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0137:
	{
		int32_t L_69 = V_13;
		int32_t L_70 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_69) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_70)))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_71 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0149:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0086;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_MovColumns_mD36512DA42EBE0D2D67E53CC46A9D9887702DFFF_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_6 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_7 = L_1;
		V_11 = (uint64_t)((int64_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_12 = L_2;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)32)));
		int32_t L_4 = V_4;
		V_3 = ((int32_t)(L_4/8));
		int32_t L_5 = V_4;
		V_5 = ((int32_t)(L_5%8));
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		V_0 = 0;
		goto IL_009c;
	}

IL_0041:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_12;
		int32_t L_8 = V_1;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = ___0_mat;
		int32_t L_10 = V_4;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_17);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)9))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = 0;
		goto IL_0088;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_12;
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_12;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_12;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))>>((int32_t)(L_26&((int32_t)31)))))|((int32_t)((int32_t)L_30<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_31))&((int32_t)31)))))))));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0088:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_6;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_12;
		uint64_t L_37;
		L_37 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_36, 0, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint64_t)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009c:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)32))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_00c0;
	}

IL_00a3:
	{
		V_0 = 0;
		goto IL_00bb;
	}

IL_00a7:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = V_6;
		int32_t L_41 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = ___0_mat;
		int32_t L_43 = V_4;
		int32_t L_44 = V_0;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_3;
		uint64_t L_48;
		L_48 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_46, L_47, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint64_t)L_48);
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00bb:
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)32))))
		{
			goto IL_00a7;
		}
	}

IL_00c0:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = ___2_pivots;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)0));
		V_0 = 0;
		goto IL_0186;
	}

IL_00cc:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_6;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_8 = (uint64_t)L_55;
		int32_t L_56 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_00e5;
	}

IL_00d8:
	{
		uint64_t L_57 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = V_6;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int64_t L_61 = (int64_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_8 = (uint64_t)((int64_t)((int64_t)L_57|L_61));
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00e5:
	{
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)32))))
		{
			goto IL_00d8;
		}
	}
	{
		uint64_t L_64 = V_8;
		if (L_64)
		{
			goto IL_00f0;
		}
	}
	{
		return (-1);
	}

IL_00f0:
	{
		uint64_t L_65 = V_8;
		int32_t L_66;
		L_66 = ((  int32_t (*) (uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_13 = L_66;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_7;
		int32_t L_68 = V_0;
		int32_t L_69 = V_13;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = ___2_pivots;
		NullCheck(L_70);
		uint64_t* L_71 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_72 = *((int64_t*)L_71);
		uint64_t L_73 = V_11;
		int32_t L_74 = V_13;
		*((int64_t*)L_71) = (int64_t)((int64_t)(L_72|((int64_t)((int64_t)L_73<<((int32_t)(L_74&((int32_t)63)))))));
		int32_t L_75 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0145;
	}

IL_0118:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_76 = V_6;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		int64_t L_79 = (int64_t)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_79>>((int32_t)(L_80&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_81 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_81, ((int64_t)1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = V_6;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		uint64_t* L_84 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)));
		int64_t L_85 = *((int64_t*)L_84);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = V_6;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		int64_t L_89 = (int64_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		uint64_t L_90 = V_10;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^((int64_t)(L_89&(int64_t)L_90))));
		int32_t L_91 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0145:
	{
		int32_t L_92 = V_1;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)32))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_93 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		goto IL_017d;
	}

IL_0150:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_94 = V_6;
		int32_t L_95 = V_1;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		int64_t L_97 = (int64_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_97>>((int32_t)(L_98&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_99 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)0), (int64_t)L_99));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_6;
		int32_t L_101 = V_1;
		NullCheck(L_100);
		uint64_t* L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)));
		int64_t L_103 = *((int64_t*)L_102);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = V_6;
		int32_t L_105 = V_0;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int64_t L_107 = (int64_t)(L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		uint64_t L_108 = V_10;
		*((int64_t*)L_102) = (int64_t)((int64_t)(L_103^((int64_t)(L_107&(int64_t)L_108))));
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_017d:
	{
		int32_t L_110 = V_1;
		if ((((int32_t)L_110) < ((int32_t)((int32_t)32))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_111 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0186:
	{
		int32_t L_112 = V_0;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)32))))
		{
			goto IL_00cc;
		}
	}
	{
		V_1 = 0;
		goto IL_01ea;
	}

IL_0192:
	{
		int32_t L_113 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
		goto IL_01e1;
	}

IL_0198:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = ___1_pi;
		int32_t L_115 = V_4;
		int32_t L_116 = V_1;
		NullCheck(L_114);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_115, L_116));
		uint16_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_119 = ___1_pi;
		int32_t L_120 = V_4;
		int32_t L_121 = V_2;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_120, L_121));
		uint16_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_9 = (uint64_t)((int64_t)((int32_t)((int32_t)L_118^(int32_t)L_123)));
		uint64_t L_124 = V_9;
		int32_t L_125 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_7;
		int32_t L_127 = V_1;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint64_t L_130;
		L_130 = ((  uint64_t (*) (uint16_t, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((uint16_t)((int32_t)(uint16_t)L_125), (uint16_t)((int32_t)(uint16_t)L_129), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_9 = (uint64_t)((int64_t)((int64_t)L_124&(int64_t)L_130));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_131 = ___1_pi;
		int32_t L_132 = V_4;
		int32_t L_133 = V_1;
		NullCheck(L_131);
		uint16_t* L_134 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_132, L_133)))));
		int32_t L_135 = *((uint16_t*)L_134);
		uint64_t L_136 = V_9;
		*((int16_t*)L_134) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_135^((int32_t)(uint16_t)L_136))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_137 = ___1_pi;
		int32_t L_138 = V_4;
		int32_t L_139 = V_2;
		NullCheck(L_137);
		uint16_t* L_140 = ((L_137)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_138, L_139)))));
		int32_t L_141 = *((uint16_t*)L_140);
		uint64_t L_142 = V_9;
		*((int16_t*)L_140) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_141^((int32_t)(uint16_t)L_142))));
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_01e1:
	{
		int32_t L_144 = V_2;
		if ((((int32_t)L_144) < ((int32_t)((int32_t)64))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_145 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_01ea:
	{
		int32_t L_146 = V_1;
		if ((((int32_t)L_146) < ((int32_t)((int32_t)32))))
		{
			goto IL_0192;
		}
	}
	{
		V_0 = 0;
		goto IL_0369;
	}

IL_01f6:
	{
		bool L_147 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_147)
		{
			goto IL_0252;
		}
	}
	{
		V_2 = 0;
		goto IL_0211;
	}

IL_0202:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = V_12;
		int32_t L_149 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_150 = ___0_mat;
		int32_t L_151 = V_0;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = V_3;
		int32_t L_155 = V_2;
		NullCheck(L_153);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_154, L_155));
		uint8_t L_157 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint8_t)L_157);
		int32_t L_158 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0211:
	{
		int32_t L_159 = V_2;
		if ((((int32_t)L_159) < ((int32_t)((int32_t)9))))
		{
			goto IL_0202;
		}
	}
	{
		V_2 = 0;
		goto IL_0242;
	}

IL_021a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = V_12;
		int32_t L_161 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = V_12;
		int32_t L_163 = V_2;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		uint8_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = V_12;
		int32_t L_168 = V_2;
		NullCheck(L_167);
		int32_t L_169 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		uint8_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = V_5;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_165&((int32_t)255)))>>((int32_t)(L_166&((int32_t)31)))))|((int32_t)((int32_t)L_170<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_171))&((int32_t)31)))))))));
		int32_t L_172 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_0242:
	{
		int32_t L_173 = V_2;
		if ((((int32_t)L_173) < ((int32_t)8)))
		{
			goto IL_021a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_174 = V_12;
		uint64_t L_175;
		L_175 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_174, 0, NULL);
		V_8 = L_175;
		goto IL_025d;
	}

IL_0252:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_176 = ___0_mat;
		int32_t L_177 = V_0;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_3;
		uint64_t L_181;
		L_181 = Utils_Load8_m726AE172FB25EC87985BB98AB6B262FFB2B4C908(L_179, L_180, NULL);
		V_8 = L_181;
	}

IL_025d:
	{
		V_1 = 0;
		goto IL_029f;
	}

IL_0261:
	{
		uint64_t L_182 = V_8;
		int32_t L_183 = V_1;
		V_9 = (uint64_t)((int64_t)((uint64_t)L_182>>((int32_t)(L_183&((int32_t)63)))));
		uint64_t L_184 = V_9;
		uint64_t L_185 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_7;
		int32_t L_187 = V_1;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		int32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_9 = (uint64_t)((int64_t)((int64_t)L_184^((int64_t)((uint64_t)L_185>>((int32_t)(L_189&((int32_t)63)))))));
		uint64_t L_190 = V_9;
		V_9 = (uint64_t)((int64_t)((int64_t)L_190&((int64_t)1)));
		uint64_t L_191 = V_8;
		uint64_t L_192 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = V_7;
		int32_t L_194 = V_1;
		NullCheck(L_193);
		int32_t L_195 = L_194;
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_8 = (uint64_t)((int64_t)((int64_t)L_191^((int64_t)((int64_t)L_192<<((int32_t)(L_196&((int32_t)63)))))));
		uint64_t L_197 = V_8;
		uint64_t L_198 = V_9;
		int32_t L_199 = V_1;
		V_8 = (uint64_t)((int64_t)((int64_t)L_197^((int64_t)((int64_t)L_198<<((int32_t)(L_199&((int32_t)63)))))));
		int32_t L_200 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_029f:
	{
		int32_t L_201 = V_1;
		if ((((int32_t)L_201) < ((int32_t)((int32_t)32))))
		{
			goto IL_0261;
		}
	}
	{
		bool L_202 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_202)
		{
			goto IL_035a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_12;
		uint64_t L_204 = V_8;
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_203, 0, L_204, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_205 = ___0_mat;
		int32_t L_206 = V_0;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		int32_t L_209 = V_3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_210 = ___0_mat;
		int32_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		int32_t L_214 = V_3;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 8));
		uint8_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_5;
		int32_t L_218 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = V_12;
		NullCheck(L_219);
		int32_t L_220 = 7;
		uint8_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		int32_t L_222 = V_5;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, 8))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_216&((int32_t)255)))>>((int32_t)(L_217&((int32_t)31)))))<<((int32_t)(L_218&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_221&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_222))&((int32_t)31)))))))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_223 = ___0_mat;
		int32_t L_224 = V_0;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_12;
		NullCheck(L_228);
		int32_t L_229 = 0;
		uint8_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_232 = ___0_mat;
		int32_t L_233 = V_0;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = V_3;
		NullCheck(L_235);
		int32_t L_237 = L_236;
		uint8_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = V_5;
		int32_t L_240 = V_5;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(L_227), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_230&((int32_t)255)))<<((int32_t)(L_231&((int32_t)31)))))|((int32_t)(((int32_t)(((int32_t)((int32_t)L_238&((int32_t)255)))<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_239))&((int32_t)31)))))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_240))&((int32_t)31)))))))));
		V_2 = 7;
		goto IL_0354;
	}

IL_0323:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_241 = ___0_mat;
		int32_t L_242 = V_0;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = V_3;
		int32_t L_246 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = V_12;
		int32_t L_248 = V_2;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		uint8_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = V_12;
		int32_t L_253 = V_2;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_subtract(L_253, 1));
		uint8_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		int32_t L_256 = V_5;
		NullCheck(L_244);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_245, L_246))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_250&((int32_t)255)))<<((int32_t)(L_251&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_255&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_256))&((int32_t)31)))))))));
		int32_t L_257 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_257, 1));
	}

IL_0354:
	{
		int32_t L_258 = V_2;
		if ((((int32_t)L_258) >= ((int32_t)1)))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0365;
	}

IL_035a:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_259 = ___0_mat;
		int32_t L_260 = V_0;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = V_3;
		uint64_t L_264 = V_8;
		Utils_Store8_m58F8AAD9F9CF6A597FFAF02FEA24312D4DA63C08(L_262, L_263, L_264, NULL);
	}

IL_0365:
	{
		int32_t L_265 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0369:
	{
		int32_t L_266 = V_0;
		int32_t L_267 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_266) < ((int32_t)L_267)))
		{
			goto IL_01f6;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Ctz_m17B0AAD3E7B6F23C16C6288162D96A98717E597F_gshared (uint64_t ___0_input, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = (uint64_t)((int64_t)72340172838076673LL);
		V_1 = (uint64_t)((int64_t)0);
		uint64_t L_0 = ___0_input;
		V_2 = ((~L_0));
		V_5 = 0;
		goto IL_0029;
	}

IL_0015:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_2;
		int32_t L_3 = V_5;
		V_0 = (uint64_t)((int64_t)((int64_t)L_1&((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))));
		uint64_t L_4 = V_1;
		uint64_t L_5 = V_0;
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)L_5));
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0029:
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_8 = V_1;
		V_3 = (uint64_t)((int64_t)((int64_t)L_8&((int64_t)578721382704613384LL)));
		uint64_t L_9 = V_3;
		uint64_t L_10 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_9|((int64_t)((uint64_t)L_10>>1))));
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_11|((int64_t)((uint64_t)L_12>>2))));
		uint64_t L_13 = V_1;
		V_4 = L_13;
		uint64_t L_14 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_14>>8));
		uint64_t L_15 = V_4;
		uint64_t L_16 = V_1;
		uint64_t L_17 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)((int64_t)L_16&(int64_t)L_17))));
		V_6 = 2;
		goto IL_0072;
	}

IL_005a:
	{
		uint64_t L_18 = V_3;
		uint64_t L_19 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_18&((int64_t)((uint64_t)L_19>>8))));
		uint64_t L_20 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_20>>8));
		uint64_t L_21 = V_4;
		uint64_t L_22 = V_1;
		uint64_t L_23 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)((int64_t)L_22&(int64_t)L_23))));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0072:
	{
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) < ((int32_t)8)))
		{
			goto IL_005a;
		}
	}
	{
		uint64_t L_26 = V_4;
		return ((int32_t)(((int32_t)L_26)&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CmceEngine_1_SameMask64_m3748B2A1061F547317FFC07EB3476C575B91A7B3_gshared (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_x;
		uint16_t L_1 = ___1_y;
		return (uint64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)((int32_t)L_0^(int32_t)L_1))), ((int64_t)1)))>>((int32_t)63)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CmceEngine_1_SameMask32_m4B003824EC9AF5BFC2CB5DCE8568BBE3791A4608_gshared (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_x;
		int16_t L_1 = ___1_y;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_0^(int32_t)L_1)), 1))>>((int32_t)31))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Layer_m367659F3244AD1D921B48F7E41BB1B75594646AF_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_s;
		V_2 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
		V_3 = 0;
		V_0 = 0;
		goto IL_0074;
	}

IL_000d:
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_0011:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_p;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_p;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		uint16_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = ((int32_t)((int32_t)L_5^(int32_t)L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_output;
		int32_t L_13 = ___2_ptrIndex;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14>>3))));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_3;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_16>>((int32_t)(((int32_t)(L_17&7))&((int32_t)31)))))&1));
		int32_t L_18 = V_5;
		V_5 = ((-L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		V_4 = ((int32_t)(L_19&L_20));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = ___0_p;
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		uint16_t* L_24 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))));
		int32_t L_25 = *((uint16_t*)L_24);
		int32_t L_26 = V_4;
		*((int16_t*)L_24) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_25^((int32_t)(uint16_t)L_26))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_27 = ___0_p;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_27);
		uint16_t* L_31 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_28, L_29)), L_30)))));
		int32_t L_32 = *((uint16_t*)L_31);
		int32_t L_33 = V_4;
		*((int16_t*)L_31) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_32^((int32_t)(uint16_t)L_33))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_006a:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply(L_39, 2))));
	}

IL_0074:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = ___4_n;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_ControlBitsFromPermutation_mA00438EFBBA06A64B9A733ECF48B0B0F4C2FF217_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_0))));
		V_0 = L_1;
		int64_t L_2 = ___3_n;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_2));
		V_1 = L_3;
	}

IL_0013:
	{
		V_3 = 0;
		goto IL_001f;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_output;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_3;
		int64_t L_8 = ___2_w;
		int64_t L_9 = ___3_n;
		if ((((int64_t)((int64_t)L_7)) < ((int64_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_8)), ((int64_t)1))), L_9))/((int64_t)2))), ((int64_t)7)))/((int64_t)8))))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_output;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___1_pi;
		int64_t L_12 = ___2_w;
		int64_t L_13 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_10, ((int64_t)0), ((int64_t)1), L_11, 0, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_3 = 0;
		goto IL_0051;
	}

IL_0048:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint16_t)((int32_t)(uint16_t)L_17));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0051:
	{
		int32_t L_19 = V_3;
		int64_t L_20 = ___3_n;
		if ((((int64_t)((int64_t)L_19)) < ((int64_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 0;
		V_3 = 0;
		goto IL_0076;
	}

IL_005d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_output;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		int64_t L_25 = ___3_n;
		((  void (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)))(L_21, L_22, L_23, L_24, ((int32_t)L_25), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_26 = V_4;
		int64_t L_27 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((int32_t)L_27)>>4))));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0076:
	{
		int32_t L_29 = V_3;
		int64_t L_30 = ___2_w;
		if ((((int64_t)((int64_t)L_29)) < ((int64_t)L_30)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_31 = ___2_w;
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_31, ((int64_t)2))));
		goto IL_009c;
	}

IL_0083:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___0_output;
		int32_t L_34 = V_4;
		int32_t L_35 = V_3;
		int64_t L_36 = ___3_n;
		((  void (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)))(L_32, L_33, L_34, L_35, ((int32_t)L_36), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_37 = V_4;
		int64_t L_38 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(((int32_t)L_38)>>4))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_009c:
	{
		int32_t L_40 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = (uint16_t)0;
		V_3 = 0;
		goto IL_00b6;
	}

IL_00a6:
	{
		uint16_t L_41 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_42 = ___1_pi;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_46 = V_1;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_41|((int32_t)(uint16_t)((int32_t)((int32_t)L_45^(int32_t)L_49))))));
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00b6:
	{
		int32_t L_51 = V_3;
		int64_t L_52 = ___3_n;
		if ((((int64_t)((int64_t)L_51)) < ((int64_t)L_52)))
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_53 = V_2;
		if (L_53)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t CmceEngine_1_GetQShort_m8A884987AA3427B93DBBD5191E0DCDA093191721_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_q_index;
		V_0 = ((int32_t)(L_0/2));
		int32_t L_1 = ___1_q_index;
		if (((int32_t)(L_1%2)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_temp;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int16_t)L_5);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_temp;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((int16_t)((int64_t)(((int64_t)(((int64_t)L_9)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_CBRecursion_m9FF6E841E890CEA35E5870E1E57C59FA992F5FA0_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_4 = NULL;
	uint16_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int64_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		int64_t L_0 = ___5_w;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int64_t L_2 = ___1_pos;
		NullCheck(L_1);
		uint8_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_2>>3))))));
		int32_t L_4 = *((uint8_t*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___7_temp;
		int32_t L_6 = ___4_qIndex;
		int16_t L_7;
		L_7 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_8 = ___1_pos;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^((int32_t)(uint8_t)((int32_t)((int32_t)L_7<<((int32_t)(((int32_t)((int64_t)(L_8&((int64_t)7))))&((int32_t)31)))))))));
		return;
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___3_pi;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___7_temp;
		int64_t L_11 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___3_pi;
		int64_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)L_13);
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = ___3_pi;
		int64_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int64_t)(L_17^((int64_t)1))));
		uint16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_11)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_15^1))<<((int32_t)16)))|(int32_t)L_19)));
		int64_t L_20 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)1)));
	}

IL_004c:
	{
		int64_t L_21 = V_0;
		int64_t L_22 = ___6_n;
		if ((((int64_t)L_21) < ((int64_t)L_22)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0094;
	}

IL_0053:
	{
		V_0 = ((int64_t)0);
		goto IL_008f;
	}

IL_0058:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___7_temp;
		int32_t L_24 = ___4_qIndex;
		int64_t L_25 = V_0;
		int16_t L_26;
		L_26 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_23, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_24), L_25))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_5 = (uint16_t)((int32_t)(uint16_t)L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___7_temp;
		int32_t L_28 = ___4_qIndex;
		int64_t L_29 = V_0;
		int16_t L_30;
		L_30 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_27, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_28), ((int64_t)(L_29^((int64_t)1)))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_6 = (uint16_t)((int32_t)(uint16_t)L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___7_temp;
		int64_t L_32 = V_0;
		uint16_t L_33 = V_5;
		uint16_t L_34 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_32)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_33^1))<<((int32_t)16)))|(int32_t)L_34)));
		int64_t L_35 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_35, ((int64_t)1)));
	}

IL_008f:
	{
		int64_t L_36 = V_0;
		int64_t L_37 = ___6_n;
		if ((((int64_t)L_36) < ((int64_t)L_37)))
		{
			goto IL_0058;
		}
	}

IL_0094:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___7_temp;
		int64_t L_39 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_38, 0, ((int32_t)L_39), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_00d4;
	}

IL_00a4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___7_temp;
		int64_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)L_41);
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_7 = ((int32_t)(L_43&((int32_t)65535)));
		int32_t L_44 = V_7;
		V_8 = L_44;
		int64_t L_45 = V_0;
		int32_t L_46 = V_8;
		if ((((int64_t)L_45) >= ((int64_t)((int64_t)L_46))))
		{
			goto IL_00bf;
		}
	}
	{
		int64_t L_47 = V_0;
		V_8 = ((int32_t)L_47);
	}

IL_00bf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ___7_temp;
		int64_t L_49 = ___6_n;
		int64_t L_50 = V_0;
		int32_t L_51 = V_7;
		int32_t L_52 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_49, L_50)))), (int32_t)((int32_t)(((int32_t)(L_51<<((int32_t)16)))|L_52)));
		int64_t L_53 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_53, ((int64_t)1)));
	}

IL_00d4:
	{
		int64_t L_54 = V_0;
		int64_t L_55 = ___6_n;
		if ((((int64_t)L_54) < ((int64_t)L_55)))
		{
			goto IL_00a4;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_00f4;
	}

IL_00de:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___7_temp;
		int64_t L_57 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ___7_temp;
		int64_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)L_59);
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int64_t L_62 = V_0;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_57)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_61<<((int32_t)16)))))|L_62))));
		int64_t L_63 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_63, ((int64_t)1)));
	}

IL_00f4:
	{
		int64_t L_64 = V_0;
		int64_t L_65 = ___6_n;
		if ((((int64_t)L_64) < ((int64_t)L_65)))
		{
			goto IL_00de;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = ___7_temp;
		int64_t L_67 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_66, 0, ((int32_t)L_67), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0127;
	}

IL_0109:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___7_temp;
		int64_t L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = ___7_temp;
		int64_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)L_71);
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___7_temp;
		int64_t L_75 = ___6_n;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)((int64_t)il2cpp_codegen_add(L_75, L_76)));
		int32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_69)), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_73<<((int32_t)16))), ((int32_t)(L_78>>((int32_t)16))))));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_79, ((int64_t)1)));
	}

IL_0127:
	{
		int64_t L_80 = V_0;
		int64_t L_81 = ___6_n;
		if ((((int64_t)L_80) < ((int64_t)L_81)))
		{
			goto IL_0109;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = ___7_temp;
		int64_t L_83 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_82, 0, ((int32_t)L_83), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_84 = ___5_w;
		if ((((int64_t)L_84) > ((int64_t)((int64_t)((int32_t)10)))))
		{
			goto IL_0265;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0170;
	}

IL_0146:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___7_temp;
		int64_t L_86 = ___6_n;
		int64_t L_87 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___7_temp;
		int64_t L_89 = V_0;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)L_89);
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ___7_temp;
		int64_t L_93 = ___6_n;
		int64_t L_94 = V_0;
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)((int64_t)il2cpp_codegen_add(L_93, L_94)));
		int32_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_86, L_87)))), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_91&((int32_t)65535)))<<((int32_t)10)))|((int32_t)(L_96&((int32_t)1023))))));
		int64_t L_97 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_97, ((int64_t)1)));
	}

IL_0170:
	{
		int64_t L_98 = V_0;
		int64_t L_99 = ___6_n;
		if ((((int64_t)L_98) < ((int64_t)L_99)))
		{
			goto IL_0146;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_0231;
	}

IL_017d:
	{
		V_0 = ((int64_t)0);
		goto IL_01a0;
	}

IL_0182:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___7_temp;
		int64_t L_101 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = ___7_temp;
		int64_t L_103 = ___6_n;
		int64_t L_104 = V_0;
		NullCheck(L_102);
		int32_t L_105 = ((int32_t)((int64_t)il2cpp_codegen_add(L_103, L_104)));
		int32_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int64_t L_107 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_101)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(L_106&((int32_t)-1024)))<<6))))|L_107))));
		int64_t L_108 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)1)));
	}

IL_01a0:
	{
		int64_t L_109 = V_0;
		int64_t L_110 = ___6_n;
		if ((((int64_t)L_109) < ((int64_t)L_110)))
		{
			goto IL_0182;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___7_temp;
		int64_t L_112 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_111, 0, ((int32_t)L_112), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_01d0;
	}

IL_01b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ___7_temp;
		int64_t L_114 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = ___7_temp;
		int64_t L_116 = V_0;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)L_116);
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = ___7_temp;
		int64_t L_120 = ___6_n;
		int64_t L_121 = V_0;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)((int64_t)il2cpp_codegen_add(L_120, L_121)));
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_114)), (int32_t)((int32_t)(((int32_t)(L_118<<((int32_t)20)))|L_123)));
		int64_t L_124 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)1)));
	}

IL_01d0:
	{
		int64_t L_125 = V_0;
		int64_t L_126 = ___6_n;
		if ((((int64_t)L_125) < ((int64_t)L_126)))
		{
			goto IL_01b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = ___7_temp;
		int64_t L_128 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_127, 0, ((int32_t)L_128), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0227;
	}

IL_01e5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ___7_temp;
		int64_t L_130 = V_0;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)L_130);
		int32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_9 = ((int32_t)(L_132&((int32_t)1048575)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___7_temp;
		int64_t L_134 = V_0;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)L_134);
		int32_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___7_temp;
		int64_t L_138 = ___6_n;
		int64_t L_139 = V_0;
		NullCheck(L_137);
		int32_t L_140 = ((int32_t)((int64_t)il2cpp_codegen_add(L_138, L_139)));
		int32_t L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_10 = ((int32_t)(((int32_t)(L_136&((int32_t)1047552)))|((int32_t)(L_141&((int32_t)1023)))));
		int32_t L_142 = V_9;
		int32_t L_143 = V_10;
		if ((((int32_t)L_142) >= ((int32_t)L_143)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_144 = V_9;
		V_10 = L_144;
	}

IL_0218:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = ___7_temp;
		int64_t L_146 = ___6_n;
		int64_t L_147 = V_0;
		int32_t L_148 = V_10;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_146, L_147)))), (int32_t)L_148);
		int64_t L_149 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_149, ((int64_t)1)));
	}

IL_0227:
	{
		int64_t L_150 = V_0;
		int64_t L_151 = ___6_n;
		if ((((int64_t)L_150) < ((int64_t)L_151)))
		{
			goto IL_01e5;
		}
	}
	{
		int64_t L_152 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_152, ((int64_t)1)));
	}

IL_0231:
	{
		int64_t L_153 = V_1;
		int64_t L_154 = ___5_w;
		if ((((int64_t)L_153) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_154, ((int64_t)1))))))
		{
			goto IL_017d;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_025b;
	}

IL_0241:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = ___7_temp;
		int64_t L_156 = ___6_n;
		int64_t L_157 = V_0;
		NullCheck(L_155);
		int32_t* L_158 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_156, L_157))))));
		int32_t L_159 = *((int32_t*)L_158);
		*((int32_t*)L_158) = (int32_t)((int32_t)(L_159&((int32_t)1023)));
		int64_t L_160 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_160, ((int64_t)1)));
	}

IL_025b:
	{
		int64_t L_161 = V_0;
		int64_t L_162 = ___6_n;
		if ((((int64_t)L_161) < ((int64_t)L_162)))
		{
			goto IL_0241;
		}
	}
	{
		goto IL_03eb;
	}

IL_0265:
	{
		V_0 = ((int64_t)0);
		goto IL_028e;
	}

IL_026a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = ___7_temp;
		int64_t L_164 = ___6_n;
		int64_t L_165 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___7_temp;
		int64_t L_167 = V_0;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)L_167);
		int32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = ___7_temp;
		int64_t L_171 = ___6_n;
		int64_t L_172 = V_0;
		NullCheck(L_170);
		int32_t L_173 = ((int32_t)((int64_t)il2cpp_codegen_add(L_171, L_172)));
		int32_t L_174 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_164, L_165)))), (int32_t)((int32_t)(((int32_t)(L_169<<((int32_t)16)))|((int32_t)(L_174&((int32_t)65535))))));
		int64_t L_175 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)1)));
	}

IL_028e:
	{
		int64_t L_176 = V_0;
		int64_t L_177 = ___6_n;
		if ((((int64_t)L_176) < ((int64_t)L_177)))
		{
			goto IL_026a;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_03bc;
	}

IL_029b:
	{
		V_0 = ((int64_t)0);
		goto IL_02bc;
	}

IL_02a0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___7_temp;
		int64_t L_179 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___7_temp;
		int64_t L_181 = ___6_n;
		int64_t L_182 = V_0;
		NullCheck(L_180);
		int32_t L_183 = ((int32_t)((int64_t)il2cpp_codegen_add(L_181, L_182)));
		int32_t L_184 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		int64_t L_185 = V_0;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_179)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_184&((int32_t)-65536)))))|L_185))));
		int64_t L_186 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_186, ((int64_t)1)));
	}

IL_02bc:
	{
		int64_t L_187 = V_0;
		int64_t L_188 = ___6_n;
		if ((((int64_t)L_187) < ((int64_t)L_188)))
		{
			goto IL_02a0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___7_temp;
		int64_t L_190 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_189, 0, ((int32_t)L_190), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_02f2;
	}

IL_02d1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = ___7_temp;
		int64_t L_192 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ___7_temp;
		int64_t L_194 = V_0;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)L_194);
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ___7_temp;
		int64_t L_198 = ___6_n;
		int64_t L_199 = V_0;
		NullCheck(L_197);
		int32_t L_200 = ((int32_t)((int64_t)il2cpp_codegen_add(L_198, L_199)));
		int32_t L_201 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_192)), (int32_t)((int32_t)(((int32_t)(L_196<<((int32_t)16)))|((int32_t)(L_201&((int32_t)65535))))));
		int64_t L_202 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)1)));
	}

IL_02f2:
	{
		int64_t L_203 = V_0;
		int64_t L_204 = ___6_n;
		if ((((int64_t)L_203) < ((int64_t)L_204)))
		{
			goto IL_02d1;
		}
	}
	{
		int64_t L_205 = V_1;
		int64_t L_206 = ___5_w;
		if ((((int64_t)L_205) >= ((int64_t)((int64_t)il2cpp_codegen_subtract(L_206, ((int64_t)2))))))
		{
			goto IL_036b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0328;
	}

IL_0304:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = ___7_temp;
		int64_t L_208 = ___6_n;
		int64_t L_209 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = ___7_temp;
		int64_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = ((int32_t)L_211);
		int32_t L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_214 = ___7_temp;
		int64_t L_215 = ___6_n;
		int64_t L_216 = V_0;
		NullCheck(L_214);
		int32_t L_217 = ((int32_t)((int64_t)il2cpp_codegen_add(L_215, L_216)));
		int32_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_208, L_209)))), (int32_t)((int32_t)(((int32_t)(L_213&((int32_t)-65536)))|((int32_t)(L_218>>((int32_t)16))))));
		int64_t L_219 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)1)));
	}

IL_0328:
	{
		int64_t L_220 = V_0;
		int64_t L_221 = ___6_n;
		if ((((int64_t)L_220) < ((int64_t)L_221)))
		{
			goto IL_0304;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = ___7_temp;
		int64_t L_223 = ___6_n;
		int64_t L_224 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_222, ((int32_t)L_223), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_224, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0366;
	}

IL_0342:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = ___7_temp;
		int64_t L_226 = ___6_n;
		int64_t L_227 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ___7_temp;
		int64_t L_229 = ___6_n;
		int64_t L_230 = V_0;
		NullCheck(L_228);
		int32_t L_231 = ((int32_t)((int64_t)il2cpp_codegen_add(L_229, L_230)));
		int32_t L_232 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ___7_temp;
		int64_t L_234 = V_0;
		NullCheck(L_233);
		int32_t L_235 = ((int32_t)L_234);
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_226, L_227)))), (int32_t)((int32_t)(((int32_t)(L_232<<((int32_t)16)))|((int32_t)(L_236&((int32_t)65535))))));
		int64_t L_237 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_237, ((int64_t)1)));
	}

IL_0366:
	{
		int64_t L_238 = V_0;
		int64_t L_239 = ___6_n;
		if ((((int64_t)L_238) < ((int64_t)L_239)))
		{
			goto IL_0342;
		}
	}

IL_036b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ___7_temp;
		int64_t L_241 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_240, 0, ((int32_t)L_241), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_03b2;
	}

IL_037b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_242 = ___7_temp;
		int64_t L_243 = ___6_n;
		int64_t L_244 = V_0;
		NullCheck(L_242);
		int32_t L_245 = ((int32_t)((int64_t)il2cpp_codegen_add(L_243, L_244)));
		int32_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = ___7_temp;
		int64_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = ((int32_t)L_248);
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_11 = ((int32_t)(((int32_t)(L_246&((int32_t)-65536)))|((int32_t)(L_250&((int32_t)65535)))));
		int32_t L_251 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ___7_temp;
		int64_t L_253 = ___6_n;
		int64_t L_254 = V_0;
		NullCheck(L_252);
		int32_t L_255 = ((int32_t)((int64_t)il2cpp_codegen_add(L_253, L_254)));
		int32_t L_256 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		if ((((int32_t)L_251) >= ((int32_t)L_256)))
		{
			goto IL_03ad;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ___7_temp;
		int64_t L_258 = ___6_n;
		int64_t L_259 = V_0;
		int32_t L_260 = V_11;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_258, L_259)))), (int32_t)L_260);
	}

IL_03ad:
	{
		int64_t L_261 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_261, ((int64_t)1)));
	}

IL_03b2:
	{
		int64_t L_262 = V_0;
		int64_t L_263 = ___6_n;
		if ((((int64_t)L_262) < ((int64_t)L_263)))
		{
			goto IL_037b;
		}
	}
	{
		int64_t L_264 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_264, ((int64_t)1)));
	}

IL_03bc:
	{
		int64_t L_265 = V_1;
		int64_t L_266 = ___5_w;
		if ((((int64_t)L_265) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_266, ((int64_t)1))))))
		{
			goto IL_029b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_03e6;
	}

IL_03cc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = ___7_temp;
		int64_t L_268 = ___6_n;
		int64_t L_269 = V_0;
		NullCheck(L_267);
		int32_t* L_270 = ((L_267)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_268, L_269))))));
		int32_t L_271 = *((int32_t*)L_270);
		*((int32_t*)L_270) = (int32_t)((int32_t)(L_271&((int32_t)65535)));
		int64_t L_272 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_272, ((int64_t)1)));
	}

IL_03e6:
	{
		int64_t L_273 = V_0;
		int64_t L_274 = ___6_n;
		if ((((int64_t)L_273) < ((int64_t)L_274)))
		{
			goto IL_03cc;
		}
	}

IL_03eb:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_275 = ___3_pi;
		if (!L_275)
		{
			goto IL_040f;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0408;
	}

IL_03f3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ___7_temp;
		int64_t L_277 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_278 = ___3_pi;
		int64_t L_279 = V_0;
		NullCheck(L_278);
		int32_t L_280 = ((int32_t)L_279);
		uint16_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int64_t L_282 = V_0;
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_277)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_281<<((int32_t)16)))), L_282))));
		int64_t L_283 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_283, ((int64_t)1)));
	}

IL_0408:
	{
		int64_t L_284 = V_0;
		int64_t L_285 = ___6_n;
		if ((((int64_t)L_284) < ((int64_t)L_285)))
		{
			goto IL_03f3;
		}
	}
	{
		goto IL_0437;
	}

IL_040f:
	{
		V_0 = ((int64_t)0);
		goto IL_0432;
	}

IL_0414:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_286 = ___7_temp;
		int64_t L_287 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ___7_temp;
		int32_t L_289 = ___4_qIndex;
		int64_t L_290 = V_0;
		int16_t L_291;
		L_291 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_288, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_289), L_290))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_292 = V_0;
		NullCheck(L_286);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_287)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_291<<((int32_t)16)))), L_292))));
		int64_t L_293 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_293, ((int64_t)1)));
	}

IL_0432:
	{
		int64_t L_294 = V_0;
		int64_t L_295 = ___6_n;
		if ((((int64_t)L_294) < ((int64_t)L_295)))
		{
			goto IL_0414;
		}
	}

IL_0437:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ___7_temp;
		int64_t L_297 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_296, 0, ((int32_t)L_297), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_2 = ((int64_t)0);
		goto IL_04be;
	}

IL_0447:
	{
		int64_t L_298 = V_2;
		V_12 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_298));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = ___7_temp;
		int64_t L_300 = ___6_n;
		int64_t L_301 = V_12;
		NullCheck(L_299);
		int32_t L_302 = ((int32_t)((int64_t)il2cpp_codegen_add(L_300, L_301)));
		int32_t L_303 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_13 = ((int32_t)(L_303&1));
		int64_t L_304 = V_12;
		int32_t L_305 = V_13;
		V_14 = ((int32_t)((int64_t)il2cpp_codegen_add(L_304, ((int64_t)L_305))));
		int32_t L_306 = V_14;
		V_15 = ((int32_t)(L_306^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_307 = ___0_output;
		int64_t L_308 = ___1_pos;
		NullCheck(L_307);
		uint8_t* L_309 = ((L_307)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_308>>3))))));
		int32_t L_310 = *((uint8_t*)L_309);
		int32_t L_311 = V_13;
		int64_t L_312 = ___1_pos;
		*((int8_t*)L_309) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_310^((int32_t)(uint8_t)((int32_t)(L_311<<((int32_t)(((int32_t)((int64_t)(L_312&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_313 = ___1_pos;
		int64_t L_314 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_313, L_314));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = ___7_temp;
		int64_t L_316 = ___6_n;
		int64_t L_317 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = ___7_temp;
		int64_t L_319 = V_12;
		NullCheck(L_318);
		int32_t L_320 = ((int32_t)L_319);
		int32_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		int32_t L_322 = V_14;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_316, L_317)))), (int32_t)((int32_t)(((int32_t)(L_321<<((int32_t)16)))|L_322)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = ___7_temp;
		int64_t L_324 = ___6_n;
		int64_t L_325 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = ___7_temp;
		int64_t L_327 = V_12;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)((int64_t)il2cpp_codegen_add(L_327, ((int64_t)1))));
		int32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		int32_t L_330 = V_15;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_324, L_325)), ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_329<<((int32_t)16)))|L_330)));
		int64_t L_331 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_331, ((int64_t)1)));
	}

IL_04be:
	{
		int64_t L_332 = V_2;
		int64_t L_333 = ___6_n;
		if ((((int64_t)L_332) < ((int64_t)((int64_t)(L_333/((int64_t)2))))))
		{
			goto IL_0447;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_334 = ___7_temp;
		int64_t L_335 = ___6_n;
		int64_t L_336 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_334, ((int32_t)L_335), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_336, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_337 = ___1_pos;
		int64_t L_338 = ___5_w;
		int64_t L_339 = ___2_step;
		int64_t L_340 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_337, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_338)), ((int64_t)3))), L_339)), ((int64_t)(L_340/((int64_t)2)))))));
		V_3 = ((int64_t)0);
		goto IL_0575;
	}

IL_04f2:
	{
		int64_t L_341 = V_3;
		V_16 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_341));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = ___7_temp;
		int64_t L_343 = ___6_n;
		int64_t L_344 = V_16;
		NullCheck(L_342);
		int32_t L_345 = ((int32_t)((int64_t)il2cpp_codegen_add(L_343, L_344)));
		int32_t L_346 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		V_17 = ((int32_t)(L_346&1));
		int64_t L_347 = V_16;
		int32_t L_348 = V_17;
		V_18 = ((int32_t)((int64_t)il2cpp_codegen_add(L_347, ((int64_t)L_348))));
		int32_t L_349 = V_18;
		V_19 = ((int32_t)(L_349^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_350 = ___0_output;
		int64_t L_351 = ___1_pos;
		NullCheck(L_350);
		uint8_t* L_352 = ((L_350)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_351>>3))))));
		int32_t L_353 = *((uint8_t*)L_352);
		int32_t L_354 = V_17;
		int64_t L_355 = ___1_pos;
		*((int8_t*)L_352) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_353^((int32_t)(uint8_t)((int32_t)(L_354<<((int32_t)(((int32_t)((int64_t)(L_355&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_356 = ___1_pos;
		int64_t L_357 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_356, L_357));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = ___7_temp;
		int64_t L_359 = V_16;
		int32_t L_360 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ___7_temp;
		int64_t L_362 = ___6_n;
		int64_t L_363 = V_16;
		NullCheck(L_361);
		int32_t L_364 = ((int32_t)((int64_t)il2cpp_codegen_add(L_362, L_363)));
		int32_t L_365 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_359)), (int32_t)((int32_t)(((int32_t)(L_360<<((int32_t)16)))|((int32_t)(L_365&((int32_t)65535))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = ___7_temp;
		int64_t L_367 = V_16;
		int32_t L_368 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ___7_temp;
		int64_t L_370 = ___6_n;
		int64_t L_371 = V_16;
		NullCheck(L_369);
		int32_t L_372 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_370, L_371)), ((int64_t)1))));
		int32_t L_373 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		NullCheck(L_366);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_367, ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_368<<((int32_t)16)))|((int32_t)(L_373&((int32_t)65535))))));
		int64_t L_374 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_374, ((int64_t)1)));
	}

IL_0575:
	{
		int64_t L_375 = V_3;
		int64_t L_376 = ___6_n;
		if ((((int64_t)L_375) < ((int64_t)((int64_t)(L_376/((int64_t)2))))))
		{
			goto IL_04f2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ___7_temp;
		int64_t L_378 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_377, 0, ((int32_t)L_378), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_379 = ___1_pos;
		int64_t L_380 = ___5_w;
		int64_t L_381 = ___2_step;
		int64_t L_382 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_subtract(L_379, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_380)), ((int64_t)2))), L_381)), ((int64_t)(L_382/((int64_t)2)))))));
		int64_t L_383 = ___6_n;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_384 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)L_383), 4)));
		V_4 = L_384;
		V_1 = ((int64_t)0);
		goto IL_05df;
	}

IL_05b0:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_385 = V_4;
		int64_t L_386 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = ___7_temp;
		int64_t L_388 = V_1;
		NullCheck(L_387);
		int32_t L_389 = ((int32_t)L_388);
		int32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_multiply(L_386, ((int64_t)2))))), (int16_t)((int16_t)L_390));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_391 = V_4;
		int64_t L_392 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ___7_temp;
		int64_t L_394 = V_1;
		NullCheck(L_393);
		int32_t L_395 = ((int32_t)L_394);
		int32_t L_396 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		NullCheck(L_391);
		(L_391)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_392, ((int64_t)2))), ((int64_t)1))))), (int16_t)((int16_t)((int64_t)(((int64_t)(((int64_t)L_396)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16)))));
		int64_t L_397 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_397, ((int64_t)1)));
	}

IL_05df:
	{
		int64_t L_398 = V_1;
		int64_t L_399 = ___6_n;
		if ((((int64_t)L_398) < ((int64_t)((int64_t)il2cpp_codegen_multiply(L_399, ((int64_t)2))))))
		{
			goto IL_05b0;
		}
	}
	{
		V_2 = ((int64_t)0);
		goto IL_0626;
	}

IL_05ec:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_400 = V_4;
		int64_t L_401 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = ___7_temp;
		int64_t L_403 = V_2;
		NullCheck(L_402);
		int32_t L_404 = ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_403)));
		int32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		NullCheck(L_400);
		(L_400)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_401)), (int16_t)((int16_t)((int32_t)(((int32_t)(L_405&((int32_t)65535)))>>1))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_406 = V_4;
		int64_t L_407 = V_2;
		int64_t L_408 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ___7_temp;
		int64_t L_410 = V_2;
		NullCheck(L_409);
		int32_t L_411 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_410)), ((int64_t)1))));
		int32_t L_412 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_407, ((int64_t)(L_408/((int64_t)2))))))), (int16_t)((int16_t)((int32_t)(((int32_t)(L_412&((int32_t)65535)))>>1))));
		int64_t L_413 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_413, ((int64_t)1)));
	}

IL_0626:
	{
		int64_t L_414 = V_2;
		int64_t L_415 = ___6_n;
		if ((((int64_t)L_414) < ((int64_t)((int64_t)(L_415/((int64_t)2))))))
		{
			goto IL_05ec;
		}
	}
	{
		V_1 = ((int64_t)0);
		goto IL_065d;
	}

IL_0633:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ___7_temp;
		int64_t L_417 = ___6_n;
		int64_t L_418 = ___6_n;
		int64_t L_419 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_420 = V_4;
		int64_t L_421 = V_1;
		NullCheck(L_420);
		int32_t L_422 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_421, ((int64_t)2))), ((int64_t)1))));
		int16_t L_423 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_424 = V_4;
		int64_t L_425 = V_1;
		NullCheck(L_424);
		int32_t L_426 = ((int32_t)((int64_t)il2cpp_codegen_multiply(L_425, ((int64_t)2))));
		int16_t L_427 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		NullCheck(L_416);
		(L_416)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_417, ((int64_t)(L_418/((int64_t)4))))), L_419)))), (int32_t)((int32_t)(((int32_t)((int32_t)L_423<<((int32_t)16)))|(int32_t)L_427)));
		int64_t L_428 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_428, ((int64_t)1)));
	}

IL_065d:
	{
		int64_t L_429 = V_1;
		int64_t L_430 = ___6_n;
		if ((((int64_t)L_429) < ((int64_t)((int64_t)(L_430/((int64_t)2))))))
		{
			goto IL_0633;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_431 = ___0_output;
		int64_t L_432 = ___1_pos;
		int64_t L_433 = ___2_step;
		int64_t L_434 = ___6_n;
		int64_t L_435 = ___6_n;
		int64_t L_436 = ___5_w;
		int64_t L_437 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = ___7_temp;
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_431, L_432, ((int64_t)il2cpp_codegen_multiply(L_433, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)il2cpp_codegen_multiply(((int32_t)((int64_t)il2cpp_codegen_add(L_434, ((int64_t)(L_435/((int64_t)4)))))), 2)), ((int64_t)il2cpp_codegen_subtract(L_436, ((int64_t)1))), ((int64_t)(L_437/((int64_t)2))), L_438, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_439 = ___0_output;
		int64_t L_440 = ___1_pos;
		int64_t L_441 = ___2_step;
		int64_t L_442 = ___2_step;
		int64_t L_443 = ___6_n;
		int64_t L_444 = ___6_n;
		int64_t L_445 = ___6_n;
		int64_t L_446 = ___5_w;
		int64_t L_447 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ___7_temp;
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_439, ((int64_t)il2cpp_codegen_add(L_440, L_441)), ((int64_t)il2cpp_codegen_multiply(L_442, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_443, ((int64_t)(L_444/((int64_t)4))))), ((int64_t)2))), ((int64_t)(L_445/((int64_t)2)))))), ((int64_t)il2cpp_codegen_subtract(L_446, ((int64_t)1))), ((int64_t)(L_447/((int64_t)2))), L_448, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_PKGen_m9C4CBD4A29250237DBB377687DA346E7C7E9BF8E_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_229 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_68 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	const Il2CppFullySharedGenericStruct L_220 = L_68;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_8, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	uint8_t V_14 = 0x0;
	int32_t V_15 = 0;
	uint8_t V_16 = 0x0;
	int32_t V_17 = 0;
	uint8_t V_18 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_19 = NULL;
	uint8_t V_20 = 0x0;
	int32_t V_21 = 0;
	uint8_t V_22 = 0x0;
	int32_t V_23 = 0;
	uint8_t V_24 = 0x0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_30 = NULL;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	int32_t V_33 = 0;
	uint64_t V_34 = 0;
	int32_t V_35 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = V_0;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)1);
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_sk;
		int32_t L_7 = V_1;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_9;
		L_9 = Utils_LoadGF_mFB5E1261EBD63ECDB67DE4E2BFF3B3E848CEB942(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), L_8, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint16_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_13&((int32_t)31))))));
		V_4 = L_14;
		V_1 = 0;
		goto IL_0065;
	}

IL_0053:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = V_4;
		int32_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_perm;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_20)<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_21)))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(1<<((int32_t)(L_24&((int32_t)31))))))))
		{
			goto IL_0053;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_25 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_26 = V_4;
		NullCheck(L_26);
		((  void (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_25, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = 1;
		goto IL_009b;
	}

IL_0083:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = V_4;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		int64_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31 = V_4;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int64_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint64_t)((int64_t)(L_30>>((int32_t)31)))) == ((uint64_t)((int64_t)(L_34>>((int32_t)31)))))))
		{
			goto IL_0097;
		}
	}
	{
		return (-1);
	}

IL_0097:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009b:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(1<<((int32_t)(L_37&((int32_t)31))))))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_39 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_5 = L_39;
		V_1 = 0;
		goto IL_00cf;
	}

IL_00ba:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_40 = ___3_pi;
		int32_t L_41 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = V_4;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int64_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_45&((int64_t)L_46)))));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cf:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(1<<((int32_t)(L_49&((int32_t)31))))))))
		{
			goto IL_00ba;
		}
	}
	{
		V_1 = 0;
		goto IL_00f8;
	}

IL_00e1:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_5;
		int32_t L_51 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = ___3_pi;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		uint16_t L_57;
		L_57 = Utils_Bitrev_m36DA6A03B52348762665DCBE4625071A10940E2C(L_55, L_56, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint16_t)L_57);
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00f8:
	{
		int32_t L_59 = V_1;
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_61 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_62 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_6 = L_62;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_63 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_64 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_65 = V_5;
		((  void (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_63, L_64, L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = 0;
		goto IL_013e;
	}

IL_011d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = V_6;
		int32_t L_67 = V_1;
		il2cpp_codegen_memcpy(L_68, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_8, L_68, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_69 = V_6;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint16_t L_74;
		L_74 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_73, (void*)(Il2CppFullySharedGenericStruct*)V_8, L_72);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint16_t)L_74);
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_013e:
	{
		int32_t L_76 = V_1;
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_78 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_79 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_78);
		V_7 = L_79;
		V_1 = 0;
		goto IL_016d;
	}

IL_0158:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_80 = V_7;
		int32_t L_81 = V_1;
		int32_t L_82 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_82/8)));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_83);
		int32_t L_84 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_016d:
	{
		int32_t L_85 = V_1;
		int32_t L_86 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_0158;
		}
	}
	{
		V_1 = 0;
		goto IL_0370;
	}

IL_017d:
	{
		V_2 = 0;
		goto IL_032e;
	}

IL_0184:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_6;
		int32_t L_88 = V_2;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint16_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_91 = V_6;
		int32_t L_92 = V_2;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 2));
		uint16_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_95 = V_6;
		int32_t L_96 = V_2;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 4));
		uint16_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_99 = V_6;
		int32_t L_100 = V_2;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 6));
		uint16_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_9 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_90)|((int64_t)(((int64_t)(uint64_t)L_94)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_98)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_102)<<((int32_t)48)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_103 = V_6;
		int32_t L_104 = V_2;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		uint16_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_107 = V_6;
		int32_t L_108 = V_2;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 3));
		uint16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_111 = V_6;
		int32_t L_112 = V_2;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 5));
		uint16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_115 = V_6;
		int32_t L_116 = V_2;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 7));
		uint16_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_10 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_106)|((int64_t)(((int64_t)(uint64_t)L_110)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_114)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_118)<<((int32_t)48)))));
		Bits_BitPermuteStep2_m635AC109033719E92C7EAD83721C5F2F881E60FD_inline((&V_10), (&V_9), (uint64_t)((int64_t)71777214294589695LL), 8, NULL);
		uint64_t L_119 = V_9;
		uint64_t L_120;
		L_120 = Interleave_Transpose_m80411D9875FDD3547D6D81DCEB7F3F94B045742B(L_119, NULL);
		V_9 = L_120;
		uint64_t L_121 = V_10;
		uint64_t L_122;
		L_122 = Interleave_Transpose_m80411D9875FDD3547D6D81DCEB7F3F94B045742B(L_121, NULL);
		V_10 = L_122;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_123 = V_7;
		int32_t L_124 = V_1;
		int32_t L_125 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_123);
		int32_t L_126 = ((int32_t)il2cpp_codegen_multiply(L_124, L_125));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_2;
		uint64_t L_129 = V_9;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_128/8))), (uint8_t)((int32_t)(uint8_t)L_129));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_130 = V_7;
		int32_t L_131 = V_1;
		int32_t L_132 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_130);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_131, L_132)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = V_2;
		uint64_t L_136 = V_9;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_135/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_136>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_137 = V_7;
		int32_t L_138 = V_1;
		int32_t L_139 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_137);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_138, L_139)), 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_2;
		uint64_t L_143 = V_9;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_142/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_143>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_144 = V_7;
		int32_t L_145 = V_1;
		int32_t L_146 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_144);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_145, L_146)), 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t L_149 = V_2;
		uint64_t L_150 = V_9;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_149/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_150>>((int32_t)24)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_151 = V_7;
		int32_t L_152 = V_1;
		int32_t L_153 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_151);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_152, L_153)), 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		int32_t L_156 = V_2;
		uint64_t L_157 = V_9;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_156/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_157>>((int32_t)32)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_158 = V_7;
		int32_t L_159 = V_1;
		int32_t L_160 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_158);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_159, L_160)), 5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = V_2;
		uint64_t L_164 = V_9;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_163/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_164>>((int32_t)40)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_165 = V_7;
		int32_t L_166 = V_1;
		int32_t L_167 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_165);
		int32_t L_168 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_166, L_167)), 6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		int32_t L_170 = V_2;
		uint64_t L_171 = V_9;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_170/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_171>>((int32_t)48)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_172 = V_7;
		int32_t L_173 = V_1;
		int32_t L_174 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_172);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_173, L_174)), 7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		int32_t L_177 = V_2;
		uint64_t L_178 = V_9;
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_177/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_178>>((int32_t)56)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_179 = V_7;
		int32_t L_180 = V_1;
		int32_t L_181 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_179);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_180, L_181)), 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		int32_t L_184 = V_2;
		uint64_t L_185 = V_10;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_184/8))), (uint8_t)((int32_t)(uint8_t)L_185));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_186 = V_7;
		int32_t L_187 = V_1;
		int32_t L_188 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_186);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_187, L_188)), ((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = V_2;
		uint64_t L_192 = V_10;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_191/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_192>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_193 = V_7;
		int32_t L_194 = V_1;
		int32_t L_195 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_193);
		int32_t L_196 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_194, L_195)), ((int32_t)10)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_197 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		int32_t L_198 = V_2;
		uint64_t L_199 = V_10;
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_198/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_199>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_200 = V_7;
		int32_t L_201 = V_1;
		int32_t L_202 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_200);
		int32_t L_203 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_201, L_202)), ((int32_t)11)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = V_2;
		uint64_t L_206 = V_10;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_205/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_206>>((int32_t)24)))));
		int32_t L_207 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_207) <= ((int32_t)((int32_t)12))))
		{
			goto IL_032a;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_208 = V_7;
		int32_t L_209 = V_1;
		int32_t L_210 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_208);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_209, L_210)), ((int32_t)12)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_212 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t L_213 = V_2;
		uint64_t L_214 = V_10;
		NullCheck(L_212);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_213/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_214>>((int32_t)32)))));
	}

IL_032a:
	{
		int32_t L_215 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_215, 8));
	}

IL_032e:
	{
		int32_t L_216 = V_2;
		int32_t L_217 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_216) < ((int32_t)L_217)))
		{
			goto IL_0184;
		}
	}
	{
		V_2 = 0;
		goto IL_0363;
	}

IL_033e:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_218 = V_6;
		int32_t L_219 = V_2;
		il2cpp_codegen_memcpy(L_220, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_8, L_220, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_221 = V_6;
		int32_t L_222 = V_2;
		NullCheck(L_221);
		int32_t L_223 = L_222;
		uint16_t L_224 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_225 = V_5;
		int32_t L_226 = V_2;
		NullCheck(L_225);
		int32_t L_227 = L_226;
		uint16_t L_228 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		uint16_t L_230;
		L_230 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_229, (void*)(Il2CppFullySharedGenericStruct*)V_8, L_224, L_228);
		NullCheck(L_218);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(L_219), (uint16_t)L_230);
		int32_t L_231 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_231, 1));
	}

IL_0363:
	{
		int32_t L_232 = V_2;
		int32_t L_233 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_232) < ((int32_t)L_233)))
		{
			goto IL_033e;
		}
	}
	{
		int32_t L_234 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_234, 1));
	}

IL_0370:
	{
		int32_t L_235 = V_1;
		int32_t L_236 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_017d;
		}
	}
	{
		V_11 = 0;
		goto IL_05bc;
	}

IL_0384:
	{
		int32_t L_237 = V_11;
		V_1 = ((int32_t)(L_237>>3));
		int32_t L_238 = V_11;
		V_2 = ((int32_t)(L_238&7));
		bool L_239 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_239)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_240 = V_11;
		int32_t L_241 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((!(((uint32_t)L_240) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_241, ((int32_t)32)))))))
		{
			goto IL_03b3;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_242 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_243 = ___3_pi;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_244 = ___4_pivots;
		int32_t L_245;
		L_245 = ((  int32_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_242, L_243, L_244, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_245)
		{
			goto IL_03b3;
		}
	}
	{
		return (-1);
	}

IL_03b3:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_246 = V_7;
		int32_t L_247 = V_11;
		NullCheck(L_246);
		int32_t L_248 = L_247;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_249 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_12 = L_249;
		int32_t L_250 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_250, 1));
		goto IL_04a7;
	}

IL_03c4:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_251 = V_7;
		int32_t L_252 = V_3;
		NullCheck(L_251);
		int32_t L_253 = L_252;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_254 = (L_251)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		V_13 = L_254;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_255 = V_12;
		int32_t L_256 = V_1;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		uint8_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_259 = V_13;
		int32_t L_260 = V_1;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		uint8_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_258^(int32_t)L_262)));
		uint8_t L_263 = V_14;
		int32_t L_264 = V_2;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_263>>((int32_t)(L_264&((int32_t)31))))));
		uint8_t L_265 = V_14;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_265&1)));
		V_15 = 0;
		uint8_t L_266 = V_14;
		V_16 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_266))));
		int32_t L_267 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_267/8)), 4));
		goto IL_046c;
	}

IL_03fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_268 = V_12;
		int32_t L_269 = V_15;
		NullCheck(L_268);
		uint8_t* L_270 = ((L_268)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_269)));
		int32_t L_271 = *((uint8_t*)L_270);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_272 = V_13;
		int32_t L_273 = V_15;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		uint8_t L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		uint8_t L_276 = V_16;
		*((int8_t*)L_270) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_271^((int32_t)(uint8_t)((int32_t)((int32_t)L_275&(int32_t)L_276))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_277 = V_12;
		int32_t L_278 = V_15;
		NullCheck(L_277);
		uint8_t* L_279 = ((L_277)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_278, 1)))));
		int32_t L_280 = *((uint8_t*)L_279);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_281 = V_13;
		int32_t L_282 = V_15;
		NullCheck(L_281);
		int32_t L_283 = ((int32_t)il2cpp_codegen_add(L_282, 1));
		uint8_t L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		uint8_t L_285 = V_16;
		*((int8_t*)L_279) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_280^((int32_t)(uint8_t)((int32_t)((int32_t)L_284&(int32_t)L_285))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_286 = V_12;
		int32_t L_287 = V_15;
		NullCheck(L_286);
		uint8_t* L_288 = ((L_286)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_287, 2)))));
		int32_t L_289 = *((uint8_t*)L_288);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_290 = V_13;
		int32_t L_291 = V_15;
		NullCheck(L_290);
		int32_t L_292 = ((int32_t)il2cpp_codegen_add(L_291, 2));
		uint8_t L_293 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		uint8_t L_294 = V_16;
		*((int8_t*)L_288) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_289^((int32_t)(uint8_t)((int32_t)((int32_t)L_293&(int32_t)L_294))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_295 = V_12;
		int32_t L_296 = V_15;
		NullCheck(L_295);
		uint8_t* L_297 = ((L_295)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_296, 3)))));
		int32_t L_298 = *((uint8_t*)L_297);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_299 = V_13;
		int32_t L_300 = V_15;
		NullCheck(L_299);
		int32_t L_301 = ((int32_t)il2cpp_codegen_add(L_300, 3));
		uint8_t L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		uint8_t L_303 = V_16;
		*((int8_t*)L_297) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_298^((int32_t)(uint8_t)((int32_t)((int32_t)L_302&(int32_t)L_303))))));
		int32_t L_304 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_304, 4));
	}

IL_046c:
	{
		int32_t L_305 = V_15;
		int32_t L_306 = V_17;
		if ((((int32_t)L_305) <= ((int32_t)L_306)))
		{
			goto IL_03fe;
		}
	}
	{
		uint8_t L_307 = V_14;
		V_18 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_307))));
		goto IL_0497;
	}

IL_047a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_308 = V_12;
		int32_t L_309 = V_15;
		NullCheck(L_308);
		uint8_t* L_310 = ((L_308)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_309)));
		int32_t L_311 = *((uint8_t*)L_310);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = V_13;
		int32_t L_313 = V_15;
		NullCheck(L_312);
		int32_t L_314 = L_313;
		uint8_t L_315 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		uint8_t L_316 = V_18;
		*((int8_t*)L_310) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_311^((int32_t)(uint8_t)((int32_t)((int32_t)L_315&(int32_t)L_316))))));
		int32_t L_317 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_0497:
	{
		int32_t L_318 = V_15;
		int32_t L_319 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_318) < ((int32_t)((int32_t)(L_319/8)))))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_320 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_320, 1));
	}

IL_04a7:
	{
		int32_t L_321 = V_3;
		int32_t L_322 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_321) < ((int32_t)L_322)))
		{
			goto IL_03c4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_323 = V_12;
		int32_t L_324 = V_1;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		uint8_t L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_2;
		if (((int32_t)(((int32_t)((int32_t)L_326>>((int32_t)(L_327&((int32_t)31)))))&1)))
		{
			goto IL_04c2;
		}
	}
	{
		return (-1);
	}

IL_04c2:
	{
		V_3 = 0;
		goto IL_05aa;
	}

IL_04c9:
	{
		int32_t L_328 = V_3;
		int32_t L_329 = V_11;
		if ((((int32_t)L_328) == ((int32_t)L_329)))
		{
			goto IL_05a6;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_330 = V_7;
		int32_t L_331 = V_3;
		NullCheck(L_330);
		int32_t L_332 = L_331;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_19 = L_333;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_334 = V_19;
		int32_t L_335 = V_1;
		NullCheck(L_334);
		int32_t L_336 = L_335;
		uint8_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		int32_t L_338 = V_2;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_337>>((int32_t)(L_338&((int32_t)31))))));
		uint8_t L_339 = V_20;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_339&1)));
		V_21 = 0;
		uint8_t L_340 = V_20;
		V_22 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_340))));
		int32_t L_341 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_23 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_341/8)), 4));
		goto IL_056f;
	}

IL_0501:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_342 = V_19;
		int32_t L_343 = V_21;
		NullCheck(L_342);
		uint8_t* L_344 = ((L_342)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_343)));
		int32_t L_345 = *((uint8_t*)L_344);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_346 = V_12;
		int32_t L_347 = V_21;
		NullCheck(L_346);
		int32_t L_348 = L_347;
		uint8_t L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		uint8_t L_350 = V_22;
		*((int8_t*)L_344) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_345^((int32_t)(uint8_t)((int32_t)((int32_t)L_349&(int32_t)L_350))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_351 = V_19;
		int32_t L_352 = V_21;
		NullCheck(L_351);
		uint8_t* L_353 = ((L_351)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_352, 1)))));
		int32_t L_354 = *((uint8_t*)L_353);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_355 = V_12;
		int32_t L_356 = V_21;
		NullCheck(L_355);
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, 1));
		uint8_t L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		uint8_t L_359 = V_22;
		*((int8_t*)L_353) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_354^((int32_t)(uint8_t)((int32_t)((int32_t)L_358&(int32_t)L_359))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_360 = V_19;
		int32_t L_361 = V_21;
		NullCheck(L_360);
		uint8_t* L_362 = ((L_360)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_361, 2)))));
		int32_t L_363 = *((uint8_t*)L_362);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_364 = V_12;
		int32_t L_365 = V_21;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, 2));
		uint8_t L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		uint8_t L_368 = V_22;
		*((int8_t*)L_362) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_363^((int32_t)(uint8_t)((int32_t)((int32_t)L_367&(int32_t)L_368))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_369 = V_19;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		uint8_t* L_371 = ((L_369)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_370, 3)))));
		int32_t L_372 = *((uint8_t*)L_371);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_373 = V_12;
		int32_t L_374 = V_21;
		NullCheck(L_373);
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 3));
		uint8_t L_376 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		uint8_t L_377 = V_22;
		*((int8_t*)L_371) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_372^((int32_t)(uint8_t)((int32_t)((int32_t)L_376&(int32_t)L_377))))));
		int32_t L_378 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_378, 4));
	}

IL_056f:
	{
		int32_t L_379 = V_21;
		int32_t L_380 = V_23;
		if ((((int32_t)L_379) <= ((int32_t)L_380)))
		{
			goto IL_0501;
		}
	}
	{
		uint8_t L_381 = V_20;
		V_24 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_381))));
		goto IL_059a;
	}

IL_057d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_382 = V_19;
		int32_t L_383 = V_21;
		NullCheck(L_382);
		uint8_t* L_384 = ((L_382)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_383)));
		int32_t L_385 = *((uint8_t*)L_384);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_386 = V_12;
		int32_t L_387 = V_21;
		NullCheck(L_386);
		int32_t L_388 = L_387;
		uint8_t L_389 = (L_386)->GetAt(static_cast<il2cpp_array_size_t>(L_388));
		uint8_t L_390 = V_24;
		*((int8_t*)L_384) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_385^((int32_t)(uint8_t)((int32_t)((int32_t)L_389&(int32_t)L_390))))));
		int32_t L_391 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_391, 1));
	}

IL_059a:
	{
		int32_t L_392 = V_21;
		int32_t L_393 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_392) < ((int32_t)((int32_t)(L_393/8)))))
		{
			goto IL_057d;
		}
	}

IL_05a6:
	{
		int32_t L_394 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_394, 1));
	}

IL_05aa:
	{
		int32_t L_395 = V_3;
		int32_t L_396 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_395) < ((int32_t)L_396)))
		{
			goto IL_04c9;
		}
	}
	{
		int32_t L_397 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_397, 1));
	}

IL_05bc:
	{
		int32_t L_398 = V_11;
		int32_t L_399 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_398) < ((int32_t)L_399)))
		{
			goto IL_0384;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_400 = ___0_pk;
		if (!L_400)
		{
			goto IL_072a;
		}
	}
	{
		bool L_401 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_401)
		{
			goto IL_06ee;
		}
	}
	{
		int32_t L_402 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_25 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_402, 1))/8));
		int32_t L_403 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_26 = ((int32_t)(L_403/8));
		V_27 = 0;
		int32_t L_404 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_28 = ((int32_t)(L_404%8));
		int32_t L_405 = V_28;
		if (L_405)
		{
			goto IL_0635;
		}
	}
	{
		int32_t L_406 = V_26;
		int32_t L_407 = V_25;
		V_29 = ((int32_t)il2cpp_codegen_subtract(L_406, L_407));
		V_1 = 0;
		goto IL_0627;
	}

IL_060c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_408 = V_7;
		int32_t L_409 = V_1;
		NullCheck(L_408);
		int32_t L_410 = L_409;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		int32_t L_412 = V_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_413 = ___0_pk;
		int32_t L_414 = V_27;
		int32_t L_415 = V_29;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_411, L_412, (RuntimeArray*)L_413, L_414, L_415, NULL);
		int32_t L_416 = V_27;
		int32_t L_417 = V_29;
		V_27 = ((int32_t)il2cpp_codegen_add(L_416, L_417));
		int32_t L_418 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_418, 1));
	}

IL_0627:
	{
		int32_t L_419 = V_1;
		int32_t L_420 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_419) < ((int32_t)L_420)))
		{
			goto IL_060c;
		}
	}
	{
		goto IL_072a;
	}

IL_0635:
	{
		V_1 = 0;
		goto IL_06e0;
	}

IL_063c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_421 = V_7;
		int32_t L_422 = V_1;
		NullCheck(L_421);
		int32_t L_423 = L_422;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		V_30 = L_424;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_425 = V_30;
		int32_t L_426 = V_25;
		uint64_t L_427;
		L_427 = Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF(L_425, L_426, NULL);
		V_31 = L_427;
		int32_t L_428 = V_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_428, 8));
		goto IL_0688;
	}

IL_0654:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_429 = V_30;
		int32_t L_430 = V_2;
		uint64_t L_431;
		L_431 = Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF(L_429, L_430, NULL);
		V_32 = L_431;
		uint64_t L_432 = V_31;
		int32_t L_433 = V_28;
		uint64_t L_434 = V_32;
		int32_t L_435 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_436 = ___0_pk;
		int32_t L_437 = V_27;
		Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10((uint64_t)((int64_t)(((int64_t)((uint64_t)L_432>>((int32_t)(L_433&((int32_t)63)))))|((int64_t)((int64_t)L_434<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_435))&((int32_t)63))))))), L_436, L_437, NULL);
		int32_t L_438 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_438, 8));
		uint64_t L_439 = V_32;
		V_31 = L_439;
		int32_t L_440 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_440, 8));
	}

IL_0688:
	{
		int32_t L_441 = V_2;
		int32_t L_442 = V_26;
		if ((((int32_t)L_441) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_442, 8)))))
		{
			goto IL_0654;
		}
	}
	{
		int32_t L_443 = V_26;
		int32_t L_444 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_443, L_444));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_445 = V_30;
		int32_t L_446 = V_2;
		int32_t L_447 = V_33;
		uint64_t L_448;
		L_448 = Pack_LE_To_UInt64_Low_m4625199858C4FF58A114E7FA22395C767C2FC5D7(L_445, L_446, L_447, NULL);
		V_34 = L_448;
		uint64_t L_449 = V_31;
		int32_t L_450 = V_28;
		uint64_t L_451 = V_34;
		int32_t L_452 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_453 = ___0_pk;
		int32_t L_454 = V_27;
		Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10((uint64_t)((int64_t)(((int64_t)((uint64_t)L_449>>((int32_t)(L_450&((int32_t)63)))))|((int64_t)((int64_t)L_451<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_452))&((int32_t)63))))))), L_453, L_454, NULL);
		int32_t L_455 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_455, 8));
		uint64_t L_456 = V_34;
		int32_t L_457 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_458 = ___0_pk;
		int32_t L_459 = V_27;
		int32_t L_460 = V_33;
		Pack_UInt64_To_LE_Low_m64CEBDE12D2106C0EBE76BF649FFC419C3C186FA((uint64_t)((int64_t)((uint64_t)L_456>>((int32_t)(L_457&((int32_t)63))))), L_458, L_459, L_460, NULL);
		int32_t L_461 = V_27;
		int32_t L_462 = V_33;
		V_27 = ((int32_t)il2cpp_codegen_add(L_461, L_462));
		int32_t L_463 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_463, 1));
	}

IL_06e0:
	{
		int32_t L_464 = V_1;
		int32_t L_465 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_464) < ((int32_t)L_465)))
		{
			goto IL_063c;
		}
	}
	{
		goto IL_072a;
	}

IL_06ee:
	{
		int32_t L_466 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_467 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_35 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_466, L_467)), 7))/8));
		V_1 = 0;
		goto IL_0721;
	}

IL_0705:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_468 = V_7;
		int32_t L_469 = V_1;
		NullCheck(L_468);
		int32_t L_470 = L_469;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_471 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		int32_t L_472 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_473 = ___0_pk;
		int32_t L_474 = V_35;
		int32_t L_475 = V_1;
		int32_t L_476 = V_35;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_471, ((int32_t)(L_472/8)), (RuntimeArray*)L_473, ((int32_t)il2cpp_codegen_multiply(L_474, L_475)), L_476, NULL);
		int32_t L_477 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_477, 1));
	}

IL_0721:
	{
		int32_t L_478 = V_1;
		int32_t L_479 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_478) < ((int32_t)L_479)))
		{
			goto IL_0705;
		}
	}

IL_072a:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CmceEngine_1_Eval_mE49AF1D93EDD914D0E5C008D09E2A3F61B2A70D7_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_2, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_f;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0036;
	}

IL_0014:
	{
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		uint16_t L_6 = V_0;
		uint16_t L_7 = ___1_a;
		uint16_t L_9;
		L_9 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_8, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_6, L_7);
		V_0 = L_9;
		uint16_t L_10 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___0_f;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_10^(int32_t)L_14)));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0036:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Root_m81C9ACAB98A55238EFE0A08685184B7D7E9D3978_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_output;
		int32_t L_1 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___1_f;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = ((  uint16_t (*) (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint16_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0015:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_GenerateIrrPoly_mFD7869AF965A294B88E37821FDAB609FE1DEDAB3_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_52 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_74 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_84 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_123 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_140 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_171 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	const Il2CppFullySharedGenericStruct L_62 = L_22;
	const Il2CppFullySharedGenericStruct L_76 = L_22;
	const Il2CppFullySharedGenericStruct L_115 = L_22;
	const Il2CppFullySharedGenericStruct L_131 = L_22;
	const Il2CppFullySharedGenericStruct L_162 = L_22;
	const Il2CppFullySharedGenericStruct L_39 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	memset(V_3, 0, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
	int32_t V_4 = 0;
	uint16_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	int32_t V_12 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_1 = (UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)SZArrayNew(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_2 = V_0;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_3);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_4);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)1);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_8 = V_0;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_10);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___0_field;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_16, 2)), 1)));
		V_1 = L_17;
		V_2 = 2;
		goto IL_00ca;
	}

IL_0055:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_20);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_21);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_22, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)(L_30>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		ConstrainedActionInvoker5< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_34, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_23, L_24, L_28, L_32, L_33);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_35 = V_0;
		int32_t L_36 = V_2;
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_37);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_38);
		il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_39, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		int32_t L_40 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_42 = V_0;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_46 = V_0;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = ___0_field;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_1;
		ConstrainedActionInvoker6< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_52, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_40, L_41, L_45, L_49, L_50, L_51);
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 2));
	}

IL_00ca:
	{
		int32_t L_54 = V_2;
		int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_56 = V_2;
		int32_t L_57 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0113;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_58 = V_0;
		int32_t L_59 = V_2;
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_61 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_60);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_61);
		il2cpp_codegen_memcpy(L_62, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_62, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		int32_t L_63 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_65 = V_0;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_69 = V_0;
		int32_t L_70 = V_2;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)(L_70>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_1;
		ConstrainedActionInvoker5< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_74, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_63, L_64, L_68, L_72, L_73);
	}

IL_0113:
	{
		V_4 = 0;
		goto IL_0254;
	}

IL_011b:
	{
		int32_t L_75 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0179;
	}

IL_0123:
	{
		il2cpp_codegen_memcpy(L_76, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_76, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_77 = V_0;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_4;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		uint16_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		uint16_t L_85;
		L_85 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_84, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_83);
		V_7 = L_85;
		int32_t L_86 = V_4;
		V_8 = L_86;
		goto IL_0167;
	}

IL_0146:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_87 = V_0;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = V_4;
		NullCheck(L_90);
		uint16_t* L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)));
		int32_t L_93 = *((uint16_t*)L_92);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_94 = V_0;
		int32_t L_95 = V_8;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		uint16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint16_t L_101 = V_7;
		*((int16_t*)L_92) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_93^((int32_t)(uint16_t)((int32_t)((int32_t)L_100&(int32_t)L_101))))));
		int32_t L_102 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0167:
	{
		int32_t L_103 = V_8;
		int32_t L_104 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_103) < ((int32_t)((int32_t)il2cpp_codegen_add(L_104, 1)))))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_105 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0179:
	{
		int32_t L_106 = V_6;
		int32_t L_107 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_0123;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_108 = V_0;
		int32_t L_109 = V_4;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		uint16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		if (L_114)
		{
			goto IL_018e;
		}
	}
	{
		return (-1);
	}

IL_018e:
	{
		il2cpp_codegen_memcpy(L_115, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_115, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_116 = V_0;
		int32_t L_117 = V_4;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_4;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint16_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		uint16_t L_124;
		L_124 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_123, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_122);
		V_5 = L_124;
		int32_t L_125 = V_4;
		V_9 = L_125;
		goto IL_01db;
	}

IL_01b1:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_126 = V_0;
		int32_t L_127 = V_9;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		int32_t L_130 = V_4;
		il2cpp_codegen_memcpy(L_131, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_131, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_132 = V_0;
		int32_t L_133 = V_9;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		int32_t L_136 = V_4;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		uint16_t L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		uint16_t L_139 = V_5;
		uint16_t L_141;
		L_141 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_140, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_138, L_139);
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint16_t)L_141);
		int32_t L_142 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_01db:
	{
		int32_t L_143 = V_9;
		int32_t L_144 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_143) < ((int32_t)((int32_t)il2cpp_codegen_add(L_144, 1)))))
		{
			goto IL_01b1;
		}
	}
	{
		V_10 = 0;
		goto IL_0244;
	}

IL_01ec:
	{
		int32_t L_145 = V_10;
		int32_t L_146 = V_4;
		if ((((int32_t)L_145) == ((int32_t)L_146)))
		{
			goto IL_023e;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_147 = V_0;
		int32_t L_148 = V_4;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_10;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		uint16_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_11 = L_153;
		int32_t L_154 = V_4;
		V_12 = L_154;
		goto IL_0234;
	}

IL_0201:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_155 = V_0;
		int32_t L_156 = V_12;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = V_10;
		NullCheck(L_158);
		uint16_t* L_160 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_159)));
		int32_t L_161 = *((uint16_t*)L_160);
		il2cpp_codegen_memcpy(L_162, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		il2cpp_codegen_memcpy(V_3, L_162, SizeOf_GFImpl_t0AA47AEA2C09F9CC67B49E733B19CCBACBC6EA8D);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_163 = V_0;
		int32_t L_164 = V_12;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = V_4;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		uint16_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		uint16_t L_170 = V_11;
		uint16_t L_172;
		L_172 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_171, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_169, L_170);
		*((int16_t*)L_160) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_161^(int32_t)L_172)));
		int32_t L_173 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_173, 1));
	}

IL_0234:
	{
		int32_t L_174 = V_12;
		int32_t L_175 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_174) <= ((int32_t)L_175)))
		{
			goto IL_0201;
		}
	}

IL_023e:
	{
		int32_t L_176 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_176, 1));
	}

IL_0244:
	{
		int32_t L_177 = V_10;
		int32_t L_178 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_177) < ((int32_t)L_178)))
		{
			goto IL_01ec;
		}
	}
	{
		int32_t L_179 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_0254:
	{
		int32_t L_180 = V_4;
		int32_t L_181 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_180) < ((int32_t)L_181)))
		{
			goto IL_011b;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_182 = V_0;
		int32_t L_183 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_182);
		int32_t L_184 = L_183;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_186 = ___0_field;
		int32_t L_187 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_185, (RuntimeArray*)L_186, L_187, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckPKPadding_m86D601B4A6EA407DA8644CB7AA21ACCB4236617F_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		V_0 = (uint8_t)0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		uint8_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_pk;
		int32_t L_2 = V_1;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4)), 1));
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_0|(int32_t)L_6)));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_10 = V_0;
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_10&((int32_t)255)))>>((int32_t)(((int32_t)(L_11%8))&((int32_t)31))))));
		uint8_t L_12 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		uint8_t L_13 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13&((int32_t)255)))>>7)));
		uint8_t L_14 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckCPadding_mA3E3FD9E52F84F728076E2BBFD955F1EC447D0D8_gshared (CmceEngine_1_tC9B628AA9A90B4688ACB33B851FA4C562B3B5024* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_c;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))>>((int32_t)(((int32_t)(L_4%8))&((int32_t)31)))))), 1)))&((int32_t)255)))>>7))), 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort32_mDC43738E39622A5D396E40AE133C9A249F68F902_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0145;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0089;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_0085;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int32_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int32_t)(L_16^L_21));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___0_temp;
		int32_t L_23 = ___1_from;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25));
		int32_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_temp;
		int32_t L_29 = ___1_from;
		int32_t L_30 = V_3;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_27, L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___0_temp;
		int32_t L_37 = ___1_from;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		NullCheck(L_36);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39));
		int32_t L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int32_t)(L_33^((int32_t)(L_34&((int32_t)(L_35^L_41))))));
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(L_42>>((int32_t)31)));
		int32_t L_43 = V_5;
		int32_t L_44 = V_4;
		V_5 = ((int32_t)(L_43&L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___0_temp;
		int32_t L_46 = ___1_from;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		int32_t* L_48 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, L_47)))));
		int32_t L_49 = *((int32_t*)L_48);
		int32_t L_50 = V_5;
		*((int32_t*)L_48) = (int32_t)((int32_t)(L_49^L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___0_temp;
		int32_t L_52 = ___1_from;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		NullCheck(L_51);
		int32_t* L_55 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)))));
		int32_t L_56 = *((int32_t*)L_55);
		int32_t L_57 = V_5;
		*((int32_t*)L_55) = (int32_t)((int32_t)(L_56^L_57));
	}

IL_0085:
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0089:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		int32_t L_61 = V_2;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_60, L_61)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_62 = V_1;
		V_6 = L_62;
		goto IL_0139;
	}

IL_0097:
	{
		V_7 = 0;
		goto IL_0128;
	}

IL_009f:
	{
		int32_t L_63 = V_7;
		int32_t L_64 = V_2;
		if (((int32_t)(L_63&L_64)))
		{
			goto IL_0122;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___0_temp;
		int32_t L_66 = ___1_from;
		int32_t L_67 = V_7;
		int32_t L_68 = V_2;
		NullCheck(L_65);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68));
		int32_t L_70 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_8 = L_70;
		int32_t L_71 = V_6;
		V_9 = L_71;
		goto IL_0113;
	}

IL_00b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_7;
		int32_t L_75 = V_9;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int32_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_8;
		V_10 = ((int32_t)(L_77^L_78));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___0_temp;
		int32_t L_80 = ___1_from;
		int32_t L_81 = V_7;
		int32_t L_82 = V_9;
		NullCheck(L_79);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_80, L_81)), L_82));
		int32_t L_84 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = V_8;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_84, L_85));
		int32_t L_86 = V_11;
		int32_t L_87 = V_10;
		int32_t L_88 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ___0_temp;
		int32_t L_90 = ___1_from;
		int32_t L_91 = V_7;
		int32_t L_92 = V_9;
		NullCheck(L_89);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_90, L_91)), L_92));
		int32_t L_94 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_11 = ((int32_t)(L_86^((int32_t)(L_87&((int32_t)(L_88^L_94))))));
		int32_t L_95 = V_11;
		V_11 = ((int32_t)(L_95>>((int32_t)31)));
		int32_t L_96 = V_11;
		int32_t L_97 = V_10;
		V_11 = ((int32_t)(L_96&L_97));
		int32_t L_98 = V_8;
		int32_t L_99 = V_11;
		V_8 = ((int32_t)(L_98^L_99));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___0_temp;
		int32_t L_101 = ___1_from;
		int32_t L_102 = V_7;
		int32_t L_103 = V_9;
		NullCheck(L_100);
		int32_t* L_104 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_101, L_102)), L_103)))));
		int32_t L_105 = *((int32_t*)L_104);
		int32_t L_106 = V_11;
		*((int32_t*)L_104) = (int32_t)((int32_t)(L_105^L_106));
		int32_t L_107 = V_9;
		V_9 = ((int32_t)(L_107>>1));
	}

IL_0113:
	{
		int32_t L_108 = V_9;
		int32_t L_109 = V_2;
		if ((((int32_t)L_108) > ((int32_t)L_109)))
		{
			goto IL_00b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = ___0_temp;
		int32_t L_111 = ___1_from;
		int32_t L_112 = V_7;
		int32_t L_113 = V_2;
		int32_t L_114 = V_8;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_111, L_112)), L_113))), (int32_t)L_114);
	}

IL_0122:
	{
		int32_t L_115 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0128:
	{
		int32_t L_116 = V_7;
		int32_t L_117 = V_0;
		int32_t L_118 = V_6;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_117, L_118)))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_119 = V_6;
		V_6 = ((int32_t)(L_119>>1));
	}

IL_0139:
	{
		int32_t L_120 = V_6;
		int32_t L_121 = V_2;
		if ((((int32_t)L_120) > ((int32_t)L_121)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_122 = V_2;
		V_2 = ((int32_t)(L_122>>1));
	}

IL_0145:
	{
		int32_t L_123 = V_2;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort64_mDCE0747A9845BD200A4966C7848C014119753343_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0111;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0073;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_006f;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int64_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int64_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_16, L_21));
		int64_t L_22 = V_4;
		V_4 = ((int64_t)(L_22>>((int32_t)63)));
		int64_t L_23 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ___0_temp;
		int32_t L_25 = ___1_from;
		int32_t L_26 = V_3;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int64_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = ___0_temp;
		int32_t L_30 = ___1_from;
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		NullCheck(L_29);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32));
		int64_t L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = ((int64_t)(L_23&((int64_t)(L_28^L_34))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_35 = ___0_temp;
		int32_t L_36 = ___1_from;
		int32_t L_37 = V_3;
		NullCheck(L_35);
		int64_t* L_38 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, L_37)))));
		int64_t L_39 = *((int64_t*)L_38);
		int64_t L_40 = V_4;
		*((int64_t*)L_38) = (int64_t)((int64_t)(L_39^L_40));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41 = ___0_temp;
		int32_t L_42 = ___1_from;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		NullCheck(L_41);
		int64_t* L_45 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_42, L_43)), L_44)))));
		int64_t L_46 = *((int64_t*)L_45);
		int64_t L_47 = V_4;
		*((int64_t*)L_45) = (int64_t)((int64_t)(L_46^L_47));
	}

IL_006f:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0073:
	{
		int32_t L_49 = V_3;
		int32_t L_50 = V_0;
		int32_t L_51 = V_2;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_50, L_51)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_52 = V_1;
		V_5 = L_52;
		goto IL_0105;
	}

IL_0081:
	{
		V_6 = 0;
		goto IL_00f7;
	}

IL_0086:
	{
		int32_t L_53 = V_6;
		int32_t L_54 = V_2;
		if (((int32_t)(L_53&L_54)))
		{
			goto IL_00f1;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55 = ___0_temp;
		int32_t L_56 = ___1_from;
		int32_t L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_55);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_56, L_57)), L_58));
		int64_t L_60 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		int32_t L_61 = V_5;
		V_8 = L_61;
		goto IL_00e2;
	}

IL_009c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_62 = ___0_temp;
		int32_t L_63 = ___1_from;
		int32_t L_64 = V_6;
		int32_t L_65 = V_8;
		NullCheck(L_62);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, L_64)), L_65));
		int64_t L_67 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int64_t L_68 = V_7;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_67, L_68));
		int64_t L_69 = V_9;
		V_9 = ((int64_t)(L_69>>((int32_t)63)));
		int64_t L_70 = V_9;
		int64_t L_71 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_6;
		int32_t L_75 = V_8;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int64_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_9 = ((int64_t)(L_70&((int64_t)(L_71^L_77))));
		int64_t L_78 = V_7;
		int64_t L_79 = V_9;
		V_7 = ((int64_t)(L_78^L_79));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_80 = ___0_temp;
		int32_t L_81 = ___1_from;
		int32_t L_82 = V_6;
		int32_t L_83 = V_8;
		NullCheck(L_80);
		int64_t* L_84 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_81, L_82)), L_83)))));
		int64_t L_85 = *((int64_t*)L_84);
		int64_t L_86 = V_9;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^L_86));
		int32_t L_87 = V_8;
		V_8 = ((int32_t)(L_87>>1));
	}

IL_00e2:
	{
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) > ((int32_t)L_89)))
		{
			goto IL_009c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_90 = ___0_temp;
		int32_t L_91 = ___1_from;
		int32_t L_92 = V_6;
		int32_t L_93 = V_2;
		int64_t L_94 = V_7;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_91, L_92)), L_93))), (int64_t)L_94);
	}

IL_00f1:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_00f7:
	{
		int32_t L_96 = V_6;
		int32_t L_97 = V_0;
		int32_t L_98 = V_5;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_97, L_98)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)(L_99>>1));
	}

IL_0105:
	{
		int32_t L_100 = V_5;
		int32_t L_101 = V_2;
		if ((((int32_t)L_100) > ((int32_t)L_101)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_102 = V_2;
		V_2 = ((int32_t)(L_102>>1));
	}

IL_0111:
	{
		int32_t L_103 = V_2;
		if ((((int32_t)L_103) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m7B658487ACAD00FEAB9E5BBA00C75AA0FA139F2A_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m222A4E54316113379DD8E067420D9833167EA8F7_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m00E7319DCABAF275F3A2AF2A4342D1EEAF134FC6_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m0B2D4EF29DBF06E904E09AFCF956B32ADB209E71_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB* L_0 = ((U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB* L_2 = ((U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mD62559D829E973B04312C5735E176EC98C46E483_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m3C59F53AE130668BC960150D464838A1AD97A27E_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mEEA1B0658DD8B03A7F8BC187C9015BD1619A3DE5_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m133E95FF9E7384411AFC9412301D7AE5EB82F283_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108* L_0 = ((U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108* L_2 = ((U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m37630F981D96E6D82BFB7B6217B0D229CA08743E_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m06A331A0FEF3608767F8D992F3DCC1A1984106E4_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m5D18CAA5C4F8AE3E54EC201C237A830458936E74_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m1953894AEA66190B472EBCC8A3998A8D05F2A4C9_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72* L_0 = ((U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72* L_2 = ((U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mA9535ED94D9899FA7B41E063E2B6AAA3F0C929A3_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mD56A9DCC894E337A7EA7E6F4A837D25EA62BCE2D_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m4E21C5D955B17E28B0C3F279B4C5330A4671CFFD_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mD0004AF5E5B976F7B4545CBFEEF19FBB4B29FEA3_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E* L_0 = ((U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E* L_2 = ((U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m411EB4FF2E2641FDE11B243AC15FA290A8165AEE_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m37292B5219B99E8CA631BAAF6148EE8108A3B154_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m7F9169CA8ED500338A224EDA6EEEFC4AA4ECFD5F_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mA71F691079F4652AB24353CB309EDC0D619E24AE_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669* L_0 = ((U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669* L_2 = ((U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m240D3B2D7FD63E520FD4FFF8FCBB7806176993C4_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m203CBF96669AAA61367240F582BF4C625F661D11_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m6EC30E991DB4C140B928906C93A985636293DDB0_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mE7FA903A769F63F21C33EC2C1DE114E7202FABBB_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8* L_0 = ((U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8* L_2 = ((U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m5D611643ED8727E6FCB3FB03426CCEC3EEE7ADBF_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mD7CC1B292379DA61F3B366DF3D61E4C8C96605F0_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m57B5A816F506567820DCA104951DAB924CB092F1_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m3833CC340223B198E6B111E6AF33F4960CB798F2_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC* L_0 = ((U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC* L_2 = ((U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m14408D5B2084E1CBD3E324BAA11BD45C98DC3AC9_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m3A49EEA42975B2E59453245A797ABAA610153461_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m43040C099A6A3B930B9ADFFBAE8AA240B0B7DDC1_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m366D34D8BE354C26883B3EFBF2C43DEC6E26D862_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B* L_0 = ((U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B* L_2 = ((U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m43B288574A517CF2A9EE6FAEC4B50355379D506C_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mD05E8369E0368A31E7A19C51B275E504FBE7B581_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m9324FA476A0344A0E07554F4A5D0F423526674D8_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m891139522BAC5A4C50198843B9A8C80BA4A8B3C4_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD* L_0 = ((U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD* L_2 = ((U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m1C84277E9C66A9E761AD2DB503C8DE93CA0DAF68_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m2913E3091833915F51AC413FACF0289147C59087_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mD3ECD09C22F1ED5CD95E6BD39E1EF0DB49450527_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m49A0D7452C4913F1C77BA960C850425DE279C552_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12* L_0 = ((U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12* L_2 = ((U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_10__ctor_m74E17DF201EFA2F8070664471DC122BEE0B91270_gshared (CombineLatest_10_t57EF6A4D7704DDA7A6F119F16FB5B4D3B42BA0DB* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE* ___9_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE* L_9 = ___9_resultSelector;
		__this->___resultSelector = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_10_GetAsyncEnumerator_m118613DB332087A5BE41F459D43CF5665E7456E3_gshared (CombineLatest_10_t57EF6A4D7704DDA7A6F119F16FB5B4D3B42BA0DB* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE* L_9 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = ___0_cancellationToken;
		_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_11 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (RuntimeObject*)L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_11__ctor_m36278AAB303889034EDF564371E288A97577A7BD_gshared (CombineLatest_11_tFB8520EB60392016728569634AF63EDE02990D79* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, RuntimeObject* ___9_source10, Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64* ___10_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		RuntimeObject* L_9 = ___9_source10;
		__this->___source10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source10), (void*)L_9);
		Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64* L_10 = ___10_resultSelector;
		__this->___resultSelector = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_11_GetAsyncEnumerator_m0C80E6A0CF3A1BC5F19CEF802CAB65C4014D2ED0_gshared (CombineLatest_11_tFB8520EB60392016728569634AF63EDE02990D79* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		RuntimeObject* L_9 = __this->___source10;
		Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64* L_10 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___0_cancellationToken;
		_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_12 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		((  void (*) (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_12, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_12__ctor_mAE129AF2E817276545F9E71597AD42B78AF9C8BA_gshared (CombineLatest_12_tF2422C877616E279B098180601F937CD3EF2F40C* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, RuntimeObject* ___9_source10, RuntimeObject* ___10_source11, Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD* ___11_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		RuntimeObject* L_9 = ___9_source10;
		__this->___source10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source10), (void*)L_9);
		RuntimeObject* L_10 = ___10_source11;
		__this->___source11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source11), (void*)L_10);
		Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD* L_11 = ___11_resultSelector;
		__this->___resultSelector = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_12_GetAsyncEnumerator_mBC522E78F6392196CF7C3C6C190AB56482E36CF0_gshared (CombineLatest_12_tF2422C877616E279B098180601F937CD3EF2F40C* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		RuntimeObject* L_9 = __this->___source10;
		RuntimeObject* L_10 = __this->___source11;
		Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD* L_11 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = ___0_cancellationToken;
		_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_13 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_13, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_13;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_13__ctor_m999B1E5E9A75AB50291B22BE523B0CBBF2FDD41D_gshared (CombineLatest_13_tF0702EE5CB65EC95C3408156DDF9B8A0E3377EFF* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, RuntimeObject* ___9_source10, RuntimeObject* ___10_source11, RuntimeObject* ___11_source12, Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA* ___12_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		RuntimeObject* L_9 = ___9_source10;
		__this->___source10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source10), (void*)L_9);
		RuntimeObject* L_10 = ___10_source11;
		__this->___source11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source11), (void*)L_10);
		RuntimeObject* L_11 = ___11_source12;
		__this->___source12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source12), (void*)L_11);
		Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA* L_12 = ___12_resultSelector;
		__this->___resultSelector = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_13_GetAsyncEnumerator_m5B344CD9FAC3A4968900511B743C6ED6C173BBB6_gshared (CombineLatest_13_tF0702EE5CB65EC95C3408156DDF9B8A0E3377EFF* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		RuntimeObject* L_9 = __this->___source10;
		RuntimeObject* L_10 = __this->___source11;
		RuntimeObject* L_11 = __this->___source12;
		Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA* L_12 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = ___0_cancellationToken;
		_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7* L_14 = (_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (_CombineLatest_t6CC2B27A82E42CA6E1A599EA5F4E0079CBA6AEA7*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_13_tE101A692FD4236AF4A000F671236FB217F1D07EA*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_14, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_14;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_14__ctor_mF496D9E741EF441DFEFEE2EC032FB912F1D5A37D_gshared (CombineLatest_14_tE561921BB0EAD0BC0D35ACAB8300A5703EC3D73B* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, RuntimeObject* ___9_source10, RuntimeObject* ___10_source11, RuntimeObject* ___11_source12, RuntimeObject* ___12_source13, Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05* ___13_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		RuntimeObject* L_9 = ___9_source10;
		__this->___source10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source10), (void*)L_9);
		RuntimeObject* L_10 = ___10_source11;
		__this->___source11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source11), (void*)L_10);
		RuntimeObject* L_11 = ___11_source12;
		__this->___source12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source12), (void*)L_11);
		RuntimeObject* L_12 = ___12_source13;
		__this->___source13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source13), (void*)L_12);
		Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05* L_13 = ___13_resultSelector;
		__this->___resultSelector = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_13);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_14_GetAsyncEnumerator_m599C3CD71228624B668C643D33F869B85D15736F_gshared (CombineLatest_14_tE561921BB0EAD0BC0D35ACAB8300A5703EC3D73B* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		RuntimeObject* L_9 = __this->___source10;
		RuntimeObject* L_10 = __this->___source11;
		RuntimeObject* L_11 = __this->___source12;
		RuntimeObject* L_12 = __this->___source13;
		Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05* L_13 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_14 = ___0_cancellationToken;
		_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0* L_15 = (_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		((  void (*) (_CombineLatest_tCA29E3ECB853CD60D9F8FA67F8E6A55D495674F0*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_14_t832E7C41FBD1EA2EB64BB25F9998F63A0BB0DC05*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_15, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_15;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_15__ctor_m423C66CA84B1532B9B7D16DE0D818E8BB3AC1046_gshared (CombineLatest_15_tCAD929D23EC0E908D501B213F813673012564AA1* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, RuntimeObject* ___9_source10, RuntimeObject* ___10_source11, RuntimeObject* ___11_source12, RuntimeObject* ___12_source13, RuntimeObject* ___13_source14, Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D* ___14_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		RuntimeObject* L_9 = ___9_source10;
		__this->___source10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source10), (void*)L_9);
		RuntimeObject* L_10 = ___10_source11;
		__this->___source11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source11), (void*)L_10);
		RuntimeObject* L_11 = ___11_source12;
		__this->___source12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source12), (void*)L_11);
		RuntimeObject* L_12 = ___12_source13;
		__this->___source13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source13), (void*)L_12);
		RuntimeObject* L_13 = ___13_source14;
		__this->___source14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source14), (void*)L_13);
		Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D* L_14 = ___14_resultSelector;
		__this->___resultSelector = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_15_GetAsyncEnumerator_mAE3D366F4A21D14ABED9EC45EAF11DD157933E8A_gshared (CombineLatest_15_tCAD929D23EC0E908D501B213F813673012564AA1* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		RuntimeObject* L_9 = __this->___source10;
		RuntimeObject* L_10 = __this->___source11;
		RuntimeObject* L_11 = __this->___source12;
		RuntimeObject* L_12 = __this->___source13;
		RuntimeObject* L_13 = __this->___source14;
		Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D* L_14 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = ___0_cancellationToken;
		_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09* L_16 = (_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		((  void (*) (_CombineLatest_t45D60A447EA2ABBFD43048B443A410DF3B665A09*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_15_tFDDF27082827311281C23A24DC1AA2B68498702D*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_16, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_16;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_16__ctor_m8D3F9A0080D882AC1711EDCCC4505EE00A033824_gshared (CombineLatest_16_t5FB104E5E4C7E1235CC7A6CBAF3CA27CCF0FEB5A* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, RuntimeObject* ___8_source9, RuntimeObject* ___9_source10, RuntimeObject* ___10_source11, RuntimeObject* ___11_source12, RuntimeObject* ___12_source13, RuntimeObject* ___13_source14, RuntimeObject* ___14_source15, Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD* ___15_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		RuntimeObject* L_8 = ___8_source9;
		__this->___source9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source9), (void*)L_8);
		RuntimeObject* L_9 = ___9_source10;
		__this->___source10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source10), (void*)L_9);
		RuntimeObject* L_10 = ___10_source11;
		__this->___source11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source11), (void*)L_10);
		RuntimeObject* L_11 = ___11_source12;
		__this->___source12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source12), (void*)L_11);
		RuntimeObject* L_12 = ___12_source13;
		__this->___source13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source13), (void*)L_12);
		RuntimeObject* L_13 = ___13_source14;
		__this->___source14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source14), (void*)L_13);
		RuntimeObject* L_14 = ___14_source15;
		__this->___source15 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source15), (void*)L_14);
		Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD* L_15 = ___15_resultSelector;
		__this->___resultSelector = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_16_GetAsyncEnumerator_m7B9DAC5B7B2C6434BE84AE764B2DD8372F4E2DDE_gshared (CombineLatest_16_t5FB104E5E4C7E1235CC7A6CBAF3CA27CCF0FEB5A* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		RuntimeObject* L_8 = __this->___source9;
		RuntimeObject* L_9 = __this->___source10;
		RuntimeObject* L_10 = __this->___source11;
		RuntimeObject* L_11 = __this->___source12;
		RuntimeObject* L_12 = __this->___source13;
		RuntimeObject* L_13 = __this->___source14;
		RuntimeObject* L_14 = __this->___source15;
		Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD* L_15 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = ___0_cancellationToken;
		_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA* L_17 = (_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (_CombineLatest_tC4A0A26F93906FF3D8A6764DDACA42222505C6DA*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_16_t85C77A6ADF6A16E184BCE73A1B6011F4D7217BBD*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_17, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_17;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_3__ctor_m825FECC8154D4620A661F4975A816A23294A2803_gshared (CombineLatest_3_tF39418B68A255ABA3C52FD154B0930ACC42C44E6* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_2 = ___2_resultSelector;
		__this->___resultSelector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_3_GetAsyncEnumerator_m865C43C492316CBB06D1BD91B3163A25AF78B0A2_gshared (CombineLatest_3_tF39418B68A255ABA3C52FD154B0930ACC42C44E6* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_2 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_4 = (_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		((  void (*) (_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC*, RuntimeObject*, RuntimeObject*, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_4__ctor_m0882CEFD99258354AE3E77260502DAE24E472815_gshared (CombineLatest_4_t7C4922D38E8CFABCA31EC31FFF71C597B725D153* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* ___3_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* L_3 = ___3_resultSelector;
		__this->___resultSelector = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_4_GetAsyncEnumerator_m4D1306E06275B3D9129C4DAFB14A35AF36F32ECE_gshared (CombineLatest_4_t7C4922D38E8CFABCA31EC31FFF71C597B725D153* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* L_3 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___0_cancellationToken;
		_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_5 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_5, L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (RuntimeObject*)L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_5__ctor_mB98F07CBDDF1DF6D6B9E9D040C7B4AB3F0ADDDCD_gshared (CombineLatest_5_t1B0E99708840A45351D99AFBBFDCFF441807DEFC* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* ___4_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* L_4 = ___4_resultSelector;
		__this->___resultSelector = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_5_GetAsyncEnumerator_m3764396CA3CD45ABD44053F17E90ECD43A87806B_gshared (CombineLatest_5_t1B0E99708840A45351D99AFBBFDCFF441807DEFC* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* L_4 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___0_cancellationToken;
		_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_6 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_6__ctor_m15A7C05FCEC2921984B3646933836E565BF25454_gshared (CombineLatest_6_tF4CD28F89A34944D2D26F1F65728B4749CEA36F1* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* ___5_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* L_5 = ___5_resultSelector;
		__this->___resultSelector = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_6_GetAsyncEnumerator_m48D9EB5BCDAF5175815E5118E618B8332FDEA1B4_gshared (CombineLatest_6_tF4CD28F89A34944D2D26F1F65728B4749CEA36F1* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* L_5 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = ___0_cancellationToken;
		_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_7 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_7;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_7__ctor_mE57C1B2798765497BFFC5FD13479FEFE3CF3499A_gshared (CombineLatest_7_tABFBBB513635348CF9FC852C0D04C69BD13C0CEE* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* ___6_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* L_6 = ___6_resultSelector;
		__this->___resultSelector = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_7_GetAsyncEnumerator_mBC22584FB659A6CC4402FDF459CBBFC4F937EF0D_gshared (CombineLatest_7_tABFBBB513635348CF9FC852C0D04C69BD13C0CEE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* L_6 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___0_cancellationToken;
		_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_8 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_8, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_8;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_8__ctor_mBEA3DF1F32C24B7D91CEC60C86DD08BC39883A4E_gshared (CombineLatest_8_t84A6EFAA6A9E92F57845025BCE4A67DE3E0E51ED* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* ___7_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* L_7 = ___7_resultSelector;
		__this->___resultSelector = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_8_GetAsyncEnumerator_mE547CC422402AE93F50E9749C21FD5E6BBC567FA_gshared (CombineLatest_8_t84A6EFAA6A9E92F57845025BCE4A67DE3E0E51ED* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* L_7 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___0_cancellationToken;
		_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_9 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_9, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_9;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineLatest_9__ctor_m02484F2B7514524486F726DA8455CB2B2A31F7A8_gshared (CombineLatest_9_t80049DAEA48E65AFB4213D0850A61873C8807218* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, RuntimeObject* ___7_source8, Func_9_tCA208DB676270504B9EA383199B74083CECB6375* ___8_resultSelector, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source1;
		__this->___source1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1), (void*)L_0);
		RuntimeObject* L_1 = ___1_source2;
		__this->___source2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2), (void*)L_1);
		RuntimeObject* L_2 = ___2_source3;
		__this->___source3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3), (void*)L_2);
		RuntimeObject* L_3 = ___3_source4;
		__this->___source4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4), (void*)L_3);
		RuntimeObject* L_4 = ___4_source5;
		__this->___source5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5), (void*)L_4);
		RuntimeObject* L_5 = ___5_source6;
		__this->___source6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6), (void*)L_5);
		RuntimeObject* L_6 = ___6_source7;
		__this->___source7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7), (void*)L_6);
		RuntimeObject* L_7 = ___7_source8;
		__this->___source8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source8), (void*)L_7);
		Func_9_tCA208DB676270504B9EA383199B74083CECB6375* L_8 = ___8_resultSelector;
		__this->___resultSelector = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineLatest_9_GetAsyncEnumerator_m12DF185FE777AA87502DFC66B3022ACB2B17BAD2_gshared (CombineLatest_9_t80049DAEA48E65AFB4213D0850A61873C8807218* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source1;
		RuntimeObject* L_1 = __this->___source2;
		RuntimeObject* L_2 = __this->___source3;
		RuntimeObject* L_3 = __this->___source4;
		RuntimeObject* L_4 = __this->___source5;
		RuntimeObject* L_5 = __this->___source6;
		RuntimeObject* L_6 = __this->___source7;
		RuntimeObject* L_7 = __this->___source8;
		Func_9_tCA208DB676270504B9EA383199B74083CECB6375* L_8 = __this->___resultSelector;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___0_cancellationToken;
		_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_10 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		((  void (*) (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, Func_9_tCA208DB676270504B9EA383199B74083CECB6375*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_10, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_10;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommandEventBase_1_get_commandName_mAFF5B4B2497D801805FA4CDABF02A9004C7E67CD_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = __this->___m_CommandName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		G_B3_0 = ((!(((RuntimeObject*)(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3;
		L_3 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24(L_3, NULL);
		V_1 = L_4;
		goto IL_0031;
	}

IL_0028:
	{
		String_t* L_5 = __this->___m_CommandName;
		V_1 = L_5;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_mB7260F34FCF8D401B1D05C4B0205DCA9B415E3E3_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___m_CommandName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommandName), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_Init_m2BCC8D59D11DA84D688BD75810401E5D18A4BE54_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1*)__this);
		EventBase_1_Init_mD11258015D6778B557F3DED4696BEF3335FD66C3((EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CommandEventBase_1_LocalInit_m119651F69F8102214FF57766757D77B3D27DC41A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_LocalInit_m119651F69F8102214FF57766757D77B3D27DC41A_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, (int32_t)7, NULL);
		CommandEventBase_1_set_commandName_mB7260F34FCF8D401B1D05C4B0205DCA9B415E3E3(__this, (String_t*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommandEventBase_1_GetPooled_mAF3790A2FF73805C656D8484D6354CF3A4ED294C_gshared (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_systemEvent, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject* L_0;
		L_0 = EventBase_1_GetPooled_mBD7595B7D0C2B6D191690953CCBC74F4120FBD01(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2 = ___0_systemEvent;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_1);
		EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_1, L_2, NULL);
		RuntimeObject* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommandEventBase_1_GetPooled_m4E88B66674F6269D61D16F5E026BD58466C13597_gshared (String_t* ___0_commandName, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject* L_0;
		L_0 = EventBase_1_GetPooled_mBD7595B7D0C2B6D191690953CCBC74F4120FBD01(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		String_t* L_2 = ___0_commandName;
		NullCheck((CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518*)L_1);
		CommandEventBase_1_set_commandName_mB7260F34FCF8D401B1D05C4B0205DCA9B415E3E3((CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518*)L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1__ctor_m316BD687453DE8C7E2FD2C8CD98929D1FC34756C_gshared (CommandEventBase_1_t5C854B0E85C1032ABBABBDFD0046CDB90858E518* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		EventBase_1__ctor_m385124A7A8517F869B52108A7FC234225AFBB4A0((EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CommandEventBase_1_LocalInit_m119651F69F8102214FF57766757D77B3D27DC41A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* Comparer_1_get_Default_m2465C55D5E7F121F0F78CF0622C97D21798C1767_gshared (const RuntimeMethod* method) 
{
	Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* V_0 = NULL;
	{
		Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* L_0 = ((Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* L_2;
		L_2 = Comparer_1_CreateComparer_m0EB57BB5CFE513E94A963C16A9CA5868C418EF2F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* Comparer_1_CreateComparer_m0EB57BB5CFE513E94A963C16A9CA5868C418EF2F_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_3, (Type_t*)L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_7, L_8, NULL);
		return ((Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB*)CastclassClass((RuntimeObject*)L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_0038:
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_10 = V_0;
		NullCheck((Type_t*)L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(47, (Type_t*)L_10);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_12 = V_0;
		NullCheck((Type_t*)L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(56, (Type_t*)L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_17 = V_0;
		NullCheck((Type_t*)L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18;
		L_18 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(58, (Type_t*)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Type_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_20, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_23;
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_25);
		NullCheck(L_22);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(163, L_22, L_24);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_27 = V_1;
		NullCheck(L_26);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_26, (Type_t*)L_27);
		if (!L_28)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_30, L_31, NULL);
		return ((Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB*)CastclassClass((RuntimeObject*)L_32, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_009c:
	{
		ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57* L_33 = (ObjectComparer_1_t3BD5CFBE95706F12E0B404FC488BC1EBA3A19D57*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectComparer_1__ctor_m3D43EC544AB9C2C5EDE66376D1CA378F43231187(L_33, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return (Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_1_System_Collections_IComparer_Compare_m1DF6D6C9677FB3A609AB6D9DD2964C9018DABF22_gshared (Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___1_y;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject* L_3 = ___0_x;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ___1_y;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___0_x;
		RuntimeObject* L_6 = ___1_y;
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(6, __this, ((*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))), ((*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)UnBox(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))));
		return L_7;
	}

IL_0032:
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)2, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_m9E3E49080F86462A95B1A93696D78A9DC3F3F078_gshared (Comparer_1_tFC8A86696DF058183CDF8ABE575DE5E54D798EFB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* Comparer_1_get_Default_m4F59BE2B898718916F6EFB571B8BD2D9FB77742B_gshared (const RuntimeMethod* method) 
{
	Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* V_0 = NULL;
	{
		Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* L_0 = ((Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* L_2;
		L_2 = Comparer_1_CreateComparer_mE8DEE23A5CD56B8B9A17D6BB40D7C43F51C4E927(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* Comparer_1_CreateComparer_mE8DEE23A5CD56B8B9A17D6BB40D7C43F51C4E927_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_3, (Type_t*)L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_7, L_8, NULL);
		return ((Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681*)CastclassClass((RuntimeObject*)L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_0038:
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_10 = V_0;
		NullCheck((Type_t*)L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(47, (Type_t*)L_10);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_12 = V_0;
		NullCheck((Type_t*)L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(56, (Type_t*)L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_17 = V_0;
		NullCheck((Type_t*)L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18;
		L_18 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(58, (Type_t*)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Type_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_20, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_23;
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_25);
		NullCheck(L_22);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(163, L_22, L_24);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_27 = V_1;
		NullCheck(L_26);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_26, (Type_t*)L_27);
		if (!L_28)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_30, L_31, NULL);
		return ((Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681*)CastclassClass((RuntimeObject*)L_32, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_009c:
	{
		ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C* L_33 = (ObjectComparer_1_t28B8B797286DD84953CF32A31095519516651D7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectComparer_1__ctor_m75E1CDF502AEA13A8CC2DF4C626430ECCBF6E77A(L_33, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return (Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_1_System_Collections_IComparer_Compare_m443035A0FDB8D32C6CEEEDF647B57C108BF32572_gshared (Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___1_y;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject* L_3 = ___0_x;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ___1_y;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___0_x;
		RuntimeObject* L_6 = ___1_y;
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, Change_t854CBA093D42417E5519F076CCDA910A2AB6700A, Change_t854CBA093D42417E5519F076CCDA910A2AB6700A >::Invoke(6, __this, ((*(Change_t854CBA093D42417E5519F076CCDA910A2AB6700A*)((Change_t854CBA093D42417E5519F076CCDA910A2AB6700A*)(Change_t854CBA093D42417E5519F076CCDA910A2AB6700A*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))), ((*(Change_t854CBA093D42417E5519F076CCDA910A2AB6700A*)((Change_t854CBA093D42417E5519F076CCDA910A2AB6700A*)(Change_t854CBA093D42417E5519F076CCDA910A2AB6700A*)UnBox(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))));
		return L_7;
	}

IL_0032:
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)2, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_m8C281F39C0FB5DF396CCF1A114EE70AA92ADC823_gshared (Comparer_1_t96728678741D7B601B1B1F877D0D70359B73D681* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* Comparer_1_get_Default_mC2F704EBF29CF58CBF3CF0E9F113FC5C528F6E6C_gshared (const RuntimeMethod* method) 
{
	Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* V_0 = NULL;
	{
		Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* L_0 = ((Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* L_2;
		L_2 = Comparer_1_CreateComparer_m88C9298ED045C3F9A20742C86300B2420B72FE9C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* Comparer_1_CreateComparer_m88C9298ED045C3F9A20742C86300B2420B72FE9C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_3, (Type_t*)L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_7, L_8, NULL);
		return ((Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656*)CastclassClass((RuntimeObject*)L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_0038:
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_10 = V_0;
		NullCheck((Type_t*)L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(47, (Type_t*)L_10);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_12 = V_0;
		NullCheck((Type_t*)L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(56, (Type_t*)L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_17 = V_0;
		NullCheck((Type_t*)L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18;
		L_18 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(58, (Type_t*)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Type_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_20, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_23;
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_25);
		NullCheck(L_22);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(163, L_22, L_24);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_27 = V_1;
		NullCheck(L_26);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_26, (Type_t*)L_27);
		if (!L_28)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_30, L_31, NULL);
		return ((Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656*)CastclassClass((RuntimeObject*)L_32, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_009c:
	{
		ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C* L_33 = (ObjectComparer_1_t88BC75FD43DE4976B0EF2693D07B1C41E1F6A16C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectComparer_1__ctor_mCF00A6D2A3B8A4245F14345842C136D03EC83E4B(L_33, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return (Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_1_System_Collections_IComparer_Compare_m1B00185C061F4B0CE3B9D2AD6F2AB2B6CDB599BB_gshared (Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___1_y;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject* L_3 = ___0_x;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ___1_y;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___0_x;
		RuntimeObject* L_6 = ___1_y;
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00, Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00 >::Invoke(6, __this, ((*(Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00*)((Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00*)(Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))), ((*(Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00*)((Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00*)(Change_t065CA79EC4B9A762C6C607B0A8897B5855899D00*)UnBox(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))));
		return L_7;
	}

IL_0032:
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)2, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_m5B063026A8A711849B4CAB8E2F4B6329016B5BCD_gshared (Comparer_1_t026E2AAD1870447AFE097AA9634585E142D5C656* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* Comparer_1_get_Default_m826B9BE9F55AB0488BFAEBE9601045C71C9B3712_gshared (const RuntimeMethod* method) 
{
	Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* V_0 = NULL;
	{
		Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* L_0 = ((Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* L_2;
		L_2 = Comparer_1_CreateComparer_m420EECDB3C3DEEAC1F90C0C3E7FA0FFC4ED3C5F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* Comparer_1_CreateComparer_m420EECDB3C3DEEAC1F90C0C3E7FA0FFC4ED3C5F8_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_3, (Type_t*)L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_7, L_8, NULL);
		return ((Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089*)CastclassClass((RuntimeObject*)L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_0038:
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_10 = V_0;
		NullCheck((Type_t*)L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(47, (Type_t*)L_10);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_12 = V_0;
		NullCheck((Type_t*)L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(56, (Type_t*)L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_17 = V_0;
		NullCheck((Type_t*)L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18;
		L_18 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(58, (Type_t*)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Type_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_20, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_23;
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_25);
		NullCheck(L_22);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(163, L_22, L_24);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_27 = V_1;
		NullCheck(L_26);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_26, (Type_t*)L_27);
		if (!L_28)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_30, L_31, NULL);
		return ((Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089*)CastclassClass((RuntimeObject*)L_32, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_009c:
	{
		ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8* L_33 = (ObjectComparer_1_tC58C28CC5A6BFB219ABAF274BC84989B7FE576C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectComparer_1__ctor_m6163DBF51841D6151A9E21CEF1B1EF2F6A09A6C9(L_33, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return (Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_1_System_Collections_IComparer_Compare_m588FD8654280D72FA9364A8FDAD1A27EE92E4360_gshared (Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___1_y;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject* L_3 = ___0_x;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ___1_y;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___0_x;
		RuntimeObject* L_6 = ___1_y;
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952, Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952 >::Invoke(6, __this, ((*(Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952*)((Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952*)(Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))), ((*(Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952*)((Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952*)(Change_tF92019B1CFC15A6B8574CA296B94C595CD7B7952*)UnBox(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))));
		return L_7;
	}

IL_0032:
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)2, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_m1AFEECCECF47E823617DD49BF75ECB6E3467A269_gshared (Comparer_1_t181D1F6A723F9BDA3EB3E25D53778ABA2488E089* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* Comparer_1_get_Default_m83EB9B1DD670AE94167FF03183EDA7001145AE05_gshared (const RuntimeMethod* method) 
{
	Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* V_0 = NULL;
	{
		Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* L_0 = ((Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* L_2;
		L_2 = Comparer_1_CreateComparer_mB28E9162423F7FABE5899C1C5DE9934E645EBFF4(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* Comparer_1_CreateComparer_mB28E9162423F7FABE5899C1C5DE9934E645EBFF4_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_3, (Type_t*)L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (GenericComparer_1_tADECA8D55B3F132A735E752892B0224B9BF48588_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_7, L_8, NULL);
		return ((Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF*)CastclassClass((RuntimeObject*)L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_0038:
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_10 = V_0;
		NullCheck((Type_t*)L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(47, (Type_t*)L_10);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_12 = V_0;
		NullCheck((Type_t*)L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(56, (Type_t*)L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_17 = V_0;
		NullCheck((Type_t*)L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18;
		L_18 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(58, (Type_t*)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Type_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)CastclassClass((RuntimeObject*)L_20, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IComparable_1_tDF3C054B1D1B2CEE8F9084D2CCCDFB5F22C624E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_23;
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_25);
		NullCheck(L_22);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(163, L_22, L_24);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_27 = V_1;
		NullCheck(L_26);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(27, L_26, (Type_t*)L_27);
		if (!L_28)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (NullableComparer_1_t1CE3558ABA90E10B2EB5A52546552DAA3EF40275_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = RuntimeType_CreateInstanceForAnotherGenericParameter_m5AD0AF8C5D092750500FF193E17F311C59A6D066(L_30, L_31, NULL);
		return ((Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF*)CastclassClass((RuntimeObject*)L_32, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	}

IL_009c:
	{
		ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30* L_33 = (ObjectComparer_1_tEDA5A82D8A1C9E6E589231A081C4E580254F4B30*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectComparer_1__ctor_m5CB9035FE761D75E86D6A19AA0775C3003467B3C(L_33, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return (Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_1_System_Collections_IComparer_Compare_mE6FFDE5307C94F3F7A9180771C7F33D36D0BA800_gshared (Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___1_y;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject* L_3 = ___0_x;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ___1_y;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = ___0_x;
		RuntimeObject* L_6 = ___1_y;
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E, Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E >::Invoke(6, __this, ((*(Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)((Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)(Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))), ((*(Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)((Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)(Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)UnBox(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 8))))));
		return L_7;
	}

IL_0032:
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)2, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_mFC6710ED7108F22551111C5856F65C93BBF3CB55_gshared (Comparer_1_tF199E06DE7F0C72967C20E32139DB51B422623BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bits_BitPermuteStep2_m635AC109033719E92C7EAD83721C5F2F881E60FD_inline (uint64_t* ___0_hi, uint64_t* ___1_lo, uint64_t ___2_m, int32_t ___3_s, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t* L_0 = ___1_lo;
		int64_t L_1 = *((int64_t*)L_0);
		int32_t L_2 = ___3_s;
		uint64_t* L_3 = ___0_hi;
		int64_t L_4 = *((int64_t*)L_3);
		uint64_t L_5 = ___2_m;
		V_0 = ((int64_t)(((int64_t)(((int64_t)((uint64_t)L_1>>((int32_t)(L_2&((int32_t)63)))))^L_4))&(int64_t)L_5));
		uint64_t* L_6 = ___1_lo;
		uint64_t* L_7 = ___1_lo;
		int64_t L_8 = *((int64_t*)L_7);
		uint64_t L_9 = V_0;
		int32_t L_10 = ___3_s;
		*((int64_t*)L_6) = (int64_t)((int64_t)(L_8^((int64_t)((int64_t)L_9<<((int32_t)(L_10&((int32_t)63)))))));
		uint64_t* L_11 = ___0_hi;
		uint64_t* L_12 = ___0_hi;
		int64_t L_13 = *((int64_t*)L_12);
		uint64_t L_14 = V_0;
		*((int64_t*)L_11) = (int64_t)((int64_t)(L_13^(int64_t)L_14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpropagationU3Ek__BackingField = L_0;
		return;
	}
}
