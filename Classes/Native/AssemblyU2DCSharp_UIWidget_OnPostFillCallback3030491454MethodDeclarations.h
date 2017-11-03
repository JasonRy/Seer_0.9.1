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

// UIWidget/OnPostFillCallback
struct OnPostFillCallback_t3030491454;
// System.Object
struct Il2CppObject;
// UIWidget
struct UIWidget_t769069560;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UIWidget/OnPostFillCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPostFillCallback__ctor_m2088632341 (OnPostFillCallback_t3030491454 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::Invoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>)
extern "C"  void OnPostFillCallback_Invoke_m1064019312 (OnPostFillCallback_t3030491454 * __this, UIWidget_t769069560 * ___widget0, int32_t ___bufferOffset1, BetterList_1_t1484067282 * ___verts2, BetterList_1_t1484067281 * ___uvs3, BetterList_1_t1396547621 * ___cols4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWidget/OnPostFillCallback::BeginInvoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPostFillCallback_BeginInvoke_m3883823459 (OnPostFillCallback_t3030491454 * __this, UIWidget_t769069560 * ___widget0, int32_t ___bufferOffset1, BetterList_1_t1484067282 * ___verts2, BetterList_1_t1484067281 * ___uvs3, BetterList_1_t1396547621 * ___cols4, AsyncCallback_t1369114871 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnPostFillCallback_EndInvoke_m2996225189 (OnPostFillCallback_t3030491454 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
