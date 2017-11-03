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

// UIDragObject
struct UIDragObject_t512213831;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UIDragObject::.ctor()
extern "C"  void UIDragObject__ctor_m2192174900 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDragObject::get_dragMovement()
extern "C"  Vector3_t4282066566  UIDragObject_get_dragMovement_m4140805046 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::set_dragMovement(UnityEngine.Vector3)
extern "C"  void UIDragObject_set_dragMovement_m3916724777 (UIDragObject_t512213831 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnEnable()
extern "C"  void UIDragObject_OnEnable_m4176288722 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDisable()
extern "C"  void UIDragObject_OnDisable_m1056868763 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::FindPanel()
extern "C"  void UIDragObject_FindPanel_m1317358813 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::UpdateBounds()
extern "C"  void UIDragObject_UpdateBounds_m893643246 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnPress(System.Boolean)
extern "C"  void UIDragObject_OnPress_m1853465517 (UIDragObject_t512213831 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDrag(UnityEngine.Vector2)
extern "C"  void UIDragObject_OnDrag_m2658505751 (UIDragObject_t512213831 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::Move(UnityEngine.Vector3)
extern "C"  void UIDragObject_Move_m2882952984 (UIDragObject_t512213831 * __this, Vector3_t4282066566  ___worldDelta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::LateUpdate()
extern "C"  void UIDragObject_LateUpdate_m1724169119 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelMovement()
extern "C"  void UIDragObject_CancelMovement_m1006939097 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelSpring()
extern "C"  void UIDragObject_CancelSpring_m2747479031 (UIDragObject_t512213831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnScroll(System.Single)
extern "C"  void UIDragObject_OnScroll_m2867358863 (UIDragObject_t512213831 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
