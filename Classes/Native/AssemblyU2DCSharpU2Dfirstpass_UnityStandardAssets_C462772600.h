#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct  PredicationSettings_t462772600 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::threshold
	float ___threshold_1;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::scale
	float ___scale_2;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::strength
	float ___strength_3;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(PredicationSettings_t462772600, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(PredicationSettings_t462772600, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(PredicationSettings_t462772600, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_strength_3() { return static_cast<int32_t>(offsetof(PredicationSettings_t462772600, ___strength_3)); }
	inline float get_strength_3() const { return ___strength_3; }
	inline float* get_address_of_strength_3() { return &___strength_3; }
	inline void set_strength_3(float value)
	{
		___strength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t462772600_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___threshold_1;
	float ___scale_2;
	float ___strength_3;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t462772600_marshaled_com
{
	int32_t ___enabled_0;
	float ___threshold_1;
	float ___scale_2;
	float ___strength_3;
};
