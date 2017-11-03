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

// UIPopupList
struct UIPopupList_t1804933942;
// UnityEngine.Object
struct Object_t3071478659;
// UIPopupList/LegacyEvent
struct LegacyEvent_t524649176;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UILabel
struct UILabel_t291504320;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UIWidget
struct UIWidget_t769069560;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_UIPopupList_LegacyEvent524649176.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_UILabel291504320.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"

// System.Void UIPopupList::.ctor()
extern "C"  void UIPopupList__ctor_m1705155829 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::.cctor()
extern "C"  void UIPopupList__cctor_m838126936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UIPopupList::get_ambigiousFont()
extern "C"  Object_t3071478659 * UIPopupList_get_ambigiousFont_m3581015704 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_ambigiousFont(UnityEngine.Object)
extern "C"  void UIPopupList_set_ambigiousFont_m1416996903 (UIPopupList_t1804933942 * __this, Object_t3071478659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPopupList/LegacyEvent UIPopupList::get_onSelectionChange()
extern "C"  LegacyEvent_t524649176 * UIPopupList_get_onSelectionChange_m1623620290 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_onSelectionChange(UIPopupList/LegacyEvent)
extern "C"  void UIPopupList_set_onSelectionChange_m2086357287 (UIPopupList_t1804933942 * __this, LegacyEvent_t524649176 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
extern "C"  bool UIPopupList_get_isOpen_m117539640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_value()
extern "C"  String_t* UIPopupList_get_value_m2684566430 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_value(System.String)
extern "C"  void UIPopupList_set_value_m3561584347 (UIPopupList_t1804933942 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UIPopupList::get_data()
extern "C"  Il2CppObject * UIPopupList_get_data_m15282285 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isColliderEnabled()
extern "C"  bool UIPopupList_get_isColliderEnabled_m176645601 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
extern "C"  String_t* UIPopupList_get_selection_m3735218937 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
extern "C"  void UIPopupList_set_selection_m1452711904 (UIPopupList_t1804933942 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isValid()
extern "C"  bool UIPopupList_get_isValid_m843256112 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPopupList::get_activeFontSize()
extern "C"  int32_t UIPopupList_get_activeFontSize_m2328924960 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPopupList::get_activeFontScale()
extern "C"  float UIPopupList_get_activeFontScale_m232542315 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Set(System.String,System.Boolean)
extern "C"  void UIPopupList_Set_m1557874992 (UIPopupList_t1804933942 * __this, String_t* ___value0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Clear()
extern "C"  void UIPopupList_Clear_m3406256416 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AddItem(System.String)
extern "C"  void UIPopupList_AddItem_m3868540539 (UIPopupList_t1804933942 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AddItem(System.String,System.Object)
extern "C"  void UIPopupList_AddItem_m2880640521 (UIPopupList_t1804933942 * __this, String_t* ___text0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::RemoveItem(System.String)
extern "C"  void UIPopupList_RemoveItem_m1189090716 (UIPopupList_t1804933942 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::RemoveItemByData(System.Object)
extern "C"  void UIPopupList_RemoveItemByData_m1914469645 (UIPopupList_t1804933942 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::TriggerCallbacks()
extern "C"  void UIPopupList_TriggerCallbacks_m1268155685 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnEnable()
extern "C"  void UIPopupList_OnEnable_m3790670449 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnValidate()
extern "C"  void UIPopupList_OnValidate_m3061575172 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
extern "C"  void UIPopupList_Start_m652293621 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize()
extern "C"  void UIPopupList_OnLocalize_m123298359 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern "C"  void UIPopupList_Highlight_m4128262930 (UIPopupList_t1804933942 * __this, UILabel_t291504320 * ___lbl0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPopupList::GetHighlightPosition()
extern "C"  Vector3_t4282066566  UIPopupList_GetHighlightPosition_m2028450172 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIPopupList::UpdateTweenPosition()
extern "C"  Il2CppObject * UIPopupList_UpdateTweenPosition_m1834919558 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIPopupList_OnItemHover_m1133824584 (UIPopupList_t1804933942 * __this, GameObject_t3674682005 * ___go0, bool ___isOver1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern "C"  void UIPopupList_OnItemPress_m2497979745 (UIPopupList_t1804933942 * __this, GameObject_t3674682005 * ___go0, bool ___isPressed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern "C"  void UIPopupList_Select_m1334452086 (UIPopupList_t1804933942 * __this, UILabel_t291504320 * ___lbl0, bool ___instant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnNavigate(UnityEngine.KeyCode)
extern "C"  void UIPopupList_OnNavigate_m2587314110 (UIPopupList_t1804933942 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern "C"  void UIPopupList_OnKey_m1135837386 (UIPopupList_t1804933942 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnDisable()
extern "C"  void UIPopupList_OnDisable_m1987604188 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
extern "C"  void UIPopupList_OnSelect_m2119050145 (UIPopupList_t1804933942 * __this, bool ___isSelected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Close()
extern "C"  void UIPopupList_Close_m3416015371 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::CloseSelf()
extern "C"  void UIPopupList_CloseSelf_m2368128375 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C"  void UIPopupList_AnimateColor_m1330687289 (UIPopupList_t1804933942 * __this, UIWidget_t769069560 * ___widget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_AnimatePosition_m555456637 (UIPopupList_t1804933942 * __this, UIWidget_t769069560 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_AnimateScale_m4049832258 (UIPopupList_t1804933942 * __this, UIWidget_t769069560 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C"  void UIPopupList_Animate_m604406502 (UIPopupList_t1804933942 * __this, UIWidget_t769069560 * ___widget0, bool ___placeAbove1, float ___bottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
extern "C"  void UIPopupList_OnClick_m4116417084 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnDoubleClick()
extern "C"  void UIPopupList_OnDoubleClick_m1167628011 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIPopupList::CloseIfUnselected()
extern "C"  Il2CppObject * UIPopupList_CloseIfUnselected_m311420516 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Show()
extern "C"  void UIPopupList_Show_m3889704300 (UIPopupList_t1804933942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
