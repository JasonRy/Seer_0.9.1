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

// UIFont
struct UIFont_t2503090435;
// BMFont
struct BMFont_t1962830650;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t2539167891;
// UIAtlas
struct UIAtlas_t281921111;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t3578345923;
// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.Texture
struct Texture_t2526458961;
// BMSymbol
struct BMSymbol_t1170982339;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BMFont1962830650.h"
#include "AssemblyU2DCSharp_UIAtlas281921111.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_UIFont2503090435.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"

// System.Void UIFont::.ctor()
extern "C"  void UIFont__ctor_m3284580088 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
extern "C"  BMFont_t1962830650 * UIFont_get_bmFont_m1899852018 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_bmFont(BMFont)
extern "C"  void UIFont_set_bmFont_m694096745 (UIFont_t2503090435 * __this, BMFont_t1962830650 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
extern "C"  int32_t UIFont_get_texWidth_m4059392610 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_texWidth(System.Int32)
extern "C"  void UIFont_set_texWidth_m1568105369 (UIFont_t2503090435 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
extern "C"  int32_t UIFont_get_texHeight_m1790933677 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_texHeight(System.Int32)
extern "C"  void UIFont_set_texHeight_m2687478360 (UIFont_t2503090435 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
extern "C"  bool UIFont_get_hasSymbols_m1982851082 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
extern "C"  List_1_t2539167891 * UIFont_get_symbols_m3724707538 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
extern "C"  UIAtlas_t281921111 * UIFont_get_atlas_m3500330108 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
extern "C"  void UIFont_set_atlas_m821986263 (UIFont_t2503090435 * __this, UIAtlas_t281921111 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
extern "C"  Material_t3870600107 * UIFont_get_material_m1069366395 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
extern "C"  void UIFont_set_material_m1099299442 (UIFont_t2503090435 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlpha()
extern "C"  bool UIFont_get_premultipliedAlpha_m4223870673 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlphaShader()
extern "C"  bool UIFont_get_premultipliedAlphaShader_m1559691670 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_packedFontShader()
extern "C"  bool UIFont_get_packedFontShader_m3318717717 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
extern "C"  Texture2D_t3884108195 * UIFont_get_texture_m2792449547 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
extern "C"  Rect_t4241904616  UIFont_get_uvRect_m3076847388 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
extern "C"  void UIFont_set_uvRect_m514837203 (UIFont_t2503090435 * __this, Rect_t4241904616  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
extern "C"  String_t* UIFont_get_spriteName_m1198986184 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
extern "C"  void UIFont_set_spriteName_m1877194377 (UIFont_t2503090435 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
extern "C"  bool UIFont_get_isValid_m2710581515 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
extern "C"  int32_t UIFont_get_size_m1529134340 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_size(System.Int32)
extern "C"  void UIFont_set_size_m3619239483 (UIFont_t2503090435 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_defaultSize()
extern "C"  int32_t UIFont_get_defaultSize_m990082017 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_defaultSize(System.Int32)
extern "C"  void UIFont_set_defaultSize_m2427807500 (UIFont_t2503090435 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIFont::get_sprite()
extern "C"  UISpriteData_t3578345923 * UIFont_get_sprite_m3080132372 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
extern "C"  UIFont_t2503090435 * UIFont_get_replacement_m857094725 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
extern "C"  void UIFont_set_replacement_m1210636360 (UIFont_t2503090435 * __this, UIFont_t2503090435 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
extern "C"  bool UIFont_get_isDynamic_m727150862 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
extern "C"  Font_t4241557075 * UIFont_get_dynamicFont_m1459756004 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
extern "C"  void UIFont_set_dynamicFont_m3416406337 (UIFont_t2503090435 * __this, Font_t4241557075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
extern "C"  int32_t UIFont_get_dynamicFontStyle_m1257869056 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
extern "C"  void UIFont_set_dynamicFontStyle_m2109059515 (UIFont_t2503090435 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
extern "C"  void UIFont_Trim_m3285592814 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
extern "C"  bool UIFont_References_m1089926245 (UIFont_t2503090435 * __this, UIFont_t2503090435 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
extern "C"  bool UIFont_CheckIfRelated_m3133671488 (Il2CppObject * __this /* static, unused */, UIFont_t2503090435 * ___a0, UIFont_t2503090435 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
extern "C"  Texture_t2526458961 * UIFont_get_dynamicTexture_m1773200160 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsChanged()
extern "C"  void UIFont_MarkAsChanged_m704493483 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::UpdateUVRect()
extern "C"  void UIFont_UpdateUVRect_m2649835258 (UIFont_t2503090435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
extern "C"  BMSymbol_t1170982339 * UIFont_GetSymbol_m3253113413 (UIFont_t2503090435 * __this, String_t* ___sequence0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1170982339 * UIFont_MatchSymbol_m2004687369 (UIFont_t2503090435 * __this, String_t* ___text0, int32_t ___offset1, int32_t ___textLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
extern "C"  void UIFont_AddSymbol_m907024751 (UIFont_t2503090435 * __this, String_t* ___sequence0, String_t* ___spriteName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
extern "C"  void UIFont_RemoveSymbol_m1380153210 (UIFont_t2503090435 * __this, String_t* ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
extern "C"  void UIFont_RenameSymbol_m1208416572 (UIFont_t2503090435 * __this, String_t* ___before0, String_t* ___after1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
extern "C"  bool UIFont_UsesSprite_m263196017 (UIFont_t2503090435 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
