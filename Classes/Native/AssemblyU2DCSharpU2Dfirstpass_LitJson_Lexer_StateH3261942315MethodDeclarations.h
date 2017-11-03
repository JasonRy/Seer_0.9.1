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

// LitJson.Lexer/StateHandler
struct StateHandler_t3261942315;
// System.Object
struct Il2CppObject;
// LitJson.FsmContext
struct FsmContext_t3936467683;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_FsmContext3936467683.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void StateHandler__ctor_m666662174 (StateHandler_t3261942315 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C"  bool StateHandler_Invoke_m257017814 (StateHandler_t3261942315 * __this, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateHandler_BeginInvoke_m4040550001 (StateHandler_t3261942315 * __this, FsmContext_t3936467683 * ___ctx0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
extern "C"  bool StateHandler_EndInvoke_m2485217482 (StateHandler_t3261942315 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
