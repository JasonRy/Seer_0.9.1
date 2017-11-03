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

// HighlightingSystem.Highlighter
struct Highlighter_t3349921983;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_t149905943;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1654378665.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightingSystem_H2711727618.h"

// System.Void HighlightingSystem.Highlighter::.ctor()
extern "C"  void Highlighter__ctor_m2645860319 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::.cctor()
extern "C"  void Highlighter__cctor_m4230162350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ReinitMaterials()
extern "C"  void Highlighter_ReinitMaterials_m4293000550 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OnParams(UnityEngine.Color)
extern "C"  void Highlighter_OnParams_m2476484828 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::On()
extern "C"  void Highlighter_On_m419461284 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::On(UnityEngine.Color)
extern "C"  void Highlighter_On_m597814786 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingParams(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void Highlighter_FlashingParams_m1283651694 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color10, Color_t4194546905  ___color21, float ___freq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn()
extern "C"  void Highlighter_FlashingOn_m2707964342 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color)
extern "C"  void Highlighter_FlashingOn_m2265949584 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color10, Color_t4194546905  ___color21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void Highlighter_FlashingOn_m1966158965 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color10, Color_t4194546905  ___color21, float ___freq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(System.Single)
extern "C"  void Highlighter_FlashingOn_m2396633013 (Highlighter_t3349921983 * __this, float ___freq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOff()
extern "C"  void Highlighter_FlashingOff_m2342337242 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingSwitch()
extern "C"  void Highlighter_FlashingSwitch_m976989899 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantParams(UnityEngine.Color)
extern "C"  void Highlighter_ConstantParams_m2228911543 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOn(System.Single)
extern "C"  void Highlighter_ConstantOn_m274174019 (Highlighter_t3349921983 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOn(UnityEngine.Color,System.Single)
extern "C"  void Highlighter_ConstantOn_m3612898083 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOff(System.Single)
extern "C"  void Highlighter_ConstantOff_m61796931 (Highlighter_t3349921983 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantSwitch(System.Single)
extern "C"  void Highlighter_ConstantSwitch_m2173949518 (Highlighter_t3349921983 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOnImmediate()
extern "C"  void Highlighter_ConstantOnImmediate_m2425604811 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOnImmediate(UnityEngine.Color)
extern "C"  void Highlighter_ConstantOnImmediate_m286674619 (Highlighter_t3349921983 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOffImmediate()
extern "C"  void Highlighter_ConstantOffImmediate_m183250123 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantSwitchImmediate()
extern "C"  void Highlighter_ConstantSwitchImmediate_m3479359062 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Off()
extern "C"  void Highlighter_Off_m118219180 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Die()
extern "C"  void Highlighter_Die_m108148861 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThrough(System.Boolean)
extern "C"  void Highlighter_SeeThrough_m914905646 (Highlighter_t3349921983 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThroughOn()
extern "C"  void Highlighter_SeeThroughOn_m2645852598 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThroughOff()
extern "C"  void Highlighter_SeeThroughOff_m416873178 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThroughSwitch()
extern "C"  void Highlighter_SeeThroughSwitch_m3060264651 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OccluderOn()
extern "C"  void Highlighter_OccluderOn_m3028297341 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OccluderOff()
extern "C"  void Highlighter_OccluderOff_m3682725619 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OccluderSwitch()
extern "C"  void Highlighter_OccluderSwitch_m2176178194 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::get_once()
extern "C"  bool Highlighter_get_once_m2084468043 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::set_once(System.Boolean)
extern "C"  void Highlighter_set_once_m363398234 (Highlighter_t3349921983 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightingSystem.Highlighter::get_opaqueShader()
extern "C"  Shader_t3191267369 * Highlighter_get_opaqueShader_m2639261725 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightingSystem.Highlighter::get_transparentShader()
extern "C"  Shader_t3191267369 * Highlighter_get_transparentShader_m4082014114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightingSystem.Highlighter::get_opaqueMaterial()
extern "C"  Material_t3870600107 * Highlighter_get_opaqueMaterial_m215677597 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Awake()
extern "C"  void Highlighter_Awake_m2883465538 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OnEnable()
extern "C"  void Highlighter_OnEnable_m3656525639 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OnDisable()
extern "C"  void Highlighter_OnDisable_m2124082374 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Update()
extern "C"  void Highlighter_Update_m2144153358 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ClearRenderers()
extern "C"  void Highlighter_ClearRenderers_m4157096968 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::UpdateRenderers()
extern "C"  void Highlighter_UpdateRenderers_m1842845060 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::GrabRenderers(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Renderer>)
extern "C"  void Highlighter_GrabRenderers_m1083383202 (Highlighter_t3349921983 * __this, Transform_t1659122786 * ___t0, List_1_t149905943 * ___renderers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::UpdateShaderParams(System.Boolean,System.Boolean)
extern "C"  void Highlighter_UpdateShaderParams_m2765799693 (Highlighter_t3349921983 * __this, bool ___zt0, bool ___sr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::UpdateColors()
extern "C"  void Highlighter_UpdateColors_m97924830 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::UpdateTransition()
extern "C"  void Highlighter_UpdateTransition_m979272451 (Highlighter_t3349921983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FillBufferInternal(UnityEngine.Rendering.CommandBuffer,HighlightingSystem.Highlighter/Mode,System.Boolean)
extern "C"  void Highlighter_FillBufferInternal_m3516107448 (Highlighter_t3349921983 * __this, CommandBuffer_t1654378665 * ___buffer0, int32_t ___m1, bool ___depthAvailable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FillBuffer(UnityEngine.Rendering.CommandBuffer,System.Boolean)
extern "C"  void Highlighter_FillBuffer_m3784329221 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1654378665 * ___buffer0, bool ___depthAvailable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HighlightingSystem.Highlighter::GetZTest(System.Boolean)
extern "C"  int32_t Highlighter_GetZTest_m788739752 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HighlightingSystem.Highlighter::GetStencilRef(System.Boolean)
extern "C"  int32_t Highlighter_GetStencilRef_m3930021035 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetZWrite(System.Int32)
extern "C"  void Highlighter_SetZWrite_m3389278997 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetOffsetFactor(System.Single)
extern "C"  void Highlighter_SetOffsetFactor_m778509578 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetOffsetUnits(System.Single)
extern "C"  void Highlighter_SetOffsetUnits_m2165887276 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
