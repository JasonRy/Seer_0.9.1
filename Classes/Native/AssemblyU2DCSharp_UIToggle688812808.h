#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIToggle>
struct BetterList_1_t2185780820;
// UIToggle
struct UIToggle_t688812808;
// UIWidget
struct UIWidget_t769069560;
// UnityEngine.Animation
struct Animation_t1724966010;
// UnityEngine.Animator
struct Animator_t2776330603;
// UITweener
struct UITweener_t105489188;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1077642479;
// UIToggle/Validate
struct Validate_t2927776861;
// UISprite
struct UISprite_t661437049;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIWidgetContainer1520767337.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIToggle
struct  UIToggle_t688812808  : public UIWidgetContainer_t1520767337
{
public:
	// System.Int32 UIToggle::group
	int32_t ___group_4;
	// UIWidget UIToggle::activeSprite
	UIWidget_t769069560 * ___activeSprite_5;
	// System.Boolean UIToggle::invertSpriteState
	bool ___invertSpriteState_6;
	// UnityEngine.Animation UIToggle::activeAnimation
	Animation_t1724966010 * ___activeAnimation_7;
	// UnityEngine.Animator UIToggle::animator
	Animator_t2776330603 * ___animator_8;
	// UITweener UIToggle::tween
	UITweener_t105489188 * ___tween_9;
	// System.Boolean UIToggle::startsActive
	bool ___startsActive_10;
	// System.Boolean UIToggle::instantTween
	bool ___instantTween_11;
	// System.Boolean UIToggle::optionCanBeNone
	bool ___optionCanBeNone_12;
	// System.Collections.Generic.List`1<EventDelegate> UIToggle::onChange
	List_1_t1077642479 * ___onChange_13;
	// UIToggle/Validate UIToggle::validator
	Validate_t2927776861 * ___validator_14;
	// UISprite UIToggle::checkSprite
	UISprite_t661437049 * ___checkSprite_15;
	// UnityEngine.Animation UIToggle::checkAnimation
	Animation_t1724966010 * ___checkAnimation_16;
	// UnityEngine.GameObject UIToggle::eventReceiver
	GameObject_t3674682005 * ___eventReceiver_17;
	// System.String UIToggle::functionName
	String_t* ___functionName_18;
	// System.Boolean UIToggle::startsChecked
	bool ___startsChecked_19;
	// System.Boolean UIToggle::mIsActive
	bool ___mIsActive_20;
	// System.Boolean UIToggle::mStarted
	bool ___mStarted_21;

public:
	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___group_4)); }
	inline int32_t get_group_4() const { return ___group_4; }
	inline int32_t* get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(int32_t value)
	{
		___group_4 = value;
	}

	inline static int32_t get_offset_of_activeSprite_5() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___activeSprite_5)); }
	inline UIWidget_t769069560 * get_activeSprite_5() const { return ___activeSprite_5; }
	inline UIWidget_t769069560 ** get_address_of_activeSprite_5() { return &___activeSprite_5; }
	inline void set_activeSprite_5(UIWidget_t769069560 * value)
	{
		___activeSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeSprite_5, value);
	}

	inline static int32_t get_offset_of_invertSpriteState_6() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___invertSpriteState_6)); }
	inline bool get_invertSpriteState_6() const { return ___invertSpriteState_6; }
	inline bool* get_address_of_invertSpriteState_6() { return &___invertSpriteState_6; }
	inline void set_invertSpriteState_6(bool value)
	{
		___invertSpriteState_6 = value;
	}

	inline static int32_t get_offset_of_activeAnimation_7() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___activeAnimation_7)); }
	inline Animation_t1724966010 * get_activeAnimation_7() const { return ___activeAnimation_7; }
	inline Animation_t1724966010 ** get_address_of_activeAnimation_7() { return &___activeAnimation_7; }
	inline void set_activeAnimation_7(Animation_t1724966010 * value)
	{
		___activeAnimation_7 = value;
		Il2CppCodeGenWriteBarrier(&___activeAnimation_7, value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___animator_8)); }
	inline Animator_t2776330603 * get_animator_8() const { return ___animator_8; }
	inline Animator_t2776330603 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t2776330603 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier(&___animator_8, value);
	}

	inline static int32_t get_offset_of_tween_9() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___tween_9)); }
	inline UITweener_t105489188 * get_tween_9() const { return ___tween_9; }
	inline UITweener_t105489188 ** get_address_of_tween_9() { return &___tween_9; }
	inline void set_tween_9(UITweener_t105489188 * value)
	{
		___tween_9 = value;
		Il2CppCodeGenWriteBarrier(&___tween_9, value);
	}

	inline static int32_t get_offset_of_startsActive_10() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___startsActive_10)); }
	inline bool get_startsActive_10() const { return ___startsActive_10; }
	inline bool* get_address_of_startsActive_10() { return &___startsActive_10; }
	inline void set_startsActive_10(bool value)
	{
		___startsActive_10 = value;
	}

	inline static int32_t get_offset_of_instantTween_11() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___instantTween_11)); }
	inline bool get_instantTween_11() const { return ___instantTween_11; }
	inline bool* get_address_of_instantTween_11() { return &___instantTween_11; }
	inline void set_instantTween_11(bool value)
	{
		___instantTween_11 = value;
	}

	inline static int32_t get_offset_of_optionCanBeNone_12() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___optionCanBeNone_12)); }
	inline bool get_optionCanBeNone_12() const { return ___optionCanBeNone_12; }
	inline bool* get_address_of_optionCanBeNone_12() { return &___optionCanBeNone_12; }
	inline void set_optionCanBeNone_12(bool value)
	{
		___optionCanBeNone_12 = value;
	}

	inline static int32_t get_offset_of_onChange_13() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___onChange_13)); }
	inline List_1_t1077642479 * get_onChange_13() const { return ___onChange_13; }
	inline List_1_t1077642479 ** get_address_of_onChange_13() { return &___onChange_13; }
	inline void set_onChange_13(List_1_t1077642479 * value)
	{
		___onChange_13 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_13, value);
	}

	inline static int32_t get_offset_of_validator_14() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___validator_14)); }
	inline Validate_t2927776861 * get_validator_14() const { return ___validator_14; }
	inline Validate_t2927776861 ** get_address_of_validator_14() { return &___validator_14; }
	inline void set_validator_14(Validate_t2927776861 * value)
	{
		___validator_14 = value;
		Il2CppCodeGenWriteBarrier(&___validator_14, value);
	}

	inline static int32_t get_offset_of_checkSprite_15() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___checkSprite_15)); }
	inline UISprite_t661437049 * get_checkSprite_15() const { return ___checkSprite_15; }
	inline UISprite_t661437049 ** get_address_of_checkSprite_15() { return &___checkSprite_15; }
	inline void set_checkSprite_15(UISprite_t661437049 * value)
	{
		___checkSprite_15 = value;
		Il2CppCodeGenWriteBarrier(&___checkSprite_15, value);
	}

	inline static int32_t get_offset_of_checkAnimation_16() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___checkAnimation_16)); }
	inline Animation_t1724966010 * get_checkAnimation_16() const { return ___checkAnimation_16; }
	inline Animation_t1724966010 ** get_address_of_checkAnimation_16() { return &___checkAnimation_16; }
	inline void set_checkAnimation_16(Animation_t1724966010 * value)
	{
		___checkAnimation_16 = value;
		Il2CppCodeGenWriteBarrier(&___checkAnimation_16, value);
	}

	inline static int32_t get_offset_of_eventReceiver_17() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___eventReceiver_17)); }
	inline GameObject_t3674682005 * get_eventReceiver_17() const { return ___eventReceiver_17; }
	inline GameObject_t3674682005 ** get_address_of_eventReceiver_17() { return &___eventReceiver_17; }
	inline void set_eventReceiver_17(GameObject_t3674682005 * value)
	{
		___eventReceiver_17 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_17, value);
	}

	inline static int32_t get_offset_of_functionName_18() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___functionName_18)); }
	inline String_t* get_functionName_18() const { return ___functionName_18; }
	inline String_t** get_address_of_functionName_18() { return &___functionName_18; }
	inline void set_functionName_18(String_t* value)
	{
		___functionName_18 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_18, value);
	}

	inline static int32_t get_offset_of_startsChecked_19() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___startsChecked_19)); }
	inline bool get_startsChecked_19() const { return ___startsChecked_19; }
	inline bool* get_address_of_startsChecked_19() { return &___startsChecked_19; }
	inline void set_startsChecked_19(bool value)
	{
		___startsChecked_19 = value;
	}

	inline static int32_t get_offset_of_mIsActive_20() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___mIsActive_20)); }
	inline bool get_mIsActive_20() const { return ___mIsActive_20; }
	inline bool* get_address_of_mIsActive_20() { return &___mIsActive_20; }
	inline void set_mIsActive_20(bool value)
	{
		___mIsActive_20 = value;
	}

	inline static int32_t get_offset_of_mStarted_21() { return static_cast<int32_t>(offsetof(UIToggle_t688812808, ___mStarted_21)); }
	inline bool get_mStarted_21() const { return ___mStarted_21; }
	inline bool* get_address_of_mStarted_21() { return &___mStarted_21; }
	inline void set_mStarted_21(bool value)
	{
		___mStarted_21 = value;
	}
};

struct UIToggle_t688812808_StaticFields
{
public:
	// BetterList`1<UIToggle> UIToggle::list
	BetterList_1_t2185780820 * ___list_2;
	// UIToggle UIToggle::current
	UIToggle_t688812808 * ___current_3;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIToggle_t688812808_StaticFields, ___list_2)); }
	inline BetterList_1_t2185780820 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t2185780820 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t2185780820 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(UIToggle_t688812808_StaticFields, ___current_3)); }
	inline UIToggle_t688812808 * get_current_3() const { return ___current_3; }
	inline UIToggle_t688812808 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIToggle_t688812808 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
