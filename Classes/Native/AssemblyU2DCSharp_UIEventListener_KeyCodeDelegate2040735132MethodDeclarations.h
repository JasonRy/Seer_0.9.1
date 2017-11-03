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

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t2040735132;
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
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyCodeDelegate__ctor_m7954803 (KeyCodeDelegate_t2040735132 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C"  void KeyCodeDelegate_Invoke_m2550997564 (KeyCodeDelegate_t2040735132 * __this, GameObject_t3674682005 * ___go0, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyCodeDelegate_BeginInvoke_m1563712113 (KeyCodeDelegate_t2040735132 * __this, GameObject_t3674682005 * ___go0, int32_t ___key1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void KeyCodeDelegate_EndInvoke_m1724220675 (KeyCodeDelegate_t2040735132 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
