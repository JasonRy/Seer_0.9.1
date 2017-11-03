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

// UITextList
struct UITextList_t736798239;
// BetterList`1<UITextList/Paragraph>
struct BetterList_1_t1096574122;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_String7231557.h"

// System.Void UITextList::.ctor()
extern "C"  void UITextList__ctor_m1801479516 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::.cctor()
extern "C"  void UITextList__cctor_m3824161233 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UITextList/Paragraph> UITextList::get_paragraphs()
extern "C"  BetterList_1_t1096574122 * UITextList_get_paragraphs_m3421034864 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITextList::get_isValid()
extern "C"  bool UITextList_get_isValid_m4155293295 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_scrollValue()
extern "C"  float UITextList_get_scrollValue_m578722441 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::set_scrollValue(System.Single)
extern "C"  void UITextList_set_scrollValue_m4133436266 (UITextList_t736798239 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_lineHeight()
extern "C"  float UITextList_get_lineHeight_m2659975192 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITextList::get_scrollHeight()
extern "C"  int32_t UITextList_get_scrollHeight_m685030579 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Clear()
extern "C"  void UITextList_Clear_m3502580103 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Start()
extern "C"  void UITextList_Start_m748617308 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Update()
extern "C"  void UITextList_Update_m1738152241 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScroll(System.Single)
extern "C"  void UITextList_OnScroll_m1316852407 (UITextList_t736798239 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnDrag(UnityEngine.Vector2)
extern "C"  void UITextList_OnDrag_m2302371391 (UITextList_t736798239 * __this, Vector2_t4282066565  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScrollBar()
extern "C"  void UITextList_OnScrollBar_m233289953 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String)
extern "C"  void UITextList_Add_m1668405703 (UITextList_t736798239 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String,System.Boolean)
extern "C"  void UITextList_Add_m891605718 (UITextList_t736798239 * __this, String_t* ___text0, bool ___updateVisible1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Rebuild()
extern "C"  void UITextList_Rebuild_m267146645 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::UpdateVisibleText()
extern "C"  void UITextList_UpdateVisibleText_m1816301488 (UITextList_t736798239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
