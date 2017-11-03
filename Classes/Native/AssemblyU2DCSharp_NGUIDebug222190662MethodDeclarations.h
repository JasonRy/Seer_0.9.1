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

// NGUIDebug
struct NGUIDebug_t222190662;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

// System.Void NGUIDebug::.ctor()
extern "C"  void NGUIDebug__ctor_m2790860773 (NGUIDebug_t222190662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::.cctor()
extern "C"  void NGUIDebug__cctor_m135241832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIDebug::get_debugRaycast()
extern "C"  bool NGUIDebug_get_debugRaycast_m3798147210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::set_debugRaycast(System.Boolean)
extern "C"  void NGUIDebug_set_debugRaycast_m1937551913 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::CreateInstance()
extern "C"  void NGUIDebug_CreateInstance_m3088225456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::LogString(System.String)
extern "C"  void NGUIDebug_LogString_m1921989322 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Log(System.Object[])
extern "C"  void NGUIDebug_Log_m1667335435 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___objs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Log(System.String)
extern "C"  void NGUIDebug_Log_m1763979931 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Clear()
extern "C"  void NGUIDebug_Clear_m196994064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::DrawBounds(UnityEngine.Bounds)
extern "C"  void NGUIDebug_DrawBounds_m1382479404 (Il2CppObject * __this /* static, unused */, Bounds_t2711641849  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::OnGUI()
extern "C"  void NGUIDebug_OnGUI_m2286259423 (NGUIDebug_t222190662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
