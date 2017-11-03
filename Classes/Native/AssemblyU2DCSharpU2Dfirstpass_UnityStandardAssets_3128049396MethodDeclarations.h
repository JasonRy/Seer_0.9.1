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

// UnityStandardAssets.CinematicEffects.SMAA
struct SMAA_t3128049396;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Material
struct Material_t3870600107;
// UnityStandardAssets.CinematicEffects.AntiAliasing
struct AntiAliasing_t3899778094;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3899778094.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"

// System.Void UnityStandardAssets.CinematicEffects.SMAA::.ctor()
extern "C"  void SMAA__ctor_m1368615021 (SMAA_t3128049396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.SMAA::get_shader()
extern "C"  Shader_t3191267369 * SMAA_get_shader_m832089820 (SMAA_t3128049396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::get_areaTexture()
extern "C"  Texture2D_t3884108195 * SMAA_get_areaTexture_m3150237453 (SMAA_t3128049396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::get_searchTexture()
extern "C"  Texture2D_t3884108195 * SMAA_get_searchTexture_m3377025234 (SMAA_t3128049396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.SMAA::get_material()
extern "C"  Material_t3870600107 * SMAA_get_material_m1444197728 (SMAA_t3128049396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnEnable(UnityStandardAssets.CinematicEffects.AntiAliasing)
extern "C"  void SMAA_OnEnable_m2268867989 (SMAA_t3128049396 * __this, AntiAliasing_t3899778094 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnDisable()
extern "C"  void SMAA_OnDisable_m497466964 (SMAA_t3128049396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnPreCull(UnityEngine.Camera)
extern "C"  void SMAA_OnPreCull_m3370032453 (SMAA_t3128049396 * __this, Camera_t2727095145 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnPostRender(UnityEngine.Camera)
extern "C"  void SMAA_OnPostRender_m907031344 (SMAA_t3128049396 * __this, Camera_t2727095145 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnRenderImage(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SMAA_OnRenderImage_m110517041 (SMAA_t3128049396 * __this, Camera_t2727095145 * ___camera0, RenderTexture_t1963041563 * ___source1, RenderTexture_t1963041563 * ___destination2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.SMAA::TempRT(System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  RenderTexture_t1963041563 * SMAA_TempRT_m1966501 (SMAA_t3128049396 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
