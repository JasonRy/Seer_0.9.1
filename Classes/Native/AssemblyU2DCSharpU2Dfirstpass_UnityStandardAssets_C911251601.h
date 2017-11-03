#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings
struct  ChromaticAberrationSettings_t911251601 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings::enabled
	bool ___enabled_0;
	// UnityEngine.Color UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings::color
	Color_t4194546905  ___color_1;
	// System.Single UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings::amount
	float ___amount_2;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(ChromaticAberrationSettings_t911251601, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(ChromaticAberrationSettings_t911251601, ___color_1)); }
	inline Color_t4194546905  get_color_1() const { return ___color_1; }
	inline Color_t4194546905 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t4194546905  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_amount_2() { return static_cast<int32_t>(offsetof(ChromaticAberrationSettings_t911251601, ___amount_2)); }
	inline float get_amount_2() const { return ___amount_2; }
	inline float* get_address_of_amount_2() { return &___amount_2; }
	inline void set_amount_2(float value)
	{
		___amount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings
struct ChromaticAberrationSettings_t911251601_marshaled_pinvoke
{
	int32_t ___enabled_0;
	Color_t4194546905_marshaled_pinvoke ___color_1;
	float ___amount_2;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings
struct ChromaticAberrationSettings_t911251601_marshaled_com
{
	int32_t ___enabled_0;
	Color_t4194546905_marshaled_com ___color_1;
	float ___amount_2;
};
