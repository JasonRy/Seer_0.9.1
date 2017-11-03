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

// UnityStandardAssets.CinematicEffects.AntiAliasing
struct AntiAliasing_t3899778094;
// UnityStandardAssets.CinematicEffects.IAntiAliasing
struct IAntiAliasing_t2409046231;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::.ctor()
extern "C"  void AntiAliasing__ctor_m451350643 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.CinematicEffects.AntiAliasing::get_method()
extern "C"  int32_t AntiAliasing_get_method_m4104193285 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::set_method(System.Int32)
extern "C"  void AntiAliasing_set_method_m2788712704 (AntiAliasing_t3899778094 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.IAntiAliasing UnityStandardAssets.CinematicEffects.AntiAliasing::get_current()
extern "C"  Il2CppObject * AntiAliasing_get_current_m2714535513 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.CinematicEffects.AntiAliasing::get_cameraComponent()
extern "C"  Camera_t2727095145 * AntiAliasing_get_cameraComponent_m2819510569 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnEnable()
extern "C"  void AntiAliasing_OnEnable_m715980339 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnDisable()
extern "C"  void AntiAliasing_OnDisable_m1161491290 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnPreCull()
extern "C"  void AntiAliasing_OnPreCull_m3365794791 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnPostRender()
extern "C"  void AntiAliasing_OnPostRender_m1683025606 (AntiAliasing_t3899778094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void AntiAliasing_OnRenderImage_m2216183819 (AntiAliasing_t3899778094 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
