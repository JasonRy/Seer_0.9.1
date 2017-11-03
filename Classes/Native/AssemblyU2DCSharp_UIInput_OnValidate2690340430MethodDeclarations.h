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

// UIInput/OnValidate
struct OnValidate_t2690340430;
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

// System.Void UIInput/OnValidate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValidate__ctor_m3323288053 (OnValidate_t2690340430 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::Invoke(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar OnValidate_Invoke_m1628410489 (OnValidate_t2690340430 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIInput/OnValidate::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnValidate_BeginInvoke_m759250206 (OnValidate_t2690340430 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppChar OnValidate_EndInvoke_m3668322691 (OnValidate_t2690340430 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
