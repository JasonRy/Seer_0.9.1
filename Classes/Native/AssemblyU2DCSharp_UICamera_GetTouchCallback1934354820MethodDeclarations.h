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

// UICamera/GetTouchCallback
struct GetTouchCallback_t1934354820;
// System.Object
struct Il2CppObject;
// UICamera/Touch
struct Touch_t2499143785;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICamera/GetTouchCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTouchCallback__ctor_m261899099 (GetTouchCallback_t1934354820 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/Touch UICamera/GetTouchCallback::Invoke(System.Int32)
extern "C"  Touch_t2499143785 * GetTouchCallback_Invoke_m2244112658 (GetTouchCallback_t1934354820 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/GetTouchCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTouchCallback_BeginInvoke_m1921699383 (GetTouchCallback_t1934354820 * __this, int32_t ___index0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/Touch UICamera/GetTouchCallback::EndInvoke(System.IAsyncResult)
extern "C"  Touch_t2499143785 * GetTouchCallback_EndInvoke_m2378539959 (GetTouchCallback_t1934354820 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
