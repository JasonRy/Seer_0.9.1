#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_PropertyAttribute3531521085.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ColorUsageAttribute
struct  ColorUsageAttribute_t4189892084  : public PropertyAttribute_t3531521085
{
public:
	// System.Boolean UnityEngine.ColorUsageAttribute::showAlpha
	bool ___showAlpha_0;
	// System.Single UnityEngine.ColorUsageAttribute::maxBrightness
	float ___maxBrightness_1;
	// System.Single UnityEngine.ColorUsageAttribute::minExposureValue
	float ___minExposureValue_2;
	// System.Single UnityEngine.ColorUsageAttribute::maxExposureValue
	float ___maxExposureValue_3;

public:
	inline static int32_t get_offset_of_showAlpha_0() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t4189892084, ___showAlpha_0)); }
	inline bool get_showAlpha_0() const { return ___showAlpha_0; }
	inline bool* get_address_of_showAlpha_0() { return &___showAlpha_0; }
	inline void set_showAlpha_0(bool value)
	{
		___showAlpha_0 = value;
	}

	inline static int32_t get_offset_of_maxBrightness_1() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t4189892084, ___maxBrightness_1)); }
	inline float get_maxBrightness_1() const { return ___maxBrightness_1; }
	inline float* get_address_of_maxBrightness_1() { return &___maxBrightness_1; }
	inline void set_maxBrightness_1(float value)
	{
		___maxBrightness_1 = value;
	}

	inline static int32_t get_offset_of_minExposureValue_2() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t4189892084, ___minExposureValue_2)); }
	inline float get_minExposureValue_2() const { return ___minExposureValue_2; }
	inline float* get_address_of_minExposureValue_2() { return &___minExposureValue_2; }
	inline void set_minExposureValue_2(float value)
	{
		___minExposureValue_2 = value;
	}

	inline static int32_t get_offset_of_maxExposureValue_3() { return static_cast<int32_t>(offsetof(ColorUsageAttribute_t4189892084, ___maxExposureValue_3)); }
	inline float get_maxExposureValue_3() const { return ___maxExposureValue_3; }
	inline float* get_address_of_maxExposureValue_3() { return &___maxExposureValue_3; }
	inline void set_maxExposureValue_3(float value)
	{
		___maxExposureValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
