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

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1322387783;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t1450131809;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1654378665.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock1322387783.h"
#include "UnityEngine_UnityEngine_Renderer3076687687.h"
#include "UnityEngine_UnityEngine_Rendering_RenderTargetIden1322160672.h"
#include "UnityEngine_UnityEngine_CubemapFace2005084858.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_FilterMode1625068031.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite2502600968.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
extern "C"  void CommandBuffer__ctor_m3952366864 (CommandBuffer_t1654378665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Finalize()
extern "C"  void CommandBuffer_Finalize_m2830299474 (CommandBuffer_t1654378665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Dispose()
extern "C"  void CommandBuffer_Dispose_m1371749709 (CommandBuffer_t1654378665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Dispose(System.Boolean)
extern "C"  void CommandBuffer_Dispose_m3527026692 (CommandBuffer_t1654378665 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::InitBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C"  void CommandBuffer_InitBuffer_m2111485692 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1654378665 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
extern "C"  void CommandBuffer_ReleaseBuffer_m3519305365 (CommandBuffer_t1654378665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
extern "C"  void CommandBuffer_set_name_m1306618278 (CommandBuffer_t1654378665 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
extern "C"  void CommandBuffer_Clear_m1358500155 (CommandBuffer_t1654378665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32)
extern "C"  void CommandBuffer_DrawMesh_m888937363 (CommandBuffer_t1654378665 * __this, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, Material_t3870600107 * ___material2, int32_t ___submeshIndex3, int32_t ___shaderPass4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material)
extern "C"  void CommandBuffer_DrawMesh_m1003495411 (CommandBuffer_t1654378665 * __this, Mesh_t4241756145 * ___mesh0, Matrix4x4_t1651859333  ___matrix1, Material_t3870600107 * ___material2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_DrawMesh(UnityEngine.Rendering.CommandBuffer,UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
extern "C"  void CommandBuffer_INTERNAL_CALL_DrawMesh_m4104335336 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1654378665 * ___self0, Mesh_t4241756145 * ___mesh1, Matrix4x4_t1651859333 * ___matrix2, Material_t3870600107 * ___material3, int32_t ___submeshIndex4, int32_t ___shaderPass5, MaterialPropertyBlock_t1322387783 * ___properties6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
extern "C"  void CommandBuffer_DrawRenderer_m435256007 (CommandBuffer_t1654378665 * __this, Renderer_t3076687687 * ___renderer0, Material_t3870600107 * ___material1, int32_t ___submeshIndex2, int32_t ___shaderPass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_DrawRenderer_m2038414352 (CommandBuffer_t1654378665 * __this, Renderer_t3076687687 * ___renderer0, Material_t3870600107 * ___material1, int32_t ___submeshIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_SetRenderTarget_m2907205839 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifier_t1322160672  ___color0, RenderTargetIdentifier_t1322160672  ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_SetRenderTarget_m1553157617 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifierU5BU5D_t1450131809* ___colors0, RenderTargetIdentifier_t1322160672  ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget_ColDepth(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void CommandBuffer_SetRenderTarget_ColDepth_m212131256 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifier_t1322160672 * ___color0, RenderTargetIdentifier_t1322160672 * ___depth1, int32_t ___mipLevel2, int32_t ___cubemapFace3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget_Multiple(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&)
extern "C"  void CommandBuffer_SetRenderTarget_Multiple_m1652043806 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifierU5BU5D_t1450131809* ___color0, RenderTargetIdentifier_t1322160672 * ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_Blit_m700141319 (CommandBuffer_t1654378665 * __this, Texture_t2526458961 * ___source0, RenderTargetIdentifier_t1322160672  ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_Blit_Texture_m4010143079 (CommandBuffer_t1654378665 * __this, Texture_t2526458961 * ___source0, RenderTargetIdentifier_t1322160672 * ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_Blit_m4253865245 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifier_t1322160672  ___source0, RenderTargetIdentifier_t1322160672  ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
extern "C"  void CommandBuffer_Blit_m954942315 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifier_t1322160672  ___source0, RenderTargetIdentifier_t1322160672  ___dest1, Material_t3870600107 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_Blit_m1066401612 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifier_t1322160672  ___source0, RenderTargetIdentifier_t1322160672  ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit_Identifier(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_Blit_Identifier_m590374578 (CommandBuffer_t1654378665 * __this, RenderTargetIdentifier_t1322160672 * ___source0, RenderTargetIdentifier_t1322160672 * ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C"  void CommandBuffer_GetTemporaryRT_m2105308626 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, int32_t ___readWrite6, int32_t ___antiAliasing7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
extern "C"  void CommandBuffer_GetTemporaryRT_m3013782309 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, int32_t ___readWrite6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat)
extern "C"  void CommandBuffer_GetTemporaryRT_m9093894 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
extern "C"  void CommandBuffer_ReleaseTemporaryRT_m1966207249 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void CommandBuffer_ClearRenderTarget_m869796452 (CommandBuffer_t1654378665 * __this, bool ___clearDepth0, bool ___clearColor1, Color_t4194546905  ___backgroundColor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_ClearRenderTarget(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void CommandBuffer_INTERNAL_CALL_ClearRenderTarget_m595213780 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1654378665 * ___self0, bool ___clearDepth1, bool ___clearColor2, Color_t4194546905 * ___backgroundColor3, float ___depth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.String,System.Single)
extern "C"  void CommandBuffer_SetGlobalFloat_m4250582044 (CommandBuffer_t1654378665 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
extern "C"  void CommandBuffer_SetGlobalFloat_m4293465633 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C"  void CommandBuffer_SetGlobalVector_m3909321278 (CommandBuffer_t1654378665 * __this, String_t* ___name0, Vector4_t4282066567  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.Int32,UnityEngine.Vector4)
extern "C"  void CommandBuffer_SetGlobalVector_m3380264121 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, Vector4_t4282066567  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_SetGlobalVector(UnityEngine.Rendering.CommandBuffer,System.Int32,UnityEngine.Vector4&)
extern "C"  void CommandBuffer_INTERNAL_CALL_SetGlobalVector_m2379666316 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1654378665 * ___self0, int32_t ___nameID1, Vector4_t4282066567 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.String,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_SetGlobalTexture_m406970117 (CommandBuffer_t1654378665 * __this, String_t* ___name0, RenderTargetIdentifier_t1322160672  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_SetGlobalTexture_m796631810 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, RenderTargetIdentifier_t1322160672  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture_Impl(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&)
extern "C"  void CommandBuffer_SetGlobalTexture_Impl_m614513655 (CommandBuffer_t1654378665 * __this, int32_t ___nameID0, RenderTargetIdentifier_t1322160672 * ___rt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
