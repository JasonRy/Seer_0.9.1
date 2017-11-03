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

// UnityStandardAssets.CinematicEffects.AmbientOcclusion
struct AmbientOcclusion_t2543191279;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1849267291.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3129208798.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3503888053.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::.ctor()
extern "C"  void AmbientOcclusion__ctor_m61587154 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_isAmbientOnlySupported()
extern "C"  bool AmbientOcclusion_get_isAmbientOnlySupported_m2238204147 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_isGBufferAvailable()
extern "C"  bool AmbientOcclusion_get_isGBufferAvailable_m3302008651 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_intensity()
extern "C"  float AmbientOcclusion_get_intensity_m2642686438 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_radius()
extern "C"  float AmbientOcclusion_get_radius_m2038596833 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.AmbientOcclusion/SampleCount UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_sampleCount()
extern "C"  int32_t AmbientOcclusion_get_sampleCount_m3805628356 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_sampleCountValue()
extern "C"  int32_t AmbientOcclusion_get_sampleCountValue_m2959939409 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.AmbientOcclusion/OcclusionSource UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_occlusionSource()
extern "C"  int32_t AmbientOcclusion_get_occlusionSource_m3610916964 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_downsampling()
extern "C"  bool AmbientOcclusion_get_downsampling_m1493417160 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_ambientOnly()
extern "C"  bool AmbientOcclusion_get_ambientOnly_m1593772839 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_aoTextureFormat()
extern "C"  int32_t AmbientOcclusion_get_aoTextureFormat_m1239092441 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_aoShader()
extern "C"  Shader_t3191267369 * AmbientOcclusion_get_aoShader_m2704264997 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_aoMaterial()
extern "C"  Material_t3870600107 * AmbientOcclusion_get_aoMaterial_m1460800489 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.CommandBuffer UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_aoCommands()
extern "C"  CommandBuffer_t1654378665 * AmbientOcclusion_get_aoCommands_m2934364368 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_targetCamera()
extern "C"  Camera_t2727095145 * AmbientOcclusion_get_targetCamera_m843437960 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CinematicEffects.AmbientOcclusion/PropertyObserver UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_propertyObserver()
extern "C"  PropertyObserver_t3503888053  AmbientOcclusion_get_propertyObserver_m3706712022 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::set_propertyObserver(UnityStandardAssets.CinematicEffects.AmbientOcclusion/PropertyObserver)
extern "C"  void AmbientOcclusion_set_propertyObserver_m2616238405 (AmbientOcclusion_t2543191279 * __this, PropertyObserver_t3503888053  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.CinematicEffects.AmbientOcclusion::get_quadMesh()
extern "C"  Mesh_t4241756145 * AmbientOcclusion_get_quadMesh_m3747077262 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::BuildAOCommands()
extern "C"  void AmbientOcclusion_BuildAOCommands_m2791416308 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::ExecuteAOPass(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void AmbientOcclusion_ExecuteAOPass_m1772898302 (AmbientOcclusion_t2543191279 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::UpdateMaterialProperties()
extern "C"  void AmbientOcclusion_UpdateMaterialProperties_m1756216149 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::OnEnable()
extern "C"  void AmbientOcclusion_OnEnable_m2863447924 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::OnDisable()
extern "C"  void AmbientOcclusion_OnDisable_m3308476985 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::Update()
extern "C"  void AmbientOcclusion_Update_m3636063867 (AmbientOcclusion_t2543191279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.AmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void AmbientOcclusion_OnRenderImage_m544690764 (AmbientOcclusion_t2543191279 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
