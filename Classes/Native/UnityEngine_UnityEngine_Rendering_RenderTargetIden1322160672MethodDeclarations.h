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

// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t1322160672;
struct RenderTargetIdentifier_t1322160672_marshaled_pinvoke;
struct RenderTargetIdentifier_t1322160672_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rendering_RenderTargetIden1322160672.h"
#include "UnityEngine_UnityEngine_Rendering_BuiltinRenderTex3340116652.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C"  void RenderTargetIdentifier__ctor_m1715878886 (RenderTargetIdentifier_t1322160672 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(System.Int32)
extern "C"  void RenderTargetIdentifier__ctor_m3173871596 (RenderTargetIdentifier_t1322160672 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.RenderTexture)
extern "C"  void RenderTargetIdentifier__ctor_m453305449 (RenderTargetIdentifier_t1322160672 * __this, RenderTexture_t1963041563 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C"  RenderTargetIdentifier_t1322160672  RenderTargetIdentifier_op_Implicit_m3433597441 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
extern "C"  RenderTargetIdentifier_t1322160672  RenderTargetIdentifier_op_Implicit_m3337925831 (Il2CppObject * __this /* static, unused */, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RenderTargetIdentifier_t1322160672;
struct RenderTargetIdentifier_t1322160672_marshaled_pinvoke;

extern "C" void RenderTargetIdentifier_t1322160672_marshal_pinvoke(const RenderTargetIdentifier_t1322160672& unmarshaled, RenderTargetIdentifier_t1322160672_marshaled_pinvoke& marshaled);
extern "C" void RenderTargetIdentifier_t1322160672_marshal_pinvoke_back(const RenderTargetIdentifier_t1322160672_marshaled_pinvoke& marshaled, RenderTargetIdentifier_t1322160672& unmarshaled);
extern "C" void RenderTargetIdentifier_t1322160672_marshal_pinvoke_cleanup(RenderTargetIdentifier_t1322160672_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RenderTargetIdentifier_t1322160672;
struct RenderTargetIdentifier_t1322160672_marshaled_com;

extern "C" void RenderTargetIdentifier_t1322160672_marshal_com(const RenderTargetIdentifier_t1322160672& unmarshaled, RenderTargetIdentifier_t1322160672_marshaled_com& marshaled);
extern "C" void RenderTargetIdentifier_t1322160672_marshal_com_back(const RenderTargetIdentifier_t1322160672_marshaled_com& marshaled, RenderTargetIdentifier_t1322160672& unmarshaled);
extern "C" void RenderTargetIdentifier_t1322160672_marshal_com_cleanup(RenderTargetIdentifier_t1322160672_marshaled_com& marshaled);
