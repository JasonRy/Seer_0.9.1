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

// HighlightingSystem.HighlighterRenderer
struct HighlighterRenderer_t63042978;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1654378665.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void HighlightingSystem.HighlighterRenderer::.ctor()
extern "C"  void HighlighterRenderer__ctor_m3689000540 (HighlighterRenderer_t63042978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::.cctor()
extern "C"  void HighlighterRenderer__cctor_m2207770833 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::OnEnable()
extern "C"  void HighlighterRenderer_OnEnable_m1463495594 (HighlighterRenderer_t63042978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::OnDisable()
extern "C"  void HighlighterRenderer_OnDisable_m2859627715 (HighlighterRenderer_t63042978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::OnWillRenderObject()
extern "C"  void HighlighterRenderer_OnWillRenderObject_m1906022158 (HighlighterRenderer_t63042978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HighlightingSystem.HighlighterRenderer::EndOfFrame()
extern "C"  Il2CppObject * HighlighterRenderer_EndOfFrame_m2853912851 (HighlighterRenderer_t63042978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::Initialize(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void HighlighterRenderer_Initialize_m2887512080 (HighlighterRenderer_t63042978 * __this, Material_t3870600107 * ___sharedOpaqueMaterial0, Shader_t3191267369 * ___transparentShader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.HighlighterRenderer::FillBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C"  bool HighlighterRenderer_FillBuffer_m1138502873 (HighlighterRenderer_t63042978 * __this, CommandBuffer_t1654378665 * ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::SetColorForTransparent(UnityEngine.Color)
extern "C"  void HighlighterRenderer_SetColorForTransparent_m2173341684 (HighlighterRenderer_t63042978 * __this, Color_t4194546905  ___clr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::SetZTestForTransparent(System.Int32)
extern "C"  void HighlighterRenderer_SetZTestForTransparent_m951905292 (HighlighterRenderer_t63042978 * __this, int32_t ___zTest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::SetStencilRefForTransparent(System.Int32)
extern "C"  void HighlighterRenderer_SetStencilRefForTransparent_m2262774253 (HighlighterRenderer_t63042978 * __this, int32_t ___stencilRef0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.HighlighterRenderer::SetState(System.Boolean)
extern "C"  void HighlighterRenderer_SetState_m1468661422 (HighlighterRenderer_t63042978 * __this, bool ___alive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
