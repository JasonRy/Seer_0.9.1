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

// WMG_Series/PointSpriteUpdatedHandler
struct PointSpriteUpdatedHandler_t3429824154;
// System.Object
struct Il2CppObject;
// WMG_Series
struct WMG_Series_t2715102821;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Series/PointSpriteUpdatedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PointSpriteUpdatedHandler__ctor_m3455474241 (PointSpriteUpdatedHandler_t3429824154 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Series/PointSpriteUpdatedHandler::Invoke(WMG_Series,UnityEngine.GameObject,System.Int32)
extern "C"  void PointSpriteUpdatedHandler_Invoke_m3469212847 (PointSpriteUpdatedHandler_t3429824154 * __this, WMG_Series_t2715102821 * ___series0, GameObject_t3674682005 * ___point1, int32_t ___pointIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Series/PointSpriteUpdatedHandler::BeginInvoke(WMG_Series,UnityEngine.GameObject,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PointSpriteUpdatedHandler_BeginInvoke_m3682763650 (PointSpriteUpdatedHandler_t3429824154 * __this, WMG_Series_t2715102821 * ___series0, GameObject_t3674682005 * ___point1, int32_t ___pointIndex2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Series/PointSpriteUpdatedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PointSpriteUpdatedHandler_EndInvoke_m2487948497 (PointSpriteUpdatedHandler_t3429824154 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
