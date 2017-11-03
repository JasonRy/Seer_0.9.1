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

// TweenFill
struct TweenFill_t2172559982;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void TweenFill::.ctor()
extern "C"  void TweenFill__ctor_m981552829 (TweenFill_t2172559982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFill::Cache()
extern "C"  void TweenFill_Cache_m2366081757 (TweenFill_t2172559982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFill::get_value()
extern "C"  float TweenFill_get_value_m295814159 (TweenFill_t2172559982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFill::set_value(System.Single)
extern "C"  void TweenFill_set_value_m4085051580 (TweenFill_t2172559982 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFill::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenFill_OnUpdate_m727185249 (TweenFill_t2172559982 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFill TweenFill::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  TweenFill_t2172559982 * TweenFill_Begin_m3427940587 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, float ___fill2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFill::SetStartToCurrentValue()
extern "C"  void TweenFill_SetStartToCurrentValue_m3425763194 (TweenFill_t2172559982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFill::SetEndToCurrentValue()
extern "C"  void TweenFill_SetEndToCurrentValue_m1018735347 (TweenFill_t2172559982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
