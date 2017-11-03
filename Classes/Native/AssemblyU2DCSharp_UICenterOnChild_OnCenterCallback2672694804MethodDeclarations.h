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

// UICenterOnChild/OnCenterCallback
struct OnCenterCallback_t2672694804;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICenterOnChild/OnCenterCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCenterCallback__ctor_m2637723835 (OnCenterCallback_t2672694804 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::Invoke(UnityEngine.GameObject)
extern "C"  void OnCenterCallback_Invoke_m4202039949 (OnCenterCallback_t2672694804 * __this, GameObject_t3674682005 * ___centeredObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICenterOnChild/OnCenterCallback::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnCenterCallback_BeginInvoke_m2529681176 (OnCenterCallback_t2672694804 * __this, GameObject_t3674682005 * ___centeredObject0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnCenterCallback_EndInvoke_m2500034635 (OnCenterCallback_t2672694804 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
