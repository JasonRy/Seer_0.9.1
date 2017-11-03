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

// UITweener
struct UITweener_t105489188;
// EventDelegate/Callback
struct Callback_t1094463061;
// EventDelegate
struct EventDelegate_t4004424223;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction1859285089.h"
#include "AssemblyU2DCSharp_EventDelegate_Callback1094463061.h"
#include "AssemblyU2DCSharp_EventDelegate4004424223.h"

// System.Void UITweener::.ctor()
extern "C"  void UITweener__ctor_m2521610951 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::get_amountPerDelta()
extern "C"  float UITweener_get_amountPerDelta_m342139981 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::get_tweenFactor()
extern "C"  float UITweener_get_tweenFactor_m3023342018 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::set_tweenFactor(System.Single)
extern "C"  void UITweener_set_tweenFactor_m826357225 (UITweener_t105489188 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AnimationOrTween.Direction UITweener::get_direction()
extern "C"  int32_t UITweener_get_direction_m1737209411 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Reset()
extern "C"  void UITweener_Reset_m168043892 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Start()
extern "C"  void UITweener_Start_m1468748743 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Update()
extern "C"  void UITweener_Update_m2587390246 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetOnFinished(EventDelegate/Callback)
extern "C"  void UITweener_SetOnFinished_m2532336547 (UITweener_t105489188 * __this, Callback_t1094463061 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetOnFinished(EventDelegate)
extern "C"  void UITweener_SetOnFinished_m4129108443 (UITweener_t105489188 * __this, EventDelegate_t4004424223 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::AddOnFinished(EventDelegate/Callback)
extern "C"  void UITweener_AddOnFinished_m1398296610 (UITweener_t105489188 * __this, Callback_t1094463061 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::AddOnFinished(EventDelegate)
extern "C"  void UITweener_AddOnFinished_m2961468028 (UITweener_t105489188 * __this, EventDelegate_t4004424223 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::RemoveOnFinished(EventDelegate)
extern "C"  void UITweener_RemoveOnFinished_m1549062977 (UITweener_t105489188 * __this, EventDelegate_t4004424223 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::OnDisable()
extern "C"  void UITweener_OnDisable_m3864744878 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Sample(System.Single,System.Boolean)
extern "C"  void UITweener_Sample_m1154056121 (UITweener_t105489188 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::BounceLogic(System.Single)
extern "C"  float UITweener_BounceLogic_m384101156 (UITweener_t105489188 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Play()
extern "C"  void UITweener_Play_m3833433041 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::PlayForward()
extern "C"  void UITweener_PlayForward_m3184544150 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::PlayReverse()
extern "C"  void UITweener_PlayReverse_m1477146227 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Play(System.Boolean)
extern "C"  void UITweener_Play_m1190576008 (UITweener_t105489188 * __this, bool ___forward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::ResetToBeginning()
extern "C"  void UITweener_ResetToBeginning_m292257456 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Toggle()
extern "C"  void UITweener_Toggle_m48266481 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetStartToCurrentValue()
extern "C"  void UITweener_SetStartToCurrentValue_m1490938032 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetEndToCurrentValue()
extern "C"  void UITweener_SetEndToCurrentValue_m3403311529 (UITweener_t105489188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
