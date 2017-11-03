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
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenSpaceCanvas
struct  ScreenSpaceCanvas_t3249988050  : public MonoBehaviour_t667441552
{
public:
	// System.Single ScreenSpaceCanvas::matchWidthOrHeight
	float ___matchWidthOrHeight_3;
	// System.Single ScreenSpaceCanvas::distance
	float ___distance_4;
	// UnityEngine.Canvas ScreenSpaceCanvas::canvas
	Canvas_t2727140764 * ___canvas_5;
	// UnityEngine.RectTransform ScreenSpaceCanvas::rt
	RectTransform_t972643934 * ___rt_6;
	// UnityEngine.Vector2 ScreenSpaceCanvas::referenceResolution
	Vector2_t4282066565  ___referenceResolution_7;
	// System.Single ScreenSpaceCanvas::_scaleX
	float ____scaleX_8;
	// System.Single ScreenSpaceCanvas::_scaleY
	float ____scaleY_9;
	// System.Single ScreenSpaceCanvas::_width
	float ____width_10;
	// System.Single ScreenSpaceCanvas::_height
	float ____height_11;
	// System.Boolean ScreenSpaceCanvas::_vr
	bool ____vr_12;
	// System.Single ScreenSpaceCanvas::_scaleFactor
	float ____scaleFactor_13;

public:
	inline static int32_t get_offset_of_matchWidthOrHeight_3() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ___matchWidthOrHeight_3)); }
	inline float get_matchWidthOrHeight_3() const { return ___matchWidthOrHeight_3; }
	inline float* get_address_of_matchWidthOrHeight_3() { return &___matchWidthOrHeight_3; }
	inline void set_matchWidthOrHeight_3(float value)
	{
		___matchWidthOrHeight_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ___canvas_5)); }
	inline Canvas_t2727140764 * get_canvas_5() const { return ___canvas_5; }
	inline Canvas_t2727140764 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(Canvas_t2727140764 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_5, value);
	}

	inline static int32_t get_offset_of_rt_6() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ___rt_6)); }
	inline RectTransform_t972643934 * get_rt_6() const { return ___rt_6; }
	inline RectTransform_t972643934 ** get_address_of_rt_6() { return &___rt_6; }
	inline void set_rt_6(RectTransform_t972643934 * value)
	{
		___rt_6 = value;
		Il2CppCodeGenWriteBarrier(&___rt_6, value);
	}

	inline static int32_t get_offset_of_referenceResolution_7() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ___referenceResolution_7)); }
	inline Vector2_t4282066565  get_referenceResolution_7() const { return ___referenceResolution_7; }
	inline Vector2_t4282066565 * get_address_of_referenceResolution_7() { return &___referenceResolution_7; }
	inline void set_referenceResolution_7(Vector2_t4282066565  value)
	{
		___referenceResolution_7 = value;
	}

	inline static int32_t get_offset_of__scaleX_8() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ____scaleX_8)); }
	inline float get__scaleX_8() const { return ____scaleX_8; }
	inline float* get_address_of__scaleX_8() { return &____scaleX_8; }
	inline void set__scaleX_8(float value)
	{
		____scaleX_8 = value;
	}

	inline static int32_t get_offset_of__scaleY_9() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ____scaleY_9)); }
	inline float get__scaleY_9() const { return ____scaleY_9; }
	inline float* get_address_of__scaleY_9() { return &____scaleY_9; }
	inline void set__scaleY_9(float value)
	{
		____scaleY_9 = value;
	}

	inline static int32_t get_offset_of__width_10() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ____width_10)); }
	inline float get__width_10() const { return ____width_10; }
	inline float* get_address_of__width_10() { return &____width_10; }
	inline void set__width_10(float value)
	{
		____width_10 = value;
	}

	inline static int32_t get_offset_of__height_11() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ____height_11)); }
	inline float get__height_11() const { return ____height_11; }
	inline float* get_address_of__height_11() { return &____height_11; }
	inline void set__height_11(float value)
	{
		____height_11 = value;
	}

	inline static int32_t get_offset_of__vr_12() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ____vr_12)); }
	inline bool get__vr_12() const { return ____vr_12; }
	inline bool* get_address_of__vr_12() { return &____vr_12; }
	inline void set__vr_12(bool value)
	{
		____vr_12 = value;
	}

	inline static int32_t get_offset_of__scaleFactor_13() { return static_cast<int32_t>(offsetof(ScreenSpaceCanvas_t3249988050, ____scaleFactor_13)); }
	inline float get__scaleFactor_13() const { return ____scaleFactor_13; }
	inline float* get_address_of__scaleFactor_13() { return &____scaleFactor_13; }
	inline void set__scaleFactor_13(float value)
	{
		____scaleFactor_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
