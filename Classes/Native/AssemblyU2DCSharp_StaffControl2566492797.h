#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// ItemData
struct ItemData_t1241678205;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// DeviceAttributes
struct DeviceAttributes_t2503308397;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct List_1_t13119972;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StaffControl
struct  StaffControl_t2566492797  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> StaffControl::childList
	List_1_t747900261 * ___childList_2;
	// UnityEngine.GameObject StaffControl::item_p
	GameObject_t3674682005 * ___item_p_3;
	// UnityEngine.Transform StaffControl::item_parent
	Transform_t1659122786 * ___item_parent_4;
	// UnityEngine.GameObject StaffControl::staffInformationCardObj
	GameObject_t3674682005 * ___staffInformationCardObj_5;
	// UnityEngine.Transform StaffControl::canvas
	Transform_t1659122786 * ___canvas_6;
	// ItemData StaffControl::itemData
	ItemData_t1241678205 * ___itemData_7;
	// System.Collections.Generic.List`1<System.String> StaffControl::peopleAttributeList
	List_1_t1375417109 * ___peopleAttributeList_8;
	// DeviceAttributes StaffControl::DA
	DeviceAttributes_t2503308397 * ___DA_9;
	// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/StaffInformatino> StaffControl::LPSS
	List_1_t13119972 * ___LPSS_10;

public:
	inline static int32_t get_offset_of_childList_2() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___childList_2)); }
	inline List_1_t747900261 * get_childList_2() const { return ___childList_2; }
	inline List_1_t747900261 ** get_address_of_childList_2() { return &___childList_2; }
	inline void set_childList_2(List_1_t747900261 * value)
	{
		___childList_2 = value;
		Il2CppCodeGenWriteBarrier(&___childList_2, value);
	}

	inline static int32_t get_offset_of_item_p_3() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___item_p_3)); }
	inline GameObject_t3674682005 * get_item_p_3() const { return ___item_p_3; }
	inline GameObject_t3674682005 ** get_address_of_item_p_3() { return &___item_p_3; }
	inline void set_item_p_3(GameObject_t3674682005 * value)
	{
		___item_p_3 = value;
		Il2CppCodeGenWriteBarrier(&___item_p_3, value);
	}

	inline static int32_t get_offset_of_item_parent_4() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___item_parent_4)); }
	inline Transform_t1659122786 * get_item_parent_4() const { return ___item_parent_4; }
	inline Transform_t1659122786 ** get_address_of_item_parent_4() { return &___item_parent_4; }
	inline void set_item_parent_4(Transform_t1659122786 * value)
	{
		___item_parent_4 = value;
		Il2CppCodeGenWriteBarrier(&___item_parent_4, value);
	}

	inline static int32_t get_offset_of_staffInformationCardObj_5() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___staffInformationCardObj_5)); }
	inline GameObject_t3674682005 * get_staffInformationCardObj_5() const { return ___staffInformationCardObj_5; }
	inline GameObject_t3674682005 ** get_address_of_staffInformationCardObj_5() { return &___staffInformationCardObj_5; }
	inline void set_staffInformationCardObj_5(GameObject_t3674682005 * value)
	{
		___staffInformationCardObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___staffInformationCardObj_5, value);
	}

	inline static int32_t get_offset_of_canvas_6() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___canvas_6)); }
	inline Transform_t1659122786 * get_canvas_6() const { return ___canvas_6; }
	inline Transform_t1659122786 ** get_address_of_canvas_6() { return &___canvas_6; }
	inline void set_canvas_6(Transform_t1659122786 * value)
	{
		___canvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_6, value);
	}

	inline static int32_t get_offset_of_itemData_7() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___itemData_7)); }
	inline ItemData_t1241678205 * get_itemData_7() const { return ___itemData_7; }
	inline ItemData_t1241678205 ** get_address_of_itemData_7() { return &___itemData_7; }
	inline void set_itemData_7(ItemData_t1241678205 * value)
	{
		___itemData_7 = value;
		Il2CppCodeGenWriteBarrier(&___itemData_7, value);
	}

	inline static int32_t get_offset_of_peopleAttributeList_8() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___peopleAttributeList_8)); }
	inline List_1_t1375417109 * get_peopleAttributeList_8() const { return ___peopleAttributeList_8; }
	inline List_1_t1375417109 ** get_address_of_peopleAttributeList_8() { return &___peopleAttributeList_8; }
	inline void set_peopleAttributeList_8(List_1_t1375417109 * value)
	{
		___peopleAttributeList_8 = value;
		Il2CppCodeGenWriteBarrier(&___peopleAttributeList_8, value);
	}

	inline static int32_t get_offset_of_DA_9() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___DA_9)); }
	inline DeviceAttributes_t2503308397 * get_DA_9() const { return ___DA_9; }
	inline DeviceAttributes_t2503308397 ** get_address_of_DA_9() { return &___DA_9; }
	inline void set_DA_9(DeviceAttributes_t2503308397 * value)
	{
		___DA_9 = value;
		Il2CppCodeGenWriteBarrier(&___DA_9, value);
	}

	inline static int32_t get_offset_of_LPSS_10() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797, ___LPSS_10)); }
	inline List_1_t13119972 * get_LPSS_10() const { return ___LPSS_10; }
	inline List_1_t13119972 ** get_address_of_LPSS_10() { return &___LPSS_10; }
	inline void set_LPSS_10(List_1_t13119972 * value)
	{
		___LPSS_10 = value;
		Il2CppCodeGenWriteBarrier(&___LPSS_10, value);
	}
};

struct StaffControl_t2566492797_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> StaffControl::<>f__switch$map5
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map5_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_11() { return static_cast<int32_t>(offsetof(StaffControl_t2566492797_StaticFields, ___U3CU3Ef__switchU24map5_11)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map5_11() const { return ___U3CU3Ef__switchU24map5_11; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map5_11() { return &___U3CU3Ef__switchU24map5_11; }
	inline void set_U3CU3Ef__switchU24map5_11(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map5_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
