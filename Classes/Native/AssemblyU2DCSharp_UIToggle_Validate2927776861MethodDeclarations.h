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

// UIToggle/Validate
struct Validate_t2927776861;
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

// System.Void UIToggle/Validate::.ctor(System.Object,System.IntPtr)
extern "C"  void Validate__ctor_m3672608180 (Validate_t2927776861 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIToggle/Validate::Invoke(System.Boolean)
extern "C"  bool Validate_Invoke_m2875745233 (Validate_t2927776861 * __this, bool ___choice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIToggle/Validate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Validate_BeginInvoke_m1410260394 (Validate_t2927776861 * __this, bool ___choice0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIToggle/Validate::EndInvoke(System.IAsyncResult)
extern "C"  bool Validate_EndInvoke_m4229339536 (Validate_t2927776861 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
