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

// UIEventListener/VectorDelegate
struct VectorDelegate_t3512109949;
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
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UIEventListener/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VectorDelegate__ctor_m3847473060 (VectorDelegate_t3512109949 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void VectorDelegate_Invoke_m4222878826 (VectorDelegate_t3512109949 * __this, GameObject_t3674682005 * ___go0, Vector2_t4282066565  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/VectorDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VectorDelegate_BeginInvoke_m1138345741 (VectorDelegate_t3512109949 * __this, GameObject_t3674682005 * ___go0, Vector2_t4282066565  ___delta1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VectorDelegate_EndInvoke_m3521424308 (VectorDelegate_t3512109949 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
