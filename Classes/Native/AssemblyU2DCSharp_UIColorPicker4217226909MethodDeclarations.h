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

// UIColorPicker
struct UIColorPicker_t4217226909;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void UIColorPicker::.ctor()
extern "C"  void UIColorPicker__ctor_m42318702 (UIColorPicker_t4217226909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::Start()
extern "C"  void UIColorPicker_Start_m3284423790 (UIColorPicker_t4217226909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::OnDestroy()
extern "C"  void UIColorPicker_OnDestroy_m420489575 (UIColorPicker_t4217226909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::OnPress(System.Boolean)
extern "C"  void UIColorPicker_OnPress_m2075769831 (UIColorPicker_t4217226909 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::OnDrag(UnityEngine.Vector2)
extern "C"  void UIColorPicker_OnDrag_m1629159249 (UIColorPicker_t4217226909 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::OnPan(UnityEngine.Vector2)
extern "C"  void UIColorPicker_OnPan_m4293219376 (UIColorPicker_t4217226909 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::Sample()
extern "C"  void UIColorPicker_Sample_m3691712000 (UIColorPicker_t4217226909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorPicker::Select(UnityEngine.Vector2)
extern "C"  void UIColorPicker_Select_m2053163432 (UIColorPicker_t4217226909 * __this, Vector2_t4282066565  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIColorPicker::Select(UnityEngine.Color)
extern "C"  Vector2_t4282066565  UIColorPicker_Select_m204342767 (UIColorPicker_t4217226909 * __this, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIColorPicker::Sample(System.Single,System.Single)
extern "C"  Color_t4194546905  UIColorPicker_Sample_m155550679 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
