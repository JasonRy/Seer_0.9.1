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

// PropertyReference
struct PropertyReference_t614957270;
// UnityEngine.Component
struct Component_t3501516275;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void PropertyReference::.ctor()
extern "C"  void PropertyReference__ctor_m2902506837 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::.ctor(UnityEngine.Component,System.String)
extern "C"  void PropertyReference__ctor_m581778835 (PropertyReference_t614957270 * __this, Component_t3501516275 * ___target0, String_t* ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::.cctor()
extern "C"  void PropertyReference__cctor_m3596269816 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component PropertyReference::get_target()
extern "C"  Component_t3501516275 * PropertyReference_get_target_m2349361212 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::set_target(UnityEngine.Component)
extern "C"  void PropertyReference_set_target_m2118183087 (PropertyReference_t614957270 * __this, Component_t3501516275 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::get_name()
extern "C"  String_t* PropertyReference_get_name_m2325241792 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::set_name(System.String)
extern "C"  void PropertyReference_set_name_m2001119211 (PropertyReference_t614957270 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::get_isValid()
extern "C"  bool PropertyReference_get_isValid_m570774160 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::get_isEnabled()
extern "C"  bool PropertyReference_get_isEnabled_m3533027285 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PropertyReference::GetPropertyType()
extern "C"  Type_t * PropertyReference_GetPropertyType_m2873080306 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Equals(System.Object)
extern "C"  bool PropertyReference_Equals_m2447878458 (PropertyReference_t614957270 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PropertyReference::GetHashCode()
extern "C"  int32_t PropertyReference_GetHashCode_m3400267858 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Set(UnityEngine.Component,System.String)
extern "C"  void PropertyReference_Set_m272042003 (PropertyReference_t614957270 * __this, Component_t3501516275 * ___target0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Clear()
extern "C"  void PropertyReference_Clear_m308640128 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Reset()
extern "C"  void PropertyReference_Reset_m548939778 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::ToString()
extern "C"  String_t* PropertyReference_ToString_m770834040 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::ToString(UnityEngine.Component,System.String)
extern "C"  String_t* PropertyReference_ToString_m2786136464 (Il2CppObject * __this /* static, unused */, Component_t3501516275 * ___comp0, String_t* ___property1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PropertyReference::Get()
extern "C"  Il2CppObject * PropertyReference_Get_m2474718846 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Set(System.Object)
extern "C"  bool PropertyReference_Set_m3702960811 (PropertyReference_t614957270 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Cache()
extern "C"  bool PropertyReference_Cache_m176893737 (PropertyReference_t614957270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object&)
extern "C"  bool PropertyReference_Convert_m3881156306 (PropertyReference_t614957270 * __this, Il2CppObject ** ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Type,System.Type)
extern "C"  bool PropertyReference_Convert_m211488850 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object,System.Type)
extern "C"  bool PropertyReference_Convert_m3313913965 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object&,System.Type,System.Type)
extern "C"  bool PropertyReference_Convert_m2654327480 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___value0, Type_t * ___from1, Type_t * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
