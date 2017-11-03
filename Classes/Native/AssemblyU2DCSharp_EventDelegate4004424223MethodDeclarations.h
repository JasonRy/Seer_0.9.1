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

// EventDelegate
struct EventDelegate_t4004424223;
// EventDelegate/Callback
struct Callback_t1094463061;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t667441552;
// System.String
struct String_t;
// EventDelegate/Parameter[]
struct ParameterU5BU5D_t206664164;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1077642479;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EventDelegate_Callback1094463061.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_EventDelegate4004424223.h"

// System.Void EventDelegate::.ctor()
extern "C"  void EventDelegate__ctor_m4124027436 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(EventDelegate/Callback)
extern "C"  void EventDelegate__ctor_m3576861239 (EventDelegate_t4004424223 * __this, Callback_t1094463061 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(UnityEngine.MonoBehaviour,System.String)
extern "C"  void EventDelegate__ctor_m2088604063 (EventDelegate_t4004424223 * __this, MonoBehaviour_t667441552 * ___target0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.cctor()
extern "C"  void EventDelegate__cctor_m2808702721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour EventDelegate::get_target()
extern "C"  MonoBehaviour_t667441552 * EventDelegate_get_target_m2810767074 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_target(UnityEngine.MonoBehaviour)
extern "C"  void EventDelegate_set_target_m1859480905 (EventDelegate_t4004424223 * __this, MonoBehaviour_t667441552 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::get_methodName()
extern "C"  String_t* EventDelegate_get_methodName_m3404252298 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_methodName(System.String)
extern "C"  void EventDelegate_set_methodName_m209940257 (EventDelegate_t4004424223 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate/Parameter[] EventDelegate::get_parameters()
extern "C"  ParameterU5BU5D_t206664164* EventDelegate_get_parameters_m929749107 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isValid()
extern "C"  bool EventDelegate_get_isValid_m2331147303 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isEnabled()
extern "C"  bool EventDelegate_get_isEnabled_m3034503084 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::GetMethodName(EventDelegate/Callback)
extern "C"  String_t* EventDelegate_GetMethodName_m1170951034 (Il2CppObject * __this /* static, unused */, Callback_t1094463061 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(EventDelegate/Callback)
extern "C"  bool EventDelegate_IsValid_m102844731 (Il2CppObject * __this /* static, unused */, Callback_t1094463061 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Equals(System.Object)
extern "C"  bool EventDelegate_Equals_m670649297 (EventDelegate_t4004424223 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EventDelegate::GetHashCode()
extern "C"  int32_t EventDelegate_GetHashCode_m1013505769 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(EventDelegate/Callback)
extern "C"  void EventDelegate_Set_m4033556855 (EventDelegate_t4004424223 * __this, Callback_t1094463061 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(UnityEngine.MonoBehaviour,System.String)
extern "C"  void EventDelegate_Set_m4163852895 (EventDelegate_t4004424223 * __this, MonoBehaviour_t667441552 * ___target0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Cache()
extern "C"  void EventDelegate_Cache_m1213589068 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Execute()
extern "C"  bool EventDelegate_Execute_m213950963 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Clear()
extern "C"  void EventDelegate_Clear_m1530160727 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::ToString()
extern "C"  String_t* EventDelegate_ToString_m1851471041 (EventDelegate_t4004424223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Execute(System.Collections.Generic.List`1<EventDelegate>)
extern "C"  void EventDelegate_Execute_m895247138 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(System.Collections.Generic.List`1<EventDelegate>)
extern "C"  bool EventDelegate_IsValid_m979192339 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C"  EventDelegate_t4004424223 * EventDelegate_Set_m3964967374 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, Callback_t1094463061 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C"  void EventDelegate_Set_m2854322620 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, EventDelegate_t4004424223 * ___del1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C"  EventDelegate_t4004424223 * EventDelegate_Add_m1811262575 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, Callback_t1094463061 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback,System.Boolean)
extern "C"  EventDelegate_t4004424223 * EventDelegate_Add_m1711037230 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, Callback_t1094463061 * ___callback1, bool ___oneShot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C"  void EventDelegate_Add_m4032808443 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, EventDelegate_t4004424223 * ___ev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate,System.Boolean)
extern "C"  void EventDelegate_Add_m3670177826 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, EventDelegate_t4004424223 * ___ev1, bool ___oneShot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C"  bool EventDelegate_Remove_m188644518 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, Callback_t1094463061 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C"  bool EventDelegate_Remove_m2048219512 (Il2CppObject * __this /* static, unused */, List_1_t1077642479 * ___list0, EventDelegate_t4004424223 * ___ev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
