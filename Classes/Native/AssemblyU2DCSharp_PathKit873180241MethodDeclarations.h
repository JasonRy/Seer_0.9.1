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

// PathKit
struct PathKit_t873180241;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void PathKit::.ctor()
extern "C"  void PathKit__ctor_m2109460026 (PathKit_t873180241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PathKit::.cctor()
extern "C"  void PathKit__cctor_m486655155 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PathKit::GetStreamingAssetsPath(System.String,System.String)
extern "C"  String_t* PathKit_GetStreamingAssetsPath_m1782130947 (Il2CppObject * __this /* static, unused */, String_t* ___p_filename0, String_t* ___suffix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PathKit::GetOSDataPath(System.String)
extern "C"  String_t* PathKit_GetOSDataPath_m235904382 (Il2CppObject * __this /* static, unused */, String_t* ___p_filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PathKit::GetURLPath(System.String,System.Boolean,System.Boolean)
extern "C"  String_t* PathKit_GetURLPath_m3348295549 (Il2CppObject * __this /* static, unused */, String_t* ___p_filename0, bool ___needPreFix1, bool ___needFormat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PathKit::getFileName(System.String)
extern "C"  String_t* PathKit_getFileName_m2586000778 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PathKit::getFileDir(System.String)
extern "C"  String_t* PathKit_getFileDir_m1362947360 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PathKit::CreateDirIfNotExists(System.String)
extern "C"  void PathKit_CreateDirIfNotExists_m1690656151 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
