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

// WMG_Events/WMG_Click_H
struct WMG_Click_H_t316241947;
// System.Object
struct Il2CppObject;
// WMG_Series
struct WMG_Series_t2715102821;
// WMG_Node
struct WMG_Node_t3041788272;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Events/WMG_Click_H::.ctor(System.Object,System.IntPtr)
extern "C"  void WMG_Click_H__ctor_m3391399234 (WMG_Click_H_t316241947 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Events/WMG_Click_H::Invoke(WMG_Series,WMG_Node,UnityEngine.EventSystems.PointerEventData)
extern "C"  void WMG_Click_H_Invoke_m2935131223 (WMG_Click_H_t316241947 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, PointerEventData_t1848751023 * ___pointerEventData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Events/WMG_Click_H::BeginInvoke(WMG_Series,WMG_Node,UnityEngine.EventSystems.PointerEventData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WMG_Click_H_BeginInvoke_m3753086554 (WMG_Click_H_t316241947 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, PointerEventData_t1848751023 * ___pointerEventData2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Events/WMG_Click_H::EndInvoke(System.IAsyncResult)
extern "C"  void WMG_Click_H_EndInvoke_m1402013778 (WMG_Click_H_t316241947 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
