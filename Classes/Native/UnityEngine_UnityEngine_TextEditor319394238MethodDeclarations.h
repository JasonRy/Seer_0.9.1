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

// UnityEngine.TextEditor
struct TextEditor_t319394238;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C"  void TextEditor__ctor_m1029296947 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::get_text()
extern "C"  String_t* TextEditor_get_text_m2661970474 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_text(System.String)
extern "C"  void TextEditor_set_text_m2873269991 (TextEditor_t319394238 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C"  int32_t TextEditor_get_cursorIndex_m3258858212 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C"  void TextEditor_set_cursorIndex_m3839283393 (TextEditor_t319394238 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C"  int32_t TextEditor_get_selectIndex_m847319678 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C"  void TextEditor_set_selectIndex_m2271285595 (TextEditor_t319394238 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C"  void TextEditor_ClearCursorPos_m3987638978 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C"  void TextEditor_OnFocus_m1604527178 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C"  void TextEditor_SelectAll_m2943368726 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C"  bool TextEditor_DeleteSelection_m1201672204 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C"  void TextEditor_ReplaceSelection_m1188267705 (TextEditor_t319394238 * __this, String_t* ___replace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C"  void TextEditor_Copy_m645385702 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C"  String_t* TextEditor_ReplaceNewlinesWithSpaces_m4176827598 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C"  bool TextEditor_Paste_m4252838526 (TextEditor_t319394238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
extern "C"  void TextEditor_ClampTextIndex_m707900960 (TextEditor_t319394238 * __this, int32_t* ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
