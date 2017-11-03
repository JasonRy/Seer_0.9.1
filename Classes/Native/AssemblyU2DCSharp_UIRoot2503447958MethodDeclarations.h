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

// UIRoot
struct UIRoot_t2503447958;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIRoot_Constraint2067133462.h"
#include "AssemblyU2DCSharp_UIRoot_Scaling174157806.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UIRoot::.ctor()
extern "C"  void UIRoot__ctor_m2261759941 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::.cctor()
extern "C"  void UIRoot__cctor_m912985224 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot/Constraint UIRoot::get_constraint()
extern "C"  int32_t UIRoot_get_constraint_m4040598306 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot/Scaling UIRoot::get_activeScaling()
extern "C"  int32_t UIRoot_get_activeScaling_m1518165068 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIRoot::get_activeHeight()
extern "C"  int32_t UIRoot_get_activeHeight_m3474867427 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::get_pixelSizeAdjustment()
extern "C"  float UIRoot_get_pixelSizeAdjustment_m2382285954 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(UnityEngine.GameObject)
extern "C"  float UIRoot_GetPixelSizeAdjustment_m3251151521 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(System.Int32)
extern "C"  float UIRoot_GetPixelSizeAdjustment_m2161448890 (UIRoot_t2503447958 * __this, int32_t ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Awake()
extern "C"  void UIRoot_Awake_m2499365160 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnEnable()
extern "C"  void UIRoot_OnEnable_m2715041185 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnDisable()
extern "C"  void UIRoot_OnDisable_m3002835372 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Start()
extern "C"  void UIRoot_Start_m1208897733 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Update()
extern "C"  void UIRoot_Update_m3121943528 (UIRoot_t2503447958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::UpdateScale(System.Boolean)
extern "C"  void UIRoot_UpdateScale_m1965984667 (UIRoot_t2503447958 * __this, bool ___updateAnchors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String)
extern "C"  void UIRoot_Broadcast_m2431666462 (Il2CppObject * __this /* static, unused */, String_t* ___funcName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String,System.Object)
extern "C"  void UIRoot_Broadcast_m1672038252 (Il2CppObject * __this /* static, unused */, String_t* ___funcName0, Il2CppObject * ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
