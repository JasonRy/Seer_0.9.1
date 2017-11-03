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

// I18N.Common.Manager
struct Manager_t3623805651;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void I18N.Common.Manager::.ctor()
extern "C"  void Manager__ctor_m2839245601 (Manager_t3623805651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.Manager::.cctor()
extern "C"  void Manager__cctor_m1635171500 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// I18N.Common.Manager I18N.Common.Manager::get_PrimaryManager()
extern "C"  Manager_t3623805651 * Manager_get_PrimaryManager_m45805982 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.Manager::Normalize(System.String)
extern "C"  String_t* Manager_Normalize_m3441178675 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding I18N.Common.Manager::GetEncoding(System.Int32)
extern "C"  Encoding_t2012439129 * Manager_GetEncoding_m3063997953 (Manager_t3623805651 * __this, int32_t ___codePage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding I18N.Common.Manager::GetEncoding(System.String)
extern "C"  Encoding_t2012439129 * Manager_GetEncoding_m951354450 (Manager_t3623805651 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo I18N.Common.Manager::GetCulture(System.Int32,System.Boolean)
extern "C"  CultureInfo_t1065375142 * Manager_GetCulture_m2802492990 (Manager_t3623805651 * __this, int32_t ___culture0, bool ___useUserOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo I18N.Common.Manager::GetCulture(System.String,System.Boolean)
extern "C"  CultureInfo_t1065375142 * Manager_GetCulture_m3287130697 (Manager_t3623805651 * __this, String_t* ___name0, bool ___useUserOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object I18N.Common.Manager::Instantiate(System.String)
extern "C"  Il2CppObject * Manager_Instantiate_m2633325092 (Manager_t3623805651 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.Manager::LoadClassList()
extern "C"  void Manager_LoadClassList_m543837743 (Manager_t3623805651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.Manager::LoadInternalClasses()
extern "C"  void Manager_LoadInternalClasses_m3544570850 (Manager_t3623805651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
