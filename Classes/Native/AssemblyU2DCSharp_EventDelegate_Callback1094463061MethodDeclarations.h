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

// EventDelegate/Callback
struct Callback_t1094463061;
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

// System.Void EventDelegate/Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m3018475132 (Callback_t1094463061 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::Invoke()
extern "C"  void Callback_Invoke_m3974108630 (Callback_t1094463061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EventDelegate/Callback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m1093023085 (Callback_t1094463061 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m1551652492 (Callback_t1094463061 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
