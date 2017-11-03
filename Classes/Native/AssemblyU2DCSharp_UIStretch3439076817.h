#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UIWidget
struct UIWidget_t769069560;
// UnityEngine.Transform
struct Transform_t1659122786;
// UISprite
struct UISprite_t661437049;
// UIPanel
struct UIPanel_t295209936;
// UIRoot
struct UIRoot_t2503447958;
// UnityEngine.Animation
struct Animation_t1724966010;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UIStretch_Style3950950355.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIStretch
struct  UIStretch_t3439076817  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t2727095145 * ___uiCamera_2;
	// UnityEngine.GameObject UIStretch::container
	GameObject_t3674682005 * ___container_3;
	// UIStretch/Style UIStretch::style
	int32_t ___style_4;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t4282066565  ___relativeSize_6;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t4282066565  ___initialSize_7;
	// UnityEngine.Vector2 UIStretch::borderPadding
	Vector2_t4282066565  ___borderPadding_8;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t769069560 * ___widgetContainer_9;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t1659122786 * ___mTrans_10;
	// UIWidget UIStretch::mWidget
	UIWidget_t769069560 * ___mWidget_11;
	// UISprite UIStretch::mSprite
	UISprite_t661437049 * ___mSprite_12;
	// UIPanel UIStretch::mPanel
	UIPanel_t295209936 * ___mPanel_13;
	// UIRoot UIStretch::mRoot
	UIRoot_t2503447958 * ___mRoot_14;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t1724966010 * ___mAnim_15;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t4241904616  ___mRect_16;
	// System.Boolean UIStretch::mStarted
	bool ___mStarted_17;

public:
	inline static int32_t get_offset_of_uiCamera_2() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___uiCamera_2)); }
	inline Camera_t2727095145 * get_uiCamera_2() const { return ___uiCamera_2; }
	inline Camera_t2727095145 ** get_address_of_uiCamera_2() { return &___uiCamera_2; }
	inline void set_uiCamera_2(Camera_t2727095145 * value)
	{
		___uiCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_2, value);
	}

	inline static int32_t get_offset_of_container_3() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___container_3)); }
	inline GameObject_t3674682005 * get_container_3() const { return ___container_3; }
	inline GameObject_t3674682005 ** get_address_of_container_3() { return &___container_3; }
	inline void set_container_3(GameObject_t3674682005 * value)
	{
		___container_3 = value;
		Il2CppCodeGenWriteBarrier(&___container_3, value);
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___style_4)); }
	inline int32_t get_style_4() const { return ___style_4; }
	inline int32_t* get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(int32_t value)
	{
		___style_4 = value;
	}

	inline static int32_t get_offset_of_runOnlyOnce_5() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___runOnlyOnce_5)); }
	inline bool get_runOnlyOnce_5() const { return ___runOnlyOnce_5; }
	inline bool* get_address_of_runOnlyOnce_5() { return &___runOnlyOnce_5; }
	inline void set_runOnlyOnce_5(bool value)
	{
		___runOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of_relativeSize_6() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___relativeSize_6)); }
	inline Vector2_t4282066565  get_relativeSize_6() const { return ___relativeSize_6; }
	inline Vector2_t4282066565 * get_address_of_relativeSize_6() { return &___relativeSize_6; }
	inline void set_relativeSize_6(Vector2_t4282066565  value)
	{
		___relativeSize_6 = value;
	}

	inline static int32_t get_offset_of_initialSize_7() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___initialSize_7)); }
	inline Vector2_t4282066565  get_initialSize_7() const { return ___initialSize_7; }
	inline Vector2_t4282066565 * get_address_of_initialSize_7() { return &___initialSize_7; }
	inline void set_initialSize_7(Vector2_t4282066565  value)
	{
		___initialSize_7 = value;
	}

	inline static int32_t get_offset_of_borderPadding_8() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___borderPadding_8)); }
	inline Vector2_t4282066565  get_borderPadding_8() const { return ___borderPadding_8; }
	inline Vector2_t4282066565 * get_address_of_borderPadding_8() { return &___borderPadding_8; }
	inline void set_borderPadding_8(Vector2_t4282066565  value)
	{
		___borderPadding_8 = value;
	}

	inline static int32_t get_offset_of_widgetContainer_9() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___widgetContainer_9)); }
	inline UIWidget_t769069560 * get_widgetContainer_9() const { return ___widgetContainer_9; }
	inline UIWidget_t769069560 ** get_address_of_widgetContainer_9() { return &___widgetContainer_9; }
	inline void set_widgetContainer_9(UIWidget_t769069560 * value)
	{
		___widgetContainer_9 = value;
		Il2CppCodeGenWriteBarrier(&___widgetContainer_9, value);
	}

	inline static int32_t get_offset_of_mTrans_10() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mTrans_10)); }
	inline Transform_t1659122786 * get_mTrans_10() const { return ___mTrans_10; }
	inline Transform_t1659122786 ** get_address_of_mTrans_10() { return &___mTrans_10; }
	inline void set_mTrans_10(Transform_t1659122786 * value)
	{
		___mTrans_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_10, value);
	}

	inline static int32_t get_offset_of_mWidget_11() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mWidget_11)); }
	inline UIWidget_t769069560 * get_mWidget_11() const { return ___mWidget_11; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_11() { return &___mWidget_11; }
	inline void set_mWidget_11(UIWidget_t769069560 * value)
	{
		___mWidget_11 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_11, value);
	}

	inline static int32_t get_offset_of_mSprite_12() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mSprite_12)); }
	inline UISprite_t661437049 * get_mSprite_12() const { return ___mSprite_12; }
	inline UISprite_t661437049 ** get_address_of_mSprite_12() { return &___mSprite_12; }
	inline void set_mSprite_12(UISprite_t661437049 * value)
	{
		___mSprite_12 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_12, value);
	}

	inline static int32_t get_offset_of_mPanel_13() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mPanel_13)); }
	inline UIPanel_t295209936 * get_mPanel_13() const { return ___mPanel_13; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_13() { return &___mPanel_13; }
	inline void set_mPanel_13(UIPanel_t295209936 * value)
	{
		___mPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_13, value);
	}

	inline static int32_t get_offset_of_mRoot_14() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mRoot_14)); }
	inline UIRoot_t2503447958 * get_mRoot_14() const { return ___mRoot_14; }
	inline UIRoot_t2503447958 ** get_address_of_mRoot_14() { return &___mRoot_14; }
	inline void set_mRoot_14(UIRoot_t2503447958 * value)
	{
		___mRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_14, value);
	}

	inline static int32_t get_offset_of_mAnim_15() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mAnim_15)); }
	inline Animation_t1724966010 * get_mAnim_15() const { return ___mAnim_15; }
	inline Animation_t1724966010 ** get_address_of_mAnim_15() { return &___mAnim_15; }
	inline void set_mAnim_15(Animation_t1724966010 * value)
	{
		___mAnim_15 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_15, value);
	}

	inline static int32_t get_offset_of_mRect_16() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mRect_16)); }
	inline Rect_t4241904616  get_mRect_16() const { return ___mRect_16; }
	inline Rect_t4241904616 * get_address_of_mRect_16() { return &___mRect_16; }
	inline void set_mRect_16(Rect_t4241904616  value)
	{
		___mRect_16 = value;
	}

	inline static int32_t get_offset_of_mStarted_17() { return static_cast<int32_t>(offsetof(UIStretch_t3439076817, ___mStarted_17)); }
	inline bool get_mStarted_17() const { return ___mStarted_17; }
	inline bool* get_address_of_mStarted_17() { return &___mStarted_17; }
	inline void set_mStarted_17(bool value)
	{
		___mStarted_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
