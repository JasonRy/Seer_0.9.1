﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// DeviceAttributes
struct DeviceAttributes_t2503308397;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TenantCode
struct  TenantCode_t391021015  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TenantCode::Objs
	List_1_t747900261 * ___Objs_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TenantCode::effects
	List_1_t747900261 * ___effects_3;
	// UnityEngine.GameObject[] TenantCode::targetObjs
	GameObjectU5BU5D_t2662109048* ___targetObjs_4;
	// UnityEngine.GameObject TenantCode::allBuild
	GameObject_t3674682005 * ___allBuild_5;
	// DeviceAttributes TenantCode::DA
	DeviceAttributes_t2503308397 * ___DA_6;
	// UnityEngine.GameObject TenantCode::item_child
	GameObject_t3674682005 * ___item_child_7;
	// UnityEngine.Transform TenantCode::TargetParent
	Transform_t1659122786 * ___TargetParent_8;

public:
	inline static int32_t get_offset_of_Objs_2() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___Objs_2)); }
	inline List_1_t747900261 * get_Objs_2() const { return ___Objs_2; }
	inline List_1_t747900261 ** get_address_of_Objs_2() { return &___Objs_2; }
	inline void set_Objs_2(List_1_t747900261 * value)
	{
		___Objs_2 = value;
		Il2CppCodeGenWriteBarrier(&___Objs_2, value);
	}

	inline static int32_t get_offset_of_effects_3() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___effects_3)); }
	inline List_1_t747900261 * get_effects_3() const { return ___effects_3; }
	inline List_1_t747900261 ** get_address_of_effects_3() { return &___effects_3; }
	inline void set_effects_3(List_1_t747900261 * value)
	{
		___effects_3 = value;
		Il2CppCodeGenWriteBarrier(&___effects_3, value);
	}

	inline static int32_t get_offset_of_targetObjs_4() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___targetObjs_4)); }
	inline GameObjectU5BU5D_t2662109048* get_targetObjs_4() const { return ___targetObjs_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_targetObjs_4() { return &___targetObjs_4; }
	inline void set_targetObjs_4(GameObjectU5BU5D_t2662109048* value)
	{
		___targetObjs_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetObjs_4, value);
	}

	inline static int32_t get_offset_of_allBuild_5() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___allBuild_5)); }
	inline GameObject_t3674682005 * get_allBuild_5() const { return ___allBuild_5; }
	inline GameObject_t3674682005 ** get_address_of_allBuild_5() { return &___allBuild_5; }
	inline void set_allBuild_5(GameObject_t3674682005 * value)
	{
		___allBuild_5 = value;
		Il2CppCodeGenWriteBarrier(&___allBuild_5, value);
	}

	inline static int32_t get_offset_of_DA_6() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___DA_6)); }
	inline DeviceAttributes_t2503308397 * get_DA_6() const { return ___DA_6; }
	inline DeviceAttributes_t2503308397 ** get_address_of_DA_6() { return &___DA_6; }
	inline void set_DA_6(DeviceAttributes_t2503308397 * value)
	{
		___DA_6 = value;
		Il2CppCodeGenWriteBarrier(&___DA_6, value);
	}

	inline static int32_t get_offset_of_item_child_7() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___item_child_7)); }
	inline GameObject_t3674682005 * get_item_child_7() const { return ___item_child_7; }
	inline GameObject_t3674682005 ** get_address_of_item_child_7() { return &___item_child_7; }
	inline void set_item_child_7(GameObject_t3674682005 * value)
	{
		___item_child_7 = value;
		Il2CppCodeGenWriteBarrier(&___item_child_7, value);
	}

	inline static int32_t get_offset_of_TargetParent_8() { return static_cast<int32_t>(offsetof(TenantCode_t391021015, ___TargetParent_8)); }
	inline Transform_t1659122786 * get_TargetParent_8() const { return ___TargetParent_8; }
	inline Transform_t1659122786 ** get_address_of_TargetParent_8() { return &___TargetParent_8; }
	inline void set_TargetParent_8(Transform_t1659122786 * value)
	{
		___TargetParent_8 = value;
		Il2CppCodeGenWriteBarrier(&___TargetParent_8, value);
	}
};

struct TenantCode_t391021015_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> TenantCode::<>f__switch$map3
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map3_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_9() { return static_cast<int32_t>(offsetof(TenantCode_t391021015_StaticFields, ___U3CU3Ef__switchU24map3_9)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map3_9() const { return ___U3CU3Ef__switchU24map3_9; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map3_9() { return &___U3CU3Ef__switchU24map3_9; }
	inline void set_U3CU3Ef__switchU24map3_9(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map3_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
