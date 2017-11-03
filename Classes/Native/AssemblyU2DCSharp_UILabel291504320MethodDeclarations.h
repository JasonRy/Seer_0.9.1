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

// UILabel
struct UILabel_t291504320;
// UnityEngine.Material
struct Material_t3870600107;
// UIFont
struct UIFont_t2503090435;
// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.Object
struct Object_t3071478659;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Transform
struct Transform_t1659122786;
// UIGeometry
struct UIGeometry_t3586695974;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "AssemblyU2DCSharp_UIFont2503090435.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment3426431694.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle99318052.h"
#include "AssemblyU2DCSharp_UILabel_Overflow229724305.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "AssemblyU2DCSharp_UILabel_Effect3176279520.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_UILabel_Modifier3379535718.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_UIGeometry3586695974.h"

// System.Void UILabel::.ctor()
extern "C"  void UILabel__ctor_m1675495083 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::.cctor()
extern "C"  void UILabel__cctor_m4213611106 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_finalFontSize()
extern "C"  int32_t UILabel_get_finalFontSize_m2102769940 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_shouldBeProcessed()
extern "C"  bool UILabel_get_shouldBeProcessed_m2726396108 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_shouldBeProcessed(System.Boolean)
extern "C"  void UILabel_set_shouldBeProcessed_m60454811 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isAnchoredHorizontally()
extern "C"  bool UILabel_get_isAnchoredHorizontally_m2878684957 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isAnchoredVertically()
extern "C"  bool UILabel_get_isAnchoredVertically_m4277440559 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UILabel::get_material()
extern "C"  Material_t3870600107 * UILabel_get_material_m1434335370 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_material(UnityEngine.Material)
extern "C"  void UILabel_set_material_m779973343 (UILabel_t291504320 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UILabel::get_font()
extern "C"  UIFont_t2503090435 * UILabel_get_font_m2273294103 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_font(UIFont)
extern "C"  void UILabel_set_font_m3583451778 (UILabel_t291504320 * __this, UIFont_t2503090435 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UILabel::get_bitmapFont()
extern "C"  UIFont_t2503090435 * UILabel_get_bitmapFont_m1539388390 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_bitmapFont(UIFont)
extern "C"  void UILabel_set_bitmapFont_m3518096785 (UILabel_t291504320 * __this, UIFont_t2503090435 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UILabel::get_trueTypeFont()
extern "C"  Font_t4241557075 * UILabel_get_trueTypeFont_m510765282 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_trueTypeFont(UnityEngine.Font)
extern "C"  void UILabel_set_trueTypeFont_m26583527 (UILabel_t291504320 * __this, Font_t4241557075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UILabel::get_ambigiousFont()
extern "C"  Object_t3071478659 * UILabel_get_ambigiousFont_m2019334862 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_ambigiousFont(UnityEngine.Object)
extern "C"  void UILabel_set_ambigiousFont_m1360113501 (UILabel_t291504320 * __this, Object_t3071478659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_text()
extern "C"  String_t* UILabel_get_text_m3166736652 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_text(System.String)
extern "C"  void UILabel_set_text_m4037075551 (UILabel_t291504320 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_defaultFontSize()
extern "C"  int32_t UILabel_get_defaultFontSize_m3748429023 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_fontSize()
extern "C"  int32_t UILabel_get_fontSize_m718383300 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_fontSize(System.Int32)
extern "C"  void UILabel_set_fontSize_m882215511 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UILabel::get_fontStyle()
extern "C"  int32_t UILabel_get_fontStyle_m848968330 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void UILabel_set_fontStyle_m1282195929 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/Alignment UILabel::get_alignment()
extern "C"  int32_t UILabel_get_alignment_m1722618386 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_alignment(NGUIText/Alignment)
extern "C"  void UILabel_set_alignment_m1690765857 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_applyGradient()
extern "C"  bool UILabel_get_applyGradient_m1518740210 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_applyGradient(System.Boolean)
extern "C"  void UILabel_set_applyGradient_m279333697 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_gradientTop()
extern "C"  Color_t4194546905  UILabel_get_gradientTop_m2628971788 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_gradientTop(UnityEngine.Color)
extern "C"  void UILabel_set_gradientTop_m829725365 (UILabel_t291504320 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_gradientBottom()
extern "C"  Color_t4194546905  UILabel_get_gradientBottom_m4145941686 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_gradientBottom(UnityEngine.Color)
extern "C"  void UILabel_set_gradientBottom_m1065075253 (UILabel_t291504320 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_spacingX()
extern "C"  int32_t UILabel_get_spacingX_m2195709705 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_spacingX(System.Int32)
extern "C"  void UILabel_set_spacingX_m3562242332 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_spacingY()
extern "C"  int32_t UILabel_get_spacingY_m2195710666 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_spacingY(System.Int32)
extern "C"  void UILabel_set_spacingY_m774826845 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_useFloatSpacing()
extern "C"  bool UILabel_get_useFloatSpacing_m3444377314 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_useFloatSpacing(System.Boolean)
extern "C"  void UILabel_set_useFloatSpacing_m2604684593 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_floatSpacingX()
extern "C"  float UILabel_get_floatSpacingX_m3546970749 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_floatSpacingX(System.Single)
extern "C"  void UILabel_set_floatSpacingX_m1952350222 (UILabel_t291504320 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_floatSpacingY()
extern "C"  float UILabel_get_floatSpacingY_m3546971710 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_floatSpacingY(System.Single)
extern "C"  void UILabel_set_floatSpacingY_m1441816045 (UILabel_t291504320 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_effectiveSpacingY()
extern "C"  float UILabel_get_effectiveSpacingY_m4081174089 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_effectiveSpacingX()
extern "C"  float UILabel_get_effectiveSpacingX_m4081173128 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_overflowEllipsis()
extern "C"  bool UILabel_get_overflowEllipsis_m3413935521 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_overflowEllipsis(System.Boolean)
extern "C"  void UILabel_set_overflowEllipsis_m727878656 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_overflowWidth()
extern "C"  int32_t UILabel_get_overflowWidth_m3525469170 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_overflowWidth(System.Int32)
extern "C"  void UILabel_set_overflowWidth_m209560897 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_keepCrisp()
extern "C"  bool UILabel_get_keepCrisp_m763127782 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_supportEncoding()
extern "C"  bool UILabel_get_supportEncoding_m857584310 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_supportEncoding(System.Boolean)
extern "C"  void UILabel_set_supportEncoding_m2394799621 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/SymbolStyle UILabel::get_symbolStyle()
extern "C"  int32_t UILabel_get_symbolStyle_m1629879506 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_symbolStyle(NGUIText/SymbolStyle)
extern "C"  void UILabel_set_symbolStyle_m3127021281 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Overflow UILabel::get_overflowMethod()
extern "C"  int32_t UILabel_get_overflowMethod_m1505093081 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_overflowMethod(UILabel/Overflow)
extern "C"  void UILabel_set_overflowMethod_m349526440 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_lineWidth()
extern "C"  int32_t UILabel_get_lineWidth_m2940207680 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_lineWidth(System.Int32)
extern "C"  void UILabel_set_lineWidth_m77688207 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_lineHeight()
extern "C"  int32_t UILabel_get_lineHeight_m1455939215 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_lineHeight(System.Int32)
extern "C"  void UILabel_set_lineHeight_m3729186594 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_multiLine()
extern "C"  bool UILabel_get_multiLine_m3801272513 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_multiLine(System.Boolean)
extern "C"  void UILabel_set_multiLine_m2021265104 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::get_localCorners()
extern "C"  Vector3U5BU5D_t215400611* UILabel_get_localCorners_m959427165 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::get_worldCorners()
extern "C"  Vector3U5BU5D_t215400611* UILabel_get_worldCorners_m615002646 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UILabel::get_drawingDimensions()
extern "C"  Vector4_t4282066567  UILabel_get_drawingDimensions_m3005495012 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_maxLineCount()
extern "C"  int32_t UILabel_get_maxLineCount_m2764469515 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_maxLineCount(System.Int32)
extern "C"  void UILabel_set_maxLineCount_m3150459678 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Effect UILabel::get_effectStyle()
extern "C"  int32_t UILabel_get_effectStyle_m2378214461 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectStyle(UILabel/Effect)
extern "C"  void UILabel_set_effectStyle_m1998866508 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_effectColor()
extern "C"  Color_t4194546905  UILabel_get_effectColor_m4073660953 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectColor(UnityEngine.Color)
extern "C"  void UILabel_set_effectColor_m2249294152 (UILabel_t291504320 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_effectDistance()
extern "C"  Vector2_t4282066565  UILabel_get_effectDistance_m1655078029 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectDistance(UnityEngine.Vector2)
extern "C"  void UILabel_set_effectDistance_m1067723198 (UILabel_t291504320 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_shrinkToFit()
extern "C"  bool UILabel_get_shrinkToFit_m3711509057 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_shrinkToFit(System.Boolean)
extern "C"  void UILabel_set_shrinkToFit_m2823916112 (UILabel_t291504320 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_processedText()
extern "C"  String_t* UILabel_get_processedText_m3230522238 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_printedSize()
extern "C"  Vector2_t4282066565  UILabel_get_printedSize_m3716427080 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_localSize()
extern "C"  Vector2_t4282066565  UILabel_get_localSize_m891654119 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isValid()
extern "C"  bool UILabel_get_isValid_m3749762150 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Modifier UILabel::get_modifier()
extern "C"  int32_t UILabel_get_modifier_m386158530 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_modifier(UILabel/Modifier)
extern "C"  void UILabel_set_modifier_m1741092743 (UILabel_t291504320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnInit()
extern "C"  void UILabel_OnInit_m2019340040 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnDisable()
extern "C"  void UILabel_OnDisable_m2967211410 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetActiveFont(UnityEngine.Font)
extern "C"  void UILabel_SetActiveFont_m1381336378 (UILabel_t291504320 * __this, Font_t4241557075 * ___fnt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_printedText()
extern "C"  String_t* UILabel_get_printedText_m2805453372 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnFontChanged(UnityEngine.Font)
extern "C"  void UILabel_OnFontChanged_m1697881353 (Il2CppObject * __this /* static, unused */, Font_t4241557075 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t215400611* UILabel_GetSides_m3652085366 (UILabel_t291504320 * __this, Transform_t1659122786 * ___relativeTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::UpgradeFrom265()
extern "C"  void UILabel_UpgradeFrom265_m1508438340 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnAnchor()
extern "C"  void UILabel_OnAnchor_m2317276589 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessAndRequest()
extern "C"  void UILabel_ProcessAndRequest_m589567632 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnEnable()
extern "C"  void UILabel_OnEnable_m635682043 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnStart()
extern "C"  void UILabel_OnStart_m2919501516 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::MarkAsChanged()
extern "C"  void UILabel_MarkAsChanged_m2368709726 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessText()
extern "C"  void UILabel_ProcessText_m3432783621 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessText(System.Boolean,System.Boolean)
extern "C"  void UILabel_ProcessText_m1641200705 (UILabel_t291504320 * __this, bool ___legacyMode0, bool ___full1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::MakePixelPerfect()
extern "C"  void UILabel_MakePixelPerfect_m2129895342 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::AssumeNaturalSize()
extern "C"  void UILabel_AssumeNaturalSize_m1218420167 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndex(UnityEngine.Vector3)
extern "C"  int32_t UILabel_GetCharacterIndex_m796481251 (UILabel_t291504320 * __this, Vector3_t4282066566  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndex(UnityEngine.Vector2)
extern "C"  int32_t UILabel_GetCharacterIndex_m796481220 (UILabel_t291504320 * __this, Vector2_t4282066565  ___localPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndexAtPosition(UnityEngine.Vector3,System.Boolean)
extern "C"  int32_t UILabel_GetCharacterIndexAtPosition_m89813142 (UILabel_t291504320 * __this, Vector3_t4282066566  ___worldPos0, bool ___precise1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndexAtPosition(UnityEngine.Vector2,System.Boolean)
extern "C"  int32_t UILabel_GetCharacterIndexAtPosition_m3031470741 (UILabel_t291504320 * __this, Vector2_t4282066565  ___localPos0, bool ___precise1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetWordAtPosition(UnityEngine.Vector3)
extern "C"  String_t* UILabel_GetWordAtPosition_m3628638289 (UILabel_t291504320 * __this, Vector3_t4282066566  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetWordAtPosition(UnityEngine.Vector2)
extern "C"  String_t* UILabel_GetWordAtPosition_m3628638258 (UILabel_t291504320 * __this, Vector2_t4282066565  ___localPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetWordAtCharacterIndex(System.Int32)
extern "C"  String_t* UILabel_GetWordAtCharacterIndex_m1889739609 (UILabel_t291504320 * __this, int32_t ___characterIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetUrlAtPosition(UnityEngine.Vector3)
extern "C"  String_t* UILabel_GetUrlAtPosition_m1316530286 (UILabel_t291504320 * __this, Vector3_t4282066566  ___worldPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetUrlAtPosition(UnityEngine.Vector2)
extern "C"  String_t* UILabel_GetUrlAtPosition_m1316530255 (UILabel_t291504320 * __this, Vector2_t4282066565  ___localPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetUrlAtCharacterIndex(System.Int32)
extern "C"  String_t* UILabel_GetUrlAtCharacterIndex_m1953702812 (UILabel_t291504320 * __this, int32_t ___characterIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndex(System.Int32,UnityEngine.KeyCode)
extern "C"  int32_t UILabel_GetCharacterIndex_m4055786366 (UILabel_t291504320 * __this, int32_t ___currentIndex0, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::PrintOverlay(System.Int32,System.Int32,UIGeometry,UIGeometry,UnityEngine.Color,UnityEngine.Color)
extern "C"  void UILabel_PrintOverlay_m3585691018 (UILabel_t291504320 * __this, int32_t ___start0, int32_t ___end1, UIGeometry_t3586695974 * ___caret2, UIGeometry_t3586695974 * ___highlight3, Color_t4194546905  ___caretColor4, Color_t4194546905  ___highlightColor5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>)
extern "C"  void UILabel_OnFill_m3280031899 (UILabel_t291504320 * __this, BetterList_1_t1484067282 * ___verts0, BetterList_1_t1484067281 * ___uvs1, BetterList_1_t1396547621 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::ApplyOffset(BetterList`1<UnityEngine.Vector3>,System.Int32)
extern "C"  Vector2_t4282066565  UILabel_ApplyOffset_m3796033164 (UILabel_t291504320 * __this, BetterList_1_t1484067282 * ___verts0, int32_t ___start1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ApplyShadow(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void UILabel_ApplyShadow_m3841126025 (UILabel_t291504320 * __this, BetterList_1_t1484067282 * ___verts0, BetterList_1_t1484067281 * ___uvs1, BetterList_1_t1396547621 * ___cols2, int32_t ___start3, int32_t ___end4, float ___x5, float ___y6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::CalculateOffsetToFit(System.String)
extern "C"  int32_t UILabel_CalculateOffsetToFit_m3625992794 (UILabel_t291504320 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentProgress()
extern "C"  void UILabel_SetCurrentProgress_m4266604605 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentPercent()
extern "C"  void UILabel_SetCurrentPercent_m106716631 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentSelection()
extern "C"  void UILabel_SetCurrentSelection_m2508784926 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::Wrap(System.String,System.String&)
extern "C"  bool UILabel_Wrap_m2317630749 (UILabel_t291504320 * __this, String_t* ___text0, String_t** ___final1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::Wrap(System.String,System.String&,System.Int32)
extern "C"  bool UILabel_Wrap_m1856624346 (UILabel_t291504320 * __this, String_t* ___text0, String_t** ___final1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::UpdateNGUIText()
extern "C"  void UILabel_UpdateNGUIText_m3757111068 (UILabel_t291504320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnApplicationPause(System.Boolean)
extern "C"  void UILabel_OnApplicationPause_m3725135221 (UILabel_t291504320 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
