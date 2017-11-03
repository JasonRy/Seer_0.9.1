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

// UICamera/GetAxisFunc
struct GetAxisFunc_t783615269;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UICamera/GetAxisFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void GetAxisFunc__ctor_m1542983500 (GetAxisFunc_t783615269 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::Invoke(System.String)
extern "C"  float GetAxisFunc_Invoke_m1850848720 (GetAxisFunc_t783615269 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/GetAxisFunc::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetAxisFunc_BeginInvoke_m1267475617 (GetAxisFunc_t783615269 * __this, String_t* ___name0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::EndInvoke(System.IAsyncResult)
extern "C"  float GetAxisFunc_EndInvoke_m2037749288 (GetAxisFunc_t783615269 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
