#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel
struct SpringPanel_t929169367;
// SpringPanel/OnFinished
struct OnFinished_t3316389065;
// UIPanel
struct UIPanel_t295209936;
// UnityEngine.Transform
struct Transform_t1659122786;
// UIScrollView
struct UIScrollView_t2113479878;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpringPanel
struct  SpringPanel_t929169367  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t4282066566  ___target_3;
	// System.Single SpringPanel::strength
	float ___strength_4;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t3316389065 * ___onFinished_5;
	// UIPanel SpringPanel::mPanel
	UIPanel_t295209936 * ___mPanel_6;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t1659122786 * ___mTrans_7;
	// UIScrollView SpringPanel::mDrag
	UIScrollView_t2113479878 * ___mDrag_8;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367, ___target_3)); }
	inline Vector3_t4282066566  get_target_3() const { return ___target_3; }
	inline Vector3_t4282066566 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t4282066566  value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_strength_4() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367, ___strength_4)); }
	inline float get_strength_4() const { return ___strength_4; }
	inline float* get_address_of_strength_4() { return &___strength_4; }
	inline void set_strength_4(float value)
	{
		___strength_4 = value;
	}

	inline static int32_t get_offset_of_onFinished_5() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367, ___onFinished_5)); }
	inline OnFinished_t3316389065 * get_onFinished_5() const { return ___onFinished_5; }
	inline OnFinished_t3316389065 ** get_address_of_onFinished_5() { return &___onFinished_5; }
	inline void set_onFinished_5(OnFinished_t3316389065 * value)
	{
		___onFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_5, value);
	}

	inline static int32_t get_offset_of_mPanel_6() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367, ___mPanel_6)); }
	inline UIPanel_t295209936 * get_mPanel_6() const { return ___mPanel_6; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_6() { return &___mPanel_6; }
	inline void set_mPanel_6(UIPanel_t295209936 * value)
	{
		___mPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_6, value);
	}

	inline static int32_t get_offset_of_mTrans_7() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367, ___mTrans_7)); }
	inline Transform_t1659122786 * get_mTrans_7() const { return ___mTrans_7; }
	inline Transform_t1659122786 ** get_address_of_mTrans_7() { return &___mTrans_7; }
	inline void set_mTrans_7(Transform_t1659122786 * value)
	{
		___mTrans_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_7, value);
	}

	inline static int32_t get_offset_of_mDrag_8() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367, ___mDrag_8)); }
	inline UIScrollView_t2113479878 * get_mDrag_8() const { return ___mDrag_8; }
	inline UIScrollView_t2113479878 ** get_address_of_mDrag_8() { return &___mDrag_8; }
	inline void set_mDrag_8(UIScrollView_t2113479878 * value)
	{
		___mDrag_8 = value;
		Il2CppCodeGenWriteBarrier(&___mDrag_8, value);
	}
};

struct SpringPanel_t929169367_StaticFields
{
public:
	// SpringPanel SpringPanel::current
	SpringPanel_t929169367 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(SpringPanel_t929169367_StaticFields, ___current_2)); }
	inline SpringPanel_t929169367 * get_current_2() const { return ___current_2; }
	inline SpringPanel_t929169367 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(SpringPanel_t929169367 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
