#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct IXRInputValueReader_1_tE6C56CC3831F86463CF271FFFFAEA88A1AFFC425;
struct IXRInputValueReader_1_t3B292CF89AD3EFA514AD2640799BAD4A06619677;
struct IXRInputValueReader_1_tC86C12DB1216B425E7880781CAFFE046A4E03898;
struct UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158;
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D;
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A;
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D;
struct UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB;
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5;
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0;
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59;

IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 
{
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_Reader;
};
struct BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE 
{
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_Reader;
};
struct BypassScope_t801793A02437762F196198D282A1980396D8B968 
{
	XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* ___m_Reader;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct InputSourceMode_tC6F86938AEFC93650B200F13CB1CDF660E091A6C 
{
	int32_t ___value__;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59  : public RuntimeObject
{
	int32_t ___m_InputSourceMode;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_InputAction;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_InputActionReference;
	UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158* ___m_InputActionReferenceCache;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	float ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* ___m_ObjectReference;
};
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* ___m_ObjectReference;
};
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59 {};
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	String_t* ___m_ActionId;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
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
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, RuntimeObject** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0_gshared (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4_gshared (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4_gshared (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70_gshared (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method) ;

inline void UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032 (Type_t* ___0_valueType, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_inputAction, int32_t ___1_inputSourceMode, const RuntimeMethod* method) ;
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9*, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9*, const RuntimeMethod*))BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4_gshared)(__this, method);
}
inline float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared)(___0_action, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1** ___0_reference, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
inline bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, float*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared)(___0_action, ___1_value, method);
}
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline void UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE*, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE*, const RuntimeMethod*))BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared)(___0_action, method);
}
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared)(__this, method);
}
inline bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared)(___0_action, ___1_value, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
inline void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40 (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, const RuntimeMethod*))BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_get_manualValue_m3B6D11438549621E7A9045A95C18ACB8C0CB4746_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m92D0CDB5E666254390FE5B4FB8BAFD3580EBADA7_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_mBF28E6F2AD9ACD940BD13E35669A7CB834E4CFF0_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCD49C74D79D06D3446BEF2DBA790F1B6C76E55C5_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m2EECA3A2B8475EC17A9B30BB3B6470EBE3A34169_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			float L_3;
			L_3 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float L_8;
		L_8 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_8;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		float L_13;
		L_13 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_13;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		float L_17;
		L_17 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		float L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		float L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mA7A16FB5DD2CFAD42DF5414A8B012EDCF587F9AC_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float* ___0_value, const RuntimeMethod* method) 
{
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			float* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		float* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(float));
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		float* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		float* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(float));
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		float* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		float* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(float));
		return (bool)0;
	}

IL_00ad:
	{
		float* L_23 = ___0_value;
		float L_24 = __this->___m_ManualValue;
		*(float*)L_23 = L_24;
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) 
{
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(float));
		return (bool)0;
	}

IL_000c:
	{
		float* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(float*)L_2 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_get_manualValue_m5EF71D81283E883A400D54151CCD812B7CF328EC_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m19E36BFF1B4DCAB067FFAE8B5C4F3327C40D51E7_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m15ABD6A28E25B0DE4396C5B4FA13007E666FECF1_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mFC8C600D3AE334E250AD75D8B42AF6EDCC62528C_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m12FFA2407D2822DB6CBB1B671A6F349F7AA0DA56_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
			L_3 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_8;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_13;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mB3FA1E715287C738E23501839BE2CC019B0A4C33_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_00ad:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___m_ManualValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23 = L_24;
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) 
{
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_000c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_get_manualValue_m6580D9D0E90768453554EC4C3F3A8BDE118832AD_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m7DE8FBB1F992F66B64970AE99224524E22F8232B_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m86D6EE8C2B6C04E222D96122A85F792D9A7B8CAB_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m391756331BB534D08D3C6DF2D5615F75B5E0E21E_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mC3F4DB0A46B3C8AE8E07B03FDE9B6AC8D81E1C78_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m3BED8195FBDCE6A99FCC116EBDC1EB0D62D2A039_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = *(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m862D31846AB537F3363F51ACE9942E1FD7A486F1_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_0, (((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)))), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_6 = L_3;
	const Il2CppFullySharedGenericStruct L_8 = L_3;
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = L_3;
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_1, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_4, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, (Il2CppFullySharedGenericStruct*)L_3);
			il2cpp_codegen_memcpy(V_1, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_6, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_12, (Il2CppFullySharedGenericStruct*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00ab:
	{
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00b2:
	{
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mC84F19E640053D49DF7AC4E26440A3649D928CD4_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Il2CppFullySharedGenericStruct* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		Il2CppFullySharedGenericStruct* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		bool L_10;
		L_10 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Il2CppFullySharedGenericStruct* L_14 = ___0_value;
		bool L_15;
		L_15 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		Il2CppFullySharedGenericStruct* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		Il2CppFullySharedGenericStruct* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		Il2CppFullySharedGenericStruct* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_00ad:
	{
		Il2CppFullySharedGenericStruct* L_23 = ___0_value;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_23, L_24, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_23, (void*)L_24);
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mA9DD9A98276A883692B7BCBDFBAB6912D60F41E9_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_3 = L_1;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_2, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mAF814AE91F21FF5F3AD73616B7D14DB1CAD004D6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_000c:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_InputSourceMode;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
