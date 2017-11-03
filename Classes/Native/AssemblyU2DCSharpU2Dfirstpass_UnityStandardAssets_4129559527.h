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
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C584188597.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1379216173.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C260039462.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2250936092.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading
struct  TonemappingColorGrading_t4129559527  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_EyeAdaptation
	EyeAdaptationSettings_t584188597  ___m_EyeAdaptation_2;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_Tonemapping
	TonemappingSettings_t1379216173  ___m_Tonemapping_3;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_ColorGrading
	ColorGradingSettings_t260039462  ___m_ColorGrading_4;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_Lut
	LUTSettings_t2250936092  ___m_Lut_5;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_IdentityLut
	Texture2D_t3884108195 * ___m_IdentityLut_6;
	// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_InternalLut
	RenderTexture_t1963041563 * ___m_InternalLut_7;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_CurveTexture
	Texture2D_t3884108195 * ___m_CurveTexture_8;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_TonemapperCurve
	Texture2D_t3884108195 * ___m_TonemapperCurve_9;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_TonemapperCurveRange
	float ___m_TonemapperCurveRange_10;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_Shader
	Shader_t3191267369 * ___m_Shader_11;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_Material
	Material_t3870600107 * ___m_Material_12;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_Dirty
	bool ___m_Dirty_13;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_TonemapperDirty
	bool ___m_TonemapperDirty_14;
	// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_SmallAdaptiveRt
	RenderTexture_t1963041563 * ___m_SmallAdaptiveRt_15;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.CinematicEffects.TonemappingColorGrading::m_AdaptiveRtFormat
	int32_t ___m_AdaptiveRtFormat_16;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::<validRenderTextureFormat>k__BackingField
	bool ___U3CvalidRenderTextureFormatU3Ek__BackingField_17;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::<validUserLutSize>k__BackingField
	bool ___U3CvalidUserLutSizeU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_EyeAdaptation_2() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_EyeAdaptation_2)); }
	inline EyeAdaptationSettings_t584188597  get_m_EyeAdaptation_2() const { return ___m_EyeAdaptation_2; }
	inline EyeAdaptationSettings_t584188597 * get_address_of_m_EyeAdaptation_2() { return &___m_EyeAdaptation_2; }
	inline void set_m_EyeAdaptation_2(EyeAdaptationSettings_t584188597  value)
	{
		___m_EyeAdaptation_2 = value;
	}

	inline static int32_t get_offset_of_m_Tonemapping_3() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_Tonemapping_3)); }
	inline TonemappingSettings_t1379216173  get_m_Tonemapping_3() const { return ___m_Tonemapping_3; }
	inline TonemappingSettings_t1379216173 * get_address_of_m_Tonemapping_3() { return &___m_Tonemapping_3; }
	inline void set_m_Tonemapping_3(TonemappingSettings_t1379216173  value)
	{
		___m_Tonemapping_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorGrading_4() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_ColorGrading_4)); }
	inline ColorGradingSettings_t260039462  get_m_ColorGrading_4() const { return ___m_ColorGrading_4; }
	inline ColorGradingSettings_t260039462 * get_address_of_m_ColorGrading_4() { return &___m_ColorGrading_4; }
	inline void set_m_ColorGrading_4(ColorGradingSettings_t260039462  value)
	{
		___m_ColorGrading_4 = value;
	}

	inline static int32_t get_offset_of_m_Lut_5() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_Lut_5)); }
	inline LUTSettings_t2250936092  get_m_Lut_5() const { return ___m_Lut_5; }
	inline LUTSettings_t2250936092 * get_address_of_m_Lut_5() { return &___m_Lut_5; }
	inline void set_m_Lut_5(LUTSettings_t2250936092  value)
	{
		___m_Lut_5 = value;
	}

	inline static int32_t get_offset_of_m_IdentityLut_6() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_IdentityLut_6)); }
	inline Texture2D_t3884108195 * get_m_IdentityLut_6() const { return ___m_IdentityLut_6; }
	inline Texture2D_t3884108195 ** get_address_of_m_IdentityLut_6() { return &___m_IdentityLut_6; }
	inline void set_m_IdentityLut_6(Texture2D_t3884108195 * value)
	{
		___m_IdentityLut_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_IdentityLut_6, value);
	}

	inline static int32_t get_offset_of_m_InternalLut_7() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_InternalLut_7)); }
	inline RenderTexture_t1963041563 * get_m_InternalLut_7() const { return ___m_InternalLut_7; }
	inline RenderTexture_t1963041563 ** get_address_of_m_InternalLut_7() { return &___m_InternalLut_7; }
	inline void set_m_InternalLut_7(RenderTexture_t1963041563 * value)
	{
		___m_InternalLut_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_InternalLut_7, value);
	}

	inline static int32_t get_offset_of_m_CurveTexture_8() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_CurveTexture_8)); }
	inline Texture2D_t3884108195 * get_m_CurveTexture_8() const { return ___m_CurveTexture_8; }
	inline Texture2D_t3884108195 ** get_address_of_m_CurveTexture_8() { return &___m_CurveTexture_8; }
	inline void set_m_CurveTexture_8(Texture2D_t3884108195 * value)
	{
		___m_CurveTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurveTexture_8, value);
	}

	inline static int32_t get_offset_of_m_TonemapperCurve_9() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_TonemapperCurve_9)); }
	inline Texture2D_t3884108195 * get_m_TonemapperCurve_9() const { return ___m_TonemapperCurve_9; }
	inline Texture2D_t3884108195 ** get_address_of_m_TonemapperCurve_9() { return &___m_TonemapperCurve_9; }
	inline void set_m_TonemapperCurve_9(Texture2D_t3884108195 * value)
	{
		___m_TonemapperCurve_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TonemapperCurve_9, value);
	}

	inline static int32_t get_offset_of_m_TonemapperCurveRange_10() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_TonemapperCurveRange_10)); }
	inline float get_m_TonemapperCurveRange_10() const { return ___m_TonemapperCurveRange_10; }
	inline float* get_address_of_m_TonemapperCurveRange_10() { return &___m_TonemapperCurveRange_10; }
	inline void set_m_TonemapperCurveRange_10(float value)
	{
		___m_TonemapperCurveRange_10 = value;
	}

	inline static int32_t get_offset_of_m_Shader_11() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_Shader_11)); }
	inline Shader_t3191267369 * get_m_Shader_11() const { return ___m_Shader_11; }
	inline Shader_t3191267369 ** get_address_of_m_Shader_11() { return &___m_Shader_11; }
	inline void set_m_Shader_11(Shader_t3191267369 * value)
	{
		___m_Shader_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shader_11, value);
	}

	inline static int32_t get_offset_of_m_Material_12() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_Material_12)); }
	inline Material_t3870600107 * get_m_Material_12() const { return ___m_Material_12; }
	inline Material_t3870600107 ** get_address_of_m_Material_12() { return &___m_Material_12; }
	inline void set_m_Material_12(Material_t3870600107 * value)
	{
		___m_Material_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_12, value);
	}

	inline static int32_t get_offset_of_m_Dirty_13() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_Dirty_13)); }
	inline bool get_m_Dirty_13() const { return ___m_Dirty_13; }
	inline bool* get_address_of_m_Dirty_13() { return &___m_Dirty_13; }
	inline void set_m_Dirty_13(bool value)
	{
		___m_Dirty_13 = value;
	}

	inline static int32_t get_offset_of_m_TonemapperDirty_14() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_TonemapperDirty_14)); }
	inline bool get_m_TonemapperDirty_14() const { return ___m_TonemapperDirty_14; }
	inline bool* get_address_of_m_TonemapperDirty_14() { return &___m_TonemapperDirty_14; }
	inline void set_m_TonemapperDirty_14(bool value)
	{
		___m_TonemapperDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_SmallAdaptiveRt_15() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_SmallAdaptiveRt_15)); }
	inline RenderTexture_t1963041563 * get_m_SmallAdaptiveRt_15() const { return ___m_SmallAdaptiveRt_15; }
	inline RenderTexture_t1963041563 ** get_address_of_m_SmallAdaptiveRt_15() { return &___m_SmallAdaptiveRt_15; }
	inline void set_m_SmallAdaptiveRt_15(RenderTexture_t1963041563 * value)
	{
		___m_SmallAdaptiveRt_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_SmallAdaptiveRt_15, value);
	}

	inline static int32_t get_offset_of_m_AdaptiveRtFormat_16() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___m_AdaptiveRtFormat_16)); }
	inline int32_t get_m_AdaptiveRtFormat_16() const { return ___m_AdaptiveRtFormat_16; }
	inline int32_t* get_address_of_m_AdaptiveRtFormat_16() { return &___m_AdaptiveRtFormat_16; }
	inline void set_m_AdaptiveRtFormat_16(int32_t value)
	{
		___m_AdaptiveRtFormat_16 = value;
	}

	inline static int32_t get_offset_of_U3CvalidRenderTextureFormatU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___U3CvalidRenderTextureFormatU3Ek__BackingField_17)); }
	inline bool get_U3CvalidRenderTextureFormatU3Ek__BackingField_17() const { return ___U3CvalidRenderTextureFormatU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CvalidRenderTextureFormatU3Ek__BackingField_17() { return &___U3CvalidRenderTextureFormatU3Ek__BackingField_17; }
	inline void set_U3CvalidRenderTextureFormatU3Ek__BackingField_17(bool value)
	{
		___U3CvalidRenderTextureFormatU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CvalidUserLutSizeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TonemappingColorGrading_t4129559527, ___U3CvalidUserLutSizeU3Ek__BackingField_18)); }
	inline bool get_U3CvalidUserLutSizeU3Ek__BackingField_18() const { return ___U3CvalidUserLutSizeU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CvalidUserLutSizeU3Ek__BackingField_18() { return &___U3CvalidUserLutSizeU3Ek__BackingField_18; }
	inline void set_U3CvalidUserLutSizeU3Ek__BackingField_18(bool value)
	{
		___U3CvalidUserLutSizeU3Ek__BackingField_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
