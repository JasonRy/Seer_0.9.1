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

// UIWidget/HitCheck
struct HitCheck_t3889696652;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UIWidget/HitCheck::.ctor(System.Object,System.IntPtr)
extern "C"  void HitCheck__ctor_m17538403 (HitCheck_t3889696652 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::Invoke(UnityEngine.Vector3)
extern "C"  bool HitCheck_Invoke_m3382841584 (HitCheck_t3889696652 * __this, Vector3_t4282066566  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWidget/HitCheck::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HitCheck_BeginInvoke_m1200520187 (HitCheck_t3889696652 * __this, Vector3_t4282066566  ___worldPos0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::EndInvoke(System.IAsyncResult)
extern "C"  bool HitCheck_EndInvoke_m1381750975 (HitCheck_t3889696652 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
