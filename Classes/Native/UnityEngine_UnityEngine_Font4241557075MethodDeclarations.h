﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<UnityEngine.Font>
struct Action_1_t342405915;
// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.Material
struct Material_t3870600107;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "UnityEngine_UnityEngine_CharacterInfo2481726445.h"

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_add_textureRebuilt_m3323945916 (Il2CppObject * __this /* static, unused */, Action_1_t342405915 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_remove_textureRebuilt_m2804643593 (Il2CppObject * __this /* static, unused */, Action_1_t342405915 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C"  Material_t3870600107 * Font_get_material_m2407307367 (Font_t4241557075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C"  bool Font_HasCharacter_m2480770466 (Font_t4241557075 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C"  StringU5BU5D_t4054002952* Font_get_fontNames_m2853508907 (Font_t4241557075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C"  void Font_RequestCharactersInTexture_m2452368057 (Font_t4241557075 * __this, String_t* ___characters0, int32_t ___size1, int32_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C"  void Font_InvokeTextureRebuilt_Internal_m1357223658 (Il2CppObject * __this /* static, unused */, Font_t4241557075 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C"  bool Font_GetCharacterInfo_m3124990824 (Font_t4241557075 * __this, Il2CppChar ___ch0, CharacterInfo_t2481726445 * ___info1, int32_t ___size2, int32_t ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C"  bool Font_get_dynamic_m3880144684 (Font_t4241557075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C"  int32_t Font_get_fontSize_m3025810271 (Font_t4241557075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;