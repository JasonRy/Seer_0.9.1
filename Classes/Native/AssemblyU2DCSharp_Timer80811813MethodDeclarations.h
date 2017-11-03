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

// Timer
struct Timer_t80811813;
// System.Action
struct Action_t3771233898;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"

// System.Void Timer::.ctor(System.Single)
extern "C"  void Timer__ctor_m3431996293 (Timer_t80811813 * __this, float ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_StartTime()
extern "C"  float Timer_get_StartTime_m2579994870 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_StartTime(System.Single)
extern "C"  void Timer_set_StartTime_m2202677557 (Timer_t80811813 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_Duration()
extern "C"  float Timer_get_Duration_m2205620079 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_Duration(System.Single)
extern "C"  void Timer_set_Duration_m311924188 (Timer_t80811813 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_EndTime()
extern "C"  float Timer_get_EndTime_m3875700783 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_EndTime(System.Single)
extern "C"  void Timer_set_EndTime_m3146497692 (Timer_t80811813 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_CurTime()
extern "C"  float Timer_get_CurTime_m2050562516 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_CurTime(System.Single)
extern "C"  void Timer_set_CurTime_m2978527511 (Timer_t80811813 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::get_IsStart()
extern "C"  bool Timer_get_IsStart_m3108229415 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_IsStart(System.Boolean)
extern "C"  void Timer_set_IsStart_m440761782 (Timer_t80811813 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Timer::get_OnStart()
extern "C"  Action_t3771233898 * Timer_get_OnStart_m4231259068 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_OnStart(System.Action)
extern "C"  void Timer_set_OnStart_m881364371 (Timer_t80811813 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Timer::get_OnEnd()
extern "C"  Action_t3771233898 * Timer_get_OnEnd_m3535425589 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_OnEnd(System.Action)
extern "C"  void Timer_set_OnEnd_m3719584314 (Timer_t80811813 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Timer::get_OnUpdate()
extern "C"  Action_t3771233898 * Timer_get_OnUpdate_m2325864401 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_OnUpdate(System.Action)
extern "C"  void Timer_set_OnUpdate_m2652664122 (Timer_t80811813 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Timer::get_StartCount()
extern "C"  int32_t Timer_get_StartCount_m1410976614 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_StartCount(System.Int32)
extern "C"  void Timer_set_StartCount_m994131193 (Timer_t80811813 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Timer::get_FinishCount()
extern "C"  int32_t Timer_get_FinishCount_m79109477 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_FinishCount(System.Int32)
extern "C"  void Timer_set_FinishCount_m1781130804 (Timer_t80811813 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Start()
extern "C"  void Timer_Start_m2806678758 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Update()
extern "C"  void Timer_Update_m1113547751 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::End()
extern "C"  void Timer_End_m1786459103 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Timer::get_OnCancel()
extern "C"  Action_t3771233898 * Timer_get_OnCancel_m880094530 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_OnCancel(System.Action)
extern "C"  void Timer_set_OnCancel_m733234025 (Timer_t80811813 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Cancel()
extern "C"  void Timer_Cancel_m3962745176 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Timer::get_OnPause()
extern "C"  Action_t3771233898 * Timer_get_OnPause_m1043279952 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_OnPause(System.Action)
extern "C"  void Timer_set_OnPause_m2927710591 (Timer_t80811813 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Timer::get_OnContinue()
extern "C"  Action_t3771233898 * Timer_get_OnContinue_m2449104495 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_OnContinue(System.Action)
extern "C"  void Timer_set_OnContinue_m173989852 (Timer_t80811813 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::get_IsPause()
extern "C"  bool Timer_get_IsPause_m4215217595 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_IsPause(System.Boolean)
extern "C"  void Timer_set_IsPause_m3747952458 (Timer_t80811813 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Pause()
extern "C"  void Timer_Pause_m3913666938 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Continue()
extern "C"  void Timer_Continue_m1348941061 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Reset()
extern "C"  void Timer_Reset_m1505973907 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_Ratio()
extern "C"  float Timer_get_Ratio_m2089845426 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
