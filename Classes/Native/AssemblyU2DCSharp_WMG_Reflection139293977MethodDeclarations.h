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

// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Delegate
struct Delegate_t3310234105;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Boolean WMG_Reflection::IsValueType(System.Type)
extern "C"  bool WMG_Reflection_IsValueType_m2623969292 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo WMG_Reflection::GetProperty(System.Type,System.String)
extern "C"  PropertyInfo_t * WMG_Reflection_GetProperty_m291088704 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo WMG_Reflection::GetMethod(System.Type,System.String)
extern "C"  MethodInfo_t * WMG_Reflection_GetMethod_m3446485416 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Reflection::IsEnum(System.Type)
extern "C"  bool WMG_Reflection_IsEnum_m383939192 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo WMG_Reflection::GetField(System.Type,System.String)
extern "C"  FieldInfo_t * WMG_Reflection_GetField_m2042609184 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate WMG_Reflection::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C"  Delegate_t3310234105 * WMG_Reflection_CreateDelegate_m520831230 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___target1, MethodInfo_t * ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Reflection::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool WMG_Reflection_IsAssignableFrom_m1111926681 (Il2CppObject * __this /* static, unused */, Type_t * ___first0, Type_t * ___second1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
