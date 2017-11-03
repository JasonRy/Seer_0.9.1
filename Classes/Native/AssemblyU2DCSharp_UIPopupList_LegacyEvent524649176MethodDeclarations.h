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

// UIPopupList/LegacyEvent
struct LegacyEvent_t524649176;
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

// System.Void UIPopupList/LegacyEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void LegacyEvent__ctor_m611608751 (LegacyEvent_t524649176 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::Invoke(System.String)
extern "C"  void LegacyEvent_Invoke_m121469913 (LegacyEvent_t524649176 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIPopupList/LegacyEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LegacyEvent_BeginInvoke_m1872166886 (LegacyEvent_t524649176 * __this, String_t* ___val0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::EndInvoke(System.IAsyncResult)
extern "C"  void LegacyEvent_EndInvoke_m486378047 (LegacyEvent_t524649176 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
