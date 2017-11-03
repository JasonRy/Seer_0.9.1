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

// WMG_Axis_Graph/GraphBackgroundChangedHandler
struct GraphBackgroundChangedHandler_t1280817089;
// System.Object
struct Il2CppObject;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph1856481278.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Axis_Graph/GraphBackgroundChangedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void GraphBackgroundChangedHandler__ctor_m4063914984 (GraphBackgroundChangedHandler_t1280817089 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph/GraphBackgroundChangedHandler::Invoke(WMG_Axis_Graph)
extern "C"  void GraphBackgroundChangedHandler_Invoke_m282550852 (GraphBackgroundChangedHandler_t1280817089 * __this, WMG_Axis_Graph_t1856481278 * ___aGraph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Axis_Graph/GraphBackgroundChangedHandler::BeginInvoke(WMG_Axis_Graph,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GraphBackgroundChangedHandler_BeginInvoke_m1805247611 (GraphBackgroundChangedHandler_t1280817089 * __this, WMG_Axis_Graph_t1856481278 * ___aGraph0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Axis_Graph/GraphBackgroundChangedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void GraphBackgroundChangedHandler_EndInvoke_m3677360632 (GraphBackgroundChangedHandler_t1280817089 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
