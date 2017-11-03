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

// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t2745734774;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICamera/GetKeyStateFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void GetKeyStateFunc__ctor_m1578588189 (GetKeyStateFunc_t2745734774 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::Invoke(UnityEngine.KeyCode)
extern "C"  bool GetKeyStateFunc_Invoke_m2912951154 (GetKeyStateFunc_t2745734774 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/GetKeyStateFunc::BeginInvoke(UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetKeyStateFunc_BeginInvoke_m3115175573 (GetKeyStateFunc_t2745734774 * __this, int32_t ___key0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::EndInvoke(System.IAsyncResult)
extern "C"  bool GetKeyStateFunc_EndInvoke_m2845025121 (GetKeyStateFunc_t2745734774 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
