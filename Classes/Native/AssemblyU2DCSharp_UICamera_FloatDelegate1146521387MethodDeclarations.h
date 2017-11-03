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

// UICamera/FloatDelegate
struct FloatDelegate_t1146521387;
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

// System.Void UICamera/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FloatDelegate__ctor_m3506662482 (FloatDelegate_t1146521387 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/FloatDelegate::Invoke(UnityEngine.GameObject,System.Single)
extern "C"  void FloatDelegate_Invoke_m3914153353 (FloatDelegate_t1146521387 * __this, GameObject_t3674682005 * ___go0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/FloatDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FloatDelegate_BeginInvoke_m3348999274 (FloatDelegate_t1146521387 * __this, GameObject_t3674682005 * ___go0, float ___delta1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FloatDelegate_EndInvoke_m3532511074 (FloatDelegate_t1146521387 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
