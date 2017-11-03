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

// UnityStandardAssets.CinematicEffects.DepthOfField
struct DepthOfField_t534842426;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t37359565;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::.ctor()
extern "C"  void DepthOfField__ctor_m3178640871 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.DepthOfField::get_filmicDepthOfFieldShader()
extern "C"  Shader_t3191267369 * DepthOfField_get_filmicDepthOfFieldShader_m2485832608 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.DepthOfField::get_medianFilterShader()
extern "C"  Shader_t3191267369 * DepthOfField_get_medianFilterShader_m33739748 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.DepthOfField::get_textureBokehShader()
extern "C"  Shader_t3191267369 * DepthOfField_get_textureBokehShader_m1161339208 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.DepthOfField::get_filmicDepthOfFieldMaterial()
extern "C"  Material_t3870600107 * DepthOfField_get_filmicDepthOfFieldMaterial_m3307881124 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.DepthOfField::get_medianFilterMaterial()
extern "C"  Material_t3870600107 * DepthOfField_get_medianFilterMaterial_m1231520616 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.DepthOfField::get_textureBokehMaterial()
extern "C"  Material_t3870600107 * DepthOfField_get_textureBokehMaterial_m2522843084 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ComputeBuffer UnityStandardAssets.CinematicEffects.DepthOfField::get_computeBufferDrawArgs()
extern "C"  ComputeBuffer_t37359565 * DepthOfField_get_computeBufferDrawArgs_m225585287 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ComputeBuffer UnityStandardAssets.CinematicEffects.DepthOfField::get_computeBufferPoints()
extern "C"  ComputeBuffer_t37359565 * DepthOfField_get_computeBufferPoints_m967561705 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::OnEnable()
extern "C"  void DepthOfField_OnEnable_m1522824255 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::OnDisable()
extern "C"  void DepthOfField_OnDisable_m403848910 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField_OnRenderImage_m2185636375 (DepthOfField_t534842426 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::DoDepthOfField(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField_DoDepthOfField_m2649367674 (DepthOfField_t534842426 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::DoHexagonalBlur(UnityEngine.RenderTexture,UnityEngine.RenderTexture&,UnityEngine.RenderTexture&,System.Single)
extern "C"  void DepthOfField_DoHexagonalBlur_m1412631549 (DepthOfField_t534842426 * __this, RenderTexture_t1963041563 * ___blurredFgCoc0, RenderTexture_t1963041563 ** ___src1, RenderTexture_t1963041563 ** ___dst2, float ___maxRadius3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::DoOctogonalBlur(UnityEngine.RenderTexture,UnityEngine.RenderTexture&,UnityEngine.RenderTexture&,System.Single)
extern "C"  void DepthOfField_DoOctogonalBlur_m3019034022 (DepthOfField_t534842426 * __this, RenderTexture_t1963041563 * ___blurredFgCoc0, RenderTexture_t1963041563 ** ___src1, RenderTexture_t1963041563 ** ___dst2, float ___maxRadius3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::DoCircularBlur(UnityEngine.RenderTexture,UnityEngine.RenderTexture&,UnityEngine.RenderTexture&,System.Single)
extern "C"  void DepthOfField_DoCircularBlur_m1053305595 (DepthOfField_t534842426 * __this, RenderTexture_t1963041563 * ___blurredFgCoc0, RenderTexture_t1963041563 ** ___src1, RenderTexture_t1963041563 ** ___dst2, float ___maxRadius3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::ComputeCocParameters(UnityEngine.Vector4&,UnityEngine.Vector4&)
extern "C"  void DepthOfField_ComputeCocParameters_m3467521567 (DepthOfField_t534842426 * __this, Vector4_t4282066567 * ___blurParams0, Vector4_t4282066567 * ___blurCoe1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::ReleaseComputeResources()
extern "C"  void DepthOfField_ReleaseComputeResources_m1743430298 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::ComputeBlurDirections(System.Boolean)
extern "C"  void DepthOfField_ComputeBlurDirections_m1259405422 (DepthOfField_t534842426 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.DepthOfField::get_shouldPerformBokeh()
extern "C"  bool DepthOfField_get_shouldPerformBokeh_m2019759645 (DepthOfField_t534842426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::Rotate2D(UnityEngine.Vector4&,System.Single,System.Single)
extern "C"  void DepthOfField_Rotate2D_m2311512072 (Il2CppObject * __this /* static, unused */, Vector4_t4282066567 * ___direction0, float ___cosinus1, float ___sinus2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::SwapRenderTexture(UnityEngine.RenderTexture&,UnityEngine.RenderTexture&)
extern "C"  void DepthOfField_SwapRenderTexture_m537522191 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 ** ___src0, RenderTexture_t1963041563 ** ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.DepthOfField::GetDirectionalBlurPassesFromRadius(UnityEngine.RenderTexture,System.Single,System.Int32&,System.Int32&)
extern "C"  void DepthOfField_GetDirectionalBlurPassesFromRadius_m2876353408 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___blurredFgCoc0, float ___maxRadius1, int32_t* ___blurPass2, int32_t* ___blurAndMergePass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
