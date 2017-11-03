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

// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t2651898963;
// System.Object
struct Il2CppObject;
// UnityEngine.Material
struct Material_t3870600107;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UIDrawCall/OnRenderCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnRenderCallback__ctor_m689700010 (OnRenderCallback_t2651898963 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::Invoke(UnityEngine.Material)
extern "C"  void OnRenderCallback_Invoke_m2414121574 (OnRenderCallback_t2651898963 * __this, Material_t3870600107 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIDrawCall/OnRenderCallback::BeginInvoke(UnityEngine.Material,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnRenderCallback_BeginInvoke_m3206922133 (OnRenderCallback_t2651898963 * __this, Material_t3870600107 * ___mat0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnRenderCallback_EndInvoke_m4050408378 (OnRenderCallback_t2651898963 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
