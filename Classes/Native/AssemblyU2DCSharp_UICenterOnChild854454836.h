#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel/OnFinished
struct OnFinished_t3316389065;
// UICenterOnChild/OnCenterCallback
struct OnCenterCallback_t2672694804;
// UIScrollView
struct UIScrollView_t2113479878;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICenterOnChild
struct  UICenterOnChild_t854454836  : public MonoBehaviour_t667441552
{
public:
	// System.Single UICenterOnChild::springStrength
	float ___springStrength_2;
	// System.Single UICenterOnChild::nextPageThreshold
	float ___nextPageThreshold_3;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t3316389065 * ___onFinished_4;
	// UICenterOnChild/OnCenterCallback UICenterOnChild::onCenter
	OnCenterCallback_t2672694804 * ___onCenter_5;
	// UIScrollView UICenterOnChild::mScrollView
	UIScrollView_t2113479878 * ___mScrollView_6;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t3674682005 * ___mCenteredObject_7;

public:
	inline static int32_t get_offset_of_springStrength_2() { return static_cast<int32_t>(offsetof(UICenterOnChild_t854454836, ___springStrength_2)); }
	inline float get_springStrength_2() const { return ___springStrength_2; }
	inline float* get_address_of_springStrength_2() { return &___springStrength_2; }
	inline void set_springStrength_2(float value)
	{
		___springStrength_2 = value;
	}

	inline static int32_t get_offset_of_nextPageThreshold_3() { return static_cast<int32_t>(offsetof(UICenterOnChild_t854454836, ___nextPageThreshold_3)); }
	inline float get_nextPageThreshold_3() const { return ___nextPageThreshold_3; }
	inline float* get_address_of_nextPageThreshold_3() { return &___nextPageThreshold_3; }
	inline void set_nextPageThreshold_3(float value)
	{
		___nextPageThreshold_3 = value;
	}

	inline static int32_t get_offset_of_onFinished_4() { return static_cast<int32_t>(offsetof(UICenterOnChild_t854454836, ___onFinished_4)); }
	inline OnFinished_t3316389065 * get_onFinished_4() const { return ___onFinished_4; }
	inline OnFinished_t3316389065 ** get_address_of_onFinished_4() { return &___onFinished_4; }
	inline void set_onFinished_4(OnFinished_t3316389065 * value)
	{
		___onFinished_4 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_4, value);
	}

	inline static int32_t get_offset_of_onCenter_5() { return static_cast<int32_t>(offsetof(UICenterOnChild_t854454836, ___onCenter_5)); }
	inline OnCenterCallback_t2672694804 * get_onCenter_5() const { return ___onCenter_5; }
	inline OnCenterCallback_t2672694804 ** get_address_of_onCenter_5() { return &___onCenter_5; }
	inline void set_onCenter_5(OnCenterCallback_t2672694804 * value)
	{
		___onCenter_5 = value;
		Il2CppCodeGenWriteBarrier(&___onCenter_5, value);
	}

	inline static int32_t get_offset_of_mScrollView_6() { return static_cast<int32_t>(offsetof(UICenterOnChild_t854454836, ___mScrollView_6)); }
	inline UIScrollView_t2113479878 * get_mScrollView_6() const { return ___mScrollView_6; }
	inline UIScrollView_t2113479878 ** get_address_of_mScrollView_6() { return &___mScrollView_6; }
	inline void set_mScrollView_6(UIScrollView_t2113479878 * value)
	{
		___mScrollView_6 = value;
		Il2CppCodeGenWriteBarrier(&___mScrollView_6, value);
	}

	inline static int32_t get_offset_of_mCenteredObject_7() { return static_cast<int32_t>(offsetof(UICenterOnChild_t854454836, ___mCenteredObject_7)); }
	inline GameObject_t3674682005 * get_mCenteredObject_7() const { return ___mCenteredObject_7; }
	inline GameObject_t3674682005 ** get_address_of_mCenteredObject_7() { return &___mCenteredObject_7; }
	inline void set_mCenteredObject_7(GameObject_t3674682005 * value)
	{
		___mCenteredObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCenteredObject_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
