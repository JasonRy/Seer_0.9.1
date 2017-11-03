#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings
struct  BokehTextureSettings_t3203840188 
{
public:
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings::texture
	Texture2D_t3884108195 * ___texture_0;
	// System.Single UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings::scale
	float ___scale_1;
	// System.Single UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings::intensity
	float ___intensity_2;
	// System.Single UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings::threshold
	float ___threshold_3;
	// System.Single UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings::spawnHeuristic
	float ___spawnHeuristic_4;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(BokehTextureSettings_t3203840188, ___texture_0)); }
	inline Texture2D_t3884108195 * get_texture_0() const { return ___texture_0; }
	inline Texture2D_t3884108195 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture2D_t3884108195 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_0, value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(BokehTextureSettings_t3203840188, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_intensity_2() { return static_cast<int32_t>(offsetof(BokehTextureSettings_t3203840188, ___intensity_2)); }
	inline float get_intensity_2() const { return ___intensity_2; }
	inline float* get_address_of_intensity_2() { return &___intensity_2; }
	inline void set_intensity_2(float value)
	{
		___intensity_2 = value;
	}

	inline static int32_t get_offset_of_threshold_3() { return static_cast<int32_t>(offsetof(BokehTextureSettings_t3203840188, ___threshold_3)); }
	inline float get_threshold_3() const { return ___threshold_3; }
	inline float* get_address_of_threshold_3() { return &___threshold_3; }
	inline void set_threshold_3(float value)
	{
		___threshold_3 = value;
	}

	inline static int32_t get_offset_of_spawnHeuristic_4() { return static_cast<int32_t>(offsetof(BokehTextureSettings_t3203840188, ___spawnHeuristic_4)); }
	inline float get_spawnHeuristic_4() const { return ___spawnHeuristic_4; }
	inline float* get_address_of_spawnHeuristic_4() { return &___spawnHeuristic_4; }
	inline void set_spawnHeuristic_4(float value)
	{
		___spawnHeuristic_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings
struct BokehTextureSettings_t3203840188_marshaled_pinvoke
{
	Texture2D_t3884108195 * ___texture_0;
	float ___scale_1;
	float ___intensity_2;
	float ___threshold_3;
	float ___spawnHeuristic_4;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings
struct BokehTextureSettings_t3203840188_marshaled_com
{
	Texture2D_t3884108195 * ___texture_0;
	float ___scale_1;
	float ___intensity_2;
	float ___threshold_3;
	float ___spawnHeuristic_4;
};
