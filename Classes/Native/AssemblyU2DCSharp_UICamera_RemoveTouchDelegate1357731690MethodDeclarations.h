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

// UICamera/RemoveTouchDelegate
struct RemoveTouchDelegate_t1357731690;
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

// System.Void UICamera/RemoveTouchDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoveTouchDelegate__ctor_m3014785809 (RemoveTouchDelegate_t1357731690 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/RemoveTouchDelegate::Invoke(System.Int32)
extern "C"  void RemoveTouchDelegate_Invoke_m3703433084 (RemoveTouchDelegate_t1357731690 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/RemoveTouchDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RemoveTouchDelegate_BeginInvoke_m2970363125 (RemoveTouchDelegate_t1357731690 * __this, int32_t ___id0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/RemoveTouchDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void RemoveTouchDelegate_EndInvoke_m3088555425 (RemoveTouchDelegate_t1357731690 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
