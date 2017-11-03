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

// HighlightingSystem.HighlightingBase
struct HighlightingBase_t263525439;
// HighlightingSystem.HighlightingBlitter
struct HighlightingBlitter_t3401068508;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightingSystem_H3401068508.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"

// System.Void HighlightingSystem.HighlightingBase::.ctor()
extern "C"  void HighlightingBase__ctor_m2864176199 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::.cctor()
extern "C"  void HighlightingBase__cctor_m2408020038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.HighlightingBase::get_uvStartsAtTop()
extern "C"  bool HighlightingBase_get_uvStartsAtTop_m2640630568 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.HighlightingBase::get_isSupported()
extern "C"  bool HighlightingBase_get_isSupported_m1420072348 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HighlightingSystem.HighlightingBase::get_downsampleFactor()
extern "C"  int32_t HighlightingBase_get_downsampleFactor_m4078892619 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::set_downsampleFactor(System.Int32)
extern "C"  void HighlightingBase_set_downsampleFactor_m4220347206 (HighlightingBase_t263525439 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HighlightingSystem.HighlightingBase::get_iterations()
extern "C"  int32_t HighlightingBase_get_iterations_m824550086 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::set_iterations(System.Int32)
extern "C"  void HighlightingBase_set_iterations_m212342465 (HighlightingBase_t263525439 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HighlightingSystem.HighlightingBase::get_blurMinSpread()
extern "C"  float HighlightingBase_get_blurMinSpread_m2378513574 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::set_blurMinSpread(System.Single)
extern "C"  void HighlightingBase_set_blurMinSpread_m1741880197 (HighlightingBase_t263525439 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HighlightingSystem.HighlightingBase::get_blurSpread()
extern "C"  float HighlightingBase_get_blurSpread_m804632372 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::set_blurSpread(System.Single)
extern "C"  void HighlightingBase_set_blurSpread_m2760465975 (HighlightingBase_t263525439 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HighlightingSystem.HighlightingBase::get_blurIntensity()
extern "C"  float HighlightingBase_get_blurIntensity_m1597709044 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::set_blurIntensity(System.Single)
extern "C"  void HighlightingBase_set_blurIntensity_m2196327415 (HighlightingBase_t263525439 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HighlightingSystem.HighlightingBlitter HighlightingSystem.HighlightingBase::get_blitter()
extern "C"  HighlightingBlitter_t3401068508 * HighlightingBase_get_blitter_m1526387168 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::set_blitter(HighlightingSystem.HighlightingBlitter)
extern "C"  void HighlightingBase_set_blitter_m2347693255 (HighlightingBase_t263525439 * __this, HighlightingBlitter_t3401068508 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::OnEnable()
extern "C"  void HighlightingBase_OnEnable_m629453279 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::OnDisable()
extern "C"  void HighlightingBase_OnDisable_m2774119726 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::OnPreRender()
extern "C"  void HighlightingBase_OnPreRender_m3075073759 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void HighlightingBase_OnRenderImage_m3484485559 (HighlightingBase_t263525439 * __this, RenderTexture_t1963041563 * ___src0, RenderTexture_t1963041563 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.HighlightingBase::IsHighlightingCamera(UnityEngine.Camera)
extern "C"  bool HighlightingBase_IsHighlightingCamera_m2700509474 (Il2CppObject * __this /* static, unused */, Camera_t2727095145 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::Initialize()
extern "C"  void HighlightingBase_Initialize_m2271612589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::CreateQuad()
extern "C"  void HighlightingBase_CreateQuad_m4150637248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HighlightingSystem.HighlightingBase::GetAA()
extern "C"  int32_t HighlightingBase_GetAA_m4108708561 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.HighlightingBase::CheckSupported(System.Boolean)
extern "C"  bool HighlightingBase_CheckSupported_m2162610494 (HighlightingBase_t263525439 * __this, bool ___verbose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::RebuildCommandBuffer()
extern "C"  void HighlightingBase_RebuildCommandBuffer_m3856318253 (HighlightingBase_t263525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlightingBase::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void HighlightingBase_Blit_m1877329008 (HighlightingBase_t263525439 * __this, RenderTexture_t1963041563 * ___src0, RenderTexture_t1963041563 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
