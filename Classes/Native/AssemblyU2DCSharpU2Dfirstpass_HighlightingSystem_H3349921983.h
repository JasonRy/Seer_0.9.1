#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4231331326;
// HighlightingSystem.Highlighter/Mode[]
struct ModeU5BU5D_t3143704503;
// System.Collections.Generic.HashSet`1<HighlightingSystem.Highlighter>
struct HashSet_1_t2504350759;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer>
struct List_1_t1431228530;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t574734531;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightingSystem_H2711727618.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.Highlighter
struct  Highlighter_t3349921983  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color HighlightingSystem.Highlighter::occluderColor
	Color_t4194546905  ___occluderColor_6;
	// System.Boolean HighlightingSystem.Highlighter::seeThrough
	bool ___seeThrough_12;
	// System.Boolean HighlightingSystem.Highlighter::occluder
	bool ___occluder_13;
	// UnityEngine.Transform HighlightingSystem.Highlighter::tr
	Transform_t1659122786 * ___tr_14;
	// System.Collections.Generic.List`1<HighlightingSystem.HighlighterRenderer> HighlightingSystem.Highlighter::highlightableRenderers
	List_1_t1431228530 * ___highlightableRenderers_15;
	// System.Boolean HighlightingSystem.Highlighter::renderersDirty
	bool ___renderersDirty_16;
	// HighlightingSystem.Highlighter/Mode HighlightingSystem.Highlighter::mode
	int32_t ___mode_18;
	// System.Boolean HighlightingSystem.Highlighter::zTest
	bool ___zTest_19;
	// System.Boolean HighlightingSystem.Highlighter::stencilRef
	bool ___stencilRef_20;
	// System.Int32 HighlightingSystem.Highlighter::_once
	int32_t ____once_21;
	// System.Boolean HighlightingSystem.Highlighter::flashing
	bool ___flashing_22;
	// UnityEngine.Color HighlightingSystem.Highlighter::currentColor
	Color_t4194546905  ___currentColor_23;
	// System.Single HighlightingSystem.Highlighter::transitionValue
	float ___transitionValue_24;
	// System.Single HighlightingSystem.Highlighter::transitionTarget
	float ___transitionTarget_25;
	// System.Single HighlightingSystem.Highlighter::transitionTime
	float ___transitionTime_26;
	// UnityEngine.Color HighlightingSystem.Highlighter::onceColor
	Color_t4194546905  ___onceColor_27;
	// System.Single HighlightingSystem.Highlighter::flashingFreq
	float ___flashingFreq_28;
	// UnityEngine.Color HighlightingSystem.Highlighter::flashingColorMin
	Color_t4194546905  ___flashingColorMin_29;
	// UnityEngine.Color HighlightingSystem.Highlighter::flashingColorMax
	Color_t4194546905  ___flashingColorMax_30;
	// UnityEngine.Color HighlightingSystem.Highlighter::constantColor
	Color_t4194546905  ___constantColor_31;
	// UnityEngine.Material HighlightingSystem.Highlighter::_opaqueMaterial
	Material_t3870600107 * ____opaqueMaterial_34;

public:
	inline static int32_t get_offset_of_occluderColor_6() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___occluderColor_6)); }
	inline Color_t4194546905  get_occluderColor_6() const { return ___occluderColor_6; }
	inline Color_t4194546905 * get_address_of_occluderColor_6() { return &___occluderColor_6; }
	inline void set_occluderColor_6(Color_t4194546905  value)
	{
		___occluderColor_6 = value;
	}

	inline static int32_t get_offset_of_seeThrough_12() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___seeThrough_12)); }
	inline bool get_seeThrough_12() const { return ___seeThrough_12; }
	inline bool* get_address_of_seeThrough_12() { return &___seeThrough_12; }
	inline void set_seeThrough_12(bool value)
	{
		___seeThrough_12 = value;
	}

	inline static int32_t get_offset_of_occluder_13() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___occluder_13)); }
	inline bool get_occluder_13() const { return ___occluder_13; }
	inline bool* get_address_of_occluder_13() { return &___occluder_13; }
	inline void set_occluder_13(bool value)
	{
		___occluder_13 = value;
	}

	inline static int32_t get_offset_of_tr_14() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___tr_14)); }
	inline Transform_t1659122786 * get_tr_14() const { return ___tr_14; }
	inline Transform_t1659122786 ** get_address_of_tr_14() { return &___tr_14; }
	inline void set_tr_14(Transform_t1659122786 * value)
	{
		___tr_14 = value;
		Il2CppCodeGenWriteBarrier(&___tr_14, value);
	}

	inline static int32_t get_offset_of_highlightableRenderers_15() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___highlightableRenderers_15)); }
	inline List_1_t1431228530 * get_highlightableRenderers_15() const { return ___highlightableRenderers_15; }
	inline List_1_t1431228530 ** get_address_of_highlightableRenderers_15() { return &___highlightableRenderers_15; }
	inline void set_highlightableRenderers_15(List_1_t1431228530 * value)
	{
		___highlightableRenderers_15 = value;
		Il2CppCodeGenWriteBarrier(&___highlightableRenderers_15, value);
	}

	inline static int32_t get_offset_of_renderersDirty_16() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___renderersDirty_16)); }
	inline bool get_renderersDirty_16() const { return ___renderersDirty_16; }
	inline bool* get_address_of_renderersDirty_16() { return &___renderersDirty_16; }
	inline void set_renderersDirty_16(bool value)
	{
		___renderersDirty_16 = value;
	}

	inline static int32_t get_offset_of_mode_18() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___mode_18)); }
	inline int32_t get_mode_18() const { return ___mode_18; }
	inline int32_t* get_address_of_mode_18() { return &___mode_18; }
	inline void set_mode_18(int32_t value)
	{
		___mode_18 = value;
	}

	inline static int32_t get_offset_of_zTest_19() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___zTest_19)); }
	inline bool get_zTest_19() const { return ___zTest_19; }
	inline bool* get_address_of_zTest_19() { return &___zTest_19; }
	inline void set_zTest_19(bool value)
	{
		___zTest_19 = value;
	}

	inline static int32_t get_offset_of_stencilRef_20() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___stencilRef_20)); }
	inline bool get_stencilRef_20() const { return ___stencilRef_20; }
	inline bool* get_address_of_stencilRef_20() { return &___stencilRef_20; }
	inline void set_stencilRef_20(bool value)
	{
		___stencilRef_20 = value;
	}

	inline static int32_t get_offset_of__once_21() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ____once_21)); }
	inline int32_t get__once_21() const { return ____once_21; }
	inline int32_t* get_address_of__once_21() { return &____once_21; }
	inline void set__once_21(int32_t value)
	{
		____once_21 = value;
	}

	inline static int32_t get_offset_of_flashing_22() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___flashing_22)); }
	inline bool get_flashing_22() const { return ___flashing_22; }
	inline bool* get_address_of_flashing_22() { return &___flashing_22; }
	inline void set_flashing_22(bool value)
	{
		___flashing_22 = value;
	}

	inline static int32_t get_offset_of_currentColor_23() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___currentColor_23)); }
	inline Color_t4194546905  get_currentColor_23() const { return ___currentColor_23; }
	inline Color_t4194546905 * get_address_of_currentColor_23() { return &___currentColor_23; }
	inline void set_currentColor_23(Color_t4194546905  value)
	{
		___currentColor_23 = value;
	}

	inline static int32_t get_offset_of_transitionValue_24() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___transitionValue_24)); }
	inline float get_transitionValue_24() const { return ___transitionValue_24; }
	inline float* get_address_of_transitionValue_24() { return &___transitionValue_24; }
	inline void set_transitionValue_24(float value)
	{
		___transitionValue_24 = value;
	}

	inline static int32_t get_offset_of_transitionTarget_25() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___transitionTarget_25)); }
	inline float get_transitionTarget_25() const { return ___transitionTarget_25; }
	inline float* get_address_of_transitionTarget_25() { return &___transitionTarget_25; }
	inline void set_transitionTarget_25(float value)
	{
		___transitionTarget_25 = value;
	}

	inline static int32_t get_offset_of_transitionTime_26() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___transitionTime_26)); }
	inline float get_transitionTime_26() const { return ___transitionTime_26; }
	inline float* get_address_of_transitionTime_26() { return &___transitionTime_26; }
	inline void set_transitionTime_26(float value)
	{
		___transitionTime_26 = value;
	}

	inline static int32_t get_offset_of_onceColor_27() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___onceColor_27)); }
	inline Color_t4194546905  get_onceColor_27() const { return ___onceColor_27; }
	inline Color_t4194546905 * get_address_of_onceColor_27() { return &___onceColor_27; }
	inline void set_onceColor_27(Color_t4194546905  value)
	{
		___onceColor_27 = value;
	}

	inline static int32_t get_offset_of_flashingFreq_28() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___flashingFreq_28)); }
	inline float get_flashingFreq_28() const { return ___flashingFreq_28; }
	inline float* get_address_of_flashingFreq_28() { return &___flashingFreq_28; }
	inline void set_flashingFreq_28(float value)
	{
		___flashingFreq_28 = value;
	}

	inline static int32_t get_offset_of_flashingColorMin_29() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___flashingColorMin_29)); }
	inline Color_t4194546905  get_flashingColorMin_29() const { return ___flashingColorMin_29; }
	inline Color_t4194546905 * get_address_of_flashingColorMin_29() { return &___flashingColorMin_29; }
	inline void set_flashingColorMin_29(Color_t4194546905  value)
	{
		___flashingColorMin_29 = value;
	}

	inline static int32_t get_offset_of_flashingColorMax_30() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___flashingColorMax_30)); }
	inline Color_t4194546905  get_flashingColorMax_30() const { return ___flashingColorMax_30; }
	inline Color_t4194546905 * get_address_of_flashingColorMax_30() { return &___flashingColorMax_30; }
	inline void set_flashingColorMax_30(Color_t4194546905  value)
	{
		___flashingColorMax_30 = value;
	}

	inline static int32_t get_offset_of_constantColor_31() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ___constantColor_31)); }
	inline Color_t4194546905  get_constantColor_31() const { return ___constantColor_31; }
	inline Color_t4194546905 * get_address_of_constantColor_31() { return &___constantColor_31; }
	inline void set_constantColor_31(Color_t4194546905  value)
	{
		___constantColor_31 = value;
	}

	inline static int32_t get_offset_of__opaqueMaterial_34() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983, ____opaqueMaterial_34)); }
	inline Material_t3870600107 * get__opaqueMaterial_34() const { return ____opaqueMaterial_34; }
	inline Material_t3870600107 ** get_address_of__opaqueMaterial_34() { return &____opaqueMaterial_34; }
	inline void set__opaqueMaterial_34(Material_t3870600107 * value)
	{
		____opaqueMaterial_34 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueMaterial_34, value);
	}
};

struct Highlighter_t3349921983_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Type> HighlightingSystem.Highlighter::types
	List_1_t4231331326 * ___types_5;
	// HighlightingSystem.Highlighter/Mode[] HighlightingSystem.Highlighter::renderingOrder
	ModeU5BU5D_t3143704503* ___renderingOrder_7;
	// System.Collections.Generic.HashSet`1<HighlightingSystem.Highlighter> HighlightingSystem.Highlighter::highlighters
	HashSet_1_t2504350759 * ___highlighters_8;
	// System.Int32 HighlightingSystem.Highlighter::zWrite
	int32_t ___zWrite_9;
	// System.Single HighlightingSystem.Highlighter::offsetFactor
	float ___offsetFactor_10;
	// System.Single HighlightingSystem.Highlighter::offsetUnits
	float ___offsetUnits_11;
	// System.Collections.Generic.List`1<UnityEngine.Component> HighlightingSystem.Highlighter::sComponents
	List_1_t574734531 * ___sComponents_17;
	// UnityEngine.Shader HighlightingSystem.Highlighter::_opaqueShader
	Shader_t3191267369 * ____opaqueShader_32;
	// UnityEngine.Shader HighlightingSystem.Highlighter::_transparentShader
	Shader_t3191267369 * ____transparentShader_33;

public:
	inline static int32_t get_offset_of_types_5() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___types_5)); }
	inline List_1_t4231331326 * get_types_5() const { return ___types_5; }
	inline List_1_t4231331326 ** get_address_of_types_5() { return &___types_5; }
	inline void set_types_5(List_1_t4231331326 * value)
	{
		___types_5 = value;
		Il2CppCodeGenWriteBarrier(&___types_5, value);
	}

	inline static int32_t get_offset_of_renderingOrder_7() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___renderingOrder_7)); }
	inline ModeU5BU5D_t3143704503* get_renderingOrder_7() const { return ___renderingOrder_7; }
	inline ModeU5BU5D_t3143704503** get_address_of_renderingOrder_7() { return &___renderingOrder_7; }
	inline void set_renderingOrder_7(ModeU5BU5D_t3143704503* value)
	{
		___renderingOrder_7 = value;
		Il2CppCodeGenWriteBarrier(&___renderingOrder_7, value);
	}

	inline static int32_t get_offset_of_highlighters_8() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___highlighters_8)); }
	inline HashSet_1_t2504350759 * get_highlighters_8() const { return ___highlighters_8; }
	inline HashSet_1_t2504350759 ** get_address_of_highlighters_8() { return &___highlighters_8; }
	inline void set_highlighters_8(HashSet_1_t2504350759 * value)
	{
		___highlighters_8 = value;
		Il2CppCodeGenWriteBarrier(&___highlighters_8, value);
	}

	inline static int32_t get_offset_of_zWrite_9() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___zWrite_9)); }
	inline int32_t get_zWrite_9() const { return ___zWrite_9; }
	inline int32_t* get_address_of_zWrite_9() { return &___zWrite_9; }
	inline void set_zWrite_9(int32_t value)
	{
		___zWrite_9 = value;
	}

	inline static int32_t get_offset_of_offsetFactor_10() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___offsetFactor_10)); }
	inline float get_offsetFactor_10() const { return ___offsetFactor_10; }
	inline float* get_address_of_offsetFactor_10() { return &___offsetFactor_10; }
	inline void set_offsetFactor_10(float value)
	{
		___offsetFactor_10 = value;
	}

	inline static int32_t get_offset_of_offsetUnits_11() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___offsetUnits_11)); }
	inline float get_offsetUnits_11() const { return ___offsetUnits_11; }
	inline float* get_address_of_offsetUnits_11() { return &___offsetUnits_11; }
	inline void set_offsetUnits_11(float value)
	{
		___offsetUnits_11 = value;
	}

	inline static int32_t get_offset_of_sComponents_17() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ___sComponents_17)); }
	inline List_1_t574734531 * get_sComponents_17() const { return ___sComponents_17; }
	inline List_1_t574734531 ** get_address_of_sComponents_17() { return &___sComponents_17; }
	inline void set_sComponents_17(List_1_t574734531 * value)
	{
		___sComponents_17 = value;
		Il2CppCodeGenWriteBarrier(&___sComponents_17, value);
	}

	inline static int32_t get_offset_of__opaqueShader_32() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ____opaqueShader_32)); }
	inline Shader_t3191267369 * get__opaqueShader_32() const { return ____opaqueShader_32; }
	inline Shader_t3191267369 ** get_address_of__opaqueShader_32() { return &____opaqueShader_32; }
	inline void set__opaqueShader_32(Shader_t3191267369 * value)
	{
		____opaqueShader_32 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueShader_32, value);
	}

	inline static int32_t get_offset_of__transparentShader_33() { return static_cast<int32_t>(offsetof(Highlighter_t3349921983_StaticFields, ____transparentShader_33)); }
	inline Shader_t3191267369 * get__transparentShader_33() const { return ____transparentShader_33; }
	inline Shader_t3191267369 ** get_address_of__transparentShader_33() { return &____transparentShader_33; }
	inline void set__transparentShader_33(Shader_t3191267369 * value)
	{
		____transparentShader_33 = value;
		Il2CppCodeGenWriteBarrier(&____transparentShader_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
