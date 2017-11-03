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

// UICamera/GetTouchCountCallback
struct GetTouchCountCallback_t3435560085;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICamera/GetTouchCountCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTouchCountCallback__ctor_m3944418492 (GetTouchCountCallback_t3435560085 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera/GetTouchCountCallback::Invoke()
extern "C"  int32_t GetTouchCountCallback_Invoke_m316123172 (GetTouchCountCallback_t3435560085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/GetTouchCountCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTouchCountCallback_BeginInvoke_m1702091565 (GetTouchCountCallback_t3435560085 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera/GetTouchCountCallback::EndInvoke(System.IAsyncResult)
extern "C"  int32_t GetTouchCountCallback_EndInvoke_m2209815130 (GetTouchCountCallback_t3435560085 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
