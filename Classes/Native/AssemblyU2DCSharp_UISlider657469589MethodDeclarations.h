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

// UISlider
struct UISlider_t657469589;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UISlider::.ctor()
extern "C"  void UISlider__ctor_m3947193766 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISlider::get_isColliderEnabled()
extern "C"  bool UISlider_get_isColliderEnabled_m1481818026 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C"  float UISlider_get_sliderValue_m2734035647 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C"  void UISlider_set_sliderValue_m1958627316 (UISlider_t657469589 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISlider::get_inverted()
extern "C"  bool UISlider_get_inverted_m1442361008 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_inverted(System.Boolean)
extern "C"  void UISlider_set_inverted_m1069482215 (UISlider_t657469589 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Upgrade()
extern "C"  void UISlider_Upgrade_m1626925344 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnStart()
extern "C"  void UISlider_OnStart_m4178549511 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressBackground_m3877979919 (UISlider_t657469589 * __this, GameObject_t3674682005 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragBackground_m943415947 (UISlider_t657469589 * __this, GameObject_t3674682005 * ___go0, Vector2_t4282066565  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressForeground_m2545644890 (UISlider_t657469589 * __this, GameObject_t3674682005 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragForeground_m1951230752 (UISlider_t657469589 * __this, GameObject_t3674682005 * ___go0, Vector2_t4282066565  ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPan(UnityEngine.Vector2)
extern "C"  void UISlider_OnPan_m747130616 (UISlider_t657469589 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
