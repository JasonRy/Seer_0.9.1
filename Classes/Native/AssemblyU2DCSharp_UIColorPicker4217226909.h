#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIColorPicker
struct UIColorPicker_t4217226909;
// UIWidget
struct UIWidget_t769069560;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1077642479;
// UnityEngine.Transform
struct Transform_t1659122786;
// UITexture
struct UITexture_t3903132647;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UICamera
struct UICamera_t189364953;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIColorPicker
struct  UIColorPicker_t4217226909  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color UIColorPicker::value
	Color_t4194546905  ___value_3;
	// UIWidget UIColorPicker::selectionWidget
	UIWidget_t769069560 * ___selectionWidget_4;
	// System.Collections.Generic.List`1<EventDelegate> UIColorPicker::onChange
	List_1_t1077642479 * ___onChange_5;
	// UnityEngine.Transform UIColorPicker::mTrans
	Transform_t1659122786 * ___mTrans_6;
	// UITexture UIColorPicker::mUITex
	UITexture_t3903132647 * ___mUITex_7;
	// UnityEngine.Texture2D UIColorPicker::mTex
	Texture2D_t3884108195 * ___mTex_8;
	// UICamera UIColorPicker::mCam
	UICamera_t189364953 * ___mCam_9;
	// UnityEngine.Vector2 UIColorPicker::mPos
	Vector2_t4282066565  ___mPos_10;
	// System.Int32 UIColorPicker::mWidth
	int32_t ___mWidth_11;
	// System.Int32 UIColorPicker::mHeight
	int32_t ___mHeight_12;

public:
	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___value_3)); }
	inline Color_t4194546905  get_value_3() const { return ___value_3; }
	inline Color_t4194546905 * get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(Color_t4194546905  value)
	{
		___value_3 = value;
	}

	inline static int32_t get_offset_of_selectionWidget_4() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___selectionWidget_4)); }
	inline UIWidget_t769069560 * get_selectionWidget_4() const { return ___selectionWidget_4; }
	inline UIWidget_t769069560 ** get_address_of_selectionWidget_4() { return &___selectionWidget_4; }
	inline void set_selectionWidget_4(UIWidget_t769069560 * value)
	{
		___selectionWidget_4 = value;
		Il2CppCodeGenWriteBarrier(&___selectionWidget_4, value);
	}

	inline static int32_t get_offset_of_onChange_5() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___onChange_5)); }
	inline List_1_t1077642479 * get_onChange_5() const { return ___onChange_5; }
	inline List_1_t1077642479 ** get_address_of_onChange_5() { return &___onChange_5; }
	inline void set_onChange_5(List_1_t1077642479 * value)
	{
		___onChange_5 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_5, value);
	}

	inline static int32_t get_offset_of_mTrans_6() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mTrans_6)); }
	inline Transform_t1659122786 * get_mTrans_6() const { return ___mTrans_6; }
	inline Transform_t1659122786 ** get_address_of_mTrans_6() { return &___mTrans_6; }
	inline void set_mTrans_6(Transform_t1659122786 * value)
	{
		___mTrans_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_6, value);
	}

	inline static int32_t get_offset_of_mUITex_7() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mUITex_7)); }
	inline UITexture_t3903132647 * get_mUITex_7() const { return ___mUITex_7; }
	inline UITexture_t3903132647 ** get_address_of_mUITex_7() { return &___mUITex_7; }
	inline void set_mUITex_7(UITexture_t3903132647 * value)
	{
		___mUITex_7 = value;
		Il2CppCodeGenWriteBarrier(&___mUITex_7, value);
	}

	inline static int32_t get_offset_of_mTex_8() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mTex_8)); }
	inline Texture2D_t3884108195 * get_mTex_8() const { return ___mTex_8; }
	inline Texture2D_t3884108195 ** get_address_of_mTex_8() { return &___mTex_8; }
	inline void set_mTex_8(Texture2D_t3884108195 * value)
	{
		___mTex_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTex_8, value);
	}

	inline static int32_t get_offset_of_mCam_9() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mCam_9)); }
	inline UICamera_t189364953 * get_mCam_9() const { return ___mCam_9; }
	inline UICamera_t189364953 ** get_address_of_mCam_9() { return &___mCam_9; }
	inline void set_mCam_9(UICamera_t189364953 * value)
	{
		___mCam_9 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_9, value);
	}

	inline static int32_t get_offset_of_mPos_10() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mPos_10)); }
	inline Vector2_t4282066565  get_mPos_10() const { return ___mPos_10; }
	inline Vector2_t4282066565 * get_address_of_mPos_10() { return &___mPos_10; }
	inline void set_mPos_10(Vector2_t4282066565  value)
	{
		___mPos_10 = value;
	}

	inline static int32_t get_offset_of_mWidth_11() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mWidth_11)); }
	inline int32_t get_mWidth_11() const { return ___mWidth_11; }
	inline int32_t* get_address_of_mWidth_11() { return &___mWidth_11; }
	inline void set_mWidth_11(int32_t value)
	{
		___mWidth_11 = value;
	}

	inline static int32_t get_offset_of_mHeight_12() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909, ___mHeight_12)); }
	inline int32_t get_mHeight_12() const { return ___mHeight_12; }
	inline int32_t* get_address_of_mHeight_12() { return &___mHeight_12; }
	inline void set_mHeight_12(int32_t value)
	{
		___mHeight_12 = value;
	}
};

struct UIColorPicker_t4217226909_StaticFields
{
public:
	// UIColorPicker UIColorPicker::current
	UIColorPicker_t4217226909 * ___current_2;
	// UnityEngine.AnimationCurve UIColorPicker::mRed
	AnimationCurve_t3667593487 * ___mRed_13;
	// UnityEngine.AnimationCurve UIColorPicker::mGreen
	AnimationCurve_t3667593487 * ___mGreen_14;
	// UnityEngine.AnimationCurve UIColorPicker::mBlue
	AnimationCurve_t3667593487 * ___mBlue_15;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909_StaticFields, ___current_2)); }
	inline UIColorPicker_t4217226909 * get_current_2() const { return ___current_2; }
	inline UIColorPicker_t4217226909 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIColorPicker_t4217226909 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}

	inline static int32_t get_offset_of_mRed_13() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909_StaticFields, ___mRed_13)); }
	inline AnimationCurve_t3667593487 * get_mRed_13() const { return ___mRed_13; }
	inline AnimationCurve_t3667593487 ** get_address_of_mRed_13() { return &___mRed_13; }
	inline void set_mRed_13(AnimationCurve_t3667593487 * value)
	{
		___mRed_13 = value;
		Il2CppCodeGenWriteBarrier(&___mRed_13, value);
	}

	inline static int32_t get_offset_of_mGreen_14() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909_StaticFields, ___mGreen_14)); }
	inline AnimationCurve_t3667593487 * get_mGreen_14() const { return ___mGreen_14; }
	inline AnimationCurve_t3667593487 ** get_address_of_mGreen_14() { return &___mGreen_14; }
	inline void set_mGreen_14(AnimationCurve_t3667593487 * value)
	{
		___mGreen_14 = value;
		Il2CppCodeGenWriteBarrier(&___mGreen_14, value);
	}

	inline static int32_t get_offset_of_mBlue_15() { return static_cast<int32_t>(offsetof(UIColorPicker_t4217226909_StaticFields, ___mBlue_15)); }
	inline AnimationCurve_t3667593487 * get_mBlue_15() const { return ___mBlue_15; }
	inline AnimationCurve_t3667593487 ** get_address_of_mBlue_15() { return &___mBlue_15; }
	inline void set_mBlue_15(AnimationCurve_t3667593487 * value)
	{
		___mBlue_15 = value;
		Il2CppCodeGenWriteBarrier(&___mBlue_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
