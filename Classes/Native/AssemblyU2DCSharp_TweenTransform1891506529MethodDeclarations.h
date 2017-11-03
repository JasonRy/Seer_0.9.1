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

// TweenTransform
struct TweenTransform_t1891506529;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void TweenTransform::.ctor()
extern "C"  void TweenTransform__ctor_m2801250394 (TweenTransform_t1891506529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenTransform_OnUpdate_m2112660004 (TweenTransform_t1891506529 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
extern "C"  TweenTransform_t1891506529 * TweenTransform_Begin_m549320569 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, Transform_t1659122786 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
extern "C"  TweenTransform_t1891506529 * TweenTransform_Begin_m194782512 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, Transform_t1659122786 * ___from2, Transform_t1659122786 * ___to3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
