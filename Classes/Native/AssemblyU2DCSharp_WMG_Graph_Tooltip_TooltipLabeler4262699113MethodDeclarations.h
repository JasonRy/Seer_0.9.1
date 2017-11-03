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

// WMG_Graph_Tooltip/TooltipLabeler
struct TooltipLabeler_t4262699113;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// WMG_Series
struct WMG_Series_t2715102821;
// WMG_Node
struct WMG_Node_t3041788272;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Graph_Tooltip/TooltipLabeler::.ctor(System.Object,System.IntPtr)
extern "C"  void TooltipLabeler__ctor_m3157933200 (TooltipLabeler_t4262699113 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Graph_Tooltip/TooltipLabeler::Invoke(WMG_Series,WMG_Node)
extern "C"  String_t* TooltipLabeler_Invoke_m692665486 (TooltipLabeler_t4262699113 * __this, WMG_Series_t2715102821 * ___series0, WMG_Node_t3041788272 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Graph_Tooltip/TooltipLabeler::BeginInvoke(WMG_Series,WMG_Node,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TooltipLabeler_BeginInvoke_m3624748164 (TooltipLabeler_t4262699113 * __this, WMG_Series_t2715102821 * ___series0, WMG_Node_t3041788272 * ___node1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Graph_Tooltip/TooltipLabeler::EndInvoke(System.IAsyncResult)
extern "C"  String_t* TooltipLabeler_EndInvoke_m2079692995 (TooltipLabeler_t4262699113 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
