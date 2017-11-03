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

// TweenVolume
struct TweenVolume_t939656517;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void TweenVolume::.ctor()
extern "C"  void TweenVolume__ctor_m1147835334 (TweenVolume_t939656517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource TweenVolume::get_audioSource()
extern "C"  AudioSource_t1740077639 * TweenVolume_get_audioSource_m3377296901 (TweenVolume_t939656517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_volume()
extern "C"  float TweenVolume_get_volume_m667901685 (TweenVolume_t939656517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_volume(System.Single)
extern "C"  void TweenVolume_set_volume_m1109053718 (TweenVolume_t939656517 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_value()
extern "C"  float TweenVolume_get_value_m1421842840 (TweenVolume_t939656517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_value(System.Single)
extern "C"  void TweenVolume_set_value_m331824851 (TweenVolume_t939656517 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenVolume_OnUpdate_m4013445432 (TweenVolume_t939656517 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenVolume TweenVolume::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  TweenVolume_t939656517 * TweenVolume_Begin_m1758433021 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, float ___duration1, float ___targetVolume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetStartToCurrentValue()
extern "C"  void TweenVolume_SetStartToCurrentValue_m3967503761 (TweenVolume_t939656517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetEndToCurrentValue()
extern "C"  void TweenVolume_SetEndToCurrentValue_m1117622986 (TweenVolume_t939656517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
