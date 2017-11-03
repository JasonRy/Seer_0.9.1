#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIScrollView>
struct BetterList_1_t3610447890;
// UIProgressBar
struct UIProgressBar_t168062834;
// UIScrollView/OnDragNotification
struct OnDragNotification_t2323474503;
// UnityEngine.Transform
struct Transform_t1659122786;
// UIPanel
struct UIPanel_t295209936;
// UICenterOnChild
struct UICenterOnChild_t854454836;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UIScrollView_Movement2769919992.h"
#include "AssemblyU2DCSharp_UIScrollView_DragEffect2340818158.h"
#include "AssemblyU2DCSharp_UIScrollView_ShowCondition3198502133.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot240933195.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIScrollView
struct  UIScrollView_t2113479878  : public MonoBehaviour_t667441552
{
public:
	// UIScrollView/Movement UIScrollView::movement
	int32_t ___movement_3;
	// UIScrollView/DragEffect UIScrollView::dragEffect
	int32_t ___dragEffect_4;
	// System.Boolean UIScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// System.Boolean UIScrollView::constrainOnDrag
	bool ___constrainOnDrag_6;
	// System.Boolean UIScrollView::disableDragIfFits
	bool ___disableDragIfFits_7;
	// System.Boolean UIScrollView::smoothDragStart
	bool ___smoothDragStart_8;
	// System.Boolean UIScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_9;
	// System.Single UIScrollView::scrollWheelFactor
	float ___scrollWheelFactor_10;
	// System.Single UIScrollView::momentumAmount
	float ___momentumAmount_11;
	// System.Single UIScrollView::dampenStrength
	float ___dampenStrength_12;
	// UIProgressBar UIScrollView::horizontalScrollBar
	UIProgressBar_t168062834 * ___horizontalScrollBar_13;
	// UIProgressBar UIScrollView::verticalScrollBar
	UIProgressBar_t168062834 * ___verticalScrollBar_14;
	// UIScrollView/ShowCondition UIScrollView::showScrollBars
	int32_t ___showScrollBars_15;
	// UnityEngine.Vector2 UIScrollView::customMovement
	Vector2_t4282066565  ___customMovement_16;
	// UIWidget/Pivot UIScrollView::contentPivot
	int32_t ___contentPivot_17;
	// UIScrollView/OnDragNotification UIScrollView::onDragStarted
	OnDragNotification_t2323474503 * ___onDragStarted_18;
	// UIScrollView/OnDragNotification UIScrollView::onDragFinished
	OnDragNotification_t2323474503 * ___onDragFinished_19;
	// UIScrollView/OnDragNotification UIScrollView::onMomentumMove
	OnDragNotification_t2323474503 * ___onMomentumMove_20;
	// UIScrollView/OnDragNotification UIScrollView::onStoppedMoving
	OnDragNotification_t2323474503 * ___onStoppedMoving_21;
	// UnityEngine.Vector3 UIScrollView::scale
	Vector3_t4282066566  ___scale_22;
	// UnityEngine.Vector2 UIScrollView::relativePositionOnReset
	Vector2_t4282066565  ___relativePositionOnReset_23;
	// UnityEngine.Transform UIScrollView::mTrans
	Transform_t1659122786 * ___mTrans_24;
	// UIPanel UIScrollView::mPanel
	UIPanel_t295209936 * ___mPanel_25;
	// UnityEngine.Plane UIScrollView::mPlane
	Plane_t4206452690  ___mPlane_26;
	// UnityEngine.Vector3 UIScrollView::mLastPos
	Vector3_t4282066566  ___mLastPos_27;
	// System.Boolean UIScrollView::mPressed
	bool ___mPressed_28;
	// UnityEngine.Vector3 UIScrollView::mMomentum
	Vector3_t4282066566  ___mMomentum_29;
	// System.Single UIScrollView::mScroll
	float ___mScroll_30;
	// UnityEngine.Bounds UIScrollView::mBounds
	Bounds_t2711641849  ___mBounds_31;
	// System.Boolean UIScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_32;
	// System.Boolean UIScrollView::mShouldMove
	bool ___mShouldMove_33;
	// System.Boolean UIScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_34;
	// System.Int32 UIScrollView::mDragID
	int32_t ___mDragID_35;
	// UnityEngine.Vector2 UIScrollView::mDragStartOffset
	Vector2_t4282066565  ___mDragStartOffset_36;
	// System.Boolean UIScrollView::mDragStarted
	bool ___mDragStarted_37;
	// System.Boolean UIScrollView::mStarted
	bool ___mStarted_38;
	// UICenterOnChild UIScrollView::centerOnChild
	UICenterOnChild_t854454836 * ___centerOnChild_39;

public:
	inline static int32_t get_offset_of_movement_3() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___movement_3)); }
	inline int32_t get_movement_3() const { return ___movement_3; }
	inline int32_t* get_address_of_movement_3() { return &___movement_3; }
	inline void set_movement_3(int32_t value)
	{
		___movement_3 = value;
	}

	inline static int32_t get_offset_of_dragEffect_4() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___dragEffect_4)); }
	inline int32_t get_dragEffect_4() const { return ___dragEffect_4; }
	inline int32_t* get_address_of_dragEffect_4() { return &___dragEffect_4; }
	inline void set_dragEffect_4(int32_t value)
	{
		___dragEffect_4 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_5() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___restrictWithinPanel_5)); }
	inline bool get_restrictWithinPanel_5() const { return ___restrictWithinPanel_5; }
	inline bool* get_address_of_restrictWithinPanel_5() { return &___restrictWithinPanel_5; }
	inline void set_restrictWithinPanel_5(bool value)
	{
		___restrictWithinPanel_5 = value;
	}

	inline static int32_t get_offset_of_constrainOnDrag_6() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___constrainOnDrag_6)); }
	inline bool get_constrainOnDrag_6() const { return ___constrainOnDrag_6; }
	inline bool* get_address_of_constrainOnDrag_6() { return &___constrainOnDrag_6; }
	inline void set_constrainOnDrag_6(bool value)
	{
		___constrainOnDrag_6 = value;
	}

	inline static int32_t get_offset_of_disableDragIfFits_7() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___disableDragIfFits_7)); }
	inline bool get_disableDragIfFits_7() const { return ___disableDragIfFits_7; }
	inline bool* get_address_of_disableDragIfFits_7() { return &___disableDragIfFits_7; }
	inline void set_disableDragIfFits_7(bool value)
	{
		___disableDragIfFits_7 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_8() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___smoothDragStart_8)); }
	inline bool get_smoothDragStart_8() const { return ___smoothDragStart_8; }
	inline bool* get_address_of_smoothDragStart_8() { return &___smoothDragStart_8; }
	inline void set_smoothDragStart_8(bool value)
	{
		___smoothDragStart_8 = value;
	}

	inline static int32_t get_offset_of_iOSDragEmulation_9() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___iOSDragEmulation_9)); }
	inline bool get_iOSDragEmulation_9() const { return ___iOSDragEmulation_9; }
	inline bool* get_address_of_iOSDragEmulation_9() { return &___iOSDragEmulation_9; }
	inline void set_iOSDragEmulation_9(bool value)
	{
		___iOSDragEmulation_9 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_10() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___scrollWheelFactor_10)); }
	inline float get_scrollWheelFactor_10() const { return ___scrollWheelFactor_10; }
	inline float* get_address_of_scrollWheelFactor_10() { return &___scrollWheelFactor_10; }
	inline void set_scrollWheelFactor_10(float value)
	{
		___scrollWheelFactor_10 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_11() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___momentumAmount_11)); }
	inline float get_momentumAmount_11() const { return ___momentumAmount_11; }
	inline float* get_address_of_momentumAmount_11() { return &___momentumAmount_11; }
	inline void set_momentumAmount_11(float value)
	{
		___momentumAmount_11 = value;
	}

	inline static int32_t get_offset_of_dampenStrength_12() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___dampenStrength_12)); }
	inline float get_dampenStrength_12() const { return ___dampenStrength_12; }
	inline float* get_address_of_dampenStrength_12() { return &___dampenStrength_12; }
	inline void set_dampenStrength_12(float value)
	{
		___dampenStrength_12 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_13() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___horizontalScrollBar_13)); }
	inline UIProgressBar_t168062834 * get_horizontalScrollBar_13() const { return ___horizontalScrollBar_13; }
	inline UIProgressBar_t168062834 ** get_address_of_horizontalScrollBar_13() { return &___horizontalScrollBar_13; }
	inline void set_horizontalScrollBar_13(UIProgressBar_t168062834 * value)
	{
		___horizontalScrollBar_13 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_13, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_14() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___verticalScrollBar_14)); }
	inline UIProgressBar_t168062834 * get_verticalScrollBar_14() const { return ___verticalScrollBar_14; }
	inline UIProgressBar_t168062834 ** get_address_of_verticalScrollBar_14() { return &___verticalScrollBar_14; }
	inline void set_verticalScrollBar_14(UIProgressBar_t168062834 * value)
	{
		___verticalScrollBar_14 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_14, value);
	}

	inline static int32_t get_offset_of_showScrollBars_15() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___showScrollBars_15)); }
	inline int32_t get_showScrollBars_15() const { return ___showScrollBars_15; }
	inline int32_t* get_address_of_showScrollBars_15() { return &___showScrollBars_15; }
	inline void set_showScrollBars_15(int32_t value)
	{
		___showScrollBars_15 = value;
	}

	inline static int32_t get_offset_of_customMovement_16() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___customMovement_16)); }
	inline Vector2_t4282066565  get_customMovement_16() const { return ___customMovement_16; }
	inline Vector2_t4282066565 * get_address_of_customMovement_16() { return &___customMovement_16; }
	inline void set_customMovement_16(Vector2_t4282066565  value)
	{
		___customMovement_16 = value;
	}

	inline static int32_t get_offset_of_contentPivot_17() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___contentPivot_17)); }
	inline int32_t get_contentPivot_17() const { return ___contentPivot_17; }
	inline int32_t* get_address_of_contentPivot_17() { return &___contentPivot_17; }
	inline void set_contentPivot_17(int32_t value)
	{
		___contentPivot_17 = value;
	}

	inline static int32_t get_offset_of_onDragStarted_18() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onDragStarted_18)); }
	inline OnDragNotification_t2323474503 * get_onDragStarted_18() const { return ___onDragStarted_18; }
	inline OnDragNotification_t2323474503 ** get_address_of_onDragStarted_18() { return &___onDragStarted_18; }
	inline void set_onDragStarted_18(OnDragNotification_t2323474503 * value)
	{
		___onDragStarted_18 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStarted_18, value);
	}

	inline static int32_t get_offset_of_onDragFinished_19() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onDragFinished_19)); }
	inline OnDragNotification_t2323474503 * get_onDragFinished_19() const { return ___onDragFinished_19; }
	inline OnDragNotification_t2323474503 ** get_address_of_onDragFinished_19() { return &___onDragFinished_19; }
	inline void set_onDragFinished_19(OnDragNotification_t2323474503 * value)
	{
		___onDragFinished_19 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_19, value);
	}

	inline static int32_t get_offset_of_onMomentumMove_20() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onMomentumMove_20)); }
	inline OnDragNotification_t2323474503 * get_onMomentumMove_20() const { return ___onMomentumMove_20; }
	inline OnDragNotification_t2323474503 ** get_address_of_onMomentumMove_20() { return &___onMomentumMove_20; }
	inline void set_onMomentumMove_20(OnDragNotification_t2323474503 * value)
	{
		___onMomentumMove_20 = value;
		Il2CppCodeGenWriteBarrier(&___onMomentumMove_20, value);
	}

	inline static int32_t get_offset_of_onStoppedMoving_21() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onStoppedMoving_21)); }
	inline OnDragNotification_t2323474503 * get_onStoppedMoving_21() const { return ___onStoppedMoving_21; }
	inline OnDragNotification_t2323474503 ** get_address_of_onStoppedMoving_21() { return &___onStoppedMoving_21; }
	inline void set_onStoppedMoving_21(OnDragNotification_t2323474503 * value)
	{
		___onStoppedMoving_21 = value;
		Il2CppCodeGenWriteBarrier(&___onStoppedMoving_21, value);
	}

	inline static int32_t get_offset_of_scale_22() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___scale_22)); }
	inline Vector3_t4282066566  get_scale_22() const { return ___scale_22; }
	inline Vector3_t4282066566 * get_address_of_scale_22() { return &___scale_22; }
	inline void set_scale_22(Vector3_t4282066566  value)
	{
		___scale_22 = value;
	}

	inline static int32_t get_offset_of_relativePositionOnReset_23() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___relativePositionOnReset_23)); }
	inline Vector2_t4282066565  get_relativePositionOnReset_23() const { return ___relativePositionOnReset_23; }
	inline Vector2_t4282066565 * get_address_of_relativePositionOnReset_23() { return &___relativePositionOnReset_23; }
	inline void set_relativePositionOnReset_23(Vector2_t4282066565  value)
	{
		___relativePositionOnReset_23 = value;
	}

	inline static int32_t get_offset_of_mTrans_24() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mTrans_24)); }
	inline Transform_t1659122786 * get_mTrans_24() const { return ___mTrans_24; }
	inline Transform_t1659122786 ** get_address_of_mTrans_24() { return &___mTrans_24; }
	inline void set_mTrans_24(Transform_t1659122786 * value)
	{
		___mTrans_24 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_24, value);
	}

	inline static int32_t get_offset_of_mPanel_25() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mPanel_25)); }
	inline UIPanel_t295209936 * get_mPanel_25() const { return ___mPanel_25; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_25() { return &___mPanel_25; }
	inline void set_mPanel_25(UIPanel_t295209936 * value)
	{
		___mPanel_25 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_25, value);
	}

	inline static int32_t get_offset_of_mPlane_26() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mPlane_26)); }
	inline Plane_t4206452690  get_mPlane_26() const { return ___mPlane_26; }
	inline Plane_t4206452690 * get_address_of_mPlane_26() { return &___mPlane_26; }
	inline void set_mPlane_26(Plane_t4206452690  value)
	{
		___mPlane_26 = value;
	}

	inline static int32_t get_offset_of_mLastPos_27() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mLastPos_27)); }
	inline Vector3_t4282066566  get_mLastPos_27() const { return ___mLastPos_27; }
	inline Vector3_t4282066566 * get_address_of_mLastPos_27() { return &___mLastPos_27; }
	inline void set_mLastPos_27(Vector3_t4282066566  value)
	{
		___mLastPos_27 = value;
	}

	inline static int32_t get_offset_of_mPressed_28() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mPressed_28)); }
	inline bool get_mPressed_28() const { return ___mPressed_28; }
	inline bool* get_address_of_mPressed_28() { return &___mPressed_28; }
	inline void set_mPressed_28(bool value)
	{
		___mPressed_28 = value;
	}

	inline static int32_t get_offset_of_mMomentum_29() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mMomentum_29)); }
	inline Vector3_t4282066566  get_mMomentum_29() const { return ___mMomentum_29; }
	inline Vector3_t4282066566 * get_address_of_mMomentum_29() { return &___mMomentum_29; }
	inline void set_mMomentum_29(Vector3_t4282066566  value)
	{
		___mMomentum_29 = value;
	}

	inline static int32_t get_offset_of_mScroll_30() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mScroll_30)); }
	inline float get_mScroll_30() const { return ___mScroll_30; }
	inline float* get_address_of_mScroll_30() { return &___mScroll_30; }
	inline void set_mScroll_30(float value)
	{
		___mScroll_30 = value;
	}

	inline static int32_t get_offset_of_mBounds_31() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mBounds_31)); }
	inline Bounds_t2711641849  get_mBounds_31() const { return ___mBounds_31; }
	inline Bounds_t2711641849 * get_address_of_mBounds_31() { return &___mBounds_31; }
	inline void set_mBounds_31(Bounds_t2711641849  value)
	{
		___mBounds_31 = value;
	}

	inline static int32_t get_offset_of_mCalculatedBounds_32() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mCalculatedBounds_32)); }
	inline bool get_mCalculatedBounds_32() const { return ___mCalculatedBounds_32; }
	inline bool* get_address_of_mCalculatedBounds_32() { return &___mCalculatedBounds_32; }
	inline void set_mCalculatedBounds_32(bool value)
	{
		___mCalculatedBounds_32 = value;
	}

	inline static int32_t get_offset_of_mShouldMove_33() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mShouldMove_33)); }
	inline bool get_mShouldMove_33() const { return ___mShouldMove_33; }
	inline bool* get_address_of_mShouldMove_33() { return &___mShouldMove_33; }
	inline void set_mShouldMove_33(bool value)
	{
		___mShouldMove_33 = value;
	}

	inline static int32_t get_offset_of_mIgnoreCallbacks_34() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mIgnoreCallbacks_34)); }
	inline bool get_mIgnoreCallbacks_34() const { return ___mIgnoreCallbacks_34; }
	inline bool* get_address_of_mIgnoreCallbacks_34() { return &___mIgnoreCallbacks_34; }
	inline void set_mIgnoreCallbacks_34(bool value)
	{
		___mIgnoreCallbacks_34 = value;
	}

	inline static int32_t get_offset_of_mDragID_35() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mDragID_35)); }
	inline int32_t get_mDragID_35() const { return ___mDragID_35; }
	inline int32_t* get_address_of_mDragID_35() { return &___mDragID_35; }
	inline void set_mDragID_35(int32_t value)
	{
		___mDragID_35 = value;
	}

	inline static int32_t get_offset_of_mDragStartOffset_36() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mDragStartOffset_36)); }
	inline Vector2_t4282066565  get_mDragStartOffset_36() const { return ___mDragStartOffset_36; }
	inline Vector2_t4282066565 * get_address_of_mDragStartOffset_36() { return &___mDragStartOffset_36; }
	inline void set_mDragStartOffset_36(Vector2_t4282066565  value)
	{
		___mDragStartOffset_36 = value;
	}

	inline static int32_t get_offset_of_mDragStarted_37() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mDragStarted_37)); }
	inline bool get_mDragStarted_37() const { return ___mDragStarted_37; }
	inline bool* get_address_of_mDragStarted_37() { return &___mDragStarted_37; }
	inline void set_mDragStarted_37(bool value)
	{
		___mDragStarted_37 = value;
	}

	inline static int32_t get_offset_of_mStarted_38() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mStarted_38)); }
	inline bool get_mStarted_38() const { return ___mStarted_38; }
	inline bool* get_address_of_mStarted_38() { return &___mStarted_38; }
	inline void set_mStarted_38(bool value)
	{
		___mStarted_38 = value;
	}

	inline static int32_t get_offset_of_centerOnChild_39() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___centerOnChild_39)); }
	inline UICenterOnChild_t854454836 * get_centerOnChild_39() const { return ___centerOnChild_39; }
	inline UICenterOnChild_t854454836 ** get_address_of_centerOnChild_39() { return &___centerOnChild_39; }
	inline void set_centerOnChild_39(UICenterOnChild_t854454836 * value)
	{
		___centerOnChild_39 = value;
		Il2CppCodeGenWriteBarrier(&___centerOnChild_39, value);
	}
};

struct UIScrollView_t2113479878_StaticFields
{
public:
	// BetterList`1<UIScrollView> UIScrollView::list
	BetterList_1_t3610447890 * ___list_2;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878_StaticFields, ___list_2)); }
	inline BetterList_1_t3610447890 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3610447890 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3610447890 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
