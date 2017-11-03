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

// UIEventTrigger
struct UIEventTrigger_t46291570;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UIEventTrigger::.ctor()
extern "C"  void UIEventTrigger__ctor_m4161606249 (UIEventTrigger_t46291570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIEventTrigger::get_isColliderEnabled()
extern "C"  bool UIEventTrigger_get_isColliderEnabled_m1320713581 (UIEventTrigger_t46291570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnHover(System.Boolean)
extern "C"  void UIEventTrigger_OnHover_m643878875 (UIEventTrigger_t46291570 * __this, bool ___isOver0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnPress(System.Boolean)
extern "C"  void UIEventTrigger_OnPress_m2858532066 (UIEventTrigger_t46291570 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnSelect(System.Boolean)
extern "C"  void UIEventTrigger_OnSelect_m2341913773 (UIEventTrigger_t46291570 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnClick()
extern "C"  void UIEventTrigger_OnClick_m2533257904 (UIEventTrigger_t46291570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDoubleClick()
extern "C"  void UIEventTrigger_OnDoubleClick_m1136679007 (UIEventTrigger_t46291570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragStart()
extern "C"  void UIEventTrigger_OnDragStart_m327786422 (UIEventTrigger_t46291570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragEnd()
extern "C"  void UIEventTrigger_OnDragEnd_m845333167 (UIEventTrigger_t46291570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragOver(UnityEngine.GameObject)
extern "C"  void UIEventTrigger_OnDragOver_m2838264218 (UIEventTrigger_t46291570 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragOut(UnityEngine.GameObject)
extern "C"  void UIEventTrigger_OnDragOut_m3725865562 (UIEventTrigger_t46291570 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDrag(UnityEngine.Vector2)
extern "C"  void UIEventTrigger_OnDrag_m160697036 (UIEventTrigger_t46291570 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
