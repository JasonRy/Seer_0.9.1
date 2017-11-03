#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t2727140764;
// DeviceAttributes
struct DeviceAttributes_t2503308397;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UISystem
struct UISystem_t669788643;
// StaffControl
struct StaffControl_t2566492797;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullScreenControl
struct  FullScreenControl_t317675746  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Canvas FullScreenControl::normalScreen
	Canvas_t2727140764 * ___normalScreen_2;
	// UnityEngine.Canvas FullScreenControl::fullScreen
	Canvas_t2727140764 * ___fullScreen_3;
	// DeviceAttributes FullScreenControl::DA
	DeviceAttributes_t2503308397 * ___DA_4;
	// UnityEngine.Vector3 FullScreenControl::v1
	Vector3_t4282066566  ___v1_5;
	// UnityEngine.Vector3 FullScreenControl::v2
	Vector3_t4282066566  ___v2_6;
	// UnityEngine.GameObject FullScreenControl::allBuild
	GameObject_t3674682005 * ___allBuild_7;
	// UISystem FullScreenControl::US
	UISystem_t669788643 * ___US_8;
	// UnityEngine.GameObject FullScreenControl::EnvironmentObj
	GameObject_t3674682005 * ___EnvironmentObj_9;
	// StaffControl FullScreenControl::SC
	StaffControl_t2566492797 * ___SC_10;

public:
	inline static int32_t get_offset_of_normalScreen_2() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___normalScreen_2)); }
	inline Canvas_t2727140764 * get_normalScreen_2() const { return ___normalScreen_2; }
	inline Canvas_t2727140764 ** get_address_of_normalScreen_2() { return &___normalScreen_2; }
	inline void set_normalScreen_2(Canvas_t2727140764 * value)
	{
		___normalScreen_2 = value;
		Il2CppCodeGenWriteBarrier(&___normalScreen_2, value);
	}

	inline static int32_t get_offset_of_fullScreen_3() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___fullScreen_3)); }
	inline Canvas_t2727140764 * get_fullScreen_3() const { return ___fullScreen_3; }
	inline Canvas_t2727140764 ** get_address_of_fullScreen_3() { return &___fullScreen_3; }
	inline void set_fullScreen_3(Canvas_t2727140764 * value)
	{
		___fullScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&___fullScreen_3, value);
	}

	inline static int32_t get_offset_of_DA_4() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___DA_4)); }
	inline DeviceAttributes_t2503308397 * get_DA_4() const { return ___DA_4; }
	inline DeviceAttributes_t2503308397 ** get_address_of_DA_4() { return &___DA_4; }
	inline void set_DA_4(DeviceAttributes_t2503308397 * value)
	{
		___DA_4 = value;
		Il2CppCodeGenWriteBarrier(&___DA_4, value);
	}

	inline static int32_t get_offset_of_v1_5() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___v1_5)); }
	inline Vector3_t4282066566  get_v1_5() const { return ___v1_5; }
	inline Vector3_t4282066566 * get_address_of_v1_5() { return &___v1_5; }
	inline void set_v1_5(Vector3_t4282066566  value)
	{
		___v1_5 = value;
	}

	inline static int32_t get_offset_of_v2_6() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___v2_6)); }
	inline Vector3_t4282066566  get_v2_6() const { return ___v2_6; }
	inline Vector3_t4282066566 * get_address_of_v2_6() { return &___v2_6; }
	inline void set_v2_6(Vector3_t4282066566  value)
	{
		___v2_6 = value;
	}

	inline static int32_t get_offset_of_allBuild_7() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___allBuild_7)); }
	inline GameObject_t3674682005 * get_allBuild_7() const { return ___allBuild_7; }
	inline GameObject_t3674682005 ** get_address_of_allBuild_7() { return &___allBuild_7; }
	inline void set_allBuild_7(GameObject_t3674682005 * value)
	{
		___allBuild_7 = value;
		Il2CppCodeGenWriteBarrier(&___allBuild_7, value);
	}

	inline static int32_t get_offset_of_US_8() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___US_8)); }
	inline UISystem_t669788643 * get_US_8() const { return ___US_8; }
	inline UISystem_t669788643 ** get_address_of_US_8() { return &___US_8; }
	inline void set_US_8(UISystem_t669788643 * value)
	{
		___US_8 = value;
		Il2CppCodeGenWriteBarrier(&___US_8, value);
	}

	inline static int32_t get_offset_of_EnvironmentObj_9() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___EnvironmentObj_9)); }
	inline GameObject_t3674682005 * get_EnvironmentObj_9() const { return ___EnvironmentObj_9; }
	inline GameObject_t3674682005 ** get_address_of_EnvironmentObj_9() { return &___EnvironmentObj_9; }
	inline void set_EnvironmentObj_9(GameObject_t3674682005 * value)
	{
		___EnvironmentObj_9 = value;
		Il2CppCodeGenWriteBarrier(&___EnvironmentObj_9, value);
	}

	inline static int32_t get_offset_of_SC_10() { return static_cast<int32_t>(offsetof(FullScreenControl_t317675746, ___SC_10)); }
	inline StaffControl_t2566492797 * get_SC_10() const { return ___SC_10; }
	inline StaffControl_t2566492797 ** get_address_of_SC_10() { return &___SC_10; }
	inline void set_SC_10(StaffControl_t2566492797 * value)
	{
		___SC_10 = value;
		Il2CppCodeGenWriteBarrier(&___SC_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
