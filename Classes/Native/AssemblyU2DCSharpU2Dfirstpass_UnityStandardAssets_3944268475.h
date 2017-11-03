#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2537699400.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1747880796.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C743947951.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3944268475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
struct  SSRSettings_t3944268475 
{
public:
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::reflectionSettings
	ReflectionSettings_t2537699400  ___reflectionSettings_0;
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::intensitySettings
	IntensitySettings_t1747880796  ___intensitySettings_1;
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ScreenEdgeMask UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::screenEdgeMask
	ScreenEdgeMask_t743947951  ___screenEdgeMask_2;

public:
	inline static int32_t get_offset_of_reflectionSettings_0() { return static_cast<int32_t>(offsetof(SSRSettings_t3944268475, ___reflectionSettings_0)); }
	inline ReflectionSettings_t2537699400  get_reflectionSettings_0() const { return ___reflectionSettings_0; }
	inline ReflectionSettings_t2537699400 * get_address_of_reflectionSettings_0() { return &___reflectionSettings_0; }
	inline void set_reflectionSettings_0(ReflectionSettings_t2537699400  value)
	{
		___reflectionSettings_0 = value;
	}

	inline static int32_t get_offset_of_intensitySettings_1() { return static_cast<int32_t>(offsetof(SSRSettings_t3944268475, ___intensitySettings_1)); }
	inline IntensitySettings_t1747880796  get_intensitySettings_1() const { return ___intensitySettings_1; }
	inline IntensitySettings_t1747880796 * get_address_of_intensitySettings_1() { return &___intensitySettings_1; }
	inline void set_intensitySettings_1(IntensitySettings_t1747880796  value)
	{
		___intensitySettings_1 = value;
	}

	inline static int32_t get_offset_of_screenEdgeMask_2() { return static_cast<int32_t>(offsetof(SSRSettings_t3944268475, ___screenEdgeMask_2)); }
	inline ScreenEdgeMask_t743947951  get_screenEdgeMask_2() const { return ___screenEdgeMask_2; }
	inline ScreenEdgeMask_t743947951 * get_address_of_screenEdgeMask_2() { return &___screenEdgeMask_2; }
	inline void set_screenEdgeMask_2(ScreenEdgeMask_t743947951  value)
	{
		___screenEdgeMask_2 = value;
	}
};

struct SSRSettings_t3944268475_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::s_Default
	SSRSettings_t3944268475  ___s_Default_3;

public:
	inline static int32_t get_offset_of_s_Default_3() { return static_cast<int32_t>(offsetof(SSRSettings_t3944268475_StaticFields, ___s_Default_3)); }
	inline SSRSettings_t3944268475  get_s_Default_3() const { return ___s_Default_3; }
	inline SSRSettings_t3944268475 * get_address_of_s_Default_3() { return &___s_Default_3; }
	inline void set_s_Default_3(SSRSettings_t3944268475  value)
	{
		___s_Default_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
struct SSRSettings_t3944268475_marshaled_pinvoke
{
	ReflectionSettings_t2537699400_marshaled_pinvoke ___reflectionSettings_0;
	IntensitySettings_t1747880796_marshaled_pinvoke ___intensitySettings_1;
	ScreenEdgeMask_t743947951_marshaled_pinvoke ___screenEdgeMask_2;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
struct SSRSettings_t3944268475_marshaled_com
{
	ReflectionSettings_t2537699400_marshaled_com ___reflectionSettings_0;
	IntensitySettings_t1747880796_marshaled_com ___intensitySettings_1;
	ScreenEdgeMask_t743947951_marshaled_com ___screenEdgeMask_2;
};
