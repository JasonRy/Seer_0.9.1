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

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t2759048342;
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

// System.Void UIWrapContent/OnInitializeItem::.ctor(System.Object,System.IntPtr)
extern "C"  void OnInitializeItem__ctor_m953163837 (OnInitializeItem_t2759048342 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::Invoke(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void OnInitializeItem_Invoke_m2616578991 (OnInitializeItem_t2759048342 * __this, GameObject_t3674682005 * ___go0, int32_t ___wrapIndex1, int32_t ___realIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWrapContent/OnInitializeItem::BeginInvoke(UnityEngine.GameObject,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnInitializeItem_BeginInvoke_m3195738938 (OnInitializeItem_t2759048342 * __this, GameObject_t3674682005 * ___go0, int32_t ___wrapIndex1, int32_t ___realIndex2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::EndInvoke(System.IAsyncResult)
extern "C"  void OnInitializeItem_EndInvoke_m2249144525 (OnInitializeItem_t2759048342 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
