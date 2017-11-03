#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIPanel>
struct List_1_t1663395488;
// UIPanel/OnGeometryUpdated
struct OnGeometryUpdated_t4285773675;
// System.Collections.Generic.List`1<UIWidget>
struct List_1_t2137255112;
// System.Collections.Generic.List`1<UIDrawCall>
struct List_1_t2281459526;
// UIPanel/OnClippingMoved
struct OnClippingMoved_t1586118419;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UIPanel
struct UIPanel_t295209936;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t2651898963;

#include "AssemblyU2DCSharp_UIRect2503437976.h"
#include "AssemblyU2DCSharp_UIPanel_RenderQueue3352612156.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping3937989211.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPanel
struct  UIPanel_t295209936  : public UIRect_t2503437976
{
public:
	// UIPanel/OnGeometryUpdated UIPanel::onGeometryUpdated
	OnGeometryUpdated_t4285773675 * ___onGeometryUpdated_23;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_24;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_25;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_26;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_27;
	// System.Boolean UIPanel::alwaysOnScreen
	bool ___alwaysOnScreen_28;
	// System.Boolean UIPanel::anchorOffset
	bool ___anchorOffset_29;
	// System.Boolean UIPanel::softBorderPadding
	bool ___softBorderPadding_30;
	// UIPanel/RenderQueue UIPanel::renderQueue
	int32_t ___renderQueue_31;
	// System.Int32 UIPanel::startingRenderQueue
	int32_t ___startingRenderQueue_32;
	// System.Collections.Generic.List`1<UIWidget> UIPanel::widgets
	List_1_t2137255112 * ___widgets_33;
	// System.Collections.Generic.List`1<UIDrawCall> UIPanel::drawCalls
	List_1_t2281459526 * ___drawCalls_34;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t1651859333  ___worldToLocal_35;
	// UnityEngine.Vector4 UIPanel::drawCallClipRange
	Vector4_t4282066567  ___drawCallClipRange_36;
	// UIPanel/OnClippingMoved UIPanel::onClipMove
	OnClippingMoved_t1586118419 * ___onClipMove_37;
	// UnityEngine.Texture2D UIPanel::mClipTexture
	Texture2D_t3884108195 * ___mClipTexture_38;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_39;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_40;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t4282066567  ___mClipRange_41;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t4282066565  ___mClipSoftness_42;
	// System.Int32 UIPanel::mDepth
	int32_t ___mDepth_43;
	// System.Int32 UIPanel::mSortingOrder
	int32_t ___mSortingOrder_44;
	// System.String UIPanel::mSortingLayerName
	String_t* ___mSortingLayerName_45;
	// System.Boolean UIPanel::mRebuild
	bool ___mRebuild_46;
	// System.Boolean UIPanel::mResized
	bool ___mResized_47;
	// UnityEngine.Vector2 UIPanel::mClipOffset
	Vector2_t4282066565  ___mClipOffset_48;
	// System.Int32 UIPanel::mMatrixFrame
	int32_t ___mMatrixFrame_49;
	// System.Int32 UIPanel::mAlphaFrameID
	int32_t ___mAlphaFrameID_50;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_51;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t4282066565  ___mMin_53;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t4282066565  ___mMax_54;
	// System.Boolean UIPanel::mHalfPixelOffset
	bool ___mHalfPixelOffset_55;
	// System.Boolean UIPanel::mSortWidgets
	bool ___mSortWidgets_56;
	// System.Boolean UIPanel::mUpdateScroll
	bool ___mUpdateScroll_57;
	// UIPanel UIPanel::mParentPanel
	UIPanel_t295209936 * ___mParentPanel_58;
	// System.Boolean UIPanel::mHasMoved
	bool ___mHasMoved_61;
	// UIDrawCall/OnRenderCallback UIPanel::mOnRender
	OnRenderCallback_t2651898963 * ___mOnRender_62;
	// System.Boolean UIPanel::mForced
	bool ___mForced_63;

public:
	inline static int32_t get_offset_of_onGeometryUpdated_23() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___onGeometryUpdated_23)); }
	inline OnGeometryUpdated_t4285773675 * get_onGeometryUpdated_23() const { return ___onGeometryUpdated_23; }
	inline OnGeometryUpdated_t4285773675 ** get_address_of_onGeometryUpdated_23() { return &___onGeometryUpdated_23; }
	inline void set_onGeometryUpdated_23(OnGeometryUpdated_t4285773675 * value)
	{
		___onGeometryUpdated_23 = value;
		Il2CppCodeGenWriteBarrier(&___onGeometryUpdated_23, value);
	}

	inline static int32_t get_offset_of_showInPanelTool_24() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___showInPanelTool_24)); }
	inline bool get_showInPanelTool_24() const { return ___showInPanelTool_24; }
	inline bool* get_address_of_showInPanelTool_24() { return &___showInPanelTool_24; }
	inline void set_showInPanelTool_24(bool value)
	{
		___showInPanelTool_24 = value;
	}

	inline static int32_t get_offset_of_generateNormals_25() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___generateNormals_25)); }
	inline bool get_generateNormals_25() const { return ___generateNormals_25; }
	inline bool* get_address_of_generateNormals_25() { return &___generateNormals_25; }
	inline void set_generateNormals_25(bool value)
	{
		___generateNormals_25 = value;
	}

	inline static int32_t get_offset_of_widgetsAreStatic_26() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___widgetsAreStatic_26)); }
	inline bool get_widgetsAreStatic_26() const { return ___widgetsAreStatic_26; }
	inline bool* get_address_of_widgetsAreStatic_26() { return &___widgetsAreStatic_26; }
	inline void set_widgetsAreStatic_26(bool value)
	{
		___widgetsAreStatic_26 = value;
	}

	inline static int32_t get_offset_of_cullWhileDragging_27() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___cullWhileDragging_27)); }
	inline bool get_cullWhileDragging_27() const { return ___cullWhileDragging_27; }
	inline bool* get_address_of_cullWhileDragging_27() { return &___cullWhileDragging_27; }
	inline void set_cullWhileDragging_27(bool value)
	{
		___cullWhileDragging_27 = value;
	}

	inline static int32_t get_offset_of_alwaysOnScreen_28() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___alwaysOnScreen_28)); }
	inline bool get_alwaysOnScreen_28() const { return ___alwaysOnScreen_28; }
	inline bool* get_address_of_alwaysOnScreen_28() { return &___alwaysOnScreen_28; }
	inline void set_alwaysOnScreen_28(bool value)
	{
		___alwaysOnScreen_28 = value;
	}

	inline static int32_t get_offset_of_anchorOffset_29() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___anchorOffset_29)); }
	inline bool get_anchorOffset_29() const { return ___anchorOffset_29; }
	inline bool* get_address_of_anchorOffset_29() { return &___anchorOffset_29; }
	inline void set_anchorOffset_29(bool value)
	{
		___anchorOffset_29 = value;
	}

	inline static int32_t get_offset_of_softBorderPadding_30() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___softBorderPadding_30)); }
	inline bool get_softBorderPadding_30() const { return ___softBorderPadding_30; }
	inline bool* get_address_of_softBorderPadding_30() { return &___softBorderPadding_30; }
	inline void set_softBorderPadding_30(bool value)
	{
		___softBorderPadding_30 = value;
	}

	inline static int32_t get_offset_of_renderQueue_31() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___renderQueue_31)); }
	inline int32_t get_renderQueue_31() const { return ___renderQueue_31; }
	inline int32_t* get_address_of_renderQueue_31() { return &___renderQueue_31; }
	inline void set_renderQueue_31(int32_t value)
	{
		___renderQueue_31 = value;
	}

	inline static int32_t get_offset_of_startingRenderQueue_32() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___startingRenderQueue_32)); }
	inline int32_t get_startingRenderQueue_32() const { return ___startingRenderQueue_32; }
	inline int32_t* get_address_of_startingRenderQueue_32() { return &___startingRenderQueue_32; }
	inline void set_startingRenderQueue_32(int32_t value)
	{
		___startingRenderQueue_32 = value;
	}

	inline static int32_t get_offset_of_widgets_33() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___widgets_33)); }
	inline List_1_t2137255112 * get_widgets_33() const { return ___widgets_33; }
	inline List_1_t2137255112 ** get_address_of_widgets_33() { return &___widgets_33; }
	inline void set_widgets_33(List_1_t2137255112 * value)
	{
		___widgets_33 = value;
		Il2CppCodeGenWriteBarrier(&___widgets_33, value);
	}

	inline static int32_t get_offset_of_drawCalls_34() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___drawCalls_34)); }
	inline List_1_t2281459526 * get_drawCalls_34() const { return ___drawCalls_34; }
	inline List_1_t2281459526 ** get_address_of_drawCalls_34() { return &___drawCalls_34; }
	inline void set_drawCalls_34(List_1_t2281459526 * value)
	{
		___drawCalls_34 = value;
		Il2CppCodeGenWriteBarrier(&___drawCalls_34, value);
	}

	inline static int32_t get_offset_of_worldToLocal_35() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___worldToLocal_35)); }
	inline Matrix4x4_t1651859333  get_worldToLocal_35() const { return ___worldToLocal_35; }
	inline Matrix4x4_t1651859333 * get_address_of_worldToLocal_35() { return &___worldToLocal_35; }
	inline void set_worldToLocal_35(Matrix4x4_t1651859333  value)
	{
		___worldToLocal_35 = value;
	}

	inline static int32_t get_offset_of_drawCallClipRange_36() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___drawCallClipRange_36)); }
	inline Vector4_t4282066567  get_drawCallClipRange_36() const { return ___drawCallClipRange_36; }
	inline Vector4_t4282066567 * get_address_of_drawCallClipRange_36() { return &___drawCallClipRange_36; }
	inline void set_drawCallClipRange_36(Vector4_t4282066567  value)
	{
		___drawCallClipRange_36 = value;
	}

	inline static int32_t get_offset_of_onClipMove_37() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___onClipMove_37)); }
	inline OnClippingMoved_t1586118419 * get_onClipMove_37() const { return ___onClipMove_37; }
	inline OnClippingMoved_t1586118419 ** get_address_of_onClipMove_37() { return &___onClipMove_37; }
	inline void set_onClipMove_37(OnClippingMoved_t1586118419 * value)
	{
		___onClipMove_37 = value;
		Il2CppCodeGenWriteBarrier(&___onClipMove_37, value);
	}

	inline static int32_t get_offset_of_mClipTexture_38() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mClipTexture_38)); }
	inline Texture2D_t3884108195 * get_mClipTexture_38() const { return ___mClipTexture_38; }
	inline Texture2D_t3884108195 ** get_address_of_mClipTexture_38() { return &___mClipTexture_38; }
	inline void set_mClipTexture_38(Texture2D_t3884108195 * value)
	{
		___mClipTexture_38 = value;
		Il2CppCodeGenWriteBarrier(&___mClipTexture_38, value);
	}

	inline static int32_t get_offset_of_mAlpha_39() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mAlpha_39)); }
	inline float get_mAlpha_39() const { return ___mAlpha_39; }
	inline float* get_address_of_mAlpha_39() { return &___mAlpha_39; }
	inline void set_mAlpha_39(float value)
	{
		___mAlpha_39 = value;
	}

	inline static int32_t get_offset_of_mClipping_40() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mClipping_40)); }
	inline int32_t get_mClipping_40() const { return ___mClipping_40; }
	inline int32_t* get_address_of_mClipping_40() { return &___mClipping_40; }
	inline void set_mClipping_40(int32_t value)
	{
		___mClipping_40 = value;
	}

	inline static int32_t get_offset_of_mClipRange_41() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mClipRange_41)); }
	inline Vector4_t4282066567  get_mClipRange_41() const { return ___mClipRange_41; }
	inline Vector4_t4282066567 * get_address_of_mClipRange_41() { return &___mClipRange_41; }
	inline void set_mClipRange_41(Vector4_t4282066567  value)
	{
		___mClipRange_41 = value;
	}

	inline static int32_t get_offset_of_mClipSoftness_42() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mClipSoftness_42)); }
	inline Vector2_t4282066565  get_mClipSoftness_42() const { return ___mClipSoftness_42; }
	inline Vector2_t4282066565 * get_address_of_mClipSoftness_42() { return &___mClipSoftness_42; }
	inline void set_mClipSoftness_42(Vector2_t4282066565  value)
	{
		___mClipSoftness_42 = value;
	}

	inline static int32_t get_offset_of_mDepth_43() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mDepth_43)); }
	inline int32_t get_mDepth_43() const { return ___mDepth_43; }
	inline int32_t* get_address_of_mDepth_43() { return &___mDepth_43; }
	inline void set_mDepth_43(int32_t value)
	{
		___mDepth_43 = value;
	}

	inline static int32_t get_offset_of_mSortingOrder_44() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mSortingOrder_44)); }
	inline int32_t get_mSortingOrder_44() const { return ___mSortingOrder_44; }
	inline int32_t* get_address_of_mSortingOrder_44() { return &___mSortingOrder_44; }
	inline void set_mSortingOrder_44(int32_t value)
	{
		___mSortingOrder_44 = value;
	}

	inline static int32_t get_offset_of_mSortingLayerName_45() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mSortingLayerName_45)); }
	inline String_t* get_mSortingLayerName_45() const { return ___mSortingLayerName_45; }
	inline String_t** get_address_of_mSortingLayerName_45() { return &___mSortingLayerName_45; }
	inline void set_mSortingLayerName_45(String_t* value)
	{
		___mSortingLayerName_45 = value;
		Il2CppCodeGenWriteBarrier(&___mSortingLayerName_45, value);
	}

	inline static int32_t get_offset_of_mRebuild_46() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mRebuild_46)); }
	inline bool get_mRebuild_46() const { return ___mRebuild_46; }
	inline bool* get_address_of_mRebuild_46() { return &___mRebuild_46; }
	inline void set_mRebuild_46(bool value)
	{
		___mRebuild_46 = value;
	}

	inline static int32_t get_offset_of_mResized_47() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mResized_47)); }
	inline bool get_mResized_47() const { return ___mResized_47; }
	inline bool* get_address_of_mResized_47() { return &___mResized_47; }
	inline void set_mResized_47(bool value)
	{
		___mResized_47 = value;
	}

	inline static int32_t get_offset_of_mClipOffset_48() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mClipOffset_48)); }
	inline Vector2_t4282066565  get_mClipOffset_48() const { return ___mClipOffset_48; }
	inline Vector2_t4282066565 * get_address_of_mClipOffset_48() { return &___mClipOffset_48; }
	inline void set_mClipOffset_48(Vector2_t4282066565  value)
	{
		___mClipOffset_48 = value;
	}

	inline static int32_t get_offset_of_mMatrixFrame_49() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mMatrixFrame_49)); }
	inline int32_t get_mMatrixFrame_49() const { return ___mMatrixFrame_49; }
	inline int32_t* get_address_of_mMatrixFrame_49() { return &___mMatrixFrame_49; }
	inline void set_mMatrixFrame_49(int32_t value)
	{
		___mMatrixFrame_49 = value;
	}

	inline static int32_t get_offset_of_mAlphaFrameID_50() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mAlphaFrameID_50)); }
	inline int32_t get_mAlphaFrameID_50() const { return ___mAlphaFrameID_50; }
	inline int32_t* get_address_of_mAlphaFrameID_50() { return &___mAlphaFrameID_50; }
	inline void set_mAlphaFrameID_50(int32_t value)
	{
		___mAlphaFrameID_50 = value;
	}

	inline static int32_t get_offset_of_mLayer_51() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mLayer_51)); }
	inline int32_t get_mLayer_51() const { return ___mLayer_51; }
	inline int32_t* get_address_of_mLayer_51() { return &___mLayer_51; }
	inline void set_mLayer_51(int32_t value)
	{
		___mLayer_51 = value;
	}

	inline static int32_t get_offset_of_mMin_53() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mMin_53)); }
	inline Vector2_t4282066565  get_mMin_53() const { return ___mMin_53; }
	inline Vector2_t4282066565 * get_address_of_mMin_53() { return &___mMin_53; }
	inline void set_mMin_53(Vector2_t4282066565  value)
	{
		___mMin_53 = value;
	}

	inline static int32_t get_offset_of_mMax_54() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mMax_54)); }
	inline Vector2_t4282066565  get_mMax_54() const { return ___mMax_54; }
	inline Vector2_t4282066565 * get_address_of_mMax_54() { return &___mMax_54; }
	inline void set_mMax_54(Vector2_t4282066565  value)
	{
		___mMax_54 = value;
	}

	inline static int32_t get_offset_of_mHalfPixelOffset_55() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mHalfPixelOffset_55)); }
	inline bool get_mHalfPixelOffset_55() const { return ___mHalfPixelOffset_55; }
	inline bool* get_address_of_mHalfPixelOffset_55() { return &___mHalfPixelOffset_55; }
	inline void set_mHalfPixelOffset_55(bool value)
	{
		___mHalfPixelOffset_55 = value;
	}

	inline static int32_t get_offset_of_mSortWidgets_56() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mSortWidgets_56)); }
	inline bool get_mSortWidgets_56() const { return ___mSortWidgets_56; }
	inline bool* get_address_of_mSortWidgets_56() { return &___mSortWidgets_56; }
	inline void set_mSortWidgets_56(bool value)
	{
		___mSortWidgets_56 = value;
	}

	inline static int32_t get_offset_of_mUpdateScroll_57() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mUpdateScroll_57)); }
	inline bool get_mUpdateScroll_57() const { return ___mUpdateScroll_57; }
	inline bool* get_address_of_mUpdateScroll_57() { return &___mUpdateScroll_57; }
	inline void set_mUpdateScroll_57(bool value)
	{
		___mUpdateScroll_57 = value;
	}

	inline static int32_t get_offset_of_mParentPanel_58() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mParentPanel_58)); }
	inline UIPanel_t295209936 * get_mParentPanel_58() const { return ___mParentPanel_58; }
	inline UIPanel_t295209936 ** get_address_of_mParentPanel_58() { return &___mParentPanel_58; }
	inline void set_mParentPanel_58(UIPanel_t295209936 * value)
	{
		___mParentPanel_58 = value;
		Il2CppCodeGenWriteBarrier(&___mParentPanel_58, value);
	}

	inline static int32_t get_offset_of_mHasMoved_61() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mHasMoved_61)); }
	inline bool get_mHasMoved_61() const { return ___mHasMoved_61; }
	inline bool* get_address_of_mHasMoved_61() { return &___mHasMoved_61; }
	inline void set_mHasMoved_61(bool value)
	{
		___mHasMoved_61 = value;
	}

	inline static int32_t get_offset_of_mOnRender_62() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mOnRender_62)); }
	inline OnRenderCallback_t2651898963 * get_mOnRender_62() const { return ___mOnRender_62; }
	inline OnRenderCallback_t2651898963 ** get_address_of_mOnRender_62() { return &___mOnRender_62; }
	inline void set_mOnRender_62(OnRenderCallback_t2651898963 * value)
	{
		___mOnRender_62 = value;
		Il2CppCodeGenWriteBarrier(&___mOnRender_62, value);
	}

	inline static int32_t get_offset_of_mForced_63() { return static_cast<int32_t>(offsetof(UIPanel_t295209936, ___mForced_63)); }
	inline bool get_mForced_63() const { return ___mForced_63; }
	inline bool* get_address_of_mForced_63() { return &___mForced_63; }
	inline void set_mForced_63(bool value)
	{
		___mForced_63 = value;
	}
};

struct UIPanel_t295209936_StaticFields
{
public:
	// System.Collections.Generic.List`1<UIPanel> UIPanel::list
	List_1_t1663395488 * ___list_22;
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t2316563989* ___mTemp_52;
	// UnityEngine.Vector3[] UIPanel::mCorners
	Vector3U5BU5D_t215400611* ___mCorners_59;
	// System.Int32 UIPanel::mUpdateFrame
	int32_t ___mUpdateFrame_60;

public:
	inline static int32_t get_offset_of_list_22() { return static_cast<int32_t>(offsetof(UIPanel_t295209936_StaticFields, ___list_22)); }
	inline List_1_t1663395488 * get_list_22() const { return ___list_22; }
	inline List_1_t1663395488 ** get_address_of_list_22() { return &___list_22; }
	inline void set_list_22(List_1_t1663395488 * value)
	{
		___list_22 = value;
		Il2CppCodeGenWriteBarrier(&___list_22, value);
	}

	inline static int32_t get_offset_of_mTemp_52() { return static_cast<int32_t>(offsetof(UIPanel_t295209936_StaticFields, ___mTemp_52)); }
	inline SingleU5BU5D_t2316563989* get_mTemp_52() const { return ___mTemp_52; }
	inline SingleU5BU5D_t2316563989** get_address_of_mTemp_52() { return &___mTemp_52; }
	inline void set_mTemp_52(SingleU5BU5D_t2316563989* value)
	{
		___mTemp_52 = value;
		Il2CppCodeGenWriteBarrier(&___mTemp_52, value);
	}

	inline static int32_t get_offset_of_mCorners_59() { return static_cast<int32_t>(offsetof(UIPanel_t295209936_StaticFields, ___mCorners_59)); }
	inline Vector3U5BU5D_t215400611* get_mCorners_59() const { return ___mCorners_59; }
	inline Vector3U5BU5D_t215400611** get_address_of_mCorners_59() { return &___mCorners_59; }
	inline void set_mCorners_59(Vector3U5BU5D_t215400611* value)
	{
		___mCorners_59 = value;
		Il2CppCodeGenWriteBarrier(&___mCorners_59, value);
	}

	inline static int32_t get_offset_of_mUpdateFrame_60() { return static_cast<int32_t>(offsetof(UIPanel_t295209936_StaticFields, ___mUpdateFrame_60)); }
	inline int32_t get_mUpdateFrame_60() const { return ___mUpdateFrame_60; }
	inline int32_t* get_address_of_mUpdateFrame_60() { return &___mUpdateFrame_60; }
	inline void set_mUpdateFrame_60(int32_t value)
	{
		___mUpdateFrame_60 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
