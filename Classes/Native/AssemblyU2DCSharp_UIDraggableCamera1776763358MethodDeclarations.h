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

// UIDraggableCamera
struct UIDraggableCamera_t1776763358;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UIDraggableCamera::.ctor()
extern "C"  void UIDraggableCamera__ctor_m3744834893 (UIDraggableCamera_t1776763358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
extern "C"  Vector2_t4282066565  UIDraggableCamera_get_currentMomentum_m569370542 (UIDraggableCamera_t1776763358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
extern "C"  void UIDraggableCamera_set_currentMomentum_m4027101691 (UIDraggableCamera_t1776763358 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Start()
extern "C"  void UIDraggableCamera_Start_m2691972685 (UIDraggableCamera_t1776763358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
extern "C"  Vector3_t4282066566  UIDraggableCamera_CalculateConstrainOffset_m3282215873 (UIDraggableCamera_t1776763358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
extern "C"  bool UIDraggableCamera_ConstrainToBounds_m3776751613 (UIDraggableCamera_t1776763358 * __this, bool ___immediate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Press(System.Boolean)
extern "C"  void UIDraggableCamera_Press_m2820171493 (UIDraggableCamera_t1776763358 * __this, bool ___isPressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
extern "C"  void UIDraggableCamera_Drag_m2551184207 (UIDraggableCamera_t1776763358 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Scroll(System.Single)
extern "C"  void UIDraggableCamera_Scroll_m3834064839 (UIDraggableCamera_t1776763358 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Update()
extern "C"  void UIDraggableCamera_Update_m1852626784 (UIDraggableCamera_t1776763358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
