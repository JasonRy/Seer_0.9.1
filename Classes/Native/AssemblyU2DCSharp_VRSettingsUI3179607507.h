#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t110812896;
// UnityEngine.UI.Dropdown
struct Dropdown_t4201779933;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.VR.VRDeviceType>
struct Dictionary_2_t4081534031;
// System.Collections.Generic.Dictionary`2<UnityEngine.VR.VRDeviceType,System.Int32>
struct Dictionary_2_t3411342583;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRSettingsUI
struct  VRSettingsUI_t3179607507  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Toggle VRSettingsUI::toggle
	Toggle_t110812896 * ___toggle_2;
	// UnityEngine.UI.Dropdown VRSettingsUI::dropdown
	Dropdown_t4201779933 * ___dropdown_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.VR.VRDeviceType> VRSettingsUI::indexToVRDeviceType
	Dictionary_2_t4081534031 * ___indexToVRDeviceType_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.VR.VRDeviceType,System.Int32> VRSettingsUI::vrDeviceTypeToIndex
	Dictionary_2_t3411342583 * ___vrDeviceTypeToIndex_5;

public:
	inline static int32_t get_offset_of_toggle_2() { return static_cast<int32_t>(offsetof(VRSettingsUI_t3179607507, ___toggle_2)); }
	inline Toggle_t110812896 * get_toggle_2() const { return ___toggle_2; }
	inline Toggle_t110812896 ** get_address_of_toggle_2() { return &___toggle_2; }
	inline void set_toggle_2(Toggle_t110812896 * value)
	{
		___toggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_2, value);
	}

	inline static int32_t get_offset_of_dropdown_3() { return static_cast<int32_t>(offsetof(VRSettingsUI_t3179607507, ___dropdown_3)); }
	inline Dropdown_t4201779933 * get_dropdown_3() const { return ___dropdown_3; }
	inline Dropdown_t4201779933 ** get_address_of_dropdown_3() { return &___dropdown_3; }
	inline void set_dropdown_3(Dropdown_t4201779933 * value)
	{
		___dropdown_3 = value;
		Il2CppCodeGenWriteBarrier(&___dropdown_3, value);
	}

	inline static int32_t get_offset_of_indexToVRDeviceType_4() { return static_cast<int32_t>(offsetof(VRSettingsUI_t3179607507, ___indexToVRDeviceType_4)); }
	inline Dictionary_2_t4081534031 * get_indexToVRDeviceType_4() const { return ___indexToVRDeviceType_4; }
	inline Dictionary_2_t4081534031 ** get_address_of_indexToVRDeviceType_4() { return &___indexToVRDeviceType_4; }
	inline void set_indexToVRDeviceType_4(Dictionary_2_t4081534031 * value)
	{
		___indexToVRDeviceType_4 = value;
		Il2CppCodeGenWriteBarrier(&___indexToVRDeviceType_4, value);
	}

	inline static int32_t get_offset_of_vrDeviceTypeToIndex_5() { return static_cast<int32_t>(offsetof(VRSettingsUI_t3179607507, ___vrDeviceTypeToIndex_5)); }
	inline Dictionary_2_t3411342583 * get_vrDeviceTypeToIndex_5() const { return ___vrDeviceTypeToIndex_5; }
	inline Dictionary_2_t3411342583 ** get_address_of_vrDeviceTypeToIndex_5() { return &___vrDeviceTypeToIndex_5; }
	inline void set_vrDeviceTypeToIndex_5(Dictionary_2_t3411342583 * value)
	{
		___vrDeviceTypeToIndex_5 = value;
		Il2CppCodeGenWriteBarrier(&___vrDeviceTypeToIndex_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
