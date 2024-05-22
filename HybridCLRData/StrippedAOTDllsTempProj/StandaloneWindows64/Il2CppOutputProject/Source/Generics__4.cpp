﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

struct U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F;
struct U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED;
struct U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392;
struct U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605;
struct U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749;
struct U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C;
struct U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1;
struct U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F;
struct U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F;
struct U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE;
struct U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA;
struct U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031;
struct U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12;
struct U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473;
struct U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518;
struct U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274;
struct U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74;
struct U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC;
struct U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A;
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90;
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C;
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773;
struct ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039;
struct ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E;
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
struct ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565;
struct ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA;
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56;
struct ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713;
struct Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C;
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F;
struct Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C;
struct Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65;
struct EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D;
struct EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5;
struct Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE;
struct Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64;
struct Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD;
struct Func_2_t84BAF71E391705D6E17965340D139A05C9BFF4A0;
struct Func_2_tF46956D65019019D93B1B110E5E05EC488B38508;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB;
struct Func_3_t5B168CA993A8917EEDE97CA95F27C4287F4CC542;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752;
struct Func_3_tF6C1103031BE014E11B9FAB50F2B76FD767638EE;
struct Func_3_t8EDE592AAEF28AD82747A4171F3E6427A0433048;
struct Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC;
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_tCDAEEF6FD796B6EEA3BF7C724CFECD905424655F;
struct Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC;
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25;
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079;
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397;
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320;
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80;
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E;
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375;
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
struct IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018;
struct IEnumerable_1_tBA4259158757D7E9A55293191376A3C4C288D5DC;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t619CE54A14FDF259F76ADA30314D02E023B882E2;
struct IEnumerator_1_t8B5708C83C0213FC035FA2F10A86CB49DCB2E418;
struct IEnumerator_1_t2ADC42E7152AD946D164EAAFD0221F24163406FA;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t675BA59944DF0651A4F586E3EECC80243DAAD7BF;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct KeyCollection_t5BFA144E65C440BF450E0EC7157FFE4667B63479;
struct KeyCollection_t9318FC1AF9A7A9987CBE12C89224F51595AAD6FF;
struct KeyCollection_t4637880FA04F7D59732F86F40FA82860903EF2D5;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B;
struct OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C;
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA;
struct ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A;
struct ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4;
struct ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138;
struct ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0;
struct Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88;
struct Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94;
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2;
struct Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D;
struct Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449;
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912;
struct Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74;
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF;
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96;
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E;
struct ValueCollection_tDDD45898682DFD7207062D81AE24401349383F5C;
struct ValueCollection_t8E60F626894DBFAC606E295B687835CA90A38428;
struct ValueCollection_t3309BFCAB7519C3C4580AB856F35E19EBDF34269;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct _CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC;
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354;
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746;
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E;
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1;
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13;
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55;
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E;
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D;
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD;
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A;
struct _SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D;
struct _SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53;
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622;
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE;
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD;
struct EntryU5BU5D_t1A6DD5821474A85B667B61B4C3D1ADDA71F1F818;
struct EntryU5BU5D_tD312821F2250A0C4C795B76BC6DB8A3F3455A211;
struct EntryU5BU5D_t5332928D5A1FCD6B6FA42D8469F0604CDE286FE9;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct IEnumerator_1U5BU5D_tABFB842A3C97DCF253D43C9513DA44AC1911FF7A;
struct SlotU5BU5D_tF3E3AEB8898E66334C7EF8E3C9C46441B03CB533;
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301;
struct SlotU5BU5D_t17FE060A682980399916BAF284C1113ADC81CCA3;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_t2603082BF4B2F5CA4AAC6DC6144092A9DD06E37A;
struct SlotU5BU5D_t45EF04D91BF8B5E605C494BE9D2512CC5FD48A1F;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct SlotU5BU5D_tD717BA65906548C13A3ED93BEB74781500DA6789;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct AssetFrameDataU5BU5D_tA0805858BB74DC603986000AAB36FD4937561084;
struct BundleFrameDataU5BU5D_t9C38E8A01CC22BD2B7BB3F73B456FC34557472B8;
struct CatalogFrameDataU5BU5D_tCBDDA8AE38F28E5D65DD9259FE9E9EABFA935DF8;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayBuffer_tBD2C8727D19489A9C0A32A2611FCC3D211B6C962;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SlotU5BU5D_tF3E3AEB8898E66334C7EF8E3C9C46441B03CB533;
struct SlotU5BU5D_t17FE060A682980399916BAF284C1113ADC81CCA3;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_t2603082BF4B2F5CA4AAC6DC6144092A9DD06E37A;
struct SlotU5BU5D_t45EF04D91BF8B5E605C494BE9D2512CC5FD48A1F;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct SlotU5BU5D_tD717BA65906548C13A3ED93BEB74781500DA6789;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	int32_t ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___comparer;
	RuntimeObject* ___U3CU3E3__comparer;
	RuntimeObject* ___source;
	RuntimeObject* ___U3CU3E3__source;
	Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* ___U3CsetU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
};
struct U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___comparer;
	RuntimeObject* ___U3CU3E3__comparer;
	RuntimeObject* ___source;
	RuntimeObject* ___U3CU3E3__source;
	Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* ___U3CsetU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
};
struct U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392 : public RuntimeObject {};
struct U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___head;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
struct U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12 : public RuntimeObject {};
struct U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518 : public RuntimeObject {};
struct U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	int32_t ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___rootIds;
	RuntimeObject* ___U3CU3E3__rootIds;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___U3CU3E4__this;
	RuntimeObject* ___U3CcurrentIteratorU3E5__1;
	bool ___U3ChasNextU3E5__2;
	int32_t ___U3CcurrentItemIdU3E5__3;
};
struct U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	int32_t ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	RuntimeObject* ___rootIds;
	RuntimeObject* ___U3CU3E3__rootIds;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___U3CU3E4__this;
	RuntimeObject* ___U3CcurrentIteratorU3E5__1;
	bool ___U3ChasNextU3E5__2;
	int32_t ___U3CcurrentItemIdU3E5__3;
};
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773 : public RuntimeObject {};
struct ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ____tail;
	Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ____head;
};
struct ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ____tail;
	Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ____head;
};
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____tail;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____head;
};
struct ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ____tail;
	Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ____head;
};
struct ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ____tail;
	Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ____head;
};
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____tail;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____head;
};
struct ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ____tail;
	Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ____head;
};
struct Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1A6DD5821474A85B667B61B4C3D1ADDA71F1F818* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5BFA144E65C440BF450E0EC7157FFE4667B63479* ____keys;
	ValueCollection_tDDD45898682DFD7207062D81AE24401349383F5C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD312821F2250A0C4C795B76BC6DB8A3F3455A211* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9318FC1AF9A7A9987CBE12C89224F51595AAD6FF* ____keys;
	ValueCollection_t8E60F626894DBFAC606E295B687835CA90A38428* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5332928D5A1FCD6B6FA42D8469F0604CDE286FE9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4637880FA04F7D59732F86F40FA82860903EF2D5* ____keys;
	ValueCollection_t3309BFCAB7519C3C4580AB856F35E19EBDF34269* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65  : public RuntimeObject
{
};
struct EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D  : public RuntimeObject
{
};
struct EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5  : public RuntimeObject
{
};
struct OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA  : public RuntimeObject
{
	RuntimeObject* ___source;
};
struct ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A  : public RuntimeObject
{
	Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* ___m_Data;
	CatalogFrameDataU5BU5D_tCBDDA8AE38F28E5D65DD9259FE9E9EABFA935DF8* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4  : public RuntimeObject
{
	Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* ___m_Data;
	AssetFrameDataU5BU5D_tA0805858BB74DC603986000AAB36FD4937561084* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138  : public RuntimeObject
{
	Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* ___m_Data;
	BundleFrameDataU5BU5D_t9C38E8A01CC22BD2B7BB3F73B456FC34557472B8* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___m_Data;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	uint32_t ___m_Version;
	uint32_t ___m_ArrayVersion;
};
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098  : public RuntimeObject
{
	IEnumerator_1U5BU5D_tABFB842A3C97DCF253D43C9513DA44AC1911FF7A* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
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
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
struct Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD 
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___items;
	int32_t ___count;
};
struct Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928 
{
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ___items;
	int32_t ___count;
};
struct Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___items;
	int32_t ___count;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C 
{
	bool ___hasValue;
	uint8_t ___value;
};
struct Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 
{
	RuntimeObject* ___Item;
	int32_t ___SequenceNumber;
};
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
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
struct UniTask_1_tC8C7A934FBFCCE7A352E9ED92F26BB4337EA0147 
{
	RuntimeObject* ___source;
	RuntimeObject* ___result;
	int16_t ___token;
};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct AssetFrameData_t0687CA219D5D690AA89C5CAF450DC188BE1608D8 
{
	int32_t ___AssetCode;
	int32_t ___BundleCode;
	int32_t ___ReferenceCount;
	float ___PercentComplete;
	int32_t ___Status;
};
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
};
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	RuntimeObject* ___runner;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BundleFrameData_tA5E51D69FEA298F7F0D0BFD9A8F734D0ECADEC28 
{
	int32_t ___BundleCode;
	int32_t ___ReferenceCount;
	float ___PercentComplete;
	int32_t ___Status;
	int32_t ___Source;
	int16_t ___LoadingOptions;
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
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 
{
	String_t* ___m_Graph;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Dependencies;
	int32_t ___m_ObjectId;
	String_t* ___m_DisplayName;
	int32_t ___m_Stream;
	int32_t ___m_Frame;
	int32_t ___m_Value;
};
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke
{
	char* ___m_Graph;
	Il2CppSafeArray* ___m_Dependencies;
	int32_t ___m_ObjectId;
	char* ___m_DisplayName;
	int32_t ___m_Stream;
	int32_t ___m_Frame;
	int32_t ___m_Value;
};
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com
{
	Il2CppChar* ___m_Graph;
	Il2CppSafeArray* ___m_Dependencies;
	int32_t ___m_ObjectId;
	Il2CppChar* ___m_DisplayName;
	int32_t ___m_Stream;
	int32_t ___m_Frame;
	int32_t ___m_Value;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 
{
	int32_t ___connId;
	int32_t ___type;
	ArrayBuffer_tBD2C8727D19489A9C0A32A2611FCC3D211B6C962* ___data;
	Exception_t* ___exception;
};
struct Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3_marshaled_pinvoke
{
	int32_t ___connId;
	int32_t ___type;
	ArrayBuffer_tBD2C8727D19489A9C0A32A2611FCC3D211B6C962* ___data;
	Exception_t_marshaled_pinvoke* ___exception;
};
struct Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3_marshaled_com
{
	int32_t ___connId;
	int32_t ___type;
	ArrayBuffer_tBD2C8727D19489A9C0A32A2611FCC3D211B6C962* ___data;
	Exception_t_marshaled_com* ___exception;
};
#pragma pack(push, tp, 1)
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Head_OffsetPadding[128];
					int32_t ___Head;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_OffsetPadding[256];
					int32_t ___Tail;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
	};
};
#pragma pack(pop, tp)
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source;
	int16_t ___token;
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
struct LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA 
{
	int32_t ___threadId;
	int32_t ___type;
	String_t* ___message;
	String_t* ___stackTrace;
};
struct LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA_marshaled_pinvoke
{
	int32_t ___threadId;
	int32_t ___type;
	char* ___message;
	char* ___stackTrace;
};
struct LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA_marshaled_com
{
	int32_t ___threadId;
	int32_t ___type;
	Il2CppChar* ___message;
	Il2CppChar* ___stackTrace;
};
struct U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 ___U3CU3E2__current;
	Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ___head;
	Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
struct U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA ___U3CU3E2__current;
	Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ___head;
	Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
struct U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___U3CU3E2__current;
	OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* ___U3CU3E4__this;
	Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___U3CU3E2__current;
	OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C* ___U3CU3E4__this;
	Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928 ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct Awaiter_tB6DD991F60A673C9002FFCEF5F20649801E63B4B 
{
	UniTask_1_tC8C7A934FBFCCE7A352E9ED92F26BB4337EA0147 ___task;
};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 
{
	RuntimeObject* ___key;
	AssetFrameData_t0687CA219D5D690AA89C5CAF450DC188BE1608D8 ___value;
};
struct KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 
{
	RuntimeObject* ___key;
	BundleFrameData_tA5E51D69FEA298F7F0D0BFD9A8F734D0ECADEC28 ___value;
};
struct Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88  : public RuntimeObject
{
	SlotU5BU5D_tF3E3AEB8898E66334C7EF8E3C9C46441B03CB533* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ____nextSegment;
};
struct Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94  : public RuntimeObject
{
	SlotU5BU5D_t17FE060A682980399916BAF284C1113ADC81CCA3* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ____nextSegment;
};
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2  : public RuntimeObject
{
	SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____nextSegment;
};
struct Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D  : public RuntimeObject
{
	SlotU5BU5D_t2603082BF4B2F5CA4AAC6DC6144092A9DD06E37A* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ____nextSegment;
};
struct Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449  : public RuntimeObject
{
	SlotU5BU5D_t45EF04D91BF8B5E605C494BE9D2512CC5FD48A1F* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ____nextSegment;
};
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912  : public RuntimeObject
{
	SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____nextSegment;
};
struct Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74  : public RuntimeObject
{
	SlotU5BU5D_tD717BA65906548C13A3ED93BEB74781500DA6789* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ____nextSegment;
};
struct Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779 
{
	Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 ___Item;
	int32_t ___SequenceNumber;
};
struct Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2 
{
	LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA ___Item;
	int32_t ___SequenceNumber;
};
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96  : public RuntimeObject
{
	TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E  : public RuntimeObject
{
	TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct CatalogFrameData_t6279FD2B744CACF3C1341B20448261AE576CDDE7 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___BuildResultHash;
};
struct ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 
{
	int32_t ___type;
	RuntimeObject* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
	Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C ___error;
};
struct ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32_marshaled_pinvoke
{
	int32_t ___type;
	Il2CppIUnknown* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
	Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C ___error;
};
struct ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32_marshaled_com
{
	int32_t ___type;
	Il2CppIUnknown* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
	Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C ___error;
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource;
};
struct ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE 
{
	int32_t ___type;
	RuntimeObject* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___connectionId;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
	Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C ___error;
};
struct ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE_marshaled_pinvoke
{
	int32_t ___type;
	Il2CppIUnknown* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___connectionId;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
	Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C ___error;
};
struct ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE_marshaled_com
{
	int32_t ___type;
	Il2CppIUnknown* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___connectionId;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
	Nullable_1_t37F6A8BEDA2983C9CB467B88E345340816A9A02C ___error;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_pinvoke
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_com
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken;
};
struct ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 
{
	int32_t ___type;
	RuntimeObject* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___connectionId;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
};
struct ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610_marshaled_pinvoke
{
	int32_t ___type;
	Il2CppIUnknown* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___connectionId;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
};
struct ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610_marshaled_com
{
	int32_t ___type;
	Il2CppIUnknown* ___param;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___connectionId;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___channelId;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F 
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_pinvoke
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_com
{
	int32_t ___playerLoopTiming;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
typedef Il2CppFullySharedGenericStruct U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044;
struct U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1 : public RuntimeObject {};
struct U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 ___U3CU3E2__current;
	Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ___head;
	Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
struct U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE ___U3CU3E2__current;
	Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ___head;
	Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
struct U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 ___U3CU3E2__current;
	Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ___head;
	Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ___tail;
	int32_t ___tailTail;
	int32_t ___headHead;
	ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* ___U3CU3E4__this;
	int32_t ___U3CheadTailU3E5__2;
	int32_t ___U3CiU3E5__3;
	Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ___U3CsU3E5__4;
	int32_t ___U3CiU3E5__5;
};
typedef Il2CppFullySharedGenericStruct U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E;
typedef Il2CppFullySharedGenericStruct U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142;
typedef Il2CppFullySharedGenericStruct U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394;
typedef Il2CppFullySharedGenericStruct U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03;
typedef Il2CppFullySharedGenericStruct U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC;
struct U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	int32_t ___U3CU3E7__wrap3;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C* ___action;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	int32_t ___U3CU3E7__wrap3;
	int32_t ___U3CindexU3E5__5;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2;
};
struct U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* ___action;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	int32_t ___U3CU3E7__wrap3;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC* ___action;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	int32_t ___U3CU3E7__wrap3;
	int32_t ___U3CindexU3E5__5;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* ___action;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	int32_t ___U3CU3E7__wrap3;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
struct U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC* ___action;
	RuntimeObject* ___U3CeU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	int32_t ___U3CU3E7__wrap3;
	int32_t ___U3CindexU3E5__5;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2;
};
typedef Il2CppFullySharedGenericStruct U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5;
struct Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B 
{
	Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 
{
	Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	CatalogFrameData_t6279FD2B744CACF3C1341B20448261AE576CDDE7 ___value;
};
struct Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287 
{
	ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 ___Item;
	int32_t ___SequenceNumber;
};
struct Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A 
{
	ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE ___Item;
	int32_t ___SequenceNumber;
};
struct Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A 
{
	ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 ___Item;
	int32_t ___SequenceNumber;
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
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* ___U3CU3E4__this;
	Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B ___U3CU3E7__wrap1;
};
struct U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* ___U3CU3E4__this;
	Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 ___U3CU3E7__wrap1;
};
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___U3CU3E2__current;
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* ___U3CU3E4__this;
	Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 ___U3CbufferU3E5__2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3;
	int32_t ___U3CiU3E5__4;
};
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C  : public MulticastDelegate_t
{
};
struct Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 
{
	Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB  : public MulticastDelegate_t
{
};
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752  : public MulticastDelegate_t
{
};
struct Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC  : public MulticastDelegate_t
{
};
struct Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* ___U3CU3E4__this;
	Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 ___U3CU3E7__wrap1;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
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
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct _SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___sourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedSourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedEnumeratorDisposeAsyncCoreDelegate;
};
struct _SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___sourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedSourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedEnumeratorDisposeAsyncCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectorAwaitCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultSelectorAwaitCoreDelegate;
};
struct _SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___sourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedSourceMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectedEnumeratorDisposeAsyncCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___selectorAwaitCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultSelectorAwaitCoreDelegate;
};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SlotU5BU5D_tF3E3AEB8898E66334C7EF8E3C9C46441B03CB533  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287 m_Items[1];

	inline Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___param), (void*)NULL);
	}
	inline Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tAE07ED46D81FA90857E9C141B3AA0B23C65DD287 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___param), (void*)NULL);
	}
};
struct SlotU5BU5D_t17FE060A682980399916BAF284C1113ADC81CCA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779 m_Items[1];

	inline Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___exception), (void*)NULL);
		#endif
	}
	inline Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tCE23EA3E79692C02E8D69B91C1686DE25CEAA779 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___exception), (void*)NULL);
		#endif
	}
};
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 m_Items[1];

	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
};
struct SlotU5BU5D_t2603082BF4B2F5CA4AAC6DC6144092A9DD06E37A  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A m_Items[1];

	inline Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___param), (void*)NULL);
	}
	inline Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t8A04BDF971FD1968D4D24D002B5D5A730EAA3A4A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___param), (void*)NULL);
	}
};
struct SlotU5BU5D_t45EF04D91BF8B5E605C494BE9D2512CC5FD48A1F  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A m_Items[1];

	inline Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___param), (void*)NULL);
	}
	inline Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t15AC292BDD4B1251B55E23F350EC9CB44538B65A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___param), (void*)NULL);
	}
};
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_tD717BA65906548C13A3ED93BEB74781500DA6789  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2 m_Items[1];

	inline Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___stackTrace), (void*)NULL);
		#endif
	}
	inline Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tB1EF61A64FA54A546C43AD5286420ACA66A38CA2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Item))->___stackTrace), (void*)NULL);
		#endif
	}
};
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A m_Items[1];

	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
};
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
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95  : public RuntimeArray
{
	ALIGN_FIELD (8) DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 m_Items[1];

	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisplayName), (void*)NULL);
		#endif
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisplayName), (void*)NULL);
		#endif
	}
};
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED_gshared (Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_gshared_inline (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22_gshared (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD_gshared (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD_gshared (Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_gshared_inline (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7_gshared (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B_gshared (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5_gshared (Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_gshared_inline (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622_gshared (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1_gshared (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m0B2B0B3DA7EEA8724D6600DAF22DD29C081EC538_gshared (Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6_gshared (ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* __this, Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m0E8DDA792A8C1AE497699FD9DC1611BFD2CC32A5_gshared (Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B_gshared (ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* __this, Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_mF49ED89410E291BB6EA8B9329EAAEA02B8DCDB0E_gshared (Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4_gshared (ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* __this, Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m0D69470074BD8068B1A889BF19D939D2BEB040BB_gshared (Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC_gshared (ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* __this, Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_mBE0E88EAE7DFE204CCEA370D7578179CBEA3D785_gshared (Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02_gshared (ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* __this, Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_gshared_inline (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E_gshared (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE_gshared (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mE9EB99555A5C49D55AD64AD5348F8398A3A56AC3_gshared (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m10C951C01865A7E005820782436AC621A20FADD3_gshared (EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D* __this, DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D_gshared (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D_gshared (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
inline void U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210 (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
inline void U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99 (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6 (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417 (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91 (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982 (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3 (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58 (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602 (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17 (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018 (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852 (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187 (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057 (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93 (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60 (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417 (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239 (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460 (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460_gshared)(__this, method);
}
inline void U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1 (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, RuntimeObject*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
inline void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared)(__this, method);
}
inline void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, RuntimeObject*, const RuntimeMethod*))Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared)(__this, ___0_comparer, method);
}
inline bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287 (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, int32_t, const RuntimeMethod*))Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2 (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, int32_t, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared)(__this, method);
}
inline void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared)(__this, ___0_comparer, method);
}
inline bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared)(__this, ___0_value, method);
}
inline void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, int32_t, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared)(__this, method);
}
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline void U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8 (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044*, const RuntimeMethod*))U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8_gshared)(__this, method);
}
inline void U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044*, RuntimeObject*, const RuntimeMethod*))U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9 (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, const RuntimeMethod*))U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4 (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4_gshared)(__this, method);
}
inline Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED (Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 (*) (Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED_gshared)(__this, method);
}
inline KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_inline (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 (*) (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*, const RuntimeMethod*))Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22 (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*, const RuntimeMethod*))Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22_gshared)(__this, method);
}
inline void Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*, const RuntimeMethod*))Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28 (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, const RuntimeMethod*))U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161_gshared)(__this, method);
}
inline Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD (Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B (*) (Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD_gshared)(__this, method);
}
inline KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_inline (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 (*) (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*, const RuntimeMethod*))Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7 (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*, const RuntimeMethod*))Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*, const RuntimeMethod*))Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700 (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, const RuntimeMethod*))U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80_gshared)(__this, method);
}
inline Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5 (Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 (*) (Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5_gshared)(__this, method);
}
inline KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_inline (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 (*) (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*, const RuntimeMethod*))Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622 (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*, const RuntimeMethod*))Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622_gshared)(__this, method);
}
inline void Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1 (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*, const RuntimeMethod*))Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1_gshared)(__this, method);
}
inline void U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9 (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*, const RuntimeMethod*))U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9_gshared)(__this, method);
}
inline int32_t Segment_get_FreezeOffset_m0B2B0B3DA7EEA8724D6600DAF22DD29C081EC538 (Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*, const RuntimeMethod*))Segment_get_FreezeOffset_m0B2B0B3DA7EEA8724D6600DAF22DD29C081EC538_gshared)(__this, method);
}
inline ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6 (ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* __this, Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 (*) (ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039*, Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6_gshared)(__this, ___0_segment, ___1_i, method);
}
inline int32_t Segment_get_FreezeOffset_m0E8DDA792A8C1AE497699FD9DC1611BFD2CC32A5 (Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*, const RuntimeMethod*))Segment_get_FreezeOffset_m0E8DDA792A8C1AE497699FD9DC1611BFD2CC32A5_gshared)(__this, method);
}
inline Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B (ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* __this, Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 (*) (ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E*, Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B_gshared)(__this, ___0_segment, ___1_i, method);
}
inline int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582 (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, const RuntimeMethod*))Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9 (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4*, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9_gshared)(__this, ___0_segment, ___1_i, method);
}
inline int32_t Segment_get_FreezeOffset_mF49ED89410E291BB6EA8B9329EAAEA02B8DCDB0E (Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*, const RuntimeMethod*))Segment_get_FreezeOffset_mF49ED89410E291BB6EA8B9329EAAEA02B8DCDB0E_gshared)(__this, method);
}
inline ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4 (ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* __this, Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE (*) (ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565*, Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4_gshared)(__this, ___0_segment, ___1_i, method);
}
inline int32_t Segment_get_FreezeOffset_m0D69470074BD8068B1A889BF19D939D2BEB040BB (Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*, const RuntimeMethod*))Segment_get_FreezeOffset_m0D69470074BD8068B1A889BF19D939D2BEB040BB_gshared)(__this, method);
}
inline ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC (ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* __this, Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 (*) (ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA*, Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC_gshared)(__this, ___0_segment, ___1_i, method);
}
inline int32_t Segment_get_FreezeOffset_mBE0E88EAE7DFE204CCEA370D7578179CBEA3D785 (Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*, const RuntimeMethod*))Segment_get_FreezeOffset_mBE0E88EAE7DFE204CCEA370D7578179CBEA3D785_gshared)(__this, method);
}
inline LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02 (ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* __this, Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA (*) (ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713*, Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02_gshared)(__this, ___0_segment, ___1_i, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
inline void U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*, const RuntimeMethod*))U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
inline void U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*, RuntimeObject*, const RuntimeMethod*))U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
inline void U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4 (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142*, const RuntimeMethod*))U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4_gshared)(__this, method);
}
inline void U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142*, RuntimeObject*, const RuntimeMethod*))U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394*, const RuntimeMethod*))U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C_gshared)(__this, method);
}
inline void U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4 (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394*, RuntimeObject*, const RuntimeMethod*))U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*, const RuntimeMethod*))U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC_gshared)(__this, method);
}
inline void U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*, RuntimeObject*, const RuntimeMethod*))U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2 (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*, const RuntimeMethod*))U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2_gshared)(__this, method);
}
inline void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*, RuntimeObject*, const RuntimeMethod*))U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56 (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E*, const RuntimeMethod*))U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56_gshared)(__this, method);
}
inline void U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717 (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E*, RuntimeObject*, const RuntimeMethod*))U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075 (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4*, const RuntimeMethod*))U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075_gshared)(__this, method);
}
inline void U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50 (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4*, RuntimeObject*, const RuntimeMethod*))U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5 (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*, const RuntimeMethod*))U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5_gshared)(__this, method);
}
inline void U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0 (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*, RuntimeObject*, const RuntimeMethod*))U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66 (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*, const RuntimeMethod*))U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66_gshared)(__this, method);
}
inline void U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96 (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*, RuntimeObject*, const RuntimeMethod*))U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7 (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*, const RuntimeMethod*))U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7_gshared)(__this, method);
}
inline void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807 (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*, RuntimeObject*, const RuntimeMethod*))U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807_gshared)(__this, ___0_stateMachine, method);
}
inline void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*, const RuntimeMethod*))U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E_gshared)(__this, method);
}
inline void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*, RuntimeObject*, const RuntimeMethod*))U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 UniTask_SwitchToMainThread_mBC162C95F0ED605F8E5416A60CCA153E0993CBF1 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29 (SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
inline void U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3 (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5*, const RuntimeMethod*))U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3_gshared)(__this, method);
}
inline void U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250 (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5*, RuntimeObject*, const RuntimeMethod*))U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250_gshared)(__this, ___0_stateMachine, method);
}
inline void Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31 (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
inline RuntimeObject* TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_inline (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE*, const RuntimeMethod*))TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_gshared_inline)(__this, method);
}
inline int32_t Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_inline (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
inline RuntimeObject* Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01 (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared)(__this, ___0_id, method);
}
inline void Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0 (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared)(__this, ___0_id, method);
}
inline void U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6 (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274*, int32_t, const RuntimeMethod*))U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274*, const RuntimeMethod*))U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F_gshared)(__this, method);
}
inline void Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_mE9EB99555A5C49D55AD64AD5348F8398A3A56AC3 (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mE9EB99555A5C49D55AD64AD5348F8398A3A56AC3_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m10C951C01865A7E005820782436AC621A20FADD3 (EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D* __this, DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D*, DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m10C951C01865A7E005820782436AC621A20FADD3_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D_gshared)(__this, ___0_elements, ___1_count, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*>(__this + _offset);
	U3CDisposeAsyncU3Ed__18_MoveNext_m4D8876AC537AE5F75457CFC6147DA6F652C59210(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99_gshared (U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*>(__this + _offset);
	U3CDisposeAsyncU3Ed__18_SetStateMachine_m22A95B5DD30D7569EC27D61505B74018312A6E99(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*>(__this + _offset);
	U3CDisposeAsyncU3Ed__21_MoveNext_m71E78E7F0D77F88461D46161BE399AA947B3D7C6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F_gshared (U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*>(__this + _offset);
	U3CDisposeAsyncU3Ed__21_SetStateMachine_m8D8BE376527CB95432CF0510B42EB620F2EBBC8F(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*>(__this + _offset);
	U3CDisposeAsyncU3Ed__21_MoveNext_m24AB22E692D4E2EE74F958EEF3CCF0AAD479B67F(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA_gshared (U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*>(__this + _offset);
	U3CDisposeAsyncU3Ed__21_SetStateMachine_mFCA14E5BBAF1DCA3E14C444C4BAA7DB2C77D5BDA(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_SelectMany_t5F0438964D43258A2404AE58C3E6CF2F6A05294A* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8*>(__this + _offset);
	U3CDisposeAsyncU3Ed__26_MoveNext_mEAEA7707780166248E17790FD4A70D6460D18417(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB_gshared (U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__26_t086ED907A1DA461850C7C13F38E40B6E2DC804E8*>(__this + _offset);
	U3CDisposeAsyncU3Ed__26_SetStateMachine_m32899D685ADDEB0E1BDC33289A5DF78CD4AFE6AB(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),12));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_CombineLatest_t140C724924F9D574B2C92DB7FA4E398102F083FC* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),12));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5*>(__this + _offset);
	U3CDisposeAsyncU3Ed__27_MoveNext_mF51D08064BB1337C857E7D848DAED1F5B4B6672C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91_gshared (U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__27_t2E8ADE0520F9050280DC4DC1E0308C0F383AFCB5*>(__this + _offset);
	U3CDisposeAsyncU3Ed__27_SetStateMachine_mA57C6FEBF29E65ABA816A313AE93A894DCCC9A91(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),13));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),12));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_SelectManyAwaitWithCancellation_t1377CB768DDFCBBEF8FA7E5B60EA9376D3DCDE53* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),12));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919*>(__this + _offset);
	U3CDisposeAsyncU3Ed__32_MoveNext_m939061E691D55244B0778DC94C4A525A86608982(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3_gshared (U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__32_tECFB4179B2FF468D59B2DC3FD696B89B031F5919*>(__this + _offset);
	U3CDisposeAsyncU3Ed__32_SetStateMachine_mF29868C0A56FA6FD521B59CFAD39302E596455F3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c8_1;
			}
		}
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_4 = V_1;
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),13));
			if (!L_5)
			{
				goto IL_0083_1;
			}
		}
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_6 = V_1;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
			L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
			V_3 = L_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9;
			L_9 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_10)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12 = V_2;
			__this->___U3CU3Eu__1 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_13 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_13, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14 = __this->___U3CU3Eu__1;
			V_2 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_15 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state = L_16;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0083_1:
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_17 = V_1;
			RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),12));
			if (!L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			_SelectManyAwait_t40659A3A53837DAC9BBAB1389D01501F6486E45D* L_19 = V_1;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),12));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_23)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_2;
			__this->___U3CU3Eu__1 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_26, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0119;
		}

IL_00c8_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = __this->___U3CU3Eu__1;
			V_2 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state = L_29;
		}

IL_00e4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00eb_1:
		{
			goto IL_0106;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_30;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_31 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_32 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_31, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0119;
	}

IL_0106:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_33, NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC*>(__this + _offset);
	U3CDisposeAsyncU3Ed__32_MoveNext_m6841B3586C1883B894BDBA0602091CC7246B2A58(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602_gshared (U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__32_tF67F132D423CFDCC63994B7BFE4A33CB72970ACC*>(__this + _offset);
	U3CDisposeAsyncU3Ed__32_SetStateMachine_mD560A98216A79B4B9685D58A831EF830D35B1602(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0068_1;
				}
				case 1:
				{
					goto IL_00d3_1;
				}
				case 2:
				{
					goto IL_013b_1;
				}
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
			if (!L_4)
			{
				goto IL_008b_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0084_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_018c;
		}

IL_0068_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0084_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_008b_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),14));
			if (!L_17)
			{
				goto IL_00f6_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),14));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_00ef_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_018c;
		}

IL_00d3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_00ef_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00f6_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),19));
			if (!L_30)
			{
				goto IL_015e_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),19));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_0157_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_018c;
		}

IL_013b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_0157_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_015e_1:
		{
			goto IL_0179;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0160;
		}
		throw e;
	}

CATCH_0160:
	{
		Exception_t* L_42 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_42;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_44 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_43, L_44, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_018c;
	}

IL_0179:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_45 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_45, NULL);
	}

IL_018c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*>(__this + _offset);
	U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49*>(__this + _offset);
	U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_006c_1;
				}
				case 1:
				{
					goto IL_00d7_1;
				}
				case 2:
				{
					goto IL_0142_1;
				}
				case 3:
				{
					goto IL_01aa_1;
				}
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11));
			if (!L_4)
			{
				goto IL_008f_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_01fb;
		}

IL_006c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0088_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_008f_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),16));
			if (!L_17)
			{
				goto IL_00fa_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),16));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_00f3_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_01fb;
		}

IL_00d7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_00f3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00fa_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),21));
			if (!L_30)
			{
				goto IL_0165_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),21));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_015e_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_01fb;
		}

IL_0142_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_015e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0165_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),26));
			if (!L_43)
			{
				goto IL_01cd_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),26));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01c6_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_01fb;
		}

IL_01aa_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01c6_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01cd_1:
		{
			goto IL_01e8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01cf;
		}
		throw e;
	}

CATCH_01cf:
	{
		Exception_t* L_55 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_55;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_56 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_57 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_56, L_57, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01fb;
	}

IL_01e8:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_58 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_58, NULL);
	}

IL_01fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*>(__this + _offset);
	U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20*>(__this + _offset);
	U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0070_1;
				}
				case 1:
				{
					goto IL_00db_1;
				}
				case 2:
				{
					goto IL_0146_1;
				}
				case 3:
				{
					goto IL_01b1_1;
				}
				case 4:
				{
					goto IL_0219_1;
				}
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),13));
			if (!L_4)
			{
				goto IL_0093_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_008c_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_026a;
		}

IL_0070_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_008c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0093_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),18));
			if (!L_17)
			{
				goto IL_00fe_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),18));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_00f7_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_026a;
		}

IL_00db_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_00f7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00fe_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),23));
			if (!L_30)
			{
				goto IL_0169_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),23));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_0162_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_026a;
		}

IL_0146_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_0162_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0169_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),28));
			if (!L_43)
			{
				goto IL_01d4_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),28));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01cd_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_026a;
		}

IL_01b1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01cd_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01d4_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),33));
			if (!L_56)
			{
				goto IL_023c_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_0235_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_026a;
		}

IL_0219_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_0235_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_023c_1:
		{
			goto IL_0257;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_023e;
		}
		throw e;
	}

CATCH_023e:
	{
		Exception_t* L_68 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_68;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_69 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_70 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_69, L_70, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_026a;
	}

IL_0257:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_71 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_71, NULL);
	}

IL_026a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*>(__this + _offset);
	U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9*>(__this + _offset);
	U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0074_1;
				}
				case 1:
				{
					goto IL_00df_1;
				}
				case 2:
				{
					goto IL_014a_1;
				}
				case 3:
				{
					goto IL_01b5_1;
				}
				case 4:
				{
					goto IL_0220_1;
				}
				case 5:
				{
					goto IL_0288_1;
				}
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),15));
			if (!L_4)
			{
				goto IL_0097_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),15));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0090_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_02d9;
		}

IL_0074_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0090_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0097_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),20));
			if (!L_17)
			{
				goto IL_0102_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),20));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_00fb_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_02d9;
		}

IL_00df_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_00fb_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0102_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),25));
			if (!L_30)
			{
				goto IL_016d_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),25));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_0166_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_02d9;
		}

IL_014a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_0166_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_016d_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),30));
			if (!L_43)
			{
				goto IL_01d8_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),30));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01d1_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_02d9;
		}

IL_01b5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01d1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01d8_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),35));
			if (!L_56)
			{
				goto IL_0243_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),35));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_023c_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_02d9;
		}

IL_0220_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_023c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0243_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_68 = V_1;
			RuntimeObject* L_69 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_68, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),40));
			if (!L_69)
			{
				goto IL_02ab_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_70 = V_1;
			RuntimeObject* L_71 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_70, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),40));
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_3 = L_72;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_74)
			{
				goto IL_02a4_1;
			}
		}
		{
			int32_t L_75 = 5;
			V_0 = L_75;
			__this->___U3CU3E1__state = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_2;
			__this->___U3CU3Eu__1 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_77 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_77, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_02d9;
		}

IL_0288_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = __this->___U3CU3Eu__1;
			V_2 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
		}

IL_02a4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_02ab_1:
		{
			goto IL_02c6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02ad;
		}
		throw e;
	}

CATCH_02ad:
	{
		Exception_t* L_81 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_81;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_83 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_82, L_83, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_02d9;
	}

IL_02c6:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_84 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_84, NULL);
	}

IL_02d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*>(__this + _offset);
	U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF*>(__this + _offset);
	U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0078_1;
				}
				case 1:
				{
					goto IL_00e3_1;
				}
				case 2:
				{
					goto IL_014e_1;
				}
				case 3:
				{
					goto IL_01b9_1;
				}
				case 4:
				{
					goto IL_0224_1;
				}
				case 5:
				{
					goto IL_028f_1;
				}
				case 6:
				{
					goto IL_02f7_1;
				}
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),17));
			if (!L_4)
			{
				goto IL_009b_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),17));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0094_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_0078_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0094_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009b_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),22));
			if (!L_17)
			{
				goto IL_0106_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),22));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_00ff_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_00e3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_00ff_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0106_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),27));
			if (!L_30)
			{
				goto IL_0171_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),27));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_016a_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_014e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_016a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0171_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),32));
			if (!L_43)
			{
				goto IL_01dc_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),32));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01d5_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_01b9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01d5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01dc_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),37));
			if (!L_56)
			{
				goto IL_0247_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),37));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_0240_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_0224_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_0240_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0247_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_68 = V_1;
			RuntimeObject* L_69 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_68, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),42));
			if (!L_69)
			{
				goto IL_02b2_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_70 = V_1;
			RuntimeObject* L_71 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_70, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),42));
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_3 = L_72;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_74)
			{
				goto IL_02ab_1;
			}
		}
		{
			int32_t L_75 = 5;
			V_0 = L_75;
			__this->___U3CU3E1__state = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_2;
			__this->___U3CU3Eu__1 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_77 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_77, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_028f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = __this->___U3CU3Eu__1;
			V_2 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
		}

IL_02ab_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_02b2_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_81 = V_1;
			RuntimeObject* L_82 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_81, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),47));
			if (!L_82)
			{
				goto IL_031a_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_83 = V_1;
			RuntimeObject* L_84 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_83, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),47));
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_3 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_87)
			{
				goto IL_0313_1;
			}
		}
		{
			int32_t L_88 = 6;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_2;
			__this->___U3CU3Eu__1 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_90 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_90, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0348;
		}

IL_02f7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__1;
			V_2 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_0313_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_031a_1:
		{
			goto IL_0335;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_031c;
		}
		throw e;
	}

CATCH_031c:
	{
		Exception_t* L_94 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_94;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_95 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_96 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_95, L_96, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0348;
	}

IL_0335:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_97 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_97, NULL);
	}

IL_0348:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*>(__this + _offset);
	U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456*>(__this + _offset);
	U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_007c_1;
				}
				case 1:
				{
					goto IL_00e7_1;
				}
				case 2:
				{
					goto IL_0152_1;
				}
				case 3:
				{
					goto IL_01bd_1;
				}
				case 4:
				{
					goto IL_0228_1;
				}
				case 5:
				{
					goto IL_0293_1;
				}
				case 6:
				{
					goto IL_02fe_1;
				}
				case 7:
				{
					goto IL_0366_1;
				}
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),19));
			if (!L_4)
			{
				goto IL_009f_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),19));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_0098_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_007c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_0098_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009f_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),24));
			if (!L_17)
			{
				goto IL_010a_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),24));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_0103_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_00e7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_0103_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_010a_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),29));
			if (!L_30)
			{
				goto IL_0175_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),29));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_016e_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_0152_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_016e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0175_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),34));
			if (!L_43)
			{
				goto IL_01e0_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),34));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01d9_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_01bd_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01d9_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01e0_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),39));
			if (!L_56)
			{
				goto IL_024b_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),39));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_0244_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_0228_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_0244_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_024b_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_68 = V_1;
			RuntimeObject* L_69 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_68, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),44));
			if (!L_69)
			{
				goto IL_02b6_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_70 = V_1;
			RuntimeObject* L_71 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_70, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),44));
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_3 = L_72;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_74)
			{
				goto IL_02af_1;
			}
		}
		{
			int32_t L_75 = 5;
			V_0 = L_75;
			__this->___U3CU3E1__state = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_2;
			__this->___U3CU3Eu__1 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_77 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_77, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_0293_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = __this->___U3CU3Eu__1;
			V_2 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
		}

IL_02af_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_02b6_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_81 = V_1;
			RuntimeObject* L_82 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_81, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),49));
			if (!L_82)
			{
				goto IL_0321_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_83 = V_1;
			RuntimeObject* L_84 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_83, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),49));
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_3 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_87)
			{
				goto IL_031a_1;
			}
		}
		{
			int32_t L_88 = 6;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_2;
			__this->___U3CU3Eu__1 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_90 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_90, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_02fe_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__1;
			V_2 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_031a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0321_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_94 = V_1;
			RuntimeObject* L_95 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_94, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),54));
			if (!L_95)
			{
				goto IL_0389_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_96 = V_1;
			RuntimeObject* L_97 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_96, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),54));
			NullCheck((RuntimeObject*)L_97);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_98;
			L_98 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_97);
			V_3 = L_98;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_99;
			L_99 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_99;
			bool L_100;
			L_100 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_100)
			{
				goto IL_0382_1;
			}
		}
		{
			int32_t L_101 = 7;
			V_0 = L_101;
			__this->___U3CU3E1__state = L_101;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_102 = V_2;
			__this->___U3CU3Eu__1 = L_102;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_103 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_103, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_03b7;
		}

IL_0366_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_104 = __this->___U3CU3Eu__1;
			V_2 = L_104;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_105 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_105, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_106 = (-1);
			V_0 = L_106;
			__this->___U3CU3E1__state = L_106;
		}

IL_0382_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0389_1:
		{
			goto IL_03a4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_038b;
		}
		throw e;
	}

CATCH_038b:
	{
		Exception_t* L_107 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_107;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_108 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_109 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_108, L_109, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03b7;
	}

IL_03a4:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_110, NULL);
	}

IL_03b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*>(__this + _offset);
	U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7*>(__this + _offset);
	U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0080_1;
				}
				case 1:
				{
					goto IL_00eb_1;
				}
				case 2:
				{
					goto IL_0156_1;
				}
				case 3:
				{
					goto IL_01c1_1;
				}
				case 4:
				{
					goto IL_022c_1;
				}
				case 5:
				{
					goto IL_0297_1;
				}
				case 6:
				{
					goto IL_0302_1;
				}
				case 7:
				{
					goto IL_036d_1;
				}
				case 8:
				{
					goto IL_03d5_1;
				}
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),21));
			if (!L_4)
			{
				goto IL_00a3_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),21));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_0080_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_009c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00a3_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),26));
			if (!L_17)
			{
				goto IL_010e_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),26));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_0107_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_00eb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_0107_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_010e_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),31));
			if (!L_30)
			{
				goto IL_0179_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),31));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_0172_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_0156_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_0172_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0179_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),36));
			if (!L_43)
			{
				goto IL_01e4_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),36));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01dd_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_01c1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01dd_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01e4_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),41));
			if (!L_56)
			{
				goto IL_024f_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),41));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_0248_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_022c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_0248_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_024f_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_68 = V_1;
			RuntimeObject* L_69 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_68, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),46));
			if (!L_69)
			{
				goto IL_02ba_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_70 = V_1;
			RuntimeObject* L_71 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_70, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),46));
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_3 = L_72;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_74)
			{
				goto IL_02b3_1;
			}
		}
		{
			int32_t L_75 = 5;
			V_0 = L_75;
			__this->___U3CU3E1__state = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_2;
			__this->___U3CU3Eu__1 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_77 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_77, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_0297_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = __this->___U3CU3Eu__1;
			V_2 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
		}

IL_02b3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_02ba_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_81 = V_1;
			RuntimeObject* L_82 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_81, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),51));
			if (!L_82)
			{
				goto IL_0325_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_83 = V_1;
			RuntimeObject* L_84 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_83, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),51));
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_3 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_87)
			{
				goto IL_031e_1;
			}
		}
		{
			int32_t L_88 = 6;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_2;
			__this->___U3CU3Eu__1 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_90 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_90, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_0302_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__1;
			V_2 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_031e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0325_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_94 = V_1;
			RuntimeObject* L_95 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_94, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),56));
			if (!L_95)
			{
				goto IL_0390_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_96 = V_1;
			RuntimeObject* L_97 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_96, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),56));
			NullCheck((RuntimeObject*)L_97);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_98;
			L_98 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_97);
			V_3 = L_98;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_99;
			L_99 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_99;
			bool L_100;
			L_100 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_100)
			{
				goto IL_0389_1;
			}
		}
		{
			int32_t L_101 = 7;
			V_0 = L_101;
			__this->___U3CU3E1__state = L_101;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_102 = V_2;
			__this->___U3CU3Eu__1 = L_102;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_103 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_103, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_036d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_104 = __this->___U3CU3Eu__1;
			V_2 = L_104;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_105 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_105, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_106 = (-1);
			V_0 = L_106;
			__this->___U3CU3E1__state = L_106;
		}

IL_0389_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0390_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_107 = V_1;
			RuntimeObject* L_108 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_107, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),61));
			if (!L_108)
			{
				goto IL_03f8_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_109 = V_1;
			RuntimeObject* L_110 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_109, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),61));
			NullCheck((RuntimeObject*)L_110);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_111;
			L_111 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_110);
			V_3 = L_111;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_112;
			L_112 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_112;
			bool L_113;
			L_113 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_113)
			{
				goto IL_03f1_1;
			}
		}
		{
			int32_t L_114 = 8;
			V_0 = L_114;
			__this->___U3CU3E1__state = L_114;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_115 = V_2;
			__this->___U3CU3Eu__1 = L_115;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_116 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_116, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0426;
		}

IL_03d5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_117 = __this->___U3CU3Eu__1;
			V_2 = L_117;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_118 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_118, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_119 = (-1);
			V_0 = L_119;
			__this->___U3CU3E1__state = L_119;
		}

IL_03f1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_03f8_1:
		{
			goto IL_0413;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03fa;
		}
		throw e;
	}

CATCH_03fa:
	{
		Exception_t* L_120 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_120;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_121 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_122 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_121, L_122, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0426;
	}

IL_0413:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_123 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_123, NULL);
	}

IL_0426:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*>(__this + _offset);
	U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D*>(__this + _offset);
	U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0084_1;
				}
				case 1:
				{
					goto IL_00ef_1;
				}
				case 2:
				{
					goto IL_015a_1;
				}
				case 3:
				{
					goto IL_01c5_1;
				}
				case 4:
				{
					goto IL_0230_1;
				}
				case 5:
				{
					goto IL_029b_1;
				}
				case 6:
				{
					goto IL_0306_1;
				}
				case 7:
				{
					goto IL_0371_1;
				}
				case 8:
				{
					goto IL_03dc_1;
				}
				case 9:
				{
					goto IL_0445_1;
				}
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),23));
			if (!L_4)
			{
				goto IL_00a7_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),23));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00a0_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_0084_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00a0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00a7_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),28));
			if (!L_17)
			{
				goto IL_0112_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),28));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_010b_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_00ef_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_010b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0112_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),33));
			if (!L_30)
			{
				goto IL_017d_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_0176_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_015a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_0176_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_017d_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),38));
			if (!L_43)
			{
				goto IL_01e8_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),38));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01e1_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_01c5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01e1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01e8_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),43));
			if (!L_56)
			{
				goto IL_0253_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),43));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_024c_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_0230_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_024c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0253_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_68 = V_1;
			RuntimeObject* L_69 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_68, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),48));
			if (!L_69)
			{
				goto IL_02be_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_70 = V_1;
			RuntimeObject* L_71 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_70, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),48));
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_3 = L_72;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_74)
			{
				goto IL_02b7_1;
			}
		}
		{
			int32_t L_75 = 5;
			V_0 = L_75;
			__this->___U3CU3E1__state = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_2;
			__this->___U3CU3Eu__1 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_77 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_77, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_029b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = __this->___U3CU3Eu__1;
			V_2 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
		}

IL_02b7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_02be_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_81 = V_1;
			RuntimeObject* L_82 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_81, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),53));
			if (!L_82)
			{
				goto IL_0329_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_83 = V_1;
			RuntimeObject* L_84 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_83, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),53));
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_3 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_87)
			{
				goto IL_0322_1;
			}
		}
		{
			int32_t L_88 = 6;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_2;
			__this->___U3CU3Eu__1 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_90 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_90, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_0306_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__1;
			V_2 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_0322_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0329_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_94 = V_1;
			RuntimeObject* L_95 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_94, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),58));
			if (!L_95)
			{
				goto IL_0394_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_96 = V_1;
			RuntimeObject* L_97 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_96, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),58));
			NullCheck((RuntimeObject*)L_97);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_98;
			L_98 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_97);
			V_3 = L_98;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_99;
			L_99 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_99;
			bool L_100;
			L_100 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_100)
			{
				goto IL_038d_1;
			}
		}
		{
			int32_t L_101 = 7;
			V_0 = L_101;
			__this->___U3CU3E1__state = L_101;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_102 = V_2;
			__this->___U3CU3Eu__1 = L_102;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_103 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_103, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_0371_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_104 = __this->___U3CU3Eu__1;
			V_2 = L_104;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_105 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_105, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_106 = (-1);
			V_0 = L_106;
			__this->___U3CU3E1__state = L_106;
		}

IL_038d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0394_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_107 = V_1;
			RuntimeObject* L_108 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_107, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),63));
			if (!L_108)
			{
				goto IL_03ff_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_109 = V_1;
			RuntimeObject* L_110 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_109, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),63));
			NullCheck((RuntimeObject*)L_110);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_111;
			L_111 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_110);
			V_3 = L_111;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_112;
			L_112 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_112;
			bool L_113;
			L_113 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_113)
			{
				goto IL_03f8_1;
			}
		}
		{
			int32_t L_114 = 8;
			V_0 = L_114;
			__this->___U3CU3E1__state = L_114;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_115 = V_2;
			__this->___U3CU3Eu__1 = L_115;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_116 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_116, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_03dc_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_117 = __this->___U3CU3Eu__1;
			V_2 = L_117;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_118 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_118, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_119 = (-1);
			V_0 = L_119;
			__this->___U3CU3E1__state = L_119;
		}

IL_03f8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_03ff_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_120 = V_1;
			RuntimeObject* L_121 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_120, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),68));
			if (!L_121)
			{
				goto IL_0468_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_122 = V_1;
			RuntimeObject* L_123 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_122, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),68));
			NullCheck((RuntimeObject*)L_123);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_124;
			L_124 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_123);
			V_3 = L_124;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125;
			L_125 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_125;
			bool L_126;
			L_126 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_126)
			{
				goto IL_0461_1;
			}
		}
		{
			int32_t L_127 = ((int32_t)9);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_128 = V_2;
			__this->___U3CU3Eu__1 = L_128;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_129 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_129, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0496;
		}

IL_0445_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_130 = __this->___U3CU3Eu__1;
			V_2 = L_130;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_131 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_131, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_132 = (-1);
			V_0 = L_132;
			__this->___U3CU3E1__state = L_132;
		}

IL_0461_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0468_1:
		{
			goto IL_0483;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_046a;
		}
		throw e;
	}

CATCH_046a:
	{
		Exception_t* L_133 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_133;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_134 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_135 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_134, L_135, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0496;
	}

IL_0483:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_136 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_136, NULL);
	}

IL_0496:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*>(__this + _offset);
	U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3*>(__this + _offset);
	U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0088_1;
				}
				case 1:
				{
					goto IL_00f3_1;
				}
				case 2:
				{
					goto IL_015e_1;
				}
				case 3:
				{
					goto IL_01c9_1;
				}
				case 4:
				{
					goto IL_0234_1;
				}
				case 5:
				{
					goto IL_029f_1;
				}
				case 6:
				{
					goto IL_030a_1;
				}
				case 7:
				{
					goto IL_0375_1;
				}
				case 8:
				{
					goto IL_03e0_1;
				}
				case 9:
				{
					goto IL_044c_1;
				}
				case 10:
				{
					goto IL_04b5_1;
				}
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_3 = V_1;
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),25));
			if (!L_4)
			{
				goto IL_00ab_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_5 = V_1;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),25));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00a4_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_12, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_0088_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = __this->___U3CU3Eu__1;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state = L_15;
		}

IL_00a4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00ab_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_16 = V_1;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),30));
			if (!L_17)
			{
				goto IL_0116_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_18 = V_1;
			RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),30));
			NullCheck((RuntimeObject*)L_19);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_20;
			L_20 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			V_3 = L_20;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21;
			L_21 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_22)
			{
				goto IL_010f_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state = L_23;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = V_2;
			__this->___U3CU3Eu__1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_25 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_25, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_00f3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = __this->___U3CU3Eu__1;
			V_2 = L_26;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
		}

IL_010f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0116_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_29 = V_1;
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),35));
			if (!L_30)
			{
				goto IL_0181_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_31 = V_1;
			RuntimeObject* L_32 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),35));
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_3 = L_33;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_35)
			{
				goto IL_017a_1;
			}
		}
		{
			int32_t L_36 = 2;
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_2;
			__this->___U3CU3Eu__1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_38, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_015e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__1;
			V_2 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
		}

IL_017a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0181_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_42 = V_1;
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),40));
			if (!L_43)
			{
				goto IL_01ec_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_44 = V_1;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),40));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_3 = L_46;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_48)
			{
				goto IL_01e5_1;
			}
		}
		{
			int32_t L_49 = 3;
			V_0 = L_49;
			__this->___U3CU3E1__state = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_2;
			__this->___U3CU3Eu__1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_51, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_01c9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = __this->___U3CU3Eu__1;
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state = L_54;
		}

IL_01e5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_01ec_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_55 = V_1;
			RuntimeObject* L_56 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),45));
			if (!L_56)
			{
				goto IL_0257_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_57 = V_1;
			RuntimeObject* L_58 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),45));
			NullCheck((RuntimeObject*)L_58);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_59;
			L_59 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
			V_3 = L_59;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60;
			L_60 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_60;
			bool L_61;
			L_61 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_61)
			{
				goto IL_0250_1;
			}
		}
		{
			int32_t L_62 = 4;
			V_0 = L_62;
			__this->___U3CU3E1__state = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = V_2;
			__this->___U3CU3Eu__1 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_64 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_64, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_65 = __this->___U3CU3Eu__1;
			V_2 = L_65;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_66 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_66, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state = L_67;
		}

IL_0250_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0257_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_68 = V_1;
			RuntimeObject* L_69 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_68, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),50));
			if (!L_69)
			{
				goto IL_02c2_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_70 = V_1;
			RuntimeObject* L_71 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_70, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),50));
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_3 = L_72;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_74)
			{
				goto IL_02bb_1;
			}
		}
		{
			int32_t L_75 = 5;
			V_0 = L_75;
			__this->___U3CU3E1__state = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_2;
			__this->___U3CU3Eu__1 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_77 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_77, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_029f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = __this->___U3CU3Eu__1;
			V_2 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state = L_80;
		}

IL_02bb_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_02c2_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_81 = V_1;
			RuntimeObject* L_82 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_81, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),55));
			if (!L_82)
			{
				goto IL_032d_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_83 = V_1;
			RuntimeObject* L_84 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_83, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),55));
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_3 = L_85;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_87)
			{
				goto IL_0326_1;
			}
		}
		{
			int32_t L_88 = 6;
			V_0 = L_88;
			__this->___U3CU3E1__state = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_2;
			__this->___U3CU3Eu__1 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_90 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_90, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_030a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = __this->___U3CU3Eu__1;
			V_2 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state = L_93;
		}

IL_0326_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_032d_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_94 = V_1;
			RuntimeObject* L_95 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_94, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),60));
			if (!L_95)
			{
				goto IL_0398_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_96 = V_1;
			RuntimeObject* L_97 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_96, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),60));
			NullCheck((RuntimeObject*)L_97);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_98;
			L_98 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_97);
			V_3 = L_98;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_99;
			L_99 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_99;
			bool L_100;
			L_100 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_100)
			{
				goto IL_0391_1;
			}
		}
		{
			int32_t L_101 = 7;
			V_0 = L_101;
			__this->___U3CU3E1__state = L_101;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_102 = V_2;
			__this->___U3CU3Eu__1 = L_102;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_103 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_103, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_0375_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_104 = __this->___U3CU3Eu__1;
			V_2 = L_104;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_105 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_105, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_106 = (-1);
			V_0 = L_106;
			__this->___U3CU3E1__state = L_106;
		}

IL_0391_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0398_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_107 = V_1;
			RuntimeObject* L_108 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_107, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),65));
			if (!L_108)
			{
				goto IL_0403_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_109 = V_1;
			RuntimeObject* L_110 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_109, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),65));
			NullCheck((RuntimeObject*)L_110);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_111;
			L_111 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_110);
			V_3 = L_111;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_112;
			L_112 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_112;
			bool L_113;
			L_113 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_113)
			{
				goto IL_03fc_1;
			}
		}
		{
			int32_t L_114 = 8;
			V_0 = L_114;
			__this->___U3CU3E1__state = L_114;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_115 = V_2;
			__this->___U3CU3Eu__1 = L_115;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_116 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_116, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_03e0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_117 = __this->___U3CU3Eu__1;
			V_2 = L_117;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_118 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_118, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_119 = (-1);
			V_0 = L_119;
			__this->___U3CU3E1__state = L_119;
		}

IL_03fc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_0403_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_120 = V_1;
			RuntimeObject* L_121 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_120, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),70));
			if (!L_121)
			{
				goto IL_046f_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_122 = V_1;
			RuntimeObject* L_123 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_122, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),70));
			NullCheck((RuntimeObject*)L_123);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_124;
			L_124 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_123);
			V_3 = L_124;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125;
			L_125 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_125;
			bool L_126;
			L_126 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_126)
			{
				goto IL_0468_1;
			}
		}
		{
			int32_t L_127 = ((int32_t)9);
			V_0 = L_127;
			__this->___U3CU3E1__state = L_127;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_128 = V_2;
			__this->___U3CU3Eu__1 = L_128;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_129 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_129, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_044c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_130 = __this->___U3CU3Eu__1;
			V_2 = L_130;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_131 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_131, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_132 = (-1);
			V_0 = L_132;
			__this->___U3CU3E1__state = L_132;
		}

IL_0468_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_046f_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_133 = V_1;
			RuntimeObject* L_134 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_133, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),75));
			if (!L_134)
			{
				goto IL_04d8_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_135 = V_1;
			RuntimeObject* L_136 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_135, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),75));
			NullCheck((RuntimeObject*)L_136);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_137;
			L_137 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_136);
			V_3 = L_137;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_138;
			L_138 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_138;
			bool L_139;
			L_139 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_139)
			{
				goto IL_04d1_1;
			}
		}
		{
			int32_t L_140 = ((int32_t)10);
			V_0 = L_140;
			__this->___U3CU3E1__state = L_140;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_141 = V_2;
			__this->___U3CU3Eu__1 = L_141;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_142 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_142, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
			goto IL_0506;
		}

IL_04b5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_143 = __this->___U3CU3Eu__1;
			V_2 = L_143;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_144 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_144, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_145 = (-1);
			V_0 = L_145;
			__this->___U3CU3E1__state = L_145;
		}

IL_04d1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_04d8_1:
		{
			goto IL_04f3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_04da;
		}
		throw e;
	}

CATCH_04da:
	{
		Exception_t* L_146 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_146;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_147 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_148 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_147, L_148, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0506;
	}

IL_04f3:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_149 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_149, NULL);
	}

IL_0506:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*>(__this + _offset);
	U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07*>(__this + _offset);
	U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_m71018DB904767E3714DDBFDC0FABA18EE46DCBC9_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state = (-1);
				RuntimeObject* L_3 = __this->___comparer;
				Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* L_4 = (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CsetU3E5__2 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsetU3E5__2), (void*)L_4);
				RuntimeObject* L_5 = __this->___source;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				__this->___U3CU3E7__wrap2 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_6);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap2;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7);
				V_2 = L_8;
				Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* L_9 = __this->___U3CsetU3E5__2;
				int32_t L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_12 = V_2;
				__this->___U3CU3E2__current = L_12;
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap2;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5DD7A29942ED3250E0CF69B661DC15557287A56B_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_mE9BA5D2810F8D9F857C8326A32B722D1AD74C115_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_m8E114F6E6FB648D34A8F14ACEBAA0A916BDCAD7E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_3 = (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__source;
		NullCheck(L_4);
		L_4->___source = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source), (void*)L_5);
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__comparer;
		NullCheck(L_6);
		L_6->___comparer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___comparer), (void*)L_7);
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_m2EDBA71EEF5F9AB8F5D74D95545A81F245DADA01_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_mFC5166BA9B542CE7604CF321AD2D1815FA542014_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state = (-1);
				RuntimeObject* L_3 = __this->___comparer;
				Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* L_4 = (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CsetU3E5__2 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsetU3E5__2), (void*)L_4);
				RuntimeObject* L_5 = __this->___source;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				__this->___U3CU3E7__wrap2 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_6);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7);
				V_2 = L_8;
				Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* L_9 = __this->___U3CsetU3E5__2;
				RuntimeObject* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				RuntimeObject* L_12 = V_2;
				__this->___U3CU3E2__current = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_12);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap2;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m3BFCE33D1A0FBE4E6C2CA2B5E6C5A9AAB7C75F48_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_m77617FBFE6426263EAC2102317FD15B7F240BA6F_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_mCEBDDAB868A1A3C17A9493A0E5A37F0B2F334F14_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_3 = (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__source;
		NullCheck(L_4);
		L_4->___source = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source), (void*)L_5);
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__comparer;
		NullCheck(L_6);
		L_6->___comparer = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___comparer), (void*)L_7);
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_mC95300C41D98D3718D870CCE3DBE94F81C68D8A9_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m368FD54689A4B23022D54E56433A64F47D8BDE65_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB922A1DC8578B57729E78C9CD83A184147743656_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_m8DAF2B7D90B558C2BDBBE8E2F2BF0058D054CD6D_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	memset(V_2, 0, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_4 = (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				il2cpp_codegen_write_instance_field_data<Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_6);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_2, L_8, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_9 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				il2cpp_codegen_memcpy(L_10, V_2, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_12, V_2, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_12, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_m3A1915C2D0E1F2A53DCCC453913870C5987B3622_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m4F2FD638E67166E5D6467B8C6F3D8C0F236B8945_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_mA5510FD78835228D46F445739E3B48F864F15CB2_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_m7AD240D5FF03DFA83B0112F97CC62CF8527123FA_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m853907FC376AB6563EFE8D67DBE362224708D80F_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_3 = (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_m7B14B90057F6FF2EF898076D378CA123AE70559C_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	const Il2CppFullySharedGenericAny L_43 = L_12;
	const Il2CppFullySharedGenericAny L_46 = L_12;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	memset(V_1, 0, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	int32_t V_2 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B26_0 = NULL;
	Exception_t* G_B25_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0036_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_015c_1;
			}
		}
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 0);
		}

IL_0036_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00b3_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10), 0);
				goto IL_0072_2;
			}

IL_0043_2:
			{
				int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10));
				V_2 = L_7;
				int32_t L_8 = V_2;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_8, 1)));
				int32_t L_9 = V_2;
				int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
				if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
				{
					goto IL_0072_2;
				}
			}
			{
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9), L_12, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
				goto IL_00fc_2;
			}

IL_0072_2:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_13);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
				L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_13);
				V_4 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
				L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00cf_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_17);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11), L_18);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_3), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
				goto IL_020e;
			}

IL_00b3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11));
				V_3 = L_19;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_20);
			}

IL_00cf_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0043_2;
				}
			}
			{
				bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
				if (!L_22)
				{
					goto IL_00f1_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
				goto IL_00fc_2;
			}

IL_00f1_2:
			{
				Exception_t* L_23;
				L_23 = Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_00fc_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 1);
				goto IL_0111_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0105_1;
			}
			throw e;
		}

CATCH_0105_1:
		{
			RuntimeObject* L_24 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_5 = L_24;
			RuntimeObject* L_25 = V_5;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0111_1;
		}

IL_0111_1:
		{
			RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			if (!L_26)
			{
				goto IL_0180_1;
			}
		}
		{
			RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_28;
			L_28 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			V_7 = L_28;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_7), NULL);
			V_6 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_30)
			{
				goto IL_0179_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_31);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_6;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12), L_32);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_6), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			goto IL_020e;
		}

IL_015c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12));
			V_6 = L_33;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_34 = (-1);
			V_0 = L_34;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_34);
		}

IL_0179_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0180_1:
		{
			RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7));
			V_5 = L_35;
			RuntimeObject* L_36 = V_5;
			if (!L_36)
			{
				goto IL_01a3_1;
			}
		}
		{
			RuntimeObject* L_37 = V_5;
			Exception_t* L_38 = ((Exception_t*)IsInstClass((RuntimeObject*)L_37, Exception_t_il2cpp_TypeInfo_var));
			if (L_38)
			{
				G_B26_0 = L_38;
				goto IL_0199_1;
			}
			G_B25_0 = L_38;
		}
		{
			RuntimeObject* L_39 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
		}

IL_0199_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_40;
			L_40 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B26_0, NULL);
			NullCheck(L_40);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_40, NULL);
		}

IL_01a3_1:
		{
			int32_t L_41 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8));
			V_2 = L_41;
			int32_t L_42 = V_2;
			if ((!(((uint32_t)L_42) == ((uint32_t)1))))
			{
				goto IL_01b7_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			il2cpp_codegen_memcpy(V_1, L_43, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			goto IL_01f3;
		}

IL_01b7_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_01f3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d3;
		}
		throw e;
	}

CATCH_01d3:
	{
		Exception_t* L_44 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_44;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_45 = V_8;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_45, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_020e;
	}

IL_01f3:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_46, V_1, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_46: *(void**)L_46));
	}

IL_020e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044*>(__this + _offset);
	U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C  void U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044*>(__this + _offset);
	U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_mA717D9C530C08DED70D7D393629107585E95BAE1_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* V_2 = NULL;
	KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{
				U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m822AD9373E981AF92EC773A7775471E70F195AF4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t647DF567ADBEEEC3E77B6353D82BF2D62976B39C* L_5 = L_4->___m_Data;
				NullCheck(L_5);
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6 L_6;
				L_6 = Dictionary_2_GetEnumerator_m0A39AE57744872DEC70B8ADE8E70EC36D30626ED(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____dictionary), (void*)NULL);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_7 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3E7__wrap1);
				KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_8;
				L_8 = Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_3 = L_8;
				KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_9 = V_3;
				__this->___U3CU3E2__current = L_9;
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0061_1:
			{
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_10 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3E7__wrap1);
				bool L_11;
				L_11 = Enumerator_MoveNext_m66EFFC104228A48B97687285B55584759E52AF22(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_12 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6));
				V_0 = (bool)0;
				goto IL_008b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m9B2FA6B08FF9E722DA36557FF1E6B6718C9792F9_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* L_0 = (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_m76E478BB04060042CC11D4F77BA9460C222F01CD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_m7D5C5612B72B335CC0B6C69AA0A1EB9C66249674_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m5D560D3DF7444315EF9E6A93ECA68EE60C9C4682_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_m55FE24180FE5F56934515841415D6D4908C3BEE3_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* L_3 = (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CEnumerateU3Ed__17__ctor_mB0746BB971E5BD52B247C27D67966E85F8B8065E(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* L_4 = V_0;
		ProfilerFrameData_2_t2E78C7937AD59869D299687F5F9D8FFB343F688A* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mBD12BBB66C65446E0E44BDCE5A22E7D8D4464E34_gshared (U3CEnumerateU3Ed__17_t082602202875FC37D5C461145A7B1ACB66740605* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m320EC44570181958F62125A4F84F70EFA610AB28(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_mDC2C7BE711D6F424BC81A8E80F2C5848A5AACAD3_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* V_2 = NULL;
	KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{
				U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m685BD7E009413A3367133F7EC4D6C9A723DAB161(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t5B0B823A74BF369A8BA2728444AAA80B3D22C39C* L_5 = L_4->___m_Data;
				NullCheck(L_5);
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B L_6;
				L_6 = Dictionary_2_GetEnumerator_m866DC6D478308614FFCE0750CDBCE7981295C1DD(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____dictionary), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1))->____current))->___key), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_7 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3E7__wrap1);
				KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_8;
				L_8 = Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_3 = L_8;
				KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_9 = V_3;
				__this->___U3CU3E2__current = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___key), (void*)NULL);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0061_1:
			{
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_10 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3E7__wrap1);
				bool L_11;
				L_11 = Enumerator_MoveNext_mFD341E92CF254C87FE8A00B192EF91521DD704D7(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_12 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B));
				V_0 = (bool)0;
				goto IL_008b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m4262D37C649DD5BC0B49ABE69C4A3AD28C907D22_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* L_0 = (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_mB78F9BEC4B28EBE0919BC71D6451D716A5787E2B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_mD5AB5723C5B9D637B852088B2833EE70E88FDC61_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m6721B23D52B46D0717FA52012766502C87BCB846_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_mE2A3BE5B48B7EC1E1D788FDED04C7A28CB07FD8B_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* L_3 = (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CEnumerateU3Ed__17__ctor_m89A3352B6AF327E5ECC6B7F2AF8E61B9ED03E291(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* L_4 = V_0;
		ProfilerFrameData_2_t950D70A7F1D73DADC9A90BCD19091AF31D8F5CE4* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m9413116E336456778A666DB7F2886A49136A6133_gshared (U3CEnumerateU3Ed__17_t381640940DDC51EDD1D5B7ED1E4932A41193E749* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m74BEE0528CC325DBDE6B183458D33A27D446D700(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_m219AE2786B2F71F02B53975C820AF4F3335AE5FD_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* V_2 = NULL;
	KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{
				U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m1DFF7D1D3CE54878B6BA86061DDB22AF6946ED80(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_tC90C3EE20FDA713BD1E7D78ED8E5EBA6B529306A* L_5 = L_4->___m_Data;
				NullCheck(L_5);
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1 L_6;
				L_6 = Dictionary_2_GetEnumerator_mC7D738C9E3A5C4928A1372118A07812193CAFBC5(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____dictionary), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1))->____current))->___key), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_7 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3E7__wrap1);
				KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_8;
				L_8 = Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				V_3 = L_8;
				KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_9 = V_3;
				__this->___U3CU3E2__current = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___key), (void*)NULL);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0061_1:
			{
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_10 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3E7__wrap1);
				bool L_11;
				L_11 = Enumerator_MoveNext_mF71888B7382F2EAF7606858E54551944779DC622(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_12 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1));
				V_0 = (bool)0;
				goto IL_008b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_m087AF99316F92F40C7069B54D25CC750C6B5C5A6_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* L_0 = (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_m4F6BFA345E68F3F0A7F8875FFD149A55D5240FD1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_m10EBF0B6F309BF47BD4BB6E4934F1B84E60B1583_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m456801A2A043B72A54B308B56A0EC0C7F940B1A6_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_m53B926A3A184B625BF0A7083B42AE4DD4F27CAEB_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_0 = __this->___U3CU3E2__current;
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* L_3 = (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CEnumerateU3Ed__17__ctor_mECCA51413CF3890A35F5092E595CEC7473A48CF1(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* L_4 = V_0;
		ProfilerFrameData_2_t7F0801E253606F118877F93100B39DE68DD80138* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mDF0908D4BE258D4CF82A648467F3F7646F4066A1_gshared (U3CEnumerateU3Ed__17_t7428EBB6B76EF0FB8A0EFF92735FD910581CCC7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_m085EEDE4BD6482A57C28B47622AF54C02BFFA8E9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17__ctor_m076C884FEB931F8060B1CD68EB355198F5158D71_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_IDisposable_Dispose_m17E57E0CBEA1AC6F738C61F5BFF4AFEB8357B76E_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__17_MoveNext_mC83EBFB765E03A05A29A32DAE0A1AA8960720C89_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_6 = alloca(SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_8 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	bool V_0 = false;
	int32_t V_1 = 0;
	ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0* V_2 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_3 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	memset(V_3, 0, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{
				((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0* L_1 = *(ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_5 = L_4->___m_Data;
				NullCheck(L_5);
				InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_5, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_6, SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0061_1;
			}

IL_003b_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_7);
				il2cpp_codegen_memcpy(V_3, L_7, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
				il2cpp_codegen_memcpy(L_8, V_3, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_8, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_0061_1:
			{
				bool L_9;
				L_9 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_9)
				{
					goto IL_003b_1;
				}
			}
			{
				((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_initobj((((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_Enumerator_tEF43E74215101CD3EF3C6503AF2192E5A7FB8316);
				V_0 = (bool)0;
				goto IL_008b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_U3CU3Em__Finally1_mCE55908EEDDEC5DFCC15234FD02024F4DA64BA03_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 5), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_0, (void*)(((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_get_Current_m71E030CACE91532747D8EF5BBA4F5D34F5A8FEF6_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__17_System_Collections_IEnumerator_Reset_m1FD090BD076FB90BE5250E90EC3BC492CAFB31AE_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerator_get_Current_m6447D50F7E91B0FD718748AE0EC194EC154CECCF_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tDC6086B19045C9363D2B4E9EA11FD556620040C0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CT1U2CT2U3EU3E_GetEnumerator_mC7FBDA6DA6EF4769AD3133AC86459F47125D1A5D_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* L_3 = (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* L_4 = V_0;
		ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0* L_5 = *(ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<ProfilerFrameData_2_t55016382651482A079353ABFAEBEA16AC98DA7F0*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
	}

IL_0035:
	{
		U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mC971E8601E6FCC39F0077989B54EFDBEF805FDDF_gshared (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CEnumerateU3Ed__17_t788F4F2BFC38225523B1AA5009C2AD9D65AE10F1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m3A866D33D1972B205A9CB2F8326917AD6AFE5E59_gshared (U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_mA5B8FFB45AD68D6311F6AD3CAFDF9D6D6155ABED_gshared (U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m9E17043C3B888095D5638D115F13F312BA4954DC_gshared (U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_3 = __this->___head;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)L_3) == ((RuntimeObject*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_m0B2B0B3DA7EEA8724D6600DAF22DD29C081EC538(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* L_23 = V_1;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* L_32 = V_1;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_tF3E3AEB8898E66334C7EF8E3C9C46441B03CB533* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* L_41 = V_1;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_49 = __this->___head;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)L_49) == ((RuntimeObject*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_m0B2B0B3DA7EEA8724D6600DAF22DD29C081EC538(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* L_58 = V_1;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_68 = __this->___U3CsU3E5__4;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)L_68) == ((RuntimeObject*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_m0B2B0B3DA7EEA8724D6600DAF22DD29C081EC538(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t8AC921471316EC9B5C0DD011C397371EAB692039* L_73 = V_1;
		Segment_t3A054A8E87FDEBC6EFB4F5FB269FCFDB5082FD88* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m75CB2C69DAC76D25C41FE1739E2D5CF4FED612B6(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_mEE5AB962838F10D0039B7F53EB51A2F64FBA106A_gshared (U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* __this, const RuntimeMethod* method) 
{
	{
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_mF69498456E23B8674AA347461D49291A456F6108_gshared (U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_m62FB23EF6C7AF12D0A386AE05B04A0D312168715_gshared (U3CEnumerateU3Ed__28_t2B01FFB148D925C2FD469FD517CEF85792BA479F* __this, const RuntimeMethod* method) 
{
	{
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_0 = __this->___U3CU3E2__current;
		ClientMainEvent_tF032FB3E41BB0AE89515B93C73C386E88105FA32 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_mFAA0FBBF0994977E044CA6FA125B345AB2D9AC22_gshared (U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_m10F748301505DA67996626EE1B5C4BD80A2FA3A3_gshared (U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_mCFA701811C33DFD8D7EA2754BC91D5A5D276C8DC_gshared (U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_3 = __this->___head;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)L_3) == ((RuntimeObject*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_m0E8DDA792A8C1AE497699FD9DC1611BFD2CC32A5(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* L_23 = V_1;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___exception), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* L_32 = V_1;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___exception), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_t17FE060A682980399916BAF284C1113ADC81CCA3* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* L_41 = V_1;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___exception), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_49 = __this->___head;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)L_49) == ((RuntimeObject*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_m0E8DDA792A8C1AE497699FD9DC1611BFD2CC32A5(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* L_58 = V_1;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___exception), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_68 = __this->___U3CsU3E5__4;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)L_68) == ((RuntimeObject*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_m0E8DDA792A8C1AE497699FD9DC1611BFD2CC32A5(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t52D050BE2447BB755A18789167D00E4A1B1C539E* L_73 = V_1;
		Segment_t44A128CE5104AF3B8E2A7D9F6A5F23CDCD178E94* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m843796905CC129B4C689471C9D790F854251CE1B(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___exception), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_mC808ED1C1977A3DC31E202BF7289BAE0DAD10775_gshared (U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* __this, const RuntimeMethod* method) 
{
	{
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m6A0B81E8B4FE54FAC3FA7A8B11F992911241614F_gshared (U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_mC965C9EC99FF0A3E1516959F1ABDFF2D924CAB1A_gshared (U3CEnumerateU3Ed__28_tE92EAF86A214EBCD46B56540426E475905E0456F* __this, const RuntimeMethod* method) 
{
	{
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_0 = __this->___U3CU3E2__current;
		Message_t0612D802F356FB8B8595AB488BF4671F8BCC3EA3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m12DD4367CAA863C7406D2DC6FD650C53ADA44B29_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_m7F3C235DED9F5C67BFED8EE8DAC4D498087E1128_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m24EF17AF62C347EE7811C8DBA7617B3A352BE4D6_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_3 = __this->___head;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_3) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_23 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		RuntimeObject* L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_26);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_32 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		RuntimeObject* L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_35);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_41 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		RuntimeObject* L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_44);
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_49 = __this->___head;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_49) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_58 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		RuntimeObject* L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_61);
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_68 = __this->___U3CsU3E5__4;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_68) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_73 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		RuntimeObject* L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_76);
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m84BECA6DF0B1FA053625DDD4C7F14FB7520459A4_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m68AE1F12C3C1172ED67AD685F2336A6310D34A32_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_mCED4D7E00A51D4748A517FECEE680910607F64A8_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_mF23A9928FB9B32FF4909AFB72051393EEC7B2E7A_gshared (U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_m0E59E1C6D21310B36BCE20EFA4E193F445AB9412_gshared (U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m13043E4E396B4A202CDA22451C7B35112311D7DD_gshared (U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_3 = __this->___head;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)L_3) == ((RuntimeObject*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_mF49ED89410E291BB6EA8B9329EAAEA02B8DCDB0E(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* L_23 = V_1;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* L_32 = V_1;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_t2603082BF4B2F5CA4AAC6DC6144092A9DD06E37A* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* L_41 = V_1;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_49 = __this->___head;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)L_49) == ((RuntimeObject*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_mF49ED89410E291BB6EA8B9329EAAEA02B8DCDB0E(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* L_58 = V_1;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_68 = __this->___U3CsU3E5__4;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)L_68) == ((RuntimeObject*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_mF49ED89410E291BB6EA8B9329EAAEA02B8DCDB0E(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_tAA31F09E9173D05A356730F09E8DAEF3429CC565* L_73 = V_1;
		Segment_t3F09A503936F8F9025666E7E0D15D05945A4C09D* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m8D5C7E5C5D23322212C8677600FAA8D7934131B4(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_mF97B3A88DA4DD779BAEE5C4D1D8A088530A57BD3_gshared (U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* __this, const RuntimeMethod* method) 
{
	{
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m29081A49FA5880BA633D8E43DFEE5E8DF6EB52BB_gshared (U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_m44A19778B83B0D1F923FBDE5B5C1F963AA6EF619_gshared (U3CEnumerateU3Ed__28_t1B33F16CA4ACB7425FF77380DB83BD421D22D6AA* __this, const RuntimeMethod* method) 
{
	{
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_0 = __this->___U3CU3E2__current;
		ServerMainEvent_t358C35F27C0D6E48B27E5D1B8DEB323DBC98ADEE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m9374EDF96FC7459E907F2628EC2E395201EE7882_gshared (U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_mDAF99929BDC9AF1EE4E1E35E621A0554F4E792BD_gshared (U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m17F488460FA9EF19A32B90FE5B0BA65CE4D2D61B_gshared (U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_3 = __this->___head;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)L_3) == ((RuntimeObject*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_m0D69470074BD8068B1A889BF19D939D2BEB040BB(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* L_23 = V_1;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* L_32 = V_1;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_t45EF04D91BF8B5E605C494BE9D2512CC5FD48A1F* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* L_41 = V_1;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_49 = __this->___head;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)L_49) == ((RuntimeObject*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_m0D69470074BD8068B1A889BF19D939D2BEB040BB(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* L_58 = V_1;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_68 = __this->___U3CsU3E5__4;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)L_68) == ((RuntimeObject*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_m0D69470074BD8068B1A889BF19D939D2BEB040BB(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_tF95FEDCCB4A4C84E622BF0AE0B885C71465B34CA* L_73 = V_1;
		Segment_t2ADF707A003E4E72D9AAEC59B0AB1B053C904449* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m3506A4B5137339CE6BCD7BBABA9C1DD7A061C1DC(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___param), (void*)NULL);
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_mC9C41E76424F2710E81FCD17996428F08C36CEC3_gshared (U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* __this, const RuntimeMethod* method) 
{
	{
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m33FD0161C7CDE4D320611C48AD14A14FC7EDF950_gshared (U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_mD6089BEE49F2AA4C6065C34D9116653E79244E4D_gshared (U3CEnumerateU3Ed__28_t83CC9CAA04FC37B17D81D5C4D4DF85E0D6CB1031* __this, const RuntimeMethod* method) 
{
	{
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_0 = __this->___U3CU3E2__current;
		ThreadEvent_tF9B34E57FC2E0254047719BF6FB5DDD376016610 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m90C63EAD01B9D30ACBA9EFE4F8B4A494ED163BBE_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_mB208AC15CAF92C72AA0E6CFE0D30F692F28C89DC_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m2D1C05F0DFABA87FCCD19464553AA9D0341D6677_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	const Il2CppFullySharedGenericAny L_35 = L_26;
	const Il2CppFullySharedGenericAny L_44 = L_26;
	const Il2CppFullySharedGenericAny L_61 = L_26;
	const Il2CppFullySharedGenericAny L_76 = L_26;
	int32_t V_0 = 0;
	ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B5_1 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_1 = *(ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_3 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_4 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_3) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_4)))
		{
			G_B4_0 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)__this);
			goto IL_005b;
		}
		G_B3_0 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)__this);
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_5 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)G_B3_0);
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		G_B5_0 = L_9;
		G_B5_1 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)G_B4_0);
	}

IL_0061:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_10 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		il2cpp_codegen_write_instance_field_data<int32_t>(G_B5_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11)));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_15 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)(L_14&L_16)));
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_18 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)(L_17&L_19)));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_22);
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_23 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_24 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_23);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_23, L_24, L_25, (Il2CppFullySharedGenericAny*)L_26);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_26, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00f0:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_27;
		int32_t L_28 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_28, 1)));
	}

IL_0107:
	{
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_31);
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_32 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_33 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_34 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_32);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_32, L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_35, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
		return (bool)1;
	}

IL_0149:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_36;
		int32_t L_37 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_0160:
	{
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_39 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_39);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_41 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_42 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_41);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_41, L_42, L_43, (Il2CppFullySharedGenericAny*)L_44);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_44, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 3);
		return (bool)1;
	}

IL_019f:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_45 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_45;
		int32_t L_46 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_46, 1)));
	}

IL_01b6:
	{
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_49 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_50 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_49) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_51 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_51);
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_52 = L_51->____nextSegment;
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_53 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_56 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_56);
		int32_t L_57;
		L_57 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_subtract(L_55, L_57)));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 0);
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_58 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_59 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck(L_58);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_58, L_59, L_60, (Il2CppFullySharedGenericAny*)L_61);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_61, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 4);
		return (bool)1;
	}

IL_0237:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		V_2 = L_62;
		int32_t L_63 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_63, 1)));
	}

IL_024e:
	{
		int32_t L_64 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_66 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_66);
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_67 = L_66->____nextSegment;
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_67);
	}

IL_026d:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_68 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_69 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_68) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)NULL);
		int32_t L_70 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_71 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_71);
		int32_t L_72;
		L_72 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_subtract(L_70, L_72)));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_73 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_74 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_73);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_73, L_74, L_75, (Il2CppFullySharedGenericAny*)L_76);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_76, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 5);
		return (bool)1;
	}

IL_02c7:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_77;
		int32_t L_78 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_78, 1)));
	}

IL_02de:
	{
		int32_t L_79 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_80 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m321E3E9E233E620C618C2ED08276C1B266EAA0F3_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m2322CF1E526EE56112B1E47D4993E3F38B1E6C72_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_m29969B60AE4D04B38591795F77E8666BB8D6613A_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m649237AAA4E81724F336B3CC6FB4579D6E35DDF6_gshared (U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_m4AF6AC90F9EA76D5329FA1BE509B77ED6E4E932C_gshared (U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m0FBE97D57546893E139DBA13EC61DE1ADF0B3C38_gshared (U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_3 = __this->___head;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_4 = __this->___tail;
		if ((((RuntimeObject*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)L_3) == ((RuntimeObject*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_5 = __this->___head;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = __this->___tailTail;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_10 = __this->___head;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_mBE0E88EAE7DFE204CCEA370D7578179CBEA3D785(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = __this->___headHead;
		int32_t L_13 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = __this->___headHead;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_15 = __this->___head;
		NullCheck(L_15);
		int32_t L_16 = L_15->____slotsMask;
		__this->___headHead = ((int32_t)(L_14&L_16));
		int32_t L_17 = __this->___U3CheadTailU3E5__2;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_18 = __this->___head;
		NullCheck(L_18);
		int32_t L_19 = L_18->____slotsMask;
		__this->___U3CheadTailU3E5__2 = ((int32_t)(L_17&L_19));
		int32_t L_20 = __this->___headHead;
		int32_t L_21 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* L_23 = V_1;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_24 = __this->___head;
		int32_t L_25 = __this->___U3CiU3E5__3;
		NullCheck(L_23);
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___stackTrace), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_27 = __this->___U3CiU3E5__3;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = __this->___U3CiU3E5__3;
		int32_t L_30 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = __this->___headHead;
		__this->___U3CiU3E5__3 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* L_32 = V_1;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_33 = __this->___head;
		int32_t L_34 = __this->___U3CiU3E5__3;
		NullCheck(L_32);
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___stackTrace), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_36 = __this->___U3CiU3E5__3;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = __this->___U3CiU3E5__3;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_39 = __this->___head;
		NullCheck(L_39);
		SlotU5BU5D_tD717BA65906548C13A3ED93BEB74781500DA6789* L_40 = L_39->____slots;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* L_41 = V_1;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_42 = __this->___head;
		int32_t L_43 = __this->___U3CiU3E5__3;
		NullCheck(L_41);
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___stackTrace), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_45 = __this->___U3CiU3E5__3;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = __this->___U3CiU3E5__3;
		int32_t L_48 = __this->___U3CheadTailU3E5__2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_49 = __this->___head;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_50 = __this->___tail;
		if ((((RuntimeObject*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)L_49) == ((RuntimeObject*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_51 = __this->___head;
		NullCheck(L_51);
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_52 = L_51->____nextSegment;
		__this->___U3CsU3E5__4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_53 = __this->___U3CsU3E5__4;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail);
		int32_t L_55 = L_54->___Tail;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_56 = __this->___U3CsU3E5__4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_mBE0E88EAE7DFE204CCEA370D7578179CBEA3D785(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* L_58 = V_1;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_59 = __this->___U3CsU3E5__4;
		int32_t L_60 = __this->___U3CiU3E5__5;
		NullCheck(L_58);
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_61;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___stackTrace), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_62 = __this->___U3CiU3E5__5;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = __this->___U3CiU3E5__5;
		int32_t L_65 = __this->___U3CiU3E5__3;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_66 = __this->___U3CsU3E5__4;
		NullCheck(L_66);
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_67 = L_66->____nextSegment;
		__this->___U3CsU3E5__4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)L_67);
	}

IL_026d:
	{
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_68 = __this->___U3CsU3E5__4;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_69 = __this->___tail;
		if ((!(((RuntimeObject*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)L_68) == ((RuntimeObject*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4 = (Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4), (void*)(Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74*)NULL);
		int32_t L_70 = __this->___tailTail;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_71 = __this->___tail;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_mBE0E88EAE7DFE204CCEA370D7578179CBEA3D785(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_tF44FCA81A40EA88368B43F5E5265A300B241F713* L_73 = V_1;
		Segment_tB2A5C5E683509457581A1226914BD5D7E9FA8B74* L_74 = __this->___tail;
		int32_t L_75 = __this->___U3CiU3E5__3;
		NullCheck(L_73);
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_mC5D68D77FC56BD25E5C479F663C5FB48CE2B3D02(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current = L_76;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___message), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___stackTrace), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_77 = __this->___U3CiU3E5__3;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = __this->___U3CiU3E5__3;
		int32_t L_80 = __this->___tailTail;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m2A18AFCC54791AC903B9F5F3BA338E27879E9BA8_gshared (U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* __this, const RuntimeMethod* method) 
{
	{
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m41EF9048DFBCFBACEC85188FC081CB557ED73FE9_gshared (U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_mF88C7EF89D2E614E53376B02841A5AE864C9F0B9_gshared (U3CEnumerateU3Ed__28_tB18AAEC6338EAA37AC5524D38A206F397EF66473* __this, const RuntimeMethod* method) 
{
	{
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_0 = __this->___U3CU3E2__current;
		LogEntry_t0CAC59A086025614B60D6B822CFE015BD74292FA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1__ctor_m83020BDE380BDECEB8C81B76F3D73D86F107758F_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_System_IDisposable_Dispose_mACF982461EFDD3C872B732FC8ED07667324EF48C_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEveryNthU3Ed__1_1_MoveNext_mC29A2ECF605856496D4A6DC159E9EE8B883E25A7_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	memset(V_2, 0, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00cb:
			{
				((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0095_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00d2;
			}

IL_0018_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_00ad_1;
			}

IL_0041_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
				int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				if ((((int32_t)L_7) >= ((int32_t)L_8)))
				{
					goto IL_006d_1;
				}
			}
			{
				int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
				int32_t L_10 = V_3;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_10);
				goto IL_00ad_1;
			}

IL_006d_1:
			{
				int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				if (((int32_t)(((int32_t)il2cpp_codegen_subtract(L_11, L_12))%L_13)))
				{
					goto IL_009d_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_14, V_2, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_14, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00d2;
			}

IL_0095_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_009d_1:
			{
				int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
				int32_t L_16 = V_3;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_16);
			}

IL_00ad_1:
			{
				RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				NullCheck((RuntimeObject*)L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				if (L_18)
				{
					goto IL_0041_1;
				}
			}
			{
				((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00d2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d2:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_U3CU3Em__Finally1_m5CE8C92DC026A0B55F168BFA6EC59D31D825A678_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_System_Collections_Generic_IEnumeratorU3CTValueU3E_get_Current_m6547AA0002A26DA67542FE3DC5F94AE99C129D7E_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1_System_Collections_IEnumerator_Reset_mFE5F6C27694FD5759C5D413C18158F1B2EDBC2C3_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEveryNthU3Ed__1_1_System_Collections_IEnumerator_get_Current_mBDB3266201F9D87AFFE0EEC471D79EFAB4FC0ABC_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t53E11A36C1D9630F0FE393EE81A246C527126CB0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEveryNthU3Ed__1_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF4D087EDAFBA3E3DDF66BA23FA013B179CF1F167_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_3 = (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_6 = V_0;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_7);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_8 = V_0;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_8);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_10 = V_0;
		return (RuntimeObject*)L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEveryNthU3Ed__1_1_System_Collections_IEnumerable_GetEnumerator_m0FAF8954BEDAEE89A42C1939B2639327CC19974B_gshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	const Il2CppFullySharedGenericAny L_14 = L_9;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_6 = L_3;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_3;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	memset(V_1, 0, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	memset(V_2, 0, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0042_2;
				}
			}
			{
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_3);
				il2cpp_codegen_memcpy(V_2, L_3, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				bool L_4;
				L_4 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
				if (L_4)
				{
					goto IL_005e_2;
				}
			}
			{
				int32_t L_5 = 0;
				V_0 = L_5;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_5);
				il2cpp_codegen_memcpy(L_6, V_2, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4), L_6, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
				goto IL_00bc;
			}

IL_0042_2:
			{
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4)), SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_memcpy(V_2, L_7, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4)))), SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				int32_t L_8 = (-1);
				V_0 = L_8;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_8);
			}

IL_005e_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				goto IL_0077_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0068_1;
			}
			throw e;
		}

CATCH_0068_1:
		{
			Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_3 = L_10;
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_11 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			Exception_t* L_12 = V_3;
			NullCheck(L_11);
			((  void (*) (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00a9;
		}

IL_0077_1:
		{
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_13 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
			NullCheck(L_13);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)) ? L_14: *(void**)L_14));
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_15 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			NullCheck(L_15);
			((  void (*) (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			goto IL_00a9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0090;
		}
		throw e;
	}

CATCH_0090:
	{
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_16;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_17 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00bc;
	}

IL_00a9:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), NULL);
	}

IL_00bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*>(__this + _offset);
	U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*>(__this + _offset);
	U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	const Il2CppFullySharedGenericAny L_39 = L_17;
	const Il2CppFullySharedGenericAny L_42 = L_17;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	memset(V_1, 0, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B24_0 = NULL;
	Exception_t* G_B23_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0036_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_012e_1;
			}
		}
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), 0);
		}

IL_0036_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_007a_2;
				}
			}
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
				NullCheck(L_7);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
				L_8 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_7);
				V_3 = L_8;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_9;
				L_9 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_9;
				bool L_10;
				L_10 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0096_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_11);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_2;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9), L_12);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
				goto IL_01e2;
			}

IL_007a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9));
				V_2 = L_13;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_14 = (-1);
				V_0 = L_14;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_14);
			}

IL_0096_2:
			{
				bool L_15;
				L_15 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (!L_15)
				{
					goto IL_00b2_2;
				}
			}
			{
				RuntimeObject* L_16 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
				NullCheck(L_16);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_16, (Il2CppFullySharedGenericAny*)L_17);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), L_17, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
				goto IL_00ce_2;
			}

IL_00b2_2:
			{
				bool L_18 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
				if (!L_18)
				{
					goto IL_00c8_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8)))), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
				goto IL_00ce_2;
			}

IL_00c8_2:
			{
				Exception_t* L_19;
				L_19 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
			}

IL_00ce_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), 1);
				goto IL_00e3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00d7_1;
			}
			throw e;
		}

CATCH_00d7_1:
		{
			RuntimeObject* L_20 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_4 = L_20;
			RuntimeObject* L_21 = V_4;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), L_21);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00e3_1;
		}

IL_00e3_1:
		{
			RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
			if (!L_22)
			{
				goto IL_0152_1;
			}
		}
		{
			RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
			NullCheck((RuntimeObject*)L_23);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_24;
			L_24 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_6 = L_24;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25;
			L_25 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_25;
			bool L_26;
			L_26 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_26)
			{
				goto IL_014b_1;
			}
		}
		{
			int32_t L_27 = 1;
			V_0 = L_27;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_27);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = V_5;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10), L_28);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_5), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			goto IL_01e2;
		}

IL_012e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10));
			V_5 = L_29;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_30);
		}

IL_014b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_0152_1:
		{
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			V_4 = L_31;
			RuntimeObject* L_32 = V_4;
			if (!L_32)
			{
				goto IL_0175_1;
			}
		}
		{
			RuntimeObject* L_33 = V_4;
			Exception_t* L_34 = ((Exception_t*)IsInstClass((RuntimeObject*)L_33, Exception_t_il2cpp_TypeInfo_var));
			if (L_34)
			{
				G_B24_0 = L_34;
				goto IL_016b_1;
			}
			G_B23_0 = L_34;
		}
		{
			RuntimeObject* L_35 = V_4;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
		}

IL_016b_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_36;
			L_36 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B24_0, NULL);
			NullCheck(L_36);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_36, NULL);
		}

IL_0175_1:
		{
			int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7));
			V_7 = L_37;
			int32_t L_38 = V_7;
			if ((!(((uint32_t)L_38) == ((uint32_t)1))))
			{
				goto IL_018b_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8)), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			il2cpp_codegen_memcpy(V_1, L_39, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			goto IL_01c7;
		}

IL_018b_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8)))), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_01c7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a7;
		}
		throw e;
	}

CATCH_01a7:
	{
		Exception_t* L_40 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_40;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_41 = V_8;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01e2;
	}

IL_01c7:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10)) ? L_42: *(void**)L_42));
	}

IL_01e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142*>(__this + _offset);
	U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142*>(__this + _offset);
	U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	const Il2CppFullySharedGenericAny L_43 = L_8;
	const Il2CppFullySharedGenericAny L_46 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	memset(V_1, 0, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	memset(V_2, 0, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B26_0 = NULL;
	Exception_t* G_B25_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0036_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0147_1;
			}
		}
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 0);
		}

IL_0036_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00a3_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_003c_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_2, L_8, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_9 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_10, V_2, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_0062_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_12, V_2, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9), L_12, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				goto IL_00e7_2;
			}

IL_0062_2:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_13);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
				L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_13);
				V_4 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
				L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00bf_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_17);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10), L_18);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_3), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
				goto IL_01fb;
			}

IL_00a3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10));
				V_3 = L_19;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_20);
			}

IL_00bf_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_003c_2;
				}
			}
			{
				bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
				if (!L_22)
				{
					goto IL_00e1_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				goto IL_00e7_2;
			}

IL_00e1_2:
			{
				Exception_t* L_23;
				L_23 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
			}

IL_00e7_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 1);
				goto IL_00fc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f0_1;
			}
			throw e;
		}

CATCH_00f0_1:
		{
			RuntimeObject* L_24 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_5 = L_24;
			RuntimeObject* L_25 = V_5;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00fc_1;
		}

IL_00fc_1:
		{
			RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			if (!L_26)
			{
				goto IL_016b_1;
			}
		}
		{
			RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_28;
			L_28 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			V_7 = L_28;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_7), NULL);
			V_6 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_30)
			{
				goto IL_0164_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_31);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_6;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11), L_32);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_6), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
			goto IL_01fb;
		}

IL_0147_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11));
			V_6 = L_33;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_34 = (-1);
			V_0 = L_34;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_34);
		}

IL_0164_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_016b_1:
		{
			RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7));
			V_5 = L_35;
			RuntimeObject* L_36 = V_5;
			if (!L_36)
			{
				goto IL_018e_1;
			}
		}
		{
			RuntimeObject* L_37 = V_5;
			Exception_t* L_38 = ((Exception_t*)IsInstClass((RuntimeObject*)L_37, Exception_t_il2cpp_TypeInfo_var));
			if (L_38)
			{
				G_B26_0 = L_38;
				goto IL_0184_1;
			}
			G_B25_0 = L_38;
		}
		{
			RuntimeObject* L_39 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
		}

IL_0184_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_40;
			L_40 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B26_0, NULL);
			NullCheck(L_40);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_40, NULL);
		}

IL_018e_1:
		{
			int32_t L_41 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8));
			V_8 = L_41;
			int32_t L_42 = V_8;
			if ((!(((uint32_t)L_42) == ((uint32_t)1))))
			{
				goto IL_01a4_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			il2cpp_codegen_memcpy(V_1, L_43, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			goto IL_01e0;
		}

IL_01a4_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_01e0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c0;
		}
		throw e;
	}

CATCH_01c0:
	{
		Exception_t* L_44 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_9 = L_44;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_45 = V_9;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_45, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01fb;
	}

IL_01e0:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_46, V_1, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_46: *(void**)L_46));
	}

IL_01fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394*>(__this + _offset);
	U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394*>(__this + _offset);
	U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	const Il2CppFullySharedGenericAny L_20 = L_9;
	const Il2CppFullySharedGenericAny L_51 = L_9;
	const Il2CppFullySharedGenericAny L_54 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	memset(V_1, 0, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B31_0 = NULL;
	Exception_t* G_B30_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0037_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_01c4_1;
			}
		}
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 0);
		}

IL_0037_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0120_2;
				}
			}
			{
				goto IL_00e0_2;
			}

IL_0047_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10), L_9, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_10 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ba_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_15);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_2;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11), L_16);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
				goto IL_0278;
			}

IL_009e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11));
				V_2 = L_17;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_18);
			}

IL_00ba_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (!L_19)
				{
					goto IL_00d4_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9), L_20, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				goto IL_0164_2;
			}

IL_00d4_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			}

IL_00e0_2:
			{
				RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_21);
				V_3 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_013c_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_25);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_2;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11), L_26);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
				goto IL_0278;
			}

IL_0120_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11));
				V_2 = L_27;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_28);
			}

IL_013c_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0047_2;
				}
			}
			{
				bool L_30 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
				if (!L_30)
				{
					goto IL_015e_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				goto IL_0164_2;
			}

IL_015e_2:
			{
				Exception_t* L_31;
				L_31 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, method);
			}

IL_0164_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 1);
				goto IL_0179_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016d_1;
			}
			throw e;
		}

CATCH_016d_1:
		{
			RuntimeObject* L_32 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_4 = L_32;
			RuntimeObject* L_33 = V_4;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0179_1;
		}

IL_0179_1:
		{
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			if (!L_34)
			{
				goto IL_01e8_1;
			}
		}
		{
			RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_6 = L_36;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_38)
			{
				goto IL_01e1_1;
			}
		}
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_39);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_5;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12), L_40);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_5), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
			goto IL_0278;
		}

IL_01c4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12));
			V_5 = L_41;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_42 = (-1);
			V_0 = L_42;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_42);
		}

IL_01e1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_01e8_1:
		{
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7));
			V_4 = L_43;
			RuntimeObject* L_44 = V_4;
			if (!L_44)
			{
				goto IL_020b_1;
			}
		}
		{
			RuntimeObject* L_45 = V_4;
			Exception_t* L_46 = ((Exception_t*)IsInstClass((RuntimeObject*)L_45, Exception_t_il2cpp_TypeInfo_var));
			if (L_46)
			{
				G_B31_0 = L_46;
				goto IL_0201_1;
			}
			G_B30_0 = L_46;
		}
		{
			RuntimeObject* L_47 = V_4;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
		}

IL_0201_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_48;
			L_48 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B31_0, NULL);
			NullCheck(L_48);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_48, NULL);
		}

IL_020b_1:
		{
			int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8));
			V_7 = L_49;
			int32_t L_50 = V_7;
			if ((!(((uint32_t)L_50) == ((uint32_t)1))))
			{
				goto IL_0221_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			il2cpp_codegen_memcpy(V_1, L_51, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			goto IL_025d;
		}

IL_0221_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_025d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_023d;
		}
		throw e;
	}

CATCH_023d:
	{
		Exception_t* L_52 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_52;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_53 = V_8;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0278;
	}

IL_025d:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_54, V_1, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_54: *(void**)L_54));
	}

IL_0278:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*>(__this + _offset);
	U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03*>(__this + _offset);
	U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_55 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	memset(V_1, 0, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B31_0 = NULL;
	Exception_t* G_B30_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0037_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_01ca_1;
			}
		}
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 0);
		}

IL_0037_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00a4_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0126_2;
				}
			}
			{
				goto IL_00e6_2;
			}

IL_0047_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10), L_9, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_10 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00c0_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_16);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_2;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11), L_17);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
				goto IL_027e;
			}

IL_00a4_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11));
				V_2 = L_18;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_19);
			}

IL_00c0_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (!L_20)
				{
					goto IL_00da_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9), L_21, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				goto IL_016a_2;
			}

IL_00da_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),10)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			}

IL_00e6_2:
			{
				RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_22);
				V_3 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0142_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_26);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_2;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11), L_27);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
				goto IL_027e;
			}

IL_0126_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11));
				V_2 = L_28;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),11)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_29);
			}

IL_0142_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0047_2;
				}
			}
			{
				bool L_31 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
				if (!L_31)
				{
					goto IL_0164_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				goto IL_016a_2;
			}

IL_0164_2:
			{
				Exception_t* L_32;
				L_32 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
			}

IL_016a_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), 1);
				goto IL_017f_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0173_1;
			}
			throw e;
		}

CATCH_0173_1:
		{
			RuntimeObject* L_33 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_4 = L_33;
			RuntimeObject* L_34 = V_4;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), L_34);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_017f_1;
		}

IL_017f_1:
		{
			RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			if (!L_35)
			{
				goto IL_01ee_1;
			}
		}
		{
			RuntimeObject* L_36 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_6 = L_37;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_39)
			{
				goto IL_01e7_1;
			}
		}
		{
			int32_t L_40 = 2;
			V_0 = L_40;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_40);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_5;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12), L_41);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_5), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
			goto IL_027e;
		}

IL_01ca_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12));
			V_5 = L_42;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),12)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_43);
		}

IL_01e7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_01ee_1:
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7));
			V_4 = L_44;
			RuntimeObject* L_45 = V_4;
			if (!L_45)
			{
				goto IL_0211_1;
			}
		}
		{
			RuntimeObject* L_46 = V_4;
			Exception_t* L_47 = ((Exception_t*)IsInstClass((RuntimeObject*)L_46, Exception_t_il2cpp_TypeInfo_var));
			if (L_47)
			{
				G_B31_0 = L_47;
				goto IL_0207_1;
			}
			G_B30_0 = L_47;
		}
		{
			RuntimeObject* L_48 = V_4;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, method);
		}

IL_0207_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_49;
			L_49 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B31_0, NULL);
			NullCheck(L_49);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_49, NULL);
		}

IL_0211_1:
		{
			int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8));
			V_7 = L_50;
			int32_t L_51 = V_7;
			if ((!(((uint32_t)L_51) == ((uint32_t)1))))
			{
				goto IL_0227_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			il2cpp_codegen_memcpy(V_1, L_52, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			goto IL_0263;
		}

IL_0227_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0263;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0243;
		}
		throw e;
	}

CATCH_0243:
	{
		Exception_t* L_53 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_53;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_54 = V_8;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_54, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_027e;
	}

IL_0263:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_55, V_1, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_55: *(void**)L_55));
	}

IL_027e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*>(__this + _offset);
	U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC*>(__this + _offset);
	U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t234717223261E6827FBAB92FA5CC538705A41F3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t234717223261E6827FBAB92FA5CC538705A41F3A);
	int32_t V_0 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B22_0 = NULL;
	Exception_t* G_B21_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0036_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_010e_1;
			}
		}
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			__this->___U3CU3E7__wrap3 = 0;
		}

IL_0036_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0092_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_003c_2:
			{
				Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_7 = __this->___action;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_9: *(void**)L_9));
			}

IL_0052_2:
			{
				RuntimeObject* L_10 = __this->___U3CeU3E5__2;
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
				L_11 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_10);
				V_2 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
				L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_1 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_1), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00ae_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_16, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
				goto IL_0194;
			}

IL_0092_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00ae_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_1), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_003c_2;
				}
			}
			{
				goto IL_00c3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00b9_1;
			}
			throw e;
		}

CATCH_00b9_1:
		{
			RuntimeObject* L_21 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_3 = L_21;
			RuntimeObject* L_22 = V_3;
			__this->___U3CU3E7__wrap2 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_22);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00c3_1;
		}

IL_00c3_1:
		{
			RuntimeObject* L_23 = __this->___U3CeU3E5__2;
			if (!L_23)
			{
				goto IL_0132_1;
			}
		}
		{
			RuntimeObject* L_24 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_24);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_25;
			L_25 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
			V_5 = L_25;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26;
			L_26 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_5), NULL);
			V_4 = L_26;
			bool L_27;
			L_27 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_4), NULL);
			if (L_27)
			{
				goto IL_012b_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29 = V_4;
			__this->___U3CU3Eu__2 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_30 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_30, (&V_4), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			goto IL_0194;
		}

IL_010e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = __this->___U3CU3Eu__2;
			V_4 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_32 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state = L_33;
		}

IL_012b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_4), NULL);
		}

IL_0132_1:
		{
			RuntimeObject* L_34 = __this->___U3CU3E7__wrap2;
			V_3 = L_34;
			RuntimeObject* L_35 = V_3;
			if (!L_35)
			{
				goto IL_0151_1;
			}
		}
		{
			RuntimeObject* L_36 = V_3;
			Exception_t* L_37 = ((Exception_t*)IsInstClass((RuntimeObject*)L_36, Exception_t_il2cpp_TypeInfo_var));
			if (L_37)
			{
				G_B22_0 = L_37;
				goto IL_0147_1;
			}
			G_B21_0 = L_37;
		}
		{
			RuntimeObject* L_38 = V_3;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
		}

IL_0147_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_39;
			L_39 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B22_0, NULL);
			NullCheck(L_39);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_39, NULL);
		}

IL_0151_1:
		{
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			goto IL_017a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015a;
		}
		throw e;
	}

CATCH_015a:
	{
		Exception_t* L_40 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_40;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_41 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_42 = V_6;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_41, L_42, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0194;
	}

IL_017a:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_43, NULL);
	}

IL_0194:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E*>(__this + _offset);
	U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E*>(__this + _offset);
	U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC851374995ABCEBCC7D418F2FC6D05B524D4B6EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC851374995ABCEBCC7D418F2FC6D05B524D4B6EA);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B22_0 = NULL;
	Exception_t* G_B21_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0036_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_012b_1;
			}
		}
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			__this->___U3CU3E7__wrap3 = 0;
		}

IL_0036_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00aa_2;
				}
			}
			{
				__this->___U3CindexU3E5__5 = 0;
				goto IL_006a_2;
			}

IL_0043_2:
			{
				Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C* L_7 = __this->___action;
				RuntimeObject* L_8 = __this->___U3CeU3E5__2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				int32_t L_10 = __this->___U3CindexU3E5__5;
				V_1 = L_10;
				int32_t L_11 = V_1;
				if (((int64_t)L_11 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_11 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
				int32_t L_12 = V_1;
				NullCheck(L_7);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_9: *(void**)L_9), L_12);
			}

IL_006a_2:
			{
				RuntimeObject* L_13 = __this->___U3CeU3E5__2;
				NullCheck(L_13);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
				L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_13);
				V_3 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
				L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00c6_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_2;
				__this->___U3CU3Eu__1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_19, (&V_2), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
				goto IL_01b5;
			}

IL_00aa_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = __this->___U3CU3Eu__1;
				V_2 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state = L_22;
			}

IL_00c6_2:
			{
				bool L_23;
				L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0043_2;
				}
			}
			{
				goto IL_00e0_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00d4_1;
			}
			throw e;
		}

CATCH_00d4_1:
		{
			RuntimeObject* L_24 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_4 = L_24;
			RuntimeObject* L_25 = V_4;
			__this->___U3CU3E7__wrap2 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00e0_1;
		}

IL_00e0_1:
		{
			RuntimeObject* L_26 = __this->___U3CeU3E5__2;
			if (!L_26)
			{
				goto IL_014f_1;
			}
		}
		{
			RuntimeObject* L_27 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_28;
			L_28 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			V_6 = L_28;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_30)
			{
				goto IL_0148_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->___U3CU3E1__state = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_5;
			__this->___U3CU3Eu__2 = L_32;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_33 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_33, (&V_5), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			goto IL_01b5;
		}

IL_012b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = __this->___U3CU3Eu__2;
			V_5 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2);
			il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->___U3CU3E1__state = L_36;
		}

IL_0148_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_014f_1:
		{
			RuntimeObject* L_37 = __this->___U3CU3E7__wrap2;
			V_4 = L_37;
			RuntimeObject* L_38 = V_4;
			if (!L_38)
			{
				goto IL_0172_1;
			}
		}
		{
			RuntimeObject* L_39 = V_4;
			Exception_t* L_40 = ((Exception_t*)IsInstClass((RuntimeObject*)L_39, Exception_t_il2cpp_TypeInfo_var));
			if (L_40)
			{
				G_B22_0 = L_40;
				goto IL_0168_1;
			}
			G_B21_0 = L_40;
		}
		{
			RuntimeObject* L_41 = V_4;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, method);
		}

IL_0168_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_42;
			L_42 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B22_0, NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_42, NULL);
		}

IL_0172_1:
		{
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			goto IL_019b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_017b;
		}
		throw e;
	}

CATCH_017b:
	{
		Exception_t* L_43 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_43;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_44 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_45 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_44, L_45, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01b5;
	}

IL_019b:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_46 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_46, NULL);
	}

IL_01b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4*>(__this + _offset);
	U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4*>(__this + _offset);
	U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tAE86725C28F4FF13E2996CFCF50CD81B341B6904 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAE86725C28F4FF13E2996CFCF50CD81B341B6904);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B26_0 = NULL;
	Exception_t* G_B25_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0037_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0171_1;
			}
		}
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			__this->___U3CU3E7__wrap3 = 0;
		}

IL_0037_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_008f_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_00f3_2;
				}
			}
			{
				goto IL_00b2_2;
			}

IL_0044_2:
			{
				Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12;
				L_12 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_13)
				{
					goto IL_00ab_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state = L_14;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15 = V_1;
				__this->___U3CU3Eu__1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_16, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
				goto IL_01fa;
			}

IL_008f_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = __this->___U3CU3Eu__1;
				V_1 = L_17;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_18 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state = L_19;
			}

IL_00ab_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00b2_2:
			{
				RuntimeObject* L_20 = __this->___U3CeU3E5__2;
				NullCheck(L_20);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
				L_21 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_20);
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22;
				L_22 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_22;
				bool L_23;
				L_23 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_010f_2;
				}
			}
			{
				int32_t L_24 = 1;
				V_0 = L_24;
				__this->___U3CU3E1__state = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25 = V_3;
				__this->___U3CU3Eu__2 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_26, (&V_3), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
				goto IL_01fa;
			}

IL_00f3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = __this->___U3CU3Eu__2;
				V_3 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state = L_29;
			}

IL_010f_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0044_2;
				}
			}
			{
				goto IL_0129_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011d_1;
			}
			throw e;
		}

CATCH_011d_1:
		{
			RuntimeObject* L_31 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_5 = L_31;
			RuntimeObject* L_32 = V_5;
			__this->___U3CU3E7__wrap2 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0129_1;
		}

IL_0129_1:
		{
			RuntimeObject* L_33 = __this->___U3CeU3E5__2;
			if (!L_33)
			{
				goto IL_0194_1;
			}
		}
		{
			RuntimeObject* L_34 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_2 = L_35;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_1 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_37)
			{
				goto IL_018d_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_1;
			__this->___U3CU3Eu__1 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_40, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
			goto IL_01fa;
		}

IL_0171_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = __this->___U3CU3Eu__1;
			V_1 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state = L_43;
		}

IL_018d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
		}

IL_0194_1:
		{
			RuntimeObject* L_44 = __this->___U3CU3E7__wrap2;
			V_5 = L_44;
			RuntimeObject* L_45 = V_5;
			if (!L_45)
			{
				goto IL_01b7_1;
			}
		}
		{
			RuntimeObject* L_46 = V_5;
			Exception_t* L_47 = ((Exception_t*)IsInstClass((RuntimeObject*)L_46, Exception_t_il2cpp_TypeInfo_var));
			if (L_47)
			{
				G_B26_0 = L_47;
				goto IL_01ad_1;
			}
			G_B25_0 = L_47;
		}
		{
			RuntimeObject* L_48 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, method);
		}

IL_01ad_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_49;
			L_49 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B26_0, NULL);
			NullCheck(L_49);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_49, NULL);
		}

IL_01b7_1:
		{
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			goto IL_01e0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c0;
		}
		throw e;
	}

CATCH_01c0:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_50;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_51 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_52 = V_6;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_51, L_52, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01fa;
	}

IL_01e0:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_53 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_53, NULL);
	}

IL_01fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*>(__this + _offset);
	U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B*>(__this + _offset);
	U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t085062A704A7812483DCB5FBC66E0BD9FAB7F21F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t085062A704A7812483DCB5FBC66E0BD9FAB7F21F);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B26_0 = NULL;
	Exception_t* G_B25_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0037_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_018c_1;
			}
		}
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			__this->___U3CU3E7__wrap3 = 0;
		}

IL_0037_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00a7_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_010d_2;
				}
			}
			{
				__this->___U3CindexU3E5__5 = 0;
				goto IL_00ca_2;
			}

IL_004b_2:
			{
				Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				int32_t L_11 = __this->___U3CindexU3E5__5;
				V_2 = L_11;
				int32_t L_12 = V_2;
				if (((int64_t)L_12 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_12 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_14;
				L_14 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_10: *(void**)L_10), L_13);
				V_3 = L_14;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15;
				L_15 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
				V_1 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_16)
				{
					goto IL_00c3_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state = L_17;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = V_1;
				__this->___U3CU3Eu__1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_19, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
				goto IL_0215;
			}

IL_00a7_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_20 = __this->___U3CU3Eu__1;
				V_1 = L_20;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_21 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state = L_22;
			}

IL_00c3_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00ca_2:
			{
				RuntimeObject* L_23 = __this->___U3CeU3E5__2;
				NullCheck(L_23);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_24;
				L_24 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_23);
				V_5 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25;
				L_25 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_25;
				bool L_26;
				L_26 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_4;
				__this->___U3CU3Eu__2 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_29 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_29, (&V_4), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
				goto IL_0215;
			}

IL_010d_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = __this->___U3CU3Eu__2;
				V_4 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state = L_32;
			}

IL_012a_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_004b_2;
				}
			}
			{
				goto IL_0144_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0138_1;
			}
			throw e;
		}

CATCH_0138_1:
		{
			RuntimeObject* L_34 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_34;
			RuntimeObject* L_35 = V_6;
			__this->___U3CU3E7__wrap2 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_35);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0144_1;
		}

IL_0144_1:
		{
			RuntimeObject* L_36 = __this->___U3CeU3E5__2;
			if (!L_36)
			{
				goto IL_01af_1;
			}
		}
		{
			RuntimeObject* L_37 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_37);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_38;
			L_38 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
			V_3 = L_38;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39;
			L_39 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_1 = L_39;
			bool L_40;
			L_40 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_40)
			{
				goto IL_01a8_1;
			}
		}
		{
			int32_t L_41 = 2;
			V_0 = L_41;
			__this->___U3CU3E1__state = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = V_1;
			__this->___U3CU3Eu__1 = L_42;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_43, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
			goto IL_0215;
		}

IL_018c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = __this->___U3CU3Eu__1;
			V_1 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_45 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_45, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_46 = (-1);
			V_0 = L_46;
			__this->___U3CU3E1__state = L_46;
		}

IL_01a8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
		}

IL_01af_1:
		{
			RuntimeObject* L_47 = __this->___U3CU3E7__wrap2;
			V_6 = L_47;
			RuntimeObject* L_48 = V_6;
			if (!L_48)
			{
				goto IL_01d2_1;
			}
		}
		{
			RuntimeObject* L_49 = V_6;
			Exception_t* L_50 = ((Exception_t*)IsInstClass((RuntimeObject*)L_49, Exception_t_il2cpp_TypeInfo_var));
			if (L_50)
			{
				G_B26_0 = L_50;
				goto IL_01c8_1;
			}
			G_B25_0 = L_50;
		}
		{
			RuntimeObject* L_51 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, method);
		}

IL_01c8_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_52;
			L_52 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B26_0, NULL);
			NullCheck(L_52);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_52, NULL);
		}

IL_01d2_1:
		{
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			goto IL_01fb;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01db;
		}
		throw e;
	}

CATCH_01db:
	{
		Exception_t* L_53 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_53;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_55 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_54, L_55, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0215;
	}

IL_01fb:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_56 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_56, NULL);
	}

IL_0215:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*>(__this + _offset);
	U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A*>(__this + _offset);
	U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3316D7AB28E0550982C1DC4ACAC4FE6B62711280 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3316D7AB28E0550982C1DC4ACAC4FE6B62711280);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B26_0 = NULL;
	Exception_t* G_B25_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0037_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0177_1;
			}
		}
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			__this->___U3CU3E7__wrap3 = 0;
		}

IL_0037_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0095_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_00f9_2;
				}
			}
			{
				goto IL_00b8_2;
			}

IL_0044_2:
			{
				Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_2 = L_12;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13;
				L_13 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_14)
				{
					goto IL_00b1_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state = L_15;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16 = V_1;
				__this->___U3CU3Eu__1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_17 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_17, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
				goto IL_0200;
			}

IL_0095_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = __this->___U3CU3Eu__1;
				V_1 = L_18;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_19 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state = L_20;
			}

IL_00b1_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00b8_2:
			{
				RuntimeObject* L_21 = __this->___U3CeU3E5__2;
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_21);
				V_4 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0115_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_3;
				__this->___U3CU3Eu__2 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_27, (&V_3), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
				goto IL_0200;
			}

IL_00f9_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = __this->___U3CU3Eu__2;
				V_3 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state = L_30;
			}

IL_0115_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_0044_2;
				}
			}
			{
				goto IL_012f_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0123_1;
			}
			throw e;
		}

CATCH_0123_1:
		{
			RuntimeObject* L_32 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_5 = L_32;
			RuntimeObject* L_33 = V_5;
			__this->___U3CU3E7__wrap2 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_012f_1;
		}

IL_012f_1:
		{
			RuntimeObject* L_34 = __this->___U3CeU3E5__2;
			if (!L_34)
			{
				goto IL_019a_1;
			}
		}
		{
			RuntimeObject* L_35 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_2 = L_36;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_1 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_38)
			{
				goto IL_0193_1;
			}
		}
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			__this->___U3CU3E1__state = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_1;
			__this->___U3CU3Eu__1 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_41 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_41, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
			goto IL_0200;
		}

IL_0177_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = __this->___U3CU3Eu__1;
			V_1 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state = L_44;
		}

IL_0193_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
		}

IL_019a_1:
		{
			RuntimeObject* L_45 = __this->___U3CU3E7__wrap2;
			V_5 = L_45;
			RuntimeObject* L_46 = V_5;
			if (!L_46)
			{
				goto IL_01bd_1;
			}
		}
		{
			RuntimeObject* L_47 = V_5;
			Exception_t* L_48 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			if (L_48)
			{
				G_B26_0 = L_48;
				goto IL_01b3_1;
			}
			G_B25_0 = L_48;
		}
		{
			RuntimeObject* L_49 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01b3_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_50;
			L_50 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B26_0, NULL);
			NullCheck(L_50);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_50, NULL);
		}

IL_01bd_1:
		{
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			goto IL_01e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c6;
		}
		throw e;
	}

CATCH_01c6:
	{
		Exception_t* L_51 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_51;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_52 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_53 = V_6;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_52, L_53, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0200;
	}

IL_01e6:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_54, NULL);
	}

IL_0200:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*>(__this + _offset);
	U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9*>(__this + _offset);
	U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC5B0B70A7062FD8EC9E6FBE947AE22EEE3BF6346 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC5B0B70A7062FD8EC9E6FBE947AE22EEE3BF6346);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B26_0 = NULL;
	Exception_t* G_B25_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0037_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0195_1;
			}
		}
		{
			RuntimeObject* L_3 = __this->___source;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)L_5);
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			__this->___U3CU3E7__wrap3 = 0;
		}

IL_0037_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00b0_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0116_2;
				}
			}
			{
				__this->___U3CindexU3E5__5 = 0;
				goto IL_00d3_2;
			}

IL_004e_2:
			{
				Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC* L_8 = __this->___action;
				RuntimeObject* L_9 = __this->___U3CeU3E5__2;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				int32_t L_11 = __this->___U3CindexU3E5__5;
				V_2 = L_11;
				int32_t L_12 = V_2;
				if (((int64_t)L_12 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_12 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_14 = __this->___cancellationToken;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_15;
				L_15 = InvokerFuncInvoker3< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_10: *(void**)L_10), L_13, L_14);
				V_3 = L_15;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16;
				L_16 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
				V_1 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_17)
				{
					goto IL_00cc_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state = L_18;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19 = V_1;
				__this->___U3CU3Eu__1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_20 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_20, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
				goto IL_021e;
			}

IL_00b0_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21 = __this->___U3CU3Eu__1;
				V_1 = L_21;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_22 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state = L_23;
			}

IL_00cc_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00d3_2:
			{
				RuntimeObject* L_24 = __this->___U3CeU3E5__2;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_24);
				V_5 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0133_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_4;
				__this->___U3CU3Eu__2 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2))->___task))->___source), (void*)NULL);
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_30 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_30, (&V_4), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
				goto IL_021e;
			}

IL_0116_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = __this->___U3CU3Eu__2;
				V_4 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state = L_33;
			}

IL_0133_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_014d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0141_1;
			}
			throw e;
		}

CATCH_0141_1:
		{
			RuntimeObject* L_35 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			V_6 = L_35;
			RuntimeObject* L_36 = V_6;
			__this->___U3CU3E7__wrap2 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_36);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_014d_1;
		}

IL_014d_1:
		{
			RuntimeObject* L_37 = __this->___U3CeU3E5__2;
			if (!L_37)
			{
				goto IL_01b8_1;
			}
		}
		{
			RuntimeObject* L_38 = __this->___U3CeU3E5__2;
			NullCheck((RuntimeObject*)L_38);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_39;
			L_39 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_38);
			V_3 = L_39;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40;
			L_40 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_1 = L_40;
			bool L_41;
			L_41 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
			if (L_41)
			{
				goto IL_01b1_1;
			}
		}
		{
			int32_t L_42 = 2;
			V_0 = L_42;
			__this->___U3CU3E1__state = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = V_1;
			__this->___U3CU3Eu__1 = L_43;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1))->___task))->___source), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_44 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_44, (&V_1), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
			goto IL_021e;
		}

IL_0195_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = __this->___U3CU3Eu__1;
			V_1 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_46 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->___U3CU3E1__state = L_47;
		}

IL_01b1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
		}

IL_01b8_1:
		{
			RuntimeObject* L_48 = __this->___U3CU3E7__wrap2;
			V_6 = L_48;
			RuntimeObject* L_49 = V_6;
			if (!L_49)
			{
				goto IL_01db_1;
			}
		}
		{
			RuntimeObject* L_50 = V_6;
			Exception_t* L_51 = ((Exception_t*)IsInstClass((RuntimeObject*)L_50, Exception_t_il2cpp_TypeInfo_var));
			if (L_51)
			{
				G_B26_0 = L_51;
				goto IL_01d1_1;
			}
			G_B25_0 = L_51;
		}
		{
			RuntimeObject* L_52 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, method);
		}

IL_01d1_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_53;
			L_53 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B26_0, NULL);
			NullCheck(L_53);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_53, NULL);
		}

IL_01db_1:
		{
			__this->___U3CU3E7__wrap2 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)NULL);
			goto IL_0204;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e4;
		}
		throw e;
	}

CATCH_01e4:
	{
		Exception_t* L_54 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_54;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_55 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		Exception_t* L_56 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_55, L_56, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_021e;
	}

IL_0204:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CeU3E5__2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_57 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_57, NULL);
	}

IL_021e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*>(__this + _offset);
	U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0*>(__this + _offset);
	U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T_t144F040A80D5B37B4FE0CB25BB2D7DC714430919 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t144F040A80D5B37B4FE0CB25BB2D7DC714430919);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_4 = alloca(SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_4;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_4;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	memset(V_1, 0, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F V_4;
	memset((&V_4), 0, sizeof(V_4));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_5;
	memset((&V_5), 0, sizeof(V_5));
	SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0018_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), 0);
		}

IL_0018_1:
		{
		}
		try
		{
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0054_2;
				}
			}
			{
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_4);
				il2cpp_codegen_memcpy(V_1, L_4, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				bool L_5;
				L_5 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
				if (L_5)
				{
					goto IL_0070_2;
				}
			}
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_6);
				il2cpp_codegen_memcpy(L_7, V_1, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7), L_7, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
				goto IL_0175;
			}

IL_0054_2:
			{
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7)), SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_memcpy(V_1, L_8, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),7)))), SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				int32_t L_9 = (-1);
				V_0 = L_9;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_9);
			}

IL_0070_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_10);
				goto IL_008b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007a_1;
			}
			throw e;
		}

CATCH_007a_1:
		{
			Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_2 = L_11;
			Exception_t* L_12 = V_2;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5), (RuntimeObject*)L_12);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6), 1);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_008b_1;
		}

IL_008b_1:
		{
			int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),6));
			V_3 = L_13;
			int32_t L_14 = V_3;
			if ((!(((uint32_t)L_14) == ((uint32_t)1))))
			{
				goto IL_0140_1;
			}
		}
		{
			RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5));
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), ((Exception_t*)CastclassClass((RuntimeObject*)L_15, Exception_t_il2cpp_TypeInfo_var)));
		}

IL_00aa_1:
		{
		}
		try
		{
			{
				int32_t L_16 = V_0;
				if ((((int32_t)L_16) == ((int32_t)1)))
				{
					goto IL_00fb_2;
				}
			}
			{
				bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
				if (!L_17)
				{
					goto IL_011f_2;
				}
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = V_5;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 L_19;
				L_19 = UniTask_SwitchToMainThread_mBC162C95F0ED605F8E5416A60CCA153E0993CBF1(L_18, NULL);
				V_6 = L_19;
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_20;
				L_20 = SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29((&V_6), NULL);
				V_4 = L_20;
				bool L_21;
				L_21 = Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37((&V_4), NULL);
				if (L_21)
				{
					goto IL_0118_2;
				}
			}
			{
				int32_t L_22 = 1;
				V_0 = L_22;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_22);
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_23 = V_4;
				il2cpp_codegen_write_instance_field_data<Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9), L_23);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*, U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), (&V_4), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
				goto IL_0175;
			}

IL_00fb_2:
			{
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_24 = *(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9));
				V_4 = L_24;
				il2cpp_codegen_initobj((((Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),9)))), sizeof(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F));
				int32_t L_25 = (-1);
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_25);
			}

IL_0118_2:
			{
				Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2((&V_4), NULL);
			}

IL_011f_2:
			{
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_26 = *(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4));
				Exception_t* L_27 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8));
				NullCheck(L_26);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_26, L_27, NULL);
				goto IL_0139_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0132_1;
			}
			throw e;
		}

CATCH_0132_1:
		{
			Exception_t* L_28 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
			UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_28, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0139_1;
		}

IL_0139_1:
		{
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),8), (Exception_t*)NULL);
		}

IL_0140_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),5), NULL);
			goto IL_0162;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0149;
		}
		throw e;
	}

CATCH_0149:
	{
		Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_29;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_30 = V_7;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0175;
	}

IL_0162:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), NULL);
	}

IL_0175:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5*>(__this + _offset);
	U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_stateMachine;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5*>(__this + _offset);
	U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_IDisposable_Dispose_m19FAC68D63A4344E1CB5F13B968A17F266809EF1_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllItemIdsU3Ed__13_MoveNext_mFF4B690A39107AAF29E12A990389058A719CFDDB_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0105;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state = (-1);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_4 = L_3->___m_IteratorStack;
		NullCheck(L_4);
		Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31(L_4, Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		RuntimeObject* L_5 = __this->___rootIds;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7 = __this->___U3CU3E4__this;
		NullCheck(L_7);
		TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* L_8 = (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE*)(&L_7->___m_TreeData);
		RuntimeObject* L_9;
		L_9 = TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_11 = __this->___U3CU3E4__this;
		NullCheck(L_11);
		TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* L_12 = (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE*)(&L_11->___m_TreeData);
		RuntimeObject* L_13;
		L_13 = TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___rootIds = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rootIds), (void*)L_13);
	}

IL_0072:
	{
		RuntimeObject* L_14 = __this->___rootIds;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_14);
		__this->___U3CcurrentIteratorU3E5__1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1), (void*)L_15);
		goto IL_0159;
	}

IL_0088:
	{
		RuntimeObject* L_16 = __this->___U3CcurrentIteratorU3E5__1;
		NullCheck((RuntimeObject*)L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		__this->___U3ChasNextU3E5__2 = L_17;
		bool L_18 = __this->___U3ChasNextU3E5__2;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00df;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_20 = __this->___U3CU3E4__this;
		NullCheck(L_20);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_21 = L_20->___m_IteratorStack;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_inline(L_21, Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_24 = __this->___U3CU3E4__this;
		NullCheck(L_24);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_25 = L_24->___m_IteratorStack;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01(L_25, Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		__this->___U3CcurrentIteratorU3E5__1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1), (void*)L_26);
		goto IL_0159;
	}

IL_00da:
	{
		goto IL_0161;
	}

IL_00df:
	{
		RuntimeObject* L_27 = __this->___U3CcurrentIteratorU3E5__1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_27);
		__this->___U3CcurrentItemIdU3E5__3 = L_28;
		int32_t L_29 = __this->___U3CcurrentItemIdU3E5__3;
		__this->___U3CU3E2__current = L_29;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state = (-1);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_30 = __this->___U3CU3E4__this;
		int32_t L_31 = __this->___U3CcurrentItemIdU3E5__3;
		NullCheck(L_30);
		bool L_32;
		L_32 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_5 = L_32;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_0158;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_34 = __this->___U3CU3E4__this;
		NullCheck(L_34);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_35 = L_34->___m_IteratorStack;
		RuntimeObject* L_36 = __this->___U3CcurrentIteratorU3E5__1;
		NullCheck(L_35);
		Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0(L_35, L_36, Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_37 = __this->___U3CU3E4__this;
		int32_t L_38 = __this->___U3CcurrentItemIdU3E5__3;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_39);
		__this->___U3CcurrentIteratorU3E5__1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1), (void*)L_40);
	}

IL_0158:
	{
	}

IL_0159:
	{
		V_6 = (bool)1;
		goto IL_0088;
	}

IL_0161:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m44551F503EB8198D58BFD1179399D552C7FEAD58_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_Reset_m5CC80672B5B797944FA4C9DEE9E0420470B19928_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_get_Current_m36B7C86D5A34AC50A70FE6306D2A495C966BE302_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_3 = (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_3;
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_4 = V_0;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__rootIds;
		NullCheck(L_6);
		L_6->___rootIds = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___rootIds), (void*)L_7);
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m6E3506454FD617CCD2DE2E24CA2BAFC8B714FBC9_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13__ctor_mFD9C0FD7EF125A822C929FD08DF108792C3E1CAC_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_IDisposable_Dispose_mF29D8D0D67EAD9BD61544483AE36087E294BE05E_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllItemIdsU3Ed__13_MoveNext_mBCD7342086A89DE740876D942266D4DDF7C6FF8D_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0105;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state = (-1);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_4 = L_3->___m_IteratorStack;
		NullCheck(L_4);
		Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31(L_4, Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		RuntimeObject* L_5 = __this->___rootIds;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7 = __this->___U3CU3E4__this;
		NullCheck(L_7);
		TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998* L_8 = (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*)(&L_7->___m_TreeData);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_11 = __this->___U3CU3E4__this;
		NullCheck(L_11);
		TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998* L_12 = (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*)(&L_11->___m_TreeData);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___rootIds = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rootIds), (void*)L_13);
	}

IL_0072:
	{
		RuntimeObject* L_14 = __this->___rootIds;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_14);
		__this->___U3CcurrentIteratorU3E5__1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1), (void*)L_15);
		goto IL_0159;
	}

IL_0088:
	{
		RuntimeObject* L_16 = __this->___U3CcurrentIteratorU3E5__1;
		NullCheck((RuntimeObject*)L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		__this->___U3ChasNextU3E5__2 = L_17;
		bool L_18 = __this->___U3ChasNextU3E5__2;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00df;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_20 = __this->___U3CU3E4__this;
		NullCheck(L_20);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_21 = L_20->___m_IteratorStack;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_inline(L_21, Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_24 = __this->___U3CU3E4__this;
		NullCheck(L_24);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_25 = L_24->___m_IteratorStack;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01(L_25, Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		__this->___U3CcurrentIteratorU3E5__1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1), (void*)L_26);
		goto IL_0159;
	}

IL_00da:
	{
		goto IL_0161;
	}

IL_00df:
	{
		RuntimeObject* L_27 = __this->___U3CcurrentIteratorU3E5__1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_27);
		__this->___U3CcurrentItemIdU3E5__3 = L_28;
		int32_t L_29 = __this->___U3CcurrentItemIdU3E5__3;
		__this->___U3CU3E2__current = L_29;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state = (-1);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_30 = __this->___U3CU3E4__this;
		int32_t L_31 = __this->___U3CcurrentItemIdU3E5__3;
		NullCheck(L_30);
		bool L_32;
		L_32 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_5 = L_32;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_0158;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_34 = __this->___U3CU3E4__this;
		NullCheck(L_34);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_35 = L_34->___m_IteratorStack;
		RuntimeObject* L_36 = __this->___U3CcurrentIteratorU3E5__1;
		NullCheck(L_35);
		Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0(L_35, L_36, Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_37 = __this->___U3CU3E4__this;
		int32_t L_38 = __this->___U3CcurrentItemIdU3E5__3;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_39);
		__this->___U3CcurrentIteratorU3E5__1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1), (void*)L_40);
	}

IL_0158:
	{
	}

IL_0159:
	{
		V_6 = (bool)1;
		goto IL_0088;
	}

IL_0161:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m995C6C08435B39D1FE47339CB5C63AAEC601D993_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_Reset_mE000ABEA52DA7642950B8397F4D3FFCCF88641D7_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_get_Current_m03C460CEE166D98A2D5C56202959B65954F7059B_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___U3CU3E2__current;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m312BEFBE90C8DA79B81A5AEE509047BBE1D0F511_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_3 = (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_3;
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_4 = V_0;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__rootIds;
		NullCheck(L_6);
		L_6->___rootIds = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___rootIds), (void*)L_7);
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_mBC31B365C013AFB7DC39BEC432F0CB13A48C9FB4_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mD15CB6FC710C8BEB221A532A20487ED1241A9815_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m41A8DAE4F14656C560E5165A1964CC6FE5712E3A_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m17AB7258D629B8D9CEC578FABBF86A8236C4EC6F_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* V_1 = NULL;
	EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_7 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*, EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* >::Invoke(7, L_9, (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* L_11 = V_2;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_12 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_13 = L_12->___items;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_14 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_17 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___Item2), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_28 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m0FF57B77A19BDC81427FD9B3FBEBF37BA283A90D_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m7495761E0952298D9D687578B235FD12E22A63FB_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m93F5769044EBC3A4587A2E6B65C8B0FEAB75E8F8_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___U3CU3E2__current;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mBC570E75C476178E37176043A0E2499CE8E4A691_gshared (U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m56DF62D70AD1B8F059197C1B8CF9B4CDBF3CB724_gshared (U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mBFD5E2BAE833405F50A275343148D320438B7CB3_gshared (U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C* V_1 = NULL;
	EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mE9EB99555A5C49D55AD64AD5348F8398A3A56AC3((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* L_7 = (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t1B02FC4E29D28D2DCB429ED92574F74A27880F9C* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D*, EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D* >::Invoke(7, L_9, (EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D* L_11 = V_2;
		Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* L_12 = (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928*)(&__this->___U3CbufferU3E5__2);
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_13 = L_12->___items;
		Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* L_14 = (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m10C951C01865A7E005820782436AC621A20FADD3(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_tAA33F0A646DC50BD9A5F4EB7D6B6765513B8949D*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* L_17 = (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928*)(&__this->___U3CbufferU3E5__2);
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current))->___m_DisplayName), (void*)NULL);
		#endif
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928* L_28 = (Buffer_1_tCBC83F9D3730C0B1DADBA2D4813E890C74EBE928*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m9DBF4DD2D8B19E4B353EC407A3F6E77B958C2FF4_gshared (U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A* __this, const RuntimeMethod* method) 
{
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m4E863F458BF77370D15E3E7387DFA5ACC7549933_gshared (U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m054EA6EC70FCD2B8890A3922C639CB77D7674734_gshared (U3CGetEnumeratorU3Ed__1_t1D2845578780C70D7B3678D9458C57ABDC52F72A* __this, const RuntimeMethod* method) 
{
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_0 = __this->___U3CU3E2__current;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m7D4E289FB3E0AC3B7870898DBABE01B7A01C0AE4_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mE26C254B51721A2CDF4DC94D3CB711261F59C20E_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mB0DB6AF383D4F3BEA55C80FF4A4E862863DEDBBA_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* V_1 = NULL;
	EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___source;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2))->___items), (void*)NULL);
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_7 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		int32_t L_8 = L_7->___count;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*, EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* >::Invoke(7, L_9, (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* L_11 = V_2;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_12 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_13 = L_12->___items;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_14 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		int32_t L_15 = L_14->___count;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)L_16);
		V_2 = (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*)NULL;
		__this->___U3CiU3E5__4 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_17 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_18 = L_17->___items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___U3CmapU3E5__3;
		int32_t L_20 = __this->___U3CiU3E5__4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current = L_24;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state = (-1);
		int32_t L_25 = __this->___U3CiU3E5__4;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = __this->___U3CiU3E5__4;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_28 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2);
		int32_t L_29 = L_28->___count;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m97BA4EBA4873197922F6C695F296D0CEFFC01068_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m4710AD2906AA9D8B1281D8A1C078204D762AC69F_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m87F64C217ABC9797A9C49967E10BF4B0163CA7E9_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = __this->___U3CU3E2__current;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		RuntimeObject* L_3 = L_2->___source;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task);
		int16_t L_5 = L_4->___token;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Exception_t* L_1 = ___0_exception;
		__this->___ex = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex), (void*)L_1);
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = __this->___runnerPromise;
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline (String_t* ___0_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_paramName;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runner;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runner;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		Exception_t* L_3 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_3, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___runner;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___runner;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		__this->___runner = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A, NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_3 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		bool L_4 = L_3->___result;
		return L_4;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_6 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int16_t L_7 = L_6->___token;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 Enumerator_get_Current_m0FECBAC967E8393562F8A3672F8E4749569DC02E_gshared_inline (Enumerator_t35E75C1ACBA2CED3AD37D8DB6A14A57E70AFE0A6* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC3AC829C78D0C95AC43F29F601558266274BB956 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 Enumerator_get_Current_m0066B93625BCFB48A397FBDD68007AAB78C628E8_gshared_inline (Enumerator_t7AF8C5C2FA8858B4781CF1E62A27171F993F568B* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tA75B083C5C7F9CE6237B200BC4A36B820A24C5C8 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 Enumerator_get_Current_mA2D3EE07E11DDC88DEA69B2580EAD5218FE78599_gshared_inline (Enumerator_tED3D432B765A92A2ED5774BFBEBFED25045378A1* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t9E936A9C063E78E3C06E01B1A28CAB03B4C51221 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_gshared_inline (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_RootItemIds;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___0_task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___source;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___source;
		int16_t L_2 = __this->___token;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___0_task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source;
		int16_t L_2 = __this->___token;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
