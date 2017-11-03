#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityStandardAssets.CinematicEffects.RenderTextureUtility
struct RenderTextureUtility_t1679912481;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2428136763.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2216334232.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C911251601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.LensAberrations
struct  LensAberrations_t1674124190  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.LensAberrations/DistortionSettings UnityStandardAssets.CinematicEffects.LensAberrations::distortion
	DistortionSettings_t2428136763  ___distortion_2;
	// UnityStandardAssets.CinematicEffects.LensAberrations/VignetteSettings UnityStandardAssets.CinematicEffects.LensAberrations::vignette
	VignetteSettings_t2216334232  ___vignette_3;
	// UnityStandardAssets.CinematicEffects.LensAberrations/ChromaticAberrationSettings UnityStandardAssets.CinematicEffects.LensAberrations::chromaticAberration
	ChromaticAberrationSettings_t911251601  ___chromaticAberration_4;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.LensAberrations::m_Shader
	Shader_t3191267369 * ___m_Shader_5;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.LensAberrations::m_Material
	Material_t3870600107 * ___m_Material_6;
	// UnityStandardAssets.CinematicEffects.RenderTextureUtility UnityStandardAssets.CinematicEffects.LensAberrations::m_RTU
	RenderTextureUtility_t1679912481 * ___m_RTU_7;

public:
	inline static int32_t get_offset_of_distortion_2() { return static_cast<int32_t>(offsetof(LensAberrations_t1674124190, ___distortion_2)); }
	inline DistortionSettings_t2428136763  get_distortion_2() const { return ___distortion_2; }
	inline DistortionSettings_t2428136763 * get_address_of_distortion_2() { return &___distortion_2; }
	inline void set_distortion_2(DistortionSettings_t2428136763  value)
	{
		___distortion_2 = value;
	}

	inline static int32_t get_offset_of_vignette_3() { return static_cast<int32_t>(offsetof(LensAberrations_t1674124190, ___vignette_3)); }
	inline VignetteSettings_t2216334232  get_vignette_3() const { return ___vignette_3; }
	inline VignetteSettings_t2216334232 * get_address_of_vignette_3() { return &___vignette_3; }
	inline void set_vignette_3(VignetteSettings_t2216334232  value)
	{
		___vignette_3 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_4() { return static_cast<int32_t>(offsetof(LensAberrations_t1674124190, ___chromaticAberration_4)); }
	inline ChromaticAberrationSettings_t911251601  get_chromaticAberration_4() const { return ___chromaticAberration_4; }
	inline ChromaticAberrationSettings_t911251601 * get_address_of_chromaticAberration_4() { return &___chromaticAberration_4; }
	inline void set_chromaticAberration_4(ChromaticAberrationSettings_t911251601  value)
	{
		___chromaticAberration_4 = value;
	}

	inline static int32_t get_offset_of_m_Shader_5() { return static_cast<int32_t>(offsetof(LensAberrations_t1674124190, ___m_Shader_5)); }
	inline Shader_t3191267369 * get_m_Shader_5() const { return ___m_Shader_5; }
	inline Shader_t3191267369 ** get_address_of_m_Shader_5() { return &___m_Shader_5; }
	inline void set_m_Shader_5(Shader_t3191267369 * value)
	{
		___m_Shader_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shader_5, value);
	}

	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(LensAberrations_t1674124190, ___m_Material_6)); }
	inline Material_t3870600107 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t3870600107 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t3870600107 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_6, value);
	}

	inline static int32_t get_offset_of_m_RTU_7() { return static_cast<int32_t>(offsetof(LensAberrations_t1674124190, ___m_RTU_7)); }
	inline RenderTextureUtility_t1679912481 * get_m_RTU_7() const { return ___m_RTU_7; }
	inline RenderTextureUtility_t1679912481 ** get_address_of_m_RTU_7() { return &___m_RTU_7; }
	inline void set_m_RTU_7(RenderTextureUtility_t1679912481 * value)
	{
		___m_RTU_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_RTU_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
