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

// UICamera/VoidDelegate
struct VoidDelegate_t3135042255;
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

// System.Void UICamera/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VoidDelegate__ctor_m1447333670 (VoidDelegate_t3135042255 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/VoidDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void VoidDelegate_Invoke_m3612085880 (VoidDelegate_t3135042255 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/VoidDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VoidDelegate_BeginInvoke_m1748807547 (VoidDelegate_t3135042255 * __this, GameObject_t3674682005 * ___go0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VoidDelegate_EndInvoke_m1910080566 (VoidDelegate_t3135042255 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
