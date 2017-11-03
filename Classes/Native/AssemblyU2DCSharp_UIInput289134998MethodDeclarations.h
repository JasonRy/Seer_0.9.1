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

// UIInput
struct UIInput_t289134998;
// System.String
struct String_t;
// UITexture
struct UITexture_t3903132647;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UIInput::.ctor()
extern "C"  void UIInput__ctor_m926531221 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::.cctor()
extern "C"  void UIInput__cctor_m2470567864 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_defaultText()
extern "C"  String_t* UIInput_get_defaultText_m3672375323 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_defaultText(System.String)
extern "C"  void UIInput_set_defaultText_m3855940030 (UIInput_t289134998 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIInput::get_defaultColor()
extern "C"  Color_t4194546905  UIInput_get_defaultColor_m3103815539 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_defaultColor(UnityEngine.Color)
extern "C"  void UIInput_set_defaultColor_m2174830168 (UIInput_t289134998 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_inputShouldBeHidden()
extern "C"  bool UIInput_get_inputShouldBeHidden_m4156970856 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_text()
extern "C"  String_t* UIInput_get_text_m3139426530 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_text(System.String)
extern "C"  void UIInput_set_text_m3606283849 (UIInput_t289134998 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_value()
extern "C"  String_t* UIInput_get_value_m187471550 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_value(System.String)
extern "C"  void UIInput_set_value_m753256763 (UIInput_t289134998 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Set(System.String,System.Boolean)
extern "C"  void UIInput_Set_m361079504 (UIInput_t289134998 * __this, String_t* ___value0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_selected()
extern "C"  bool UIInput_get_selected_m3709403423 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selected(System.Boolean)
extern "C"  void UIInput_set_selected_m2884057854 (UIInput_t289134998 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_isSelected()
extern "C"  bool UIInput_get_isSelected_m2185492777 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_isSelected(System.Boolean)
extern "C"  void UIInput_set_isSelected_m4090711944 (UIInput_t289134998 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_cursorPosition()
extern "C"  int32_t UIInput_get_cursorPosition_m2810772681 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_cursorPosition(System.Int32)
extern "C"  void UIInput_set_cursorPosition_m1001112924 (UIInput_t289134998 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_selectionStart()
extern "C"  int32_t UIInput_get_selectionStart_m3784741536 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selectionStart(System.Int32)
extern "C"  void UIInput_set_selectionStart_m1561088179 (UIInput_t289134998 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_selectionEnd()
extern "C"  int32_t UIInput_get_selectionEnd_m1711499289 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selectionEnd(System.Int32)
extern "C"  void UIInput_set_selectionEnd_m3982164268 (UIInput_t289134998 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UITexture UIInput::get_caret()
extern "C"  UITexture_t3903132647 * UIInput_get_caret_m3992389369 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::Validate(System.String)
extern "C"  String_t* UIInput_Validate_m647251104 (UIInput_t289134998 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Start()
extern "C"  void UIInput_Start_m4168636309 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Init()
extern "C"  void UIInput_Init_m2336729375 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveToPlayerPrefs(System.String)
extern "C"  void UIInput_SaveToPlayerPrefs_m1967016952 (UIInput_t289134998 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelect(System.Boolean)
extern "C"  void UIInput_OnSelect_m3605689857 (UIInput_t289134998 * __this, bool ___isSelected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelectEvent()
extern "C"  void UIInput_OnSelectEvent_m3041294738 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDeselectEvent()
extern "C"  void UIInput_OnDeselectEvent_m2876542449 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Update()
extern "C"  void UIInput_Update_m384558872 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnKey(UnityEngine.KeyCode)
extern "C"  void UIInput_OnKey_m3867458346 (UIInput_t289134998 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::DoBackspace()
extern "C"  void UIInput_DoBackspace_m3430448487 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Insert(System.String)
extern "C"  void UIInput_Insert_m840718074 (UIInput_t289134998 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetLeftText()
extern "C"  String_t* UIInput_GetLeftText_m2658112736 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetRightText()
extern "C"  String_t* UIInput_GetRightText_m2994177663 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetSelection()
extern "C"  String_t* UIInput_GetSelection_m3614338530 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::GetCharUnderMouse()
extern "C"  int32_t UIInput_GetCharUnderMouse_m796057882 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnPress(System.Boolean)
extern "C"  void UIInput_OnPress_m266899726 (UIInput_t289134998 * __this, bool ___isPressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDrag(UnityEngine.Vector2)
extern "C"  void UIInput_OnDrag_m3925666040 (UIInput_t289134998 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDisable()
extern "C"  void UIInput_OnDisable_m2120597628 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Cleanup()
extern "C"  void UIInput_Cleanup_m4007034071 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Submit()
extern "C"  void UIInput_Submit_m1289967271 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::UpdateLabel()
extern "C"  void UIInput_UpdateLabel_m2984575774 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput::Validate(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar UIInput_Validate_m3634842707 (UIInput_t289134998 * __this, String_t* ___text0, int32_t ___pos1, Il2CppChar ___ch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::ExecuteOnChange()
extern "C"  void UIInput_ExecuteOnChange_m4209425719 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RemoveFocus()
extern "C"  void UIInput_RemoveFocus_m753211367 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveValue()
extern "C"  void UIInput_SaveValue_m3264418727 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::LoadValue()
extern "C"  void UIInput_LoadValue_m2060982302 (UIInput_t289134998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
