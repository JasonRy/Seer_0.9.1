#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading
struct TonemappingColorGrading_t4129559527;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C584188597.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1379216173.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C260039462.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2250936092.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::.ctor()
extern "C"  void TonemappingColorGrading__ctor_m1750646514 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_eyeAdaptation()
extern "C"  EyeAdaptationSettings_t584188597  TonemappingColorGrading_get_eyeAdaptation_m2069119643 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::set_eyeAdaptation(UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings)
extern "C"  void TonemappingColorGrading_set_eyeAdaptation_m3530130786 (TonemappingColorGrading_t4129559527 * __this, EyeAdaptationSettings_t584188597  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_tonemapping()
extern "C"  TonemappingSettings_t1379216173  TonemappingColorGrading_get_tonemapping_m3826070859 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::set_tonemapping(UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings)
extern "C"  void TonemappingColorGrading_set_tonemapping_m1293667042 (TonemappingColorGrading_t4129559527 * __this, TonemappingSettings_t1379216173  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_colorGrading()
extern "C"  ColorGradingSettings_t260039462  TonemappingColorGrading_get_colorGrading_m1056381465 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::set_colorGrading(UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings)
extern "C"  void TonemappingColorGrading_set_colorGrading_m3774672172 (TonemappingColorGrading_t4129559527 * __this, ColorGradingSettings_t260039462  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_lut()
extern "C"  LUTSettings_t2250936092  TonemappingColorGrading_get_lut_m90603625 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::set_lut(UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings)
extern "C"  void TonemappingColorGrading_set_lut_m1177812738 (TonemappingColorGrading_t4129559527 * __this, LUTSettings_t2250936092  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_identityLut()
extern "C"  Texture2D_t3884108195 * TonemappingColorGrading_get_identityLut_m1224551831 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_internalLutRt()
extern "C"  RenderTexture_t1963041563 * TonemappingColorGrading_get_internalLutRt_m3048857106 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_curveTexture()
extern "C"  Texture2D_t3884108195 * TonemappingColorGrading_get_curveTexture_m3969086180 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_tonemapperCurve()
extern "C"  Texture2D_t3884108195 * TonemappingColorGrading_get_tonemapperCurve_m1656429926 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_shader()
extern "C"  Shader_t3191267369 * TonemappingColorGrading_get_shader_m3087505513 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_material()
extern "C"  Material_t3870600107 * TonemappingColorGrading_get_material_m3897206249 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_isGammaColorSpace()
extern "C"  bool TonemappingColorGrading_get_isGammaColorSpace_m1606368139 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_lutSize()
extern "C"  int32_t TonemappingColorGrading_get_lutSize_m3915231037 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_validRenderTextureFormat()
extern "C"  bool TonemappingColorGrading_get_validRenderTextureFormat_m1020602487 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::set_validRenderTextureFormat(System.Boolean)
extern "C"  void TonemappingColorGrading_set_validRenderTextureFormat_m182261638 (TonemappingColorGrading_t4129559527 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::get_validUserLutSize()
extern "C"  bool TonemappingColorGrading_get_validUserLutSize_m4241845916 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::set_validUserLutSize(System.Boolean)
extern "C"  void TonemappingColorGrading_set_validUserLutSize_m2908786923 (TonemappingColorGrading_t4129559527 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::SetDirty()
extern "C"  void TonemappingColorGrading_SetDirty_m2026493986 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::SetTonemapperDirty()
extern "C"  void TonemappingColorGrading_SetTonemapperDirty_m2070421423 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::OnEnable()
extern "C"  void TonemappingColorGrading_OnEnable_m1794001748 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::OnDisable()
extern "C"  void TonemappingColorGrading_OnDisable_m220416601 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::OnValidate()
extern "C"  void TonemappingColorGrading_OnValidate_m4113334823 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::GenerateIdentityLut(System.Int32)
extern "C"  Texture2D_t3884108195 * TonemappingColorGrading_GenerateIdentityLut_m1333477116 (Il2CppObject * __this /* static, unused */, int32_t ___dim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading::StandardIlluminantY(System.Single)
extern "C"  float TonemappingColorGrading_StandardIlluminantY_m2930020364 (TonemappingColorGrading_t4129559527 * __this, float ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CinematicEffects.TonemappingColorGrading::CIExyToLMS(System.Single,System.Single)
extern "C"  Vector3_t4282066566  TonemappingColorGrading_CIExyToLMS_m527794797 (TonemappingColorGrading_t4129559527 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CinematicEffects.TonemappingColorGrading::GetWhiteBalance()
extern "C"  Vector3_t4282066566  TonemappingColorGrading_GetWhiteBalance_m3357787967 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityStandardAssets.CinematicEffects.TonemappingColorGrading::NormalizeColor(UnityEngine.Color)
extern "C"  Color_t4194546905  TonemappingColorGrading_NormalizeColor_m3591909719 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::GenerateLiftGammaGain(UnityEngine.Color&,UnityEngine.Color&,UnityEngine.Color&)
extern "C"  void TonemappingColorGrading_GenerateLiftGammaGain_m2458322556 (TonemappingColorGrading_t4129559527 * __this, Color_t4194546905 * ___lift0, Color_t4194546905 * ___gamma1, Color_t4194546905 * ___gain2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::GenCurveTexture()
extern "C"  void TonemappingColorGrading_GenCurveTexture_m1998643948 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::CheckUserLut()
extern "C"  bool TonemappingColorGrading_CheckUserLut_m3281450694 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading::CheckSmallAdaptiveRt()
extern "C"  bool TonemappingColorGrading_CheckSmallAdaptiveRt_m2829927813 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::OnGUI()
extern "C"  void TonemappingColorGrading_OnGUI_m1246045164 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void TonemappingColorGrading_OnRenderImage_m1814281772 (TonemappingColorGrading_t4129559527 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.TonemappingColorGrading::BakeLUT()
extern "C"  Texture2D_t3884108195 * TonemappingColorGrading_BakeLUT_m584092773 (TonemappingColorGrading_t4129559527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
