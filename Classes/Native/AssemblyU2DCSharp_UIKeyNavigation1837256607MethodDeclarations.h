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

// UIKeyNavigation
struct UIKeyNavigation_t1837256607;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"

// System.Void UIKeyNavigation::.ctor()
extern "C"  void UIKeyNavigation__ctor_m3664485036 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::.cctor()
extern "C"  void UIKeyNavigation__cctor_m1447790209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIKeyNavigation UIKeyNavigation::get_current()
extern "C"  UIKeyNavigation_t1837256607 * UIKeyNavigation_get_current_m2757107214 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIKeyNavigation::get_isColliderEnabled()
extern "C"  bool UIKeyNavigation_get_isColliderEnabled_m1754962840 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnEnable()
extern "C"  void UIKeyNavigation_OnEnable_m1266556250 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::Start()
extern "C"  void UIKeyNavigation_Start_m2611622828 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnDisable()
extern "C"  void UIKeyNavigation_OnDisable_m1049475347 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIKeyNavigation::IsActive(UnityEngine.GameObject)
extern "C"  bool UIKeyNavigation_IsActive_m410679212 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetLeft()
extern "C"  GameObject_t3674682005 * UIKeyNavigation_GetLeft_m3827253564 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetRight()
extern "C"  GameObject_t3674682005 * UIKeyNavigation_GetRight_m3825953961 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetUp()
extern "C"  GameObject_t3674682005 * UIKeyNavigation_GetUp_m2980792272 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetDown()
extern "C"  GameObject_t3674682005 * UIKeyNavigation_GetDown_m3607956247 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::Get(UnityEngine.Vector3,System.Single,System.Single)
extern "C"  GameObject_t3674682005 * UIKeyNavigation_Get_m2391116782 (UIKeyNavigation_t1837256607 * __this, Vector3_t4282066566  ___myDir0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIKeyNavigation::GetCenter(UnityEngine.GameObject)
extern "C"  Vector3_t4282066566  UIKeyNavigation_GetCenter_m1591038087 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnNavigate(UnityEngine.KeyCode)
extern "C"  void UIKeyNavigation_OnNavigate_m1906331765 (UIKeyNavigation_t1837256607 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnKey(UnityEngine.KeyCode)
extern "C"  void UIKeyNavigation_OnKey_m1333240243 (UIKeyNavigation_t1837256607 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnClick()
extern "C"  void UIKeyNavigation_OnClick_m1541142067 (UIKeyNavigation_t1837256607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
