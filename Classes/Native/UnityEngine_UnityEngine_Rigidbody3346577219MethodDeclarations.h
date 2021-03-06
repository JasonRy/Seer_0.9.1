﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints1602554285.h"
#include "UnityEngine_UnityEngine_ForceMode2134283300.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t4282066566  Rigidbody_get_velocity_m2696244068 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m799562119 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m1063590501 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m484592601 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_angularVelocity_m3510265645 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m1952192267 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C"  float Rigidbody_get_drag_m3710595753 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C"  void Rigidbody_set_drag_m4061586082 (Rigidbody_t3346577219 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C"  float Rigidbody_get_angularDrag_m2925737411 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C"  void Rigidbody_set_angularDrag_m2909317064 (Rigidbody_t3346577219 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C"  void Rigidbody_set_useGravity_m2620827635 (Rigidbody_t3346577219 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C"  bool Rigidbody_get_isKinematic_m3963857442 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m294703295 (Rigidbody_t3346577219 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern "C"  void Rigidbody_set_freezeRotation_m3989473889 (Rigidbody_t3346577219 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C"  void Rigidbody_set_constraints_m3626026339 (Rigidbody_t3346577219 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m557267180 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3682301239 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3651654387 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m3012148388 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___torque0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddTorque_m4194065160 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___torque1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForceAtPosition_m1266619363 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, Vector3_t4282066566  ___position1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m1493622644 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, Vector3_t4282066566 * ___position2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t4282066566  Rigidbody_get_position_m1751901360 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_position_m2995840187 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m428733873 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_position_m4144703269 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C"  Quaternion_t1553702882  Rigidbody_get_rotation_m3846953477 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_get_rotation_m1932073294 (Rigidbody_t3346577219 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C"  void Rigidbody_MovePosition_m1515094375 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_CALL_MovePosition_m2416276686 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m38358738 (Rigidbody_t3346577219 * __this, Quaternion_t1553702882  ___rot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_CALL_MoveRotation_m4110814929 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Quaternion_t1553702882 * ___rot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C"  void Rigidbody_Sleep_m4049131361 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C"  void Rigidbody_INTERNAL_CALL_Sleep_m1292822714 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C"  void Rigidbody_set_maxAngularVelocity_m3320880411 (Rigidbody_t3346577219 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
