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

// UIKeyBinding
struct UIKeyBinding_t2313833690;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Modifier3912257676.h"
#include "mscorlib_System_String7231557.h"

// System.Void UIKeyBinding::.ctor()
extern "C"  void UIKeyBinding__ctor_m1497201409 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::.cctor()
extern "C"  void UIKeyBinding__cctor_m2981474508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIKeyBinding::get_captionText()
extern "C"  String_t* UIKeyBinding_get_captionText_m666834566 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIKeyBinding::IsBound(UnityEngine.KeyCode)
extern "C"  bool UIKeyBinding_IsBound_m1457684094 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::OnEnable()
extern "C"  void UIKeyBinding_OnEnable_m1963385061 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::OnDisable()
extern "C"  void UIKeyBinding_OnDisable_m1176332008 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::Start()
extern "C"  void UIKeyBinding_Start_m444339201 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::OnSubmit()
extern "C"  void UIKeyBinding_OnSubmit_m2549197370 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIKeyBinding::IsModifierActive()
extern "C"  bool UIKeyBinding_IsModifierActive_m4070177950 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIKeyBinding::IsModifierActive(UIKeyBinding/Modifier)
extern "C"  bool UIKeyBinding_IsModifierActive_m850628552 (Il2CppObject * __this /* static, unused */, int32_t ___modifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::Update()
extern "C"  void UIKeyBinding_Update_m895465516 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::OnBindingPress(System.Boolean)
extern "C"  void UIKeyBinding_OnBindingPress_m678603287 (UIKeyBinding_t2313833690 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyBinding::OnBindingClick()
extern "C"  void UIKeyBinding_OnBindingClick_m630288549 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIKeyBinding::ToString()
extern "C"  String_t* UIKeyBinding_ToString_m1161336242 (UIKeyBinding_t2313833690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIKeyBinding::GetString(UnityEngine.KeyCode,UIKeyBinding/Modifier)
extern "C"  String_t* UIKeyBinding_GetString_m1565930650 (Il2CppObject * __this /* static, unused */, int32_t ___keyCode0, int32_t ___modifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIKeyBinding::GetKeyCode(System.String,UnityEngine.KeyCode&,UIKeyBinding/Modifier&)
extern "C"  bool UIKeyBinding_GetKeyCode_m1573960492 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t* ___key1, int32_t* ___modifier2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIKeyBinding/Modifier UIKeyBinding::GetActiveModifier()
extern "C"  int32_t UIKeyBinding_GetActiveModifier_m593128811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
