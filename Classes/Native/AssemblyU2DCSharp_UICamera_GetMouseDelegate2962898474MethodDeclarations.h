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

// UICamera/GetMouseDelegate
struct GetMouseDelegate_t2962898474;
// System.Object
struct Il2CppObject;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2057376333;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICamera/GetMouseDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GetMouseDelegate__ctor_m237223169 (GetMouseDelegate_t2962898474 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera/GetMouseDelegate::Invoke(System.Int32)
extern "C"  MouseOrTouch_t2057376333 * GetMouseDelegate_Invoke_m2851010438 (GetMouseDelegate_t2962898474 * __this, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/GetMouseDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetMouseDelegate_BeginInvoke_m1104012381 (GetMouseDelegate_t2962898474 * __this, int32_t ___button0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera/GetMouseDelegate::EndInvoke(System.IAsyncResult)
extern "C"  MouseOrTouch_t2057376333 * GetMouseDelegate_EndInvoke_m2552473899 (GetMouseDelegate_t2962898474 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
