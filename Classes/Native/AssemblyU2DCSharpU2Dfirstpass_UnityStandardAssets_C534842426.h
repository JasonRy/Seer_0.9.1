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
// UnityStandardAssets.CinematicEffects.RenderTextureUtility
struct RenderTextureUtility_t1679912481;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t37359565;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C406766501.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3573962364.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3203840188.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2308822883.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.DepthOfField
struct  DepthOfField_t534842426  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.DepthOfField/GlobalSettings UnityStandardAssets.CinematicEffects.DepthOfField::settings
	GlobalSettings_t406766501  ___settings_3;
	// UnityStandardAssets.CinematicEffects.DepthOfField/FocusSettings UnityStandardAssets.CinematicEffects.DepthOfField::focus
	FocusSettings_t3573962364  ___focus_4;
	// UnityStandardAssets.CinematicEffects.DepthOfField/BokehTextureSettings UnityStandardAssets.CinematicEffects.DepthOfField::bokehTexture
	BokehTextureSettings_t3203840188  ___bokehTexture_5;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.DepthOfField::m_FilmicDepthOfFieldShader
	Shader_t3191267369 * ___m_FilmicDepthOfFieldShader_6;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.DepthOfField::m_MedianFilterShader
	Shader_t3191267369 * ___m_MedianFilterShader_7;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.DepthOfField::m_TextureBokehShader
	Shader_t3191267369 * ___m_TextureBokehShader_8;
	// UnityStandardAssets.CinematicEffects.RenderTextureUtility UnityStandardAssets.CinematicEffects.DepthOfField::m_RTU
	RenderTextureUtility_t1679912481 * ___m_RTU_9;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.DepthOfField::m_FilmicDepthOfFieldMaterial
	Material_t3870600107 * ___m_FilmicDepthOfFieldMaterial_10;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.DepthOfField::m_MedianFilterMaterial
	Material_t3870600107 * ___m_MedianFilterMaterial_11;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.DepthOfField::m_TextureBokehMaterial
	Material_t3870600107 * ___m_TextureBokehMaterial_12;
	// UnityEngine.ComputeBuffer UnityStandardAssets.CinematicEffects.DepthOfField::m_ComputeBufferDrawArgs
	ComputeBuffer_t37359565 * ___m_ComputeBufferDrawArgs_13;
	// UnityEngine.ComputeBuffer UnityStandardAssets.CinematicEffects.DepthOfField::m_ComputeBufferPoints
	ComputeBuffer_t37359565 * ___m_ComputeBufferPoints_14;
	// UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings UnityStandardAssets.CinematicEffects.DepthOfField::m_CurrentQualitySettings
	QualitySettings_t2308822883  ___m_CurrentQualitySettings_15;
	// System.Single UnityStandardAssets.CinematicEffects.DepthOfField::m_LastApertureOrientation
	float ___m_LastApertureOrientation_16;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_OctogonalBokehDirection1
	Vector4_t4282066567  ___m_OctogonalBokehDirection1_17;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_OctogonalBokehDirection2
	Vector4_t4282066567  ___m_OctogonalBokehDirection2_18;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_OctogonalBokehDirection3
	Vector4_t4282066567  ___m_OctogonalBokehDirection3_19;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_OctogonalBokehDirection4
	Vector4_t4282066567  ___m_OctogonalBokehDirection4_20;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_HexagonalBokehDirection1
	Vector4_t4282066567  ___m_HexagonalBokehDirection1_21;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_HexagonalBokehDirection2
	Vector4_t4282066567  ___m_HexagonalBokehDirection2_22;
	// UnityEngine.Vector4 UnityStandardAssets.CinematicEffects.DepthOfField::m_HexagonalBokehDirection3
	Vector4_t4282066567  ___m_HexagonalBokehDirection3_23;

public:
	inline static int32_t get_offset_of_settings_3() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___settings_3)); }
	inline GlobalSettings_t406766501  get_settings_3() const { return ___settings_3; }
	inline GlobalSettings_t406766501 * get_address_of_settings_3() { return &___settings_3; }
	inline void set_settings_3(GlobalSettings_t406766501  value)
	{
		___settings_3 = value;
	}

	inline static int32_t get_offset_of_focus_4() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___focus_4)); }
	inline FocusSettings_t3573962364  get_focus_4() const { return ___focus_4; }
	inline FocusSettings_t3573962364 * get_address_of_focus_4() { return &___focus_4; }
	inline void set_focus_4(FocusSettings_t3573962364  value)
	{
		___focus_4 = value;
	}

	inline static int32_t get_offset_of_bokehTexture_5() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___bokehTexture_5)); }
	inline BokehTextureSettings_t3203840188  get_bokehTexture_5() const { return ___bokehTexture_5; }
	inline BokehTextureSettings_t3203840188 * get_address_of_bokehTexture_5() { return &___bokehTexture_5; }
	inline void set_bokehTexture_5(BokehTextureSettings_t3203840188  value)
	{
		___bokehTexture_5 = value;
	}

	inline static int32_t get_offset_of_m_FilmicDepthOfFieldShader_6() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_FilmicDepthOfFieldShader_6)); }
	inline Shader_t3191267369 * get_m_FilmicDepthOfFieldShader_6() const { return ___m_FilmicDepthOfFieldShader_6; }
	inline Shader_t3191267369 ** get_address_of_m_FilmicDepthOfFieldShader_6() { return &___m_FilmicDepthOfFieldShader_6; }
	inline void set_m_FilmicDepthOfFieldShader_6(Shader_t3191267369 * value)
	{
		___m_FilmicDepthOfFieldShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_FilmicDepthOfFieldShader_6, value);
	}

	inline static int32_t get_offset_of_m_MedianFilterShader_7() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_MedianFilterShader_7)); }
	inline Shader_t3191267369 * get_m_MedianFilterShader_7() const { return ___m_MedianFilterShader_7; }
	inline Shader_t3191267369 ** get_address_of_m_MedianFilterShader_7() { return &___m_MedianFilterShader_7; }
	inline void set_m_MedianFilterShader_7(Shader_t3191267369 * value)
	{
		___m_MedianFilterShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_MedianFilterShader_7, value);
	}

	inline static int32_t get_offset_of_m_TextureBokehShader_8() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_TextureBokehShader_8)); }
	inline Shader_t3191267369 * get_m_TextureBokehShader_8() const { return ___m_TextureBokehShader_8; }
	inline Shader_t3191267369 ** get_address_of_m_TextureBokehShader_8() { return &___m_TextureBokehShader_8; }
	inline void set_m_TextureBokehShader_8(Shader_t3191267369 * value)
	{
		___m_TextureBokehShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextureBokehShader_8, value);
	}

	inline static int32_t get_offset_of_m_RTU_9() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_RTU_9)); }
	inline RenderTextureUtility_t1679912481 * get_m_RTU_9() const { return ___m_RTU_9; }
	inline RenderTextureUtility_t1679912481 ** get_address_of_m_RTU_9() { return &___m_RTU_9; }
	inline void set_m_RTU_9(RenderTextureUtility_t1679912481 * value)
	{
		___m_RTU_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_RTU_9, value);
	}

	inline static int32_t get_offset_of_m_FilmicDepthOfFieldMaterial_10() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_FilmicDepthOfFieldMaterial_10)); }
	inline Material_t3870600107 * get_m_FilmicDepthOfFieldMaterial_10() const { return ___m_FilmicDepthOfFieldMaterial_10; }
	inline Material_t3870600107 ** get_address_of_m_FilmicDepthOfFieldMaterial_10() { return &___m_FilmicDepthOfFieldMaterial_10; }
	inline void set_m_FilmicDepthOfFieldMaterial_10(Material_t3870600107 * value)
	{
		___m_FilmicDepthOfFieldMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_FilmicDepthOfFieldMaterial_10, value);
	}

	inline static int32_t get_offset_of_m_MedianFilterMaterial_11() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_MedianFilterMaterial_11)); }
	inline Material_t3870600107 * get_m_MedianFilterMaterial_11() const { return ___m_MedianFilterMaterial_11; }
	inline Material_t3870600107 ** get_address_of_m_MedianFilterMaterial_11() { return &___m_MedianFilterMaterial_11; }
	inline void set_m_MedianFilterMaterial_11(Material_t3870600107 * value)
	{
		___m_MedianFilterMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_MedianFilterMaterial_11, value);
	}

	inline static int32_t get_offset_of_m_TextureBokehMaterial_12() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_TextureBokehMaterial_12)); }
	inline Material_t3870600107 * get_m_TextureBokehMaterial_12() const { return ___m_TextureBokehMaterial_12; }
	inline Material_t3870600107 ** get_address_of_m_TextureBokehMaterial_12() { return &___m_TextureBokehMaterial_12; }
	inline void set_m_TextureBokehMaterial_12(Material_t3870600107 * value)
	{
		___m_TextureBokehMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextureBokehMaterial_12, value);
	}

	inline static int32_t get_offset_of_m_ComputeBufferDrawArgs_13() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_ComputeBufferDrawArgs_13)); }
	inline ComputeBuffer_t37359565 * get_m_ComputeBufferDrawArgs_13() const { return ___m_ComputeBufferDrawArgs_13; }
	inline ComputeBuffer_t37359565 ** get_address_of_m_ComputeBufferDrawArgs_13() { return &___m_ComputeBufferDrawArgs_13; }
	inline void set_m_ComputeBufferDrawArgs_13(ComputeBuffer_t37359565 * value)
	{
		___m_ComputeBufferDrawArgs_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_ComputeBufferDrawArgs_13, value);
	}

	inline static int32_t get_offset_of_m_ComputeBufferPoints_14() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_ComputeBufferPoints_14)); }
	inline ComputeBuffer_t37359565 * get_m_ComputeBufferPoints_14() const { return ___m_ComputeBufferPoints_14; }
	inline ComputeBuffer_t37359565 ** get_address_of_m_ComputeBufferPoints_14() { return &___m_ComputeBufferPoints_14; }
	inline void set_m_ComputeBufferPoints_14(ComputeBuffer_t37359565 * value)
	{
		___m_ComputeBufferPoints_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_ComputeBufferPoints_14, value);
	}

	inline static int32_t get_offset_of_m_CurrentQualitySettings_15() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_CurrentQualitySettings_15)); }
	inline QualitySettings_t2308822883  get_m_CurrentQualitySettings_15() const { return ___m_CurrentQualitySettings_15; }
	inline QualitySettings_t2308822883 * get_address_of_m_CurrentQualitySettings_15() { return &___m_CurrentQualitySettings_15; }
	inline void set_m_CurrentQualitySettings_15(QualitySettings_t2308822883  value)
	{
		___m_CurrentQualitySettings_15 = value;
	}

	inline static int32_t get_offset_of_m_LastApertureOrientation_16() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_LastApertureOrientation_16)); }
	inline float get_m_LastApertureOrientation_16() const { return ___m_LastApertureOrientation_16; }
	inline float* get_address_of_m_LastApertureOrientation_16() { return &___m_LastApertureOrientation_16; }
	inline void set_m_LastApertureOrientation_16(float value)
	{
		___m_LastApertureOrientation_16 = value;
	}

	inline static int32_t get_offset_of_m_OctogonalBokehDirection1_17() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_OctogonalBokehDirection1_17)); }
	inline Vector4_t4282066567  get_m_OctogonalBokehDirection1_17() const { return ___m_OctogonalBokehDirection1_17; }
	inline Vector4_t4282066567 * get_address_of_m_OctogonalBokehDirection1_17() { return &___m_OctogonalBokehDirection1_17; }
	inline void set_m_OctogonalBokehDirection1_17(Vector4_t4282066567  value)
	{
		___m_OctogonalBokehDirection1_17 = value;
	}

	inline static int32_t get_offset_of_m_OctogonalBokehDirection2_18() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_OctogonalBokehDirection2_18)); }
	inline Vector4_t4282066567  get_m_OctogonalBokehDirection2_18() const { return ___m_OctogonalBokehDirection2_18; }
	inline Vector4_t4282066567 * get_address_of_m_OctogonalBokehDirection2_18() { return &___m_OctogonalBokehDirection2_18; }
	inline void set_m_OctogonalBokehDirection2_18(Vector4_t4282066567  value)
	{
		___m_OctogonalBokehDirection2_18 = value;
	}

	inline static int32_t get_offset_of_m_OctogonalBokehDirection3_19() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_OctogonalBokehDirection3_19)); }
	inline Vector4_t4282066567  get_m_OctogonalBokehDirection3_19() const { return ___m_OctogonalBokehDirection3_19; }
	inline Vector4_t4282066567 * get_address_of_m_OctogonalBokehDirection3_19() { return &___m_OctogonalBokehDirection3_19; }
	inline void set_m_OctogonalBokehDirection3_19(Vector4_t4282066567  value)
	{
		___m_OctogonalBokehDirection3_19 = value;
	}

	inline static int32_t get_offset_of_m_OctogonalBokehDirection4_20() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_OctogonalBokehDirection4_20)); }
	inline Vector4_t4282066567  get_m_OctogonalBokehDirection4_20() const { return ___m_OctogonalBokehDirection4_20; }
	inline Vector4_t4282066567 * get_address_of_m_OctogonalBokehDirection4_20() { return &___m_OctogonalBokehDirection4_20; }
	inline void set_m_OctogonalBokehDirection4_20(Vector4_t4282066567  value)
	{
		___m_OctogonalBokehDirection4_20 = value;
	}

	inline static int32_t get_offset_of_m_HexagonalBokehDirection1_21() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_HexagonalBokehDirection1_21)); }
	inline Vector4_t4282066567  get_m_HexagonalBokehDirection1_21() const { return ___m_HexagonalBokehDirection1_21; }
	inline Vector4_t4282066567 * get_address_of_m_HexagonalBokehDirection1_21() { return &___m_HexagonalBokehDirection1_21; }
	inline void set_m_HexagonalBokehDirection1_21(Vector4_t4282066567  value)
	{
		___m_HexagonalBokehDirection1_21 = value;
	}

	inline static int32_t get_offset_of_m_HexagonalBokehDirection2_22() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_HexagonalBokehDirection2_22)); }
	inline Vector4_t4282066567  get_m_HexagonalBokehDirection2_22() const { return ___m_HexagonalBokehDirection2_22; }
	inline Vector4_t4282066567 * get_address_of_m_HexagonalBokehDirection2_22() { return &___m_HexagonalBokehDirection2_22; }
	inline void set_m_HexagonalBokehDirection2_22(Vector4_t4282066567  value)
	{
		___m_HexagonalBokehDirection2_22 = value;
	}

	inline static int32_t get_offset_of_m_HexagonalBokehDirection3_23() { return static_cast<int32_t>(offsetof(DepthOfField_t534842426, ___m_HexagonalBokehDirection3_23)); }
	inline Vector4_t4282066567  get_m_HexagonalBokehDirection3_23() const { return ___m_HexagonalBokehDirection3_23; }
	inline Vector4_t4282066567 * get_address_of_m_HexagonalBokehDirection3_23() { return &___m_HexagonalBokehDirection3_23; }
	inline void set_m_HexagonalBokehDirection3_23(Vector4_t4282066567  value)
	{
		___m_HexagonalBokehDirection3_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
