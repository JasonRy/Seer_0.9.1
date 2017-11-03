#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
struct  LUTSettings_t2250936092 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::enabled
	bool ___enabled_0;
	// UnityEngine.Texture UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::texture
	Texture_t2526458961 * ___texture_1;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::contribution
	float ___contribution_2;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LUTSettings_t2250936092, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_texture_1() { return static_cast<int32_t>(offsetof(LUTSettings_t2250936092, ___texture_1)); }
	inline Texture_t2526458961 * get_texture_1() const { return ___texture_1; }
	inline Texture_t2526458961 ** get_address_of_texture_1() { return &___texture_1; }
	inline void set_texture_1(Texture_t2526458961 * value)
	{
		___texture_1 = value;
		Il2CppCodeGenWriteBarrier(&___texture_1, value);
	}

	inline static int32_t get_offset_of_contribution_2() { return static_cast<int32_t>(offsetof(LUTSettings_t2250936092, ___contribution_2)); }
	inline float get_contribution_2() const { return ___contribution_2; }
	inline float* get_address_of_contribution_2() { return &___contribution_2; }
	inline void set_contribution_2(float value)
	{
		___contribution_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
struct LUTSettings_t2250936092_marshaled_pinvoke
{
	int32_t ___enabled_0;
	Texture_t2526458961 * ___texture_1;
	float ___contribution_2;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
struct LUTSettings_t2250936092_marshaled_com
{
	int32_t ___enabled_0;
	Texture_t2526458961 * ___texture_1;
	float ___contribution_2;
};
