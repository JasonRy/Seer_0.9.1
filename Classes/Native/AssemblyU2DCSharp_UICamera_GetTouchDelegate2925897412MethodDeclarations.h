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

// UICamera/GetTouchDelegate
struct GetTouchDelegate_t2925897412;
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

// System.Void UICamera/GetTouchDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTouchDelegate__ctor_m1129341083 (GetTouchDelegate_t2925897412 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera/GetTouchDelegate::Invoke(System.Int32,System.Boolean)
extern "C"  MouseOrTouch_t2057376333 * GetTouchDelegate_Invoke_m3345379037 (GetTouchDelegate_t2925897412 * __this, int32_t ___id0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/GetTouchDelegate::BeginInvoke(System.Int32,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTouchDelegate_BeginInvoke_m2241465008 (GetTouchDelegate_t2925897412 * __this, int32_t ___id0, bool ___createIfMissing1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera/GetTouchDelegate::EndInvoke(System.IAsyncResult)
extern "C"  MouseOrTouch_t2057376333 * GetTouchDelegate_EndInvoke_m35006917 (GetTouchDelegate_t2925897412 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
