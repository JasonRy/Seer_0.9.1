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

// UIScrollView
struct UIScrollView_t2113479878;
// UIPanel
struct UIPanel_t295209936;
// UIProgressBar
struct UIProgressBar_t168062834;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_UIProgressBar168062834.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UIScrollView::.ctor()
extern "C"  void UIScrollView__ctor_m4137995413 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::.cctor()
extern "C"  void UIScrollView__cctor_m3241710008 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIScrollView::get_panel()
extern "C"  UIPanel_t295209936 * UIScrollView_get_panel_m4014558219 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_isDragging()
extern "C"  bool UIScrollView_get_isDragging_m1479979205 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIScrollView::get_bounds()
extern "C"  Bounds_t2711641849  UIScrollView_get_bounds_m1028289982 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveHorizontally()
extern "C"  bool UIScrollView_get_canMoveHorizontally_m2065803912 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveVertically()
extern "C"  bool UIScrollView_get_canMoveVertically_m4075477594 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveHorizontally()
extern "C"  bool UIScrollView_get_shouldMoveHorizontally_m2072661921 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveVertically()
extern "C"  bool UIScrollView_get_shouldMoveVertically_m3275485619 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMove()
extern "C"  bool UIScrollView_get_shouldMove_m2959813008 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIScrollView::get_currentMomentum()
extern "C"  Vector3_t4282066566  UIScrollView_get_currentMomentum_m3889642209 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::set_currentMomentum(UnityEngine.Vector3)
extern "C"  void UIScrollView_set_currentMomentum_m3393819602 (UIScrollView_t2113479878 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Awake()
extern "C"  void UIScrollView_Awake_m80633336 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnEnable()
extern "C"  void UIScrollView_OnEnable_m2941597393 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Start()
extern "C"  void UIScrollView_Start_m3085133205 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::CheckScrollbars()
extern "C"  void UIScrollView_CheckScrollbars_m1897109544 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnDisable()
extern "C"  void UIScrollView_OnDisable_m1436143228 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean)
extern "C"  bool UIScrollView_RestrictWithinBounds_m2752728790 (UIScrollView_t2113479878 * __this, bool ___instant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool UIScrollView_RestrictWithinBounds_m1872177846 (UIScrollView_t2113479878 * __this, bool ___instant0, bool ___horizontal1, bool ___vertical2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::DisableSpring()
extern "C"  void UIScrollView_DisableSpring_m2168533384 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars()
extern "C"  void UIScrollView_UpdateScrollbars_m2694261829 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(System.Boolean)
extern "C"  void UIScrollView_UpdateScrollbars_m1025803516 (UIScrollView_t2113479878 * __this, bool ___recalculateBounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(UIProgressBar,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void UIScrollView_UpdateScrollbars_m3866199342 (UIScrollView_t2113479878 * __this, UIProgressBar_t168062834 * ___slider0, float ___contentMin1, float ___contentMax2, float ___contentSize3, float ___viewSize4, bool ___inverted5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C"  void UIScrollView_SetDragAmount_m1468547022 (UIScrollView_t2113479878 * __this, float ___x0, float ___y1, bool ___updateScrollbars2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::InvalidateBounds()
extern "C"  void UIScrollView_InvalidateBounds_m2073271519 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::ResetPosition()
extern "C"  void UIScrollView_ResetPosition_m445461835 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdatePosition()
extern "C"  void UIScrollView_UpdatePosition_m3998703905 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnScrollBar()
extern "C"  void UIScrollView_OnScrollBar_m2135298394 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveRelative(UnityEngine.Vector3)
extern "C"  void UIScrollView_MoveRelative_m1062396365 (UIScrollView_t2113479878 * __this, Vector3_t4282066566  ___relative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveAbsolute(UnityEngine.Vector3)
extern "C"  void UIScrollView_MoveAbsolute_m1943582722 (UIScrollView_t2113479878 * __this, Vector3_t4282066566  ___absolute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Press(System.Boolean)
extern "C"  void UIScrollView_Press_m1143812141 (UIScrollView_t2113479878 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Drag()
extern "C"  void UIScrollView_Drag_m3270453827 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Scroll(System.Single)
extern "C"  void UIScrollView_Scroll_m2157705487 (UIScrollView_t2113479878 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::LateUpdate()
extern "C"  void UIScrollView_LateUpdate_m596775646 (UIScrollView_t2113479878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnPan(UnityEngine.Vector2)
extern "C"  void UIScrollView_OnPan_m2320124841 (UIScrollView_t2113479878 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
