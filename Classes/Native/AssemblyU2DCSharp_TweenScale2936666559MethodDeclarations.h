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

// TweenScale
struct TweenScale_t2936666559;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void TweenScale::.ctor()
extern "C"  void TweenScale__ctor_m2025137596 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenScale::get_cachedTransform()
extern "C"  Transform_t1659122786 * TweenScale_get_cachedTransform_m171762653 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_value()
extern "C"  Vector3_t4282066566  TweenScale_get_value_m3891808520 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_value(UnityEngine.Vector3)
extern "C"  void TweenScale_set_value_m179603531 (TweenScale_t2936666559 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_scale()
extern "C"  Vector3_t4282066566  TweenScale_get_scale_m1276128929 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_scale(UnityEngine.Vector3)
extern "C"  void TweenScale_set_scale_m2646188562 (TweenScale_t2936666559 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenScale_OnUpdate_m3828940930 (TweenScale_t2936666559 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenScale TweenScale::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C"  TweenScale_t2936666559 * TweenScale_Begin_m31635797 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, Vector3_t4282066566  ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetStartToCurrentValue()
extern "C"  void TweenScale_SetStartToCurrentValue_m448013915 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetEndToCurrentValue()
extern "C"  void TweenScale_SetEndToCurrentValue_m300553748 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToStart()
extern "C"  void TweenScale_SetCurrentValueToStart_m3988684117 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToEnd()
extern "C"  void TweenScale_SetCurrentValueToEnd_m3307240462 (TweenScale_t2936666559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
