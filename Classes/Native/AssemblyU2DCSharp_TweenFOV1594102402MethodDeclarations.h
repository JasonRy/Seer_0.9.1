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

// TweenFOV
struct TweenFOV_t1594102402;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void TweenFOV::.ctor()
extern "C"  void TweenFOV__ctor_m2235326041 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenFOV::get_cachedCamera()
extern "C"  Camera_t2727095145 * TweenFOV_get_cachedCamera_m3432593724 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_fov()
extern "C"  float TweenFOV_get_fov_m1392131375 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_fov(System.Single)
extern "C"  void TweenFOV_set_fov_m1382005636 (TweenFOV_t1594102402 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_value()
extern "C"  float TweenFOV_get_value_m3010888851 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_value(System.Single)
extern "C"  void TweenFOV_set_value_m1799851168 (TweenFOV_t1594102402 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenFOV_OnUpdate_m442627141 (TweenFOV_t1594102402 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFOV TweenFOV::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  TweenFOV_t1594102402 * TweenFOV_Begin_m412303879 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, float ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetStartToCurrentValue()
extern "C"  void TweenFOV_SetStartToCurrentValue_m1140562782 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetEndToCurrentValue()
extern "C"  void TweenFOV_SetEndToCurrentValue_m3313561559 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToStart()
extern "C"  void TweenFOV_SetCurrentValueToStart_m386265688 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToEnd()
extern "C"  void TweenFOV_SetCurrentValueToEnd_m2025280977 (TweenFOV_t1594102402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
