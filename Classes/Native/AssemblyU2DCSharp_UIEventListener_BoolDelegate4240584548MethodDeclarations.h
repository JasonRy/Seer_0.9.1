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

// UIEventListener/BoolDelegate
struct BoolDelegate_t4240584548;
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

// System.Void UIEventListener/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BoolDelegate__ctor_m705420811 (BoolDelegate_t4240584548 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C"  void BoolDelegate_Invoke_m3306907136 (BoolDelegate_t4240584548 * __this, GameObject_t3674682005 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/BoolDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BoolDelegate_BeginInvoke_m3777185695 (BoolDelegate_t4240584548 * __this, GameObject_t3674682005 * ___go0, bool ___state1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BoolDelegate_EndInvoke_m662572443 (BoolDelegate_t4240584548 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
