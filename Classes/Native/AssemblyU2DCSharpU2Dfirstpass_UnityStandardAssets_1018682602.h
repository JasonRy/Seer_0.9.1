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

// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct  TemporalSettings_t1018682602 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::fuzzSize
	float ___fuzzSize_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(TemporalSettings_t1018682602, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_fuzzSize_1() { return static_cast<int32_t>(offsetof(TemporalSettings_t1018682602, ___fuzzSize_1)); }
	inline float get_fuzzSize_1() const { return ___fuzzSize_1; }
	inline float* get_address_of_fuzzSize_1() { return &___fuzzSize_1; }
	inline void set_fuzzSize_1(float value)
	{
		___fuzzSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_t1018682602_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___fuzzSize_1;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_t1018682602_marshaled_com
{
	int32_t ___enabled_0;
	float ___fuzzSize_1;
};
