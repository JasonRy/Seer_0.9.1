#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1256097195.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2868270621.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C462772600.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1018682602.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.SMAA
struct  SMAA_t3128049396  : public Il2CppObject
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings UnityStandardAssets.CinematicEffects.SMAA::settings
	GlobalSettings_t1256097195  ___settings_0;
	// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings UnityStandardAssets.CinematicEffects.SMAA::quality
	QualitySettings_t2868270621  ___quality_1;
	// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings UnityStandardAssets.CinematicEffects.SMAA::predication
	PredicationSettings_t462772600  ___predication_2;
	// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings UnityStandardAssets.CinematicEffects.SMAA::temporal
	TemporalSettings_t1018682602  ___temporal_3;
	// UnityEngine.Matrix4x4 UnityStandardAssets.CinematicEffects.SMAA::m_ProjectionMatrix
	Matrix4x4_t1651859333  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityStandardAssets.CinematicEffects.SMAA::m_PreviousViewProjectionMatrix
	Matrix4x4_t1651859333  ___m_PreviousViewProjectionMatrix_5;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA::m_FlipFlop
	float ___m_FlipFlop_6;
	// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.SMAA::m_Accumulation
	RenderTexture_t1963041563 * ___m_Accumulation_7;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.SMAA::m_Shader
	Shader_t3191267369 * ___m_Shader_8;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::m_AreaTexture
	Texture2D_t3884108195 * ___m_AreaTexture_9;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::m_SearchTexture
	Texture2D_t3884108195 * ___m_SearchTexture_10;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.SMAA::m_Material
	Material_t3870600107 * ___m_Material_11;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___settings_0)); }
	inline GlobalSettings_t1256097195  get_settings_0() const { return ___settings_0; }
	inline GlobalSettings_t1256097195 * get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(GlobalSettings_t1256097195  value)
	{
		___settings_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___quality_1)); }
	inline QualitySettings_t2868270621  get_quality_1() const { return ___quality_1; }
	inline QualitySettings_t2868270621 * get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(QualitySettings_t2868270621  value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_predication_2() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___predication_2)); }
	inline PredicationSettings_t462772600  get_predication_2() const { return ___predication_2; }
	inline PredicationSettings_t462772600 * get_address_of_predication_2() { return &___predication_2; }
	inline void set_predication_2(PredicationSettings_t462772600  value)
	{
		___predication_2 = value;
	}

	inline static int32_t get_offset_of_temporal_3() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___temporal_3)); }
	inline TemporalSettings_t1018682602  get_temporal_3() const { return ___temporal_3; }
	inline TemporalSettings_t1018682602 * get_address_of_temporal_3() { return &___temporal_3; }
	inline void set_temporal_3(TemporalSettings_t1018682602  value)
	{
		___temporal_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_t1651859333  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_t1651859333 * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_t1651859333  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_PreviousViewProjectionMatrix_5() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_PreviousViewProjectionMatrix_5)); }
	inline Matrix4x4_t1651859333  get_m_PreviousViewProjectionMatrix_5() const { return ___m_PreviousViewProjectionMatrix_5; }
	inline Matrix4x4_t1651859333 * get_address_of_m_PreviousViewProjectionMatrix_5() { return &___m_PreviousViewProjectionMatrix_5; }
	inline void set_m_PreviousViewProjectionMatrix_5(Matrix4x4_t1651859333  value)
	{
		___m_PreviousViewProjectionMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_FlipFlop_6() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_FlipFlop_6)); }
	inline float get_m_FlipFlop_6() const { return ___m_FlipFlop_6; }
	inline float* get_address_of_m_FlipFlop_6() { return &___m_FlipFlop_6; }
	inline void set_m_FlipFlop_6(float value)
	{
		___m_FlipFlop_6 = value;
	}

	inline static int32_t get_offset_of_m_Accumulation_7() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_Accumulation_7)); }
	inline RenderTexture_t1963041563 * get_m_Accumulation_7() const { return ___m_Accumulation_7; }
	inline RenderTexture_t1963041563 ** get_address_of_m_Accumulation_7() { return &___m_Accumulation_7; }
	inline void set_m_Accumulation_7(RenderTexture_t1963041563 * value)
	{
		___m_Accumulation_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Accumulation_7, value);
	}

	inline static int32_t get_offset_of_m_Shader_8() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_Shader_8)); }
	inline Shader_t3191267369 * get_m_Shader_8() const { return ___m_Shader_8; }
	inline Shader_t3191267369 ** get_address_of_m_Shader_8() { return &___m_Shader_8; }
	inline void set_m_Shader_8(Shader_t3191267369 * value)
	{
		___m_Shader_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shader_8, value);
	}

	inline static int32_t get_offset_of_m_AreaTexture_9() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_AreaTexture_9)); }
	inline Texture2D_t3884108195 * get_m_AreaTexture_9() const { return ___m_AreaTexture_9; }
	inline Texture2D_t3884108195 ** get_address_of_m_AreaTexture_9() { return &___m_AreaTexture_9; }
	inline void set_m_AreaTexture_9(Texture2D_t3884108195 * value)
	{
		___m_AreaTexture_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_AreaTexture_9, value);
	}

	inline static int32_t get_offset_of_m_SearchTexture_10() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_SearchTexture_10)); }
	inline Texture2D_t3884108195 * get_m_SearchTexture_10() const { return ___m_SearchTexture_10; }
	inline Texture2D_t3884108195 ** get_address_of_m_SearchTexture_10() { return &___m_SearchTexture_10; }
	inline void set_m_SearchTexture_10(Texture2D_t3884108195 * value)
	{
		___m_SearchTexture_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_SearchTexture_10, value);
	}

	inline static int32_t get_offset_of_m_Material_11() { return static_cast<int32_t>(offsetof(SMAA_t3128049396, ___m_Material_11)); }
	inline Material_t3870600107 * get_m_Material_11() const { return ___m_Material_11; }
	inline Material_t3870600107 ** get_address_of_m_Material_11() { return &___m_Material_11; }
	inline void set_m_Material_11(Material_t3870600107 * value)
	{
		___m_Material_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
