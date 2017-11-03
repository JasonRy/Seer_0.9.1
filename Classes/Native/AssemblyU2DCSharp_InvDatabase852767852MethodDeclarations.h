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

// InvDatabase
struct InvDatabase_t852767852;
// InvDatabase[]
struct InvDatabaseU5BU5D_t3324850277;
// InvBaseItem
struct InvBaseItem_t1636452469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_InvBaseItem1636452469.h"

// System.Void InvDatabase::.ctor()
extern "C"  void InvDatabase__ctor_m147685503 (InvDatabase_t852767852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::.cctor()
extern "C"  void InvDatabase__cctor_m4096154382 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase[] InvDatabase::get_list()
extern "C"  InvDatabaseU5BU5D_t3324850277* InvDatabase_get_list_m1583387015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnEnable()
extern "C"  void InvDatabase_OnEnable_m3723887271 (InvDatabase_t852767852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnDisable()
extern "C"  void InvDatabase_OnDisable_m4212292966 (InvDatabase_t852767852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::GetItem(System.Int32)
extern "C"  InvBaseItem_t1636452469 * InvDatabase_GetItem_m340865653 (InvDatabase_t852767852 * __this, int32_t ___id160, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase InvDatabase::GetDatabase(System.Int32)
extern "C"  InvDatabase_t852767852 * InvDatabase_GetDatabase_m2035689222 (Il2CppObject * __this /* static, unused */, int32_t ___dbID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByID(System.Int32)
extern "C"  InvBaseItem_t1636452469 * InvDatabase_FindByID_m363273219 (Il2CppObject * __this /* static, unused */, int32_t ___id320, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByName(System.String)
extern "C"  InvBaseItem_t1636452469 * InvDatabase_FindByName_m519611520 (Il2CppObject * __this /* static, unused */, String_t* ___exact0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvDatabase::FindItemID(InvBaseItem)
extern "C"  int32_t InvDatabase_FindItemID_m3871128319 (Il2CppObject * __this /* static, unused */, InvBaseItem_t1636452469 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
