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

// UnityStandardAssets.CinematicEffects.FXAA
struct FXAA_t3127672684;
// UnityEngine.Shader
struct Shader_t3191267369;
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

// System.Void UnityStandardAssets.CinematicEffects.FXAA::.ctor()
extern "C"  void FXAA__ctor_m2307796725 (FXAA_t3127672684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::.cctor()
extern "C"  void FXAA__cctor_m2340125528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.FXAA::get_shader()
extern "C"  Shader_t3191267369 * FXAA_get_shader_m2910633300 (FXAA_t3127672684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.FXAA::get_material()
extern "C"  Material_t3870600107 * FXAA_get_material_m1764689368 (FXAA_t3127672684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.FXAA::get_validSourceFormat()
extern "C"  bool FXAA_get_validSourceFormat_m1920163572 (FXAA_t3127672684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::set_validSourceFormat(System.Boolean)
extern "C"  void FXAA_set_validSourceFormat_m1168285147 (FXAA_t3127672684 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnEnable(UnityStandardAssets.CinematicEffects.AntiAliasing)
extern "C"  void FXAA_OnEnable_m44974109 (FXAA_t3127672684 * __this, AntiAliasing_t3899778094 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnDisable()
extern "C"  void FXAA_OnDisable_m3058368732 (FXAA_t3127672684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnPreCull(UnityEngine.Camera)
extern "C"  void FXAA_OnPreCull_m809127373 (FXAA_t3127672684 * __this, Camera_t2727095145 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnPostRender(UnityEngine.Camera)
extern "C"  void FXAA_OnPostRender_m487871912 (FXAA_t3127672684 * __this, Camera_t2727095145 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnRenderImage(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void FXAA_OnRenderImage_m1573311417 (FXAA_t3127672684 * __this, Camera_t2727095145 * ___camera0, RenderTexture_t1963041563 * ___source1, RenderTexture_t1963041563 * ___destination2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
