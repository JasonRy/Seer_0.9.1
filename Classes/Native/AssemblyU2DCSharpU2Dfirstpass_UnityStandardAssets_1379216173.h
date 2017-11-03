#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
struct AnimationCurve_t3667593487_marshaled_pinvoke;
struct AnimationCurve_t3667593487_marshaled_com;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1229672101.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
struct  TonemappingSettings_t1379216173 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::enabled
	bool ___enabled_0;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Tonemapper UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::tonemapper
	int32_t ___tonemapper_1;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::exposure
	float ___exposure_2;
	// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::curve
	AnimationCurve_t3667593487 * ___curve_3;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralBlackIn
	float ___neutralBlackIn_4;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteIn
	float ___neutralWhiteIn_5;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralBlackOut
	float ___neutralBlackOut_6;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteOut
	float ___neutralWhiteOut_7;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteLevel
	float ___neutralWhiteLevel_8;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteClip
	float ___neutralWhiteClip_9;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_tonemapper_1() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___tonemapper_1)); }
	inline int32_t get_tonemapper_1() const { return ___tonemapper_1; }
	inline int32_t* get_address_of_tonemapper_1() { return &___tonemapper_1; }
	inline void set_tonemapper_1(int32_t value)
	{
		___tonemapper_1 = value;
	}

	inline static int32_t get_offset_of_exposure_2() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___exposure_2)); }
	inline float get_exposure_2() const { return ___exposure_2; }
	inline float* get_address_of_exposure_2() { return &___exposure_2; }
	inline void set_exposure_2(float value)
	{
		___exposure_2 = value;
	}

	inline static int32_t get_offset_of_curve_3() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___curve_3)); }
	inline AnimationCurve_t3667593487 * get_curve_3() const { return ___curve_3; }
	inline AnimationCurve_t3667593487 ** get_address_of_curve_3() { return &___curve_3; }
	inline void set_curve_3(AnimationCurve_t3667593487 * value)
	{
		___curve_3 = value;
		Il2CppCodeGenWriteBarrier(&___curve_3, value);
	}

	inline static int32_t get_offset_of_neutralBlackIn_4() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___neutralBlackIn_4)); }
	inline float get_neutralBlackIn_4() const { return ___neutralBlackIn_4; }
	inline float* get_address_of_neutralBlackIn_4() { return &___neutralBlackIn_4; }
	inline void set_neutralBlackIn_4(float value)
	{
		___neutralBlackIn_4 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteIn_5() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___neutralWhiteIn_5)); }
	inline float get_neutralWhiteIn_5() const { return ___neutralWhiteIn_5; }
	inline float* get_address_of_neutralWhiteIn_5() { return &___neutralWhiteIn_5; }
	inline void set_neutralWhiteIn_5(float value)
	{
		___neutralWhiteIn_5 = value;
	}

	inline static int32_t get_offset_of_neutralBlackOut_6() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___neutralBlackOut_6)); }
	inline float get_neutralBlackOut_6() const { return ___neutralBlackOut_6; }
	inline float* get_address_of_neutralBlackOut_6() { return &___neutralBlackOut_6; }
	inline void set_neutralBlackOut_6(float value)
	{
		___neutralBlackOut_6 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteOut_7() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___neutralWhiteOut_7)); }
	inline float get_neutralWhiteOut_7() const { return ___neutralWhiteOut_7; }
	inline float* get_address_of_neutralWhiteOut_7() { return &___neutralWhiteOut_7; }
	inline void set_neutralWhiteOut_7(float value)
	{
		___neutralWhiteOut_7 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteLevel_8() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___neutralWhiteLevel_8)); }
	inline float get_neutralWhiteLevel_8() const { return ___neutralWhiteLevel_8; }
	inline float* get_address_of_neutralWhiteLevel_8() { return &___neutralWhiteLevel_8; }
	inline void set_neutralWhiteLevel_8(float value)
	{
		___neutralWhiteLevel_8 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteClip_9() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1379216173, ___neutralWhiteClip_9)); }
	inline float get_neutralWhiteClip_9() const { return ___neutralWhiteClip_9; }
	inline float* get_address_of_neutralWhiteClip_9() { return &___neutralWhiteClip_9; }
	inline void set_neutralWhiteClip_9(float value)
	{
		___neutralWhiteClip_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
struct TonemappingSettings_t1379216173_marshaled_pinvoke
{
	int32_t ___enabled_0;
	int32_t ___tonemapper_1;
	float ___exposure_2;
	AnimationCurve_t3667593487_marshaled_pinvoke* ___curve_3;
	float ___neutralBlackIn_4;
	float ___neutralWhiteIn_5;
	float ___neutralBlackOut_6;
	float ___neutralWhiteOut_7;
	float ___neutralWhiteLevel_8;
	float ___neutralWhiteClip_9;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
struct TonemappingSettings_t1379216173_marshaled_com
{
	int32_t ___enabled_0;
	int32_t ___tonemapper_1;
	float ___exposure_2;
	AnimationCurve_t3667593487_marshaled_com* ___curve_3;
	float ___neutralBlackIn_4;
	float ___neutralWhiteIn_5;
	float ___neutralBlackOut_6;
	float ___neutralWhiteOut_7;
	float ___neutralWhiteLevel_8;
	float ___neutralWhiteClip_9;
};
