#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UIWidget
struct UIWidget_t769069560;

#include "AssemblyU2DCSharp_UIWidgetContainer1520767337.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_UIButtonColor_State1650987007.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonColor
struct  UIButtonColor_t1546108957  : public UIWidgetContainer_t1520767337
{
public:
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t3674682005 * ___tweenTarget_2;
	// UnityEngine.Color UIButtonColor::hover
	Color_t4194546905  ___hover_3;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t4194546905  ___pressed_4;
	// UnityEngine.Color UIButtonColor::disabledColor
	Color_t4194546905  ___disabledColor_5;
	// System.Single UIButtonColor::duration
	float ___duration_6;
	// UnityEngine.Color UIButtonColor::mStartingColor
	Color_t4194546905  ___mStartingColor_7;
	// UnityEngine.Color UIButtonColor::mDefaultColor
	Color_t4194546905  ___mDefaultColor_8;
	// System.Boolean UIButtonColor::mInitDone
	bool ___mInitDone_9;
	// UIWidget UIButtonColor::mWidget
	UIWidget_t769069560 * ___mWidget_10;
	// UIButtonColor/State UIButtonColor::mState
	int32_t ___mState_11;

public:
	inline static int32_t get_offset_of_tweenTarget_2() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___tweenTarget_2)); }
	inline GameObject_t3674682005 * get_tweenTarget_2() const { return ___tweenTarget_2; }
	inline GameObject_t3674682005 ** get_address_of_tweenTarget_2() { return &___tweenTarget_2; }
	inline void set_tweenTarget_2(GameObject_t3674682005 * value)
	{
		___tweenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_2, value);
	}

	inline static int32_t get_offset_of_hover_3() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___hover_3)); }
	inline Color_t4194546905  get_hover_3() const { return ___hover_3; }
	inline Color_t4194546905 * get_address_of_hover_3() { return &___hover_3; }
	inline void set_hover_3(Color_t4194546905  value)
	{
		___hover_3 = value;
	}

	inline static int32_t get_offset_of_pressed_4() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___pressed_4)); }
	inline Color_t4194546905  get_pressed_4() const { return ___pressed_4; }
	inline Color_t4194546905 * get_address_of_pressed_4() { return &___pressed_4; }
	inline void set_pressed_4(Color_t4194546905  value)
	{
		___pressed_4 = value;
	}

	inline static int32_t get_offset_of_disabledColor_5() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___disabledColor_5)); }
	inline Color_t4194546905  get_disabledColor_5() const { return ___disabledColor_5; }
	inline Color_t4194546905 * get_address_of_disabledColor_5() { return &___disabledColor_5; }
	inline void set_disabledColor_5(Color_t4194546905  value)
	{
		___disabledColor_5 = value;
	}

	inline static int32_t get_offset_of_duration_6() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___duration_6)); }
	inline float get_duration_6() const { return ___duration_6; }
	inline float* get_address_of_duration_6() { return &___duration_6; }
	inline void set_duration_6(float value)
	{
		___duration_6 = value;
	}

	inline static int32_t get_offset_of_mStartingColor_7() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___mStartingColor_7)); }
	inline Color_t4194546905  get_mStartingColor_7() const { return ___mStartingColor_7; }
	inline Color_t4194546905 * get_address_of_mStartingColor_7() { return &___mStartingColor_7; }
	inline void set_mStartingColor_7(Color_t4194546905  value)
	{
		___mStartingColor_7 = value;
	}

	inline static int32_t get_offset_of_mDefaultColor_8() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___mDefaultColor_8)); }
	inline Color_t4194546905  get_mDefaultColor_8() const { return ___mDefaultColor_8; }
	inline Color_t4194546905 * get_address_of_mDefaultColor_8() { return &___mDefaultColor_8; }
	inline void set_mDefaultColor_8(Color_t4194546905  value)
	{
		___mDefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_mInitDone_9() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___mInitDone_9)); }
	inline bool get_mInitDone_9() const { return ___mInitDone_9; }
	inline bool* get_address_of_mInitDone_9() { return &___mInitDone_9; }
	inline void set_mInitDone_9(bool value)
	{
		___mInitDone_9 = value;
	}

	inline static int32_t get_offset_of_mWidget_10() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___mWidget_10)); }
	inline UIWidget_t769069560 * get_mWidget_10() const { return ___mWidget_10; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_10() { return &___mWidget_10; }
	inline void set_mWidget_10(UIWidget_t769069560 * value)
	{
		___mWidget_10 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_10, value);
	}

	inline static int32_t get_offset_of_mState_11() { return static_cast<int32_t>(offsetof(UIButtonColor_t1546108957, ___mState_11)); }
	inline int32_t get_mState_11() const { return ___mState_11; }
	inline int32_t* get_address_of_mState_11() { return &___mState_11; }
	inline void set_mState_11(int32_t value)
	{
		___mState_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
