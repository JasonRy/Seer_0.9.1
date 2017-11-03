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

// UICamera/MoveDelegate
struct MoveDelegate_t1906135052;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICamera/MoveDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void MoveDelegate__ctor_m1406652899 (MoveDelegate_t1906135052 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::Invoke(UnityEngine.Vector2)
extern "C"  void MoveDelegate_Invoke_m415996061 (MoveDelegate_t1906135052 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/MoveDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MoveDelegate_BeginInvoke_m2872910330 (MoveDelegate_t1906135052 * __this, Vector2_t4282066565  ___delta0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void MoveDelegate_EndInvoke_m2219683187 (MoveDelegate_t1906135052 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
