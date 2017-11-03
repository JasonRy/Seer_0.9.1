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

// LitJson.WrapperFactory
struct WrapperFactory_t3264289803;
// System.Object
struct Il2CppObject;
// LitJson.IJsonWrapper
struct IJsonWrapper_t2026182966;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void WrapperFactory__ctor_m3908778585 (WrapperFactory_t3264289803 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C"  Il2CppObject * WrapperFactory_Invoke_m465405735 (WrapperFactory_t3264289803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WrapperFactory_BeginInvoke_m1678916784 (WrapperFactory_t3264289803 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * WrapperFactory_EndInvoke_m3052438813 (WrapperFactory_t3264289803 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
