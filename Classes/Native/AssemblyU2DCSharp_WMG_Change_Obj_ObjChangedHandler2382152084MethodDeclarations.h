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

// WMG_Change_Obj/ObjChangedHandler
struct ObjChangedHandler_t2382152084;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Change_Obj/ObjChangedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjChangedHandler__ctor_m991388731 (ObjChangedHandler_t2382152084 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Change_Obj/ObjChangedHandler::Invoke()
extern "C"  void ObjChangedHandler_Invoke_m763061333 (ObjChangedHandler_t2382152084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Change_Obj/ObjChangedHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ObjChangedHandler_BeginInvoke_m3010321166 (ObjChangedHandler_t2382152084 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Change_Obj/ObjChangedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ObjChangedHandler_EndInvoke_m1378102219 (ObjChangedHandler_t2382152084 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
