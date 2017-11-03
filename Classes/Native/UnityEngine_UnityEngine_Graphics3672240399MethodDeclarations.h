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

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1322387783;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t37359565;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock1322387783.h"
#include "UnityEngine_UnityEngine_Rendering_ShadowCastingMod2598729988.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Internal_DrawMeshMatrixArg1378504422.h"
#include "UnityEngine_UnityEngine_MeshTopology2348044928.h"
#include "UnityEngine_UnityEngine_ComputeBuffer37359565.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArgumen4047764288.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_RenderBuffer3529837690.h"
#include "UnityEngine_UnityEngine_CubemapFace2005084858.h"

// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_DrawMesh_m548652626 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, Material_t3870600107 * ___material2, int32_t ___layer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Graphics_DrawMesh_m1708004108 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, Material_t3870600107 * ___material2, int32_t ___layer3, Camera_t2727095145 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t1322387783 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,UnityEngine.Transform,System.Boolean)
extern "C"  void Graphics_DrawMesh_m3442932121 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, Material_t3870600107 * ___material2, int32_t ___layer3, Camera_t2727095145 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t1322387783 * ___properties6, int32_t ___castShadows7, bool ___receiveShadows8, Transform_t1659122786 * ___probeAnchor9, bool ___useLightProbes10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshMatrix(UnityEngine.Internal_DrawMeshMatrixArguments&,UnityEngine.MaterialPropertyBlock,UnityEngine.Material,UnityEngine.Mesh,UnityEngine.Camera)
extern "C"  void Graphics_Internal_DrawMeshMatrix_m3555155501 (Il2CppObject * __this /* static, unused */, Internal_DrawMeshMatrixArguments_t1378504422 * ___arguments0, MaterialPropertyBlock_t1322387783 * ___properties1, Material_t3870600107 * ___material2, Mesh_t4241756145 * ___mesh3, Camera_t2727095145 * ___camera4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m2524242293 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m1490231000 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m3606840651 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333 * ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void Graphics_DrawProceduralIndirect_m2816657261 (Il2CppObject * __this /* static, unused */, int32_t ___topology0, ComputeBuffer_t37359565 * ___bufferWithArgs1, int32_t ___argsOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void Graphics_DrawTexture_m584866180 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, Texture_t2526458961 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C"  void Graphics_DrawTexture_m3741603172 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, Texture_t2526458961 * ___texture1, Material_t3870600107 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C"  void Graphics_DrawTexture_m2319488164 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, Texture_t2526458961 * ___texture1, int32_t ___leftBorder2, int32_t ___rightBorder3, int32_t ___topBorder4, int32_t ___bottomBorder5, Material_t3870600107 * ___mat6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C"  void Graphics_DrawTexture_m3441133633 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, Texture_t2526458961 * ___texture1, Rect_t4241904616  ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, Material_t3870600107 * ___mat7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C"  void Graphics_DrawTexture_m2938050632 (Il2CppObject * __this /* static, unused */, InternalDrawTextureArguments_t4047764288 * ___arguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m3408836917 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m2695454291 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m336256356 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m2813555808 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, bool ___setRT4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_BlitMultiTap_m4211810031 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, Vector2U5BU5D_t4024180168* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_Internal_BlitMultiTap_m1682166383 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, Vector2U5BU5D_t4024180168* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C"  void Graphics_Internal_SetNullRT_m2775863211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_Internal_SetRTSimple_m3769646199 (Il2CppObject * __this /* static, unused */, RenderBuffer_t3529837690 * ___color0, RenderBuffer_t3529837690 * ___depth1, int32_t ___mip2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_SetRandomWriteTarget_m2786492810 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t37359565 * ___uav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer,System.Boolean)
extern "C"  void Graphics_SetRandomWriteTarget_m3487124659 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t37359565 * ___uav1, bool ___preserveCounterValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C"  void Graphics_ClearRandomWriteTargets_m223572883 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer,System.Boolean)
extern "C"  void Graphics_Internal_SetRandomWriteTargetBuffer_m4011099603 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t37359565 * ___uav1, bool ___preserveCounterValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m3786045502 (Il2CppObject * __this /* static, unused */, RenderBuffer_t3529837690  ___colorBuffer0, RenderBuffer_t3529837690  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m527058684 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___rt0, int32_t ___mipLevel1, int32_t ___face2, int32_t ___depthSlice3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C"  void Graphics_SetRenderTarget_m3051614107 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
