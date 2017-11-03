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

// ClickIsOverUI
struct ClickIsOverUI_t506111418;
// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Canvas2727140764.h"

// System.Void ClickIsOverUI::.ctor()
extern "C"  void ClickIsOverUI__ctor_m3944058097 (ClickIsOverUI_t506111418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ClickIsOverUI::.cctor()
extern "C"  void ClickIsOverUI__cctor_m1524620508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ClickIsOverUI::IsPointerOverUIObject(System.Int32)
extern "C"  bool ClickIsOverUI_IsPointerOverUIObject_m735705646 (ClickIsOverUI_t506111418 * __this, int32_t ___fingerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ClickIsOverUI::IsPointerOverUIObject(UnityEngine.Vector2)
extern "C"  bool ClickIsOverUI_IsPointerOverUIObject_m3956942909 (ClickIsOverUI_t506111418 * __this, Vector2_t4282066565  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ClickIsOverUI::IsPointerOverUIObject(UnityEngine.Canvas,UnityEngine.Vector2)
extern "C"  bool ClickIsOverUI_IsPointerOverUIObject_m2553452130 (ClickIsOverUI_t506111418 * __this, Canvas_t2727140764 * ___canvas0, Vector2_t4282066565  ___screenPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
