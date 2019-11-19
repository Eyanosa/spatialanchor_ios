#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
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


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker
struct  XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker::HoloLensUXTree
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___HoloLensUXTree_5;
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker::MobileAndEditorUXTree
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___MobileAndEditorUXTree_6;

public:
	inline static int32_t get_offset_of_HoloLensUXTree_5() { return static_cast<int32_t>(offsetof(XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB, ___HoloLensUXTree_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_HoloLensUXTree_5() const { return ___HoloLensUXTree_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_HoloLensUXTree_5() { return &___HoloLensUXTree_5; }
	inline void set_HoloLensUXTree_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___HoloLensUXTree_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoloLensUXTree_5), (void*)value);
	}

	inline static int32_t get_offset_of_MobileAndEditorUXTree_6() { return static_cast<int32_t>(offsetof(XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB, ___MobileAndEditorUXTree_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_MobileAndEditorUXTree_6() const { return ___MobileAndEditorUXTree_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_MobileAndEditorUXTree_6() { return &___MobileAndEditorUXTree_6; }
	inline void set_MobileAndEditorUXTree_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___MobileAndEditorUXTree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MobileAndEditorUXTree_6), (void*)value);
	}
};

struct XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker::_Instance
	XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB * ____Instance_4;

public:
	inline static int32_t get_offset_of__Instance_4() { return static_cast<int32_t>(offsetof(XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB_StaticFields, ____Instance_4)); }
	inline XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB * get__Instance_4() const { return ____Instance_4; }
	inline XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB ** get_address_of__Instance_4() { return &____Instance_4; }
	inline void set__Instance_4(XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB * value)
	{
		____Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Instance_4), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForLauncher
struct  XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38  : public XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB
{
public:

public:
};

struct XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForLauncher Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForLauncher::_Instance
	XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38 * ____Instance_7;

public:
	inline static int32_t get_offset_of__Instance_7() { return static_cast<int32_t>(offsetof(XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38_StaticFields, ____Instance_7)); }
	inline XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38 * get__Instance_7() const { return ____Instance_7; }
	inline XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38 ** get_address_of__Instance_7() { return &____Instance_7; }
	inline void set__Instance_7(XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38 * value)
	{
		____Instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Instance_7), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo
struct  XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC  : public XRUXPicker_tA3BFCC29B94A472DF23F055FF6E7ECFA134E37AB
{
public:

public:
};

struct XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo::_Instance
	XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC * ____Instance_7;

public:
	inline static int32_t get_offset_of__Instance_7() { return static_cast<int32_t>(offsetof(XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC_StaticFields, ____Instance_7)); }
	inline XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC * get__Instance_7() const { return ____Instance_7; }
	inline XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC ** get_address_of__Instance_7() { return &____Instance_7; }
	inline void set__Instance_7(XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC * value)
	{
		____Instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Instance_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4089;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4089 = { sizeof (XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38), -1, sizeof(XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38_StaticFields), 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable4089[1] = 
{
	XRUXPickerForLauncher_t21650CB584EA45466259DDD63D53A40D019E8D38_StaticFields::get_offset_of__Instance_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4090;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4090 = { sizeof (XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC), -1, sizeof(XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC_StaticFields), 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable4090[1] = 
{
	XRUXPickerForSharedAnchorDemo_tA581FEFE85F2E581D0A6E9EA11EB71D8E00D28BC_StaticFields::get_offset_of__Instance_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
