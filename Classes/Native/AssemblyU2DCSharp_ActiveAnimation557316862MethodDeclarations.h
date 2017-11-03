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

// ActiveAnimation
struct ActiveAnimation_t557316862;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t1724966010;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction1859285089.h"
#include "UnityEngine_UnityEngine_Animation1724966010.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition1579250490.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableConditio1452383689.h"
#include "UnityEngine_UnityEngine_Animator2776330603.h"

// System.Void ActiveAnimation::.ctor()
extern "C"  void ActiveAnimation__ctor_m942098989 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ActiveAnimation::get_playbackTime()
extern "C"  float ActiveAnimation_get_playbackTime_m2980075932 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActiveAnimation::get_isPlaying()
extern "C"  bool ActiveAnimation_get_isPlaying_m1988265818 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Finish()
extern "C"  void ActiveAnimation_Finish_m3165870026 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Reset()
extern "C"  void ActiveAnimation_Reset_m2883499226 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Start()
extern "C"  void ActiveAnimation_Start_m4184204077 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Update()
extern "C"  void ActiveAnimation_Update_m867159680 (ActiveAnimation_t557316862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
extern "C"  void ActiveAnimation_Play_m1105978650 (ActiveAnimation_t557316862 * __this, String_t* ___clipName0, int32_t ___playDirection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C"  ActiveAnimation_t557316862 * ActiveAnimation_Play_m2459698113 (Il2CppObject * __this /* static, unused */, Animation_t1724966010 * ___anim0, String_t* ___clipName1, int32_t ___playDirection2, int32_t ___enableBeforePlay3, int32_t ___disableCondition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
extern "C"  ActiveAnimation_t557316862 * ActiveAnimation_Play_m479659302 (Il2CppObject * __this /* static, unused */, Animation_t1724966010 * ___anim0, String_t* ___clipName1, int32_t ___playDirection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
extern "C"  ActiveAnimation_t557316862 * ActiveAnimation_Play_m3105139874 (Il2CppObject * __this /* static, unused */, Animation_t1724966010 * ___anim0, int32_t ___playDirection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animator,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C"  ActiveAnimation_t557316862 * ActiveAnimation_Play_m2827471594 (Il2CppObject * __this /* static, unused */, Animator_t2776330603 * ___anim0, String_t* ___clipName1, int32_t ___playDirection2, int32_t ___enableBeforePlay3, int32_t ___disableCondition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
