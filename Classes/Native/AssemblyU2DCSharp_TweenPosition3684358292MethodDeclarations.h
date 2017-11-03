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

// TweenPosition
struct TweenPosition_t3684358292;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void TweenPosition::.ctor()
extern "C"  void TweenPosition__ctor_m2856841047 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenPosition::get_cachedTransform()
extern "C"  Transform_t1659122786 * TweenPosition_get_cachedTransform_m2758563892 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_position()
extern "C"  Vector3_t4282066566  TweenPosition_get_position_m3806280485 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_position(UnityEngine.Vector3)
extern "C"  void TweenPosition_set_position_m3523577638 (TweenPosition_t3684358292 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_value()
extern "C"  Vector3_t4282066566  TweenPosition_get_value_m3961650391 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_value(UnityEngine.Vector3)
extern "C"  void TweenPosition_set_value_m50405456 (TweenPosition_t3684358292 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::Awake()
extern "C"  void TweenPosition_Awake_m3094446266 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenPosition_OnUpdate_m1472447367 (TweenPosition_t3684358292 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C"  TweenPosition_t3684358292 * TweenPosition_Begin_m1871153869 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, Vector3_t4282066566  ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3,System.Boolean)
extern "C"  TweenPosition_t3684358292 * TweenPosition_Begin_m4338960 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, Vector3_t4282066566  ___pos2, bool ___worldSpace3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetStartToCurrentValue()
extern "C"  void TweenPosition_SetStartToCurrentValue_m2386585120 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetEndToCurrentValue()
extern "C"  void TweenPosition_SetEndToCurrentValue_m1688044313 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToStart()
extern "C"  void TweenPosition_SetCurrentValueToStart_m1632288026 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToEnd()
extern "C"  void TweenPosition_SetCurrentValueToEnd_m399763731 (TweenPosition_t3684358292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
