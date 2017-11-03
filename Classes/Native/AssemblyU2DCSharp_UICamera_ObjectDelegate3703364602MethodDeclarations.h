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

// UICamera/ObjectDelegate
struct ObjectDelegate_t3703364602;
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

// System.Void UICamera/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjectDelegate__ctor_m2805815505 (ObjectDelegate_t3703364602 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void ObjectDelegate_Invoke_m2351864443 (ObjectDelegate_t3703364602 * __this, GameObject_t3674682005 * ___go0, GameObject_t3674682005 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ObjectDelegate_BeginInvoke_m1770695168 (ObjectDelegate_t3703364602 * __this, GameObject_t3674682005 * ___go0, GameObject_t3674682005 * ___obj1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ObjectDelegate_EndInvoke_m4118272865 (ObjectDelegate_t3703364602 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
