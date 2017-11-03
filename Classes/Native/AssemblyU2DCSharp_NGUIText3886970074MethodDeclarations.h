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

// System.String
struct String_t;
// BMSymbol
struct BMSymbol_t1170982339;
// NGUIText/GlyphInfo
struct GlyphInfo_t2737853669;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<System.Int32>
struct BetterList_1_t2650806512;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void NGUIText::.cctor()
extern "C"  void NGUIText__cctor_m4241001676 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update()
extern "C"  void NGUIText_Update_m2154992684 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update(System.Boolean)
extern "C"  void NGUIText_Update_m511478947 (Il2CppObject * __this /* static, unused */, bool ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Prepare(System.String)
extern "C"  void NGUIText_Prepare_m1944226012 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol NGUIText::GetSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1170982339 * NGUIText_GetSymbol_m685573999 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___index1, int32_t ___textLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::GetGlyphWidth(System.Int32,System.Int32)
extern "C"  float NGUIText_GetGlyphWidth_m1345423811 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, int32_t ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/GlyphInfo NGUIText::GetGlyph(System.Int32,System.Int32)
extern "C"  GlyphInfo_t2737853669 * NGUIText_GetGlyph_m2733977333 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, int32_t ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::ParseAlpha(System.String,System.Int32)
extern "C"  float NGUIText_ParseAlpha_m3051690159 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor(System.String,System.Int32)
extern "C"  Color_t4194546905  NGUIText_ParseColor_m4187765423 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor24(System.String,System.Int32)
extern "C"  Color_t4194546905  NGUIText_ParseColor24_m3613562801 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor32(System.String,System.Int32)
extern "C"  Color_t4194546905  NGUIText_ParseColor32_m2238675534 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor_m442325373 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(System.String,UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor_m417412089 (Il2CppObject * __this /* static, unused */, String_t* ___text0, Color_t4194546905  ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeAlpha(System.Single)
extern "C"  String_t* NGUIText_EncodeAlpha_m1522859303 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor24(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor24_m2580621819 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor32(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor32_m3609621182 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&)
extern "C"  bool NGUIText_ParseSymbol_m3238327233 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsHex(System.Char)
extern "C"  bool NGUIText_IsHex_m4275136545 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&,BetterList`1<UnityEngine.Color>,System.Boolean,System.Int32&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&)
extern "C"  bool NGUIText_ParseSymbol_m1623512607 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t* ___index1, BetterList_1_t1396547621 * ___colors2, bool ___premultiply3, int32_t* ___sub4, bool* ___bold5, bool* ___italic6, bool* ___underline7, bool* ___strike8, bool* ___ignoreColor9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::StripSymbols(System.String)
extern "C"  String_t* NGUIText_StripSymbols_m1576203641 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,System.Single,System.Int32)
extern "C"  void NGUIText_Align_m3855109959 (Il2CppObject * __this /* static, unused */, BetterList_1_t1484067282 * ___verts0, int32_t ___indexOffset1, float ___printedWidth2, int32_t ___elements3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetExactCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetExactCharacterIndex_m770947195 (Il2CppObject * __this /* static, unused */, BetterList_1_t1484067282 * ___verts0, BetterList_1_t2650806512 * ___indices1, Vector2_t4282066565  ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetApproximateCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetApproximateCharacterIndex_m1823594768 (Il2CppObject * __this /* static, unused */, BetterList_1_t1484067282 * ___verts0, BetterList_1_t2650806512 * ___indices1, Vector2_t4282066565  ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsSpace(System.Int32)
extern "C"  bool NGUIText_IsSpace_m1009034040 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::EndLine(System.Text.StringBuilder&)
extern "C"  void NGUIText_EndLine_m1861431280 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 ** ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::ReplaceSpaceWithNewline(System.Text.StringBuilder&)
extern "C"  void NGUIText_ReplaceSpaceWithNewline_m1792467677 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 ** ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIText::CalculatePrintedSize(System.String)
extern "C"  Vector2_t4282066565  NGUIText_CalculatePrintedSize_m4220936829 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::CalculateOffsetToFit(System.String)
extern "C"  int32_t NGUIText_CalculateOffsetToFit_m24589652 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::GetEndOfLineThatFits(System.String)
extern "C"  String_t* NGUIText_GetEndOfLineThatFits_m3966708227 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&,System.Boolean)
extern "C"  bool NGUIText_WrapText_m1326784641 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t** ___finalText1, bool ___wrapLineColors2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool NGUIText_WrapText_m2782068513 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t** ___finalText1, bool ___keepCharCount2, bool ___wrapLineColors3, bool ___useEllipsis4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Print(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>)
extern "C"  void NGUIText_Print_m2152250086 (Il2CppObject * __this /* static, unused */, String_t* ___text0, BetterList_1_t1484067282 * ___verts1, BetterList_1_t1484067281 * ___uvs2, BetterList_1_t1396547621 * ___cols3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintApproximateCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintApproximateCharacterPositions_m1469820659 (Il2CppObject * __this /* static, unused */, String_t* ___text0, BetterList_1_t1484067282 * ___verts1, BetterList_1_t2650806512 * ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintExactCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintExactCharacterPositions_m1845339486 (Il2CppObject * __this /* static, unused */, String_t* ___text0, BetterList_1_t1484067282 * ___verts1, BetterList_1_t2650806512 * ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintCaretAndSelection(System.String,System.Int32,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>)
extern "C"  void NGUIText_PrintCaretAndSelection_m4011742568 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___start1, int32_t ___end2, BetterList_1_t1484067282 * ___caret3, BetterList_1_t1484067282 * ___highlight4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ReplaceLink(System.String&,System.Int32&,System.String)
extern "C"  bool NGUIText_ReplaceLink_m2366513620 (Il2CppObject * __this /* static, unused */, String_t** ___text0, int32_t* ___index1, String_t* ___prefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::InsertHyperlink(System.String&,System.Int32&,System.String,System.String)
extern "C"  bool NGUIText_InsertHyperlink_m1054340655 (Il2CppObject * __this /* static, unused */, String_t** ___text0, int32_t* ___index1, String_t* ___keyword2, String_t* ___link3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::ReplaceLinks(System.String&)
extern "C"  void NGUIText_ReplaceLinks_m3286598482 (Il2CppObject * __this /* static, unused */, String_t** ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
