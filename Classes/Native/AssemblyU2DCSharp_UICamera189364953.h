#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UICamera>
struct BetterList_1_t1686332965;
// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t2745734774;
// UICamera/GetAxisFunc
struct GetAxisFunc_t783615269;
// UICamera/GetAnyKeyFunc
struct GetAnyKeyFunc_t4194451799;
// UICamera/GetMouseDelegate
struct GetMouseDelegate_t2962898474;
// UICamera/GetTouchDelegate
struct GetTouchDelegate_t2925897412;
// UICamera/RemoveTouchDelegate
struct RemoveTouchDelegate_t1357731690;
// UICamera/OnScreenResize
struct OnScreenResize_t3828578773;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t736305828;
// UICamera
struct UICamera_t189364953;
// UnityEngine.Camera
struct Camera_t2727095145;
// UICamera/OnSchemeChange
struct OnSchemeChange_t2731530058;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2057376333;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UICamera/VoidDelegate
struct VoidDelegate_t3135042255;
// UICamera/BoolDelegate
struct BoolDelegate_t2094540325;
// UICamera/FloatDelegate
struct FloatDelegate_t1146521387;
// UICamera/VectorDelegate
struct VectorDelegate_t2747913726;
// UICamera/ObjectDelegate
struct ObjectDelegate_t3703364602;
// UICamera/KeyCodeDelegate
struct KeyCodeDelegate_t4120455995;
// UICamera/MoveDelegate
struct MoveDelegate_t1906135052;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t546398688;
// System.Collections.Generic.List`1<UICamera/MouseOrTouch>
struct List_1_t3425561885;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t2642582481;
// UICamera/GetTouchCountCallback
struct GetTouchCountCallback_t3435560085;
// UICamera/GetTouchCallback
struct GetTouchCallback_t1934354820;
// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t1687333339;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UICamera_EventType3387030814.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "AssemblyU2DCSharp_UICamera_ProcessEventsIn1326893143.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme2923531404.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry1145614469.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera
struct  UICamera_t189364953  : public MonoBehaviour_t667441552
{
public:
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType_12;
	// System.Boolean UICamera::eventsGoToColliders
	bool ___eventsGoToColliders_13;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t3236759763  ___eventReceiverMask_14;
	// UICamera/ProcessEventsIn UICamera::processEventsIn
	int32_t ___processEventsIn_15;
	// System.Boolean UICamera::debug
	bool ___debug_16;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_17;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_18;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_19;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_20;
	// System.Boolean UICamera::useController
	bool ___useController_21;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_22;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_23;
	// System.Boolean UICamera::longPressTooltip
	bool ___longPressTooltip_24;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_25;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_26;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_27;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_28;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_29;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_30;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_31;
	// System.String UICamera::horizontalPanAxisName
	String_t* ___horizontalPanAxisName_32;
	// System.String UICamera::verticalPanAxisName
	String_t* ___verticalPanAxisName_33;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_34;
	// System.Boolean UICamera::commandClick
	bool ___commandClick_35;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_36;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_37;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_38;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_39;
	// System.Boolean UICamera::autoHideCursor
	bool ___autoHideCursor_40;
	// UnityEngine.Camera UICamera::mCam
	Camera_t2727095145 * ___mCam_83;
	// System.Single UICamera::mNextRaycast
	float ___mNextRaycast_85;

public:
	inline static int32_t get_offset_of_eventType_12() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___eventType_12)); }
	inline int32_t get_eventType_12() const { return ___eventType_12; }
	inline int32_t* get_address_of_eventType_12() { return &___eventType_12; }
	inline void set_eventType_12(int32_t value)
	{
		___eventType_12 = value;
	}

	inline static int32_t get_offset_of_eventsGoToColliders_13() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___eventsGoToColliders_13)); }
	inline bool get_eventsGoToColliders_13() const { return ___eventsGoToColliders_13; }
	inline bool* get_address_of_eventsGoToColliders_13() { return &___eventsGoToColliders_13; }
	inline void set_eventsGoToColliders_13(bool value)
	{
		___eventsGoToColliders_13 = value;
	}

	inline static int32_t get_offset_of_eventReceiverMask_14() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___eventReceiverMask_14)); }
	inline LayerMask_t3236759763  get_eventReceiverMask_14() const { return ___eventReceiverMask_14; }
	inline LayerMask_t3236759763 * get_address_of_eventReceiverMask_14() { return &___eventReceiverMask_14; }
	inline void set_eventReceiverMask_14(LayerMask_t3236759763  value)
	{
		___eventReceiverMask_14 = value;
	}

	inline static int32_t get_offset_of_processEventsIn_15() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___processEventsIn_15)); }
	inline int32_t get_processEventsIn_15() const { return ___processEventsIn_15; }
	inline int32_t* get_address_of_processEventsIn_15() { return &___processEventsIn_15; }
	inline void set_processEventsIn_15(int32_t value)
	{
		___processEventsIn_15 = value;
	}

	inline static int32_t get_offset_of_debug_16() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___debug_16)); }
	inline bool get_debug_16() const { return ___debug_16; }
	inline bool* get_address_of_debug_16() { return &___debug_16; }
	inline void set_debug_16(bool value)
	{
		___debug_16 = value;
	}

	inline static int32_t get_offset_of_useMouse_17() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useMouse_17)); }
	inline bool get_useMouse_17() const { return ___useMouse_17; }
	inline bool* get_address_of_useMouse_17() { return &___useMouse_17; }
	inline void set_useMouse_17(bool value)
	{
		___useMouse_17 = value;
	}

	inline static int32_t get_offset_of_useTouch_18() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useTouch_18)); }
	inline bool get_useTouch_18() const { return ___useTouch_18; }
	inline bool* get_address_of_useTouch_18() { return &___useTouch_18; }
	inline void set_useTouch_18(bool value)
	{
		___useTouch_18 = value;
	}

	inline static int32_t get_offset_of_allowMultiTouch_19() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___allowMultiTouch_19)); }
	inline bool get_allowMultiTouch_19() const { return ___allowMultiTouch_19; }
	inline bool* get_address_of_allowMultiTouch_19() { return &___allowMultiTouch_19; }
	inline void set_allowMultiTouch_19(bool value)
	{
		___allowMultiTouch_19 = value;
	}

	inline static int32_t get_offset_of_useKeyboard_20() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useKeyboard_20)); }
	inline bool get_useKeyboard_20() const { return ___useKeyboard_20; }
	inline bool* get_address_of_useKeyboard_20() { return &___useKeyboard_20; }
	inline void set_useKeyboard_20(bool value)
	{
		___useKeyboard_20 = value;
	}

	inline static int32_t get_offset_of_useController_21() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___useController_21)); }
	inline bool get_useController_21() const { return ___useController_21; }
	inline bool* get_address_of_useController_21() { return &___useController_21; }
	inline void set_useController_21(bool value)
	{
		___useController_21 = value;
	}

	inline static int32_t get_offset_of_stickyTooltip_22() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___stickyTooltip_22)); }
	inline bool get_stickyTooltip_22() const { return ___stickyTooltip_22; }
	inline bool* get_address_of_stickyTooltip_22() { return &___stickyTooltip_22; }
	inline void set_stickyTooltip_22(bool value)
	{
		___stickyTooltip_22 = value;
	}

	inline static int32_t get_offset_of_tooltipDelay_23() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___tooltipDelay_23)); }
	inline float get_tooltipDelay_23() const { return ___tooltipDelay_23; }
	inline float* get_address_of_tooltipDelay_23() { return &___tooltipDelay_23; }
	inline void set_tooltipDelay_23(float value)
	{
		___tooltipDelay_23 = value;
	}

	inline static int32_t get_offset_of_longPressTooltip_24() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___longPressTooltip_24)); }
	inline bool get_longPressTooltip_24() const { return ___longPressTooltip_24; }
	inline bool* get_address_of_longPressTooltip_24() { return &___longPressTooltip_24; }
	inline void set_longPressTooltip_24(bool value)
	{
		___longPressTooltip_24 = value;
	}

	inline static int32_t get_offset_of_mouseDragThreshold_25() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mouseDragThreshold_25)); }
	inline float get_mouseDragThreshold_25() const { return ___mouseDragThreshold_25; }
	inline float* get_address_of_mouseDragThreshold_25() { return &___mouseDragThreshold_25; }
	inline void set_mouseDragThreshold_25(float value)
	{
		___mouseDragThreshold_25 = value;
	}

	inline static int32_t get_offset_of_mouseClickThreshold_26() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mouseClickThreshold_26)); }
	inline float get_mouseClickThreshold_26() const { return ___mouseClickThreshold_26; }
	inline float* get_address_of_mouseClickThreshold_26() { return &___mouseClickThreshold_26; }
	inline void set_mouseClickThreshold_26(float value)
	{
		___mouseClickThreshold_26 = value;
	}

	inline static int32_t get_offset_of_touchDragThreshold_27() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___touchDragThreshold_27)); }
	inline float get_touchDragThreshold_27() const { return ___touchDragThreshold_27; }
	inline float* get_address_of_touchDragThreshold_27() { return &___touchDragThreshold_27; }
	inline void set_touchDragThreshold_27(float value)
	{
		___touchDragThreshold_27 = value;
	}

	inline static int32_t get_offset_of_touchClickThreshold_28() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___touchClickThreshold_28)); }
	inline float get_touchClickThreshold_28() const { return ___touchClickThreshold_28; }
	inline float* get_address_of_touchClickThreshold_28() { return &___touchClickThreshold_28; }
	inline void set_touchClickThreshold_28(float value)
	{
		___touchClickThreshold_28 = value;
	}

	inline static int32_t get_offset_of_rangeDistance_29() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___rangeDistance_29)); }
	inline float get_rangeDistance_29() const { return ___rangeDistance_29; }
	inline float* get_address_of_rangeDistance_29() { return &___rangeDistance_29; }
	inline void set_rangeDistance_29(float value)
	{
		___rangeDistance_29 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_30() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___horizontalAxisName_30)); }
	inline String_t* get_horizontalAxisName_30() const { return ___horizontalAxisName_30; }
	inline String_t** get_address_of_horizontalAxisName_30() { return &___horizontalAxisName_30; }
	inline void set_horizontalAxisName_30(String_t* value)
	{
		___horizontalAxisName_30 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_30, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_31() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___verticalAxisName_31)); }
	inline String_t* get_verticalAxisName_31() const { return ___verticalAxisName_31; }
	inline String_t** get_address_of_verticalAxisName_31() { return &___verticalAxisName_31; }
	inline void set_verticalAxisName_31(String_t* value)
	{
		___verticalAxisName_31 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_31, value);
	}

	inline static int32_t get_offset_of_horizontalPanAxisName_32() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___horizontalPanAxisName_32)); }
	inline String_t* get_horizontalPanAxisName_32() const { return ___horizontalPanAxisName_32; }
	inline String_t** get_address_of_horizontalPanAxisName_32() { return &___horizontalPanAxisName_32; }
	inline void set_horizontalPanAxisName_32(String_t* value)
	{
		___horizontalPanAxisName_32 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalPanAxisName_32, value);
	}

	inline static int32_t get_offset_of_verticalPanAxisName_33() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___verticalPanAxisName_33)); }
	inline String_t* get_verticalPanAxisName_33() const { return ___verticalPanAxisName_33; }
	inline String_t** get_address_of_verticalPanAxisName_33() { return &___verticalPanAxisName_33; }
	inline void set_verticalPanAxisName_33(String_t* value)
	{
		___verticalPanAxisName_33 = value;
		Il2CppCodeGenWriteBarrier(&___verticalPanAxisName_33, value);
	}

	inline static int32_t get_offset_of_scrollAxisName_34() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___scrollAxisName_34)); }
	inline String_t* get_scrollAxisName_34() const { return ___scrollAxisName_34; }
	inline String_t** get_address_of_scrollAxisName_34() { return &___scrollAxisName_34; }
	inline void set_scrollAxisName_34(String_t* value)
	{
		___scrollAxisName_34 = value;
		Il2CppCodeGenWriteBarrier(&___scrollAxisName_34, value);
	}

	inline static int32_t get_offset_of_commandClick_35() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___commandClick_35)); }
	inline bool get_commandClick_35() const { return ___commandClick_35; }
	inline bool* get_address_of_commandClick_35() { return &___commandClick_35; }
	inline void set_commandClick_35(bool value)
	{
		___commandClick_35 = value;
	}

	inline static int32_t get_offset_of_submitKey0_36() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___submitKey0_36)); }
	inline int32_t get_submitKey0_36() const { return ___submitKey0_36; }
	inline int32_t* get_address_of_submitKey0_36() { return &___submitKey0_36; }
	inline void set_submitKey0_36(int32_t value)
	{
		___submitKey0_36 = value;
	}

	inline static int32_t get_offset_of_submitKey1_37() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___submitKey1_37)); }
	inline int32_t get_submitKey1_37() const { return ___submitKey1_37; }
	inline int32_t* get_address_of_submitKey1_37() { return &___submitKey1_37; }
	inline void set_submitKey1_37(int32_t value)
	{
		___submitKey1_37 = value;
	}

	inline static int32_t get_offset_of_cancelKey0_38() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___cancelKey0_38)); }
	inline int32_t get_cancelKey0_38() const { return ___cancelKey0_38; }
	inline int32_t* get_address_of_cancelKey0_38() { return &___cancelKey0_38; }
	inline void set_cancelKey0_38(int32_t value)
	{
		___cancelKey0_38 = value;
	}

	inline static int32_t get_offset_of_cancelKey1_39() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___cancelKey1_39)); }
	inline int32_t get_cancelKey1_39() const { return ___cancelKey1_39; }
	inline int32_t* get_address_of_cancelKey1_39() { return &___cancelKey1_39; }
	inline void set_cancelKey1_39(int32_t value)
	{
		___cancelKey1_39 = value;
	}

	inline static int32_t get_offset_of_autoHideCursor_40() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___autoHideCursor_40)); }
	inline bool get_autoHideCursor_40() const { return ___autoHideCursor_40; }
	inline bool* get_address_of_autoHideCursor_40() { return &___autoHideCursor_40; }
	inline void set_autoHideCursor_40(bool value)
	{
		___autoHideCursor_40 = value;
	}

	inline static int32_t get_offset_of_mCam_83() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mCam_83)); }
	inline Camera_t2727095145 * get_mCam_83() const { return ___mCam_83; }
	inline Camera_t2727095145 ** get_address_of_mCam_83() { return &___mCam_83; }
	inline void set_mCam_83(Camera_t2727095145 * value)
	{
		___mCam_83 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_83, value);
	}

	inline static int32_t get_offset_of_mNextRaycast_85() { return static_cast<int32_t>(offsetof(UICamera_t189364953, ___mNextRaycast_85)); }
	inline float get_mNextRaycast_85() const { return ___mNextRaycast_85; }
	inline float* get_address_of_mNextRaycast_85() { return &___mNextRaycast_85; }
	inline void set_mNextRaycast_85(float value)
	{
		___mNextRaycast_85 = value;
	}
};

struct UICamera_t189364953_StaticFields
{
public:
	// BetterList`1<UICamera> UICamera::list
	BetterList_1_t1686332965 * ___list_2;
	// UICamera/GetKeyStateFunc UICamera::GetKeyDown
	GetKeyStateFunc_t2745734774 * ___GetKeyDown_3;
	// UICamera/GetKeyStateFunc UICamera::GetKeyUp
	GetKeyStateFunc_t2745734774 * ___GetKeyUp_4;
	// UICamera/GetKeyStateFunc UICamera::GetKey
	GetKeyStateFunc_t2745734774 * ___GetKey_5;
	// UICamera/GetAxisFunc UICamera::GetAxis
	GetAxisFunc_t783615269 * ___GetAxis_6;
	// UICamera/GetAnyKeyFunc UICamera::GetAnyKeyDown
	GetAnyKeyFunc_t4194451799 * ___GetAnyKeyDown_7;
	// UICamera/GetMouseDelegate UICamera::GetMouse
	GetMouseDelegate_t2962898474 * ___GetMouse_8;
	// UICamera/GetTouchDelegate UICamera::GetTouch
	GetTouchDelegate_t2925897412 * ___GetTouch_9;
	// UICamera/RemoveTouchDelegate UICamera::RemoveTouch
	RemoveTouchDelegate_t1357731690 * ___RemoveTouch_10;
	// UICamera/OnScreenResize UICamera::onScreenResize
	OnScreenResize_t3828578773 * ___onScreenResize_11;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t736305828 * ___onCustomInput_41;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_42;
	// System.Boolean UICamera::ignoreAllEvents
	bool ___ignoreAllEvents_43;
	// System.Boolean UICamera::ignoreControllerInput
	bool ___ignoreControllerInput_44;
	// System.Boolean UICamera::mDisableController
	bool ___mDisableController_45;
	// UnityEngine.Vector2 UICamera::mLastPos
	Vector2_t4282066565  ___mLastPos_46;
	// UnityEngine.Vector3 UICamera::lastWorldPosition
	Vector3_t4282066566  ___lastWorldPosition_47;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t4003175726  ___lastHit_48;
	// UICamera UICamera::current
	UICamera_t189364953 * ___current_49;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t2727095145 * ___currentCamera_50;
	// UICamera/OnSchemeChange UICamera::onSchemeChange
	OnSchemeChange_t2731530058 * ___onSchemeChange_51;
	// UICamera/ControlScheme UICamera::mLastScheme
	int32_t ___mLastScheme_52;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_53;
	// UnityEngine.KeyCode UICamera::mCurrentKey
	int32_t ___mCurrentKey_54;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t2057376333 * ___currentTouch_55;
	// System.Boolean UICamera::mInputFocus
	bool ___mInputFocus_56;
	// UnityEngine.GameObject UICamera::mGenericHandler
	GameObject_t3674682005 * ___mGenericHandler_57;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t3674682005 * ___fallThrough_58;
	// UICamera/VoidDelegate UICamera::onClick
	VoidDelegate_t3135042255 * ___onClick_59;
	// UICamera/VoidDelegate UICamera::onDoubleClick
	VoidDelegate_t3135042255 * ___onDoubleClick_60;
	// UICamera/BoolDelegate UICamera::onHover
	BoolDelegate_t2094540325 * ___onHover_61;
	// UICamera/BoolDelegate UICamera::onPress
	BoolDelegate_t2094540325 * ___onPress_62;
	// UICamera/BoolDelegate UICamera::onSelect
	BoolDelegate_t2094540325 * ___onSelect_63;
	// UICamera/FloatDelegate UICamera::onScroll
	FloatDelegate_t1146521387 * ___onScroll_64;
	// UICamera/VectorDelegate UICamera::onDrag
	VectorDelegate_t2747913726 * ___onDrag_65;
	// UICamera/VoidDelegate UICamera::onDragStart
	VoidDelegate_t3135042255 * ___onDragStart_66;
	// UICamera/ObjectDelegate UICamera::onDragOver
	ObjectDelegate_t3703364602 * ___onDragOver_67;
	// UICamera/ObjectDelegate UICamera::onDragOut
	ObjectDelegate_t3703364602 * ___onDragOut_68;
	// UICamera/VoidDelegate UICamera::onDragEnd
	VoidDelegate_t3135042255 * ___onDragEnd_69;
	// UICamera/ObjectDelegate UICamera::onDrop
	ObjectDelegate_t3703364602 * ___onDrop_70;
	// UICamera/KeyCodeDelegate UICamera::onKey
	KeyCodeDelegate_t4120455995 * ___onKey_71;
	// UICamera/KeyCodeDelegate UICamera::onNavigate
	KeyCodeDelegate_t4120455995 * ___onNavigate_72;
	// UICamera/VectorDelegate UICamera::onPan
	VectorDelegate_t2747913726 * ___onPan_73;
	// UICamera/BoolDelegate UICamera::onTooltip
	BoolDelegate_t2094540325 * ___onTooltip_74;
	// UICamera/MoveDelegate UICamera::onMouseMove
	MoveDelegate_t1906135052 * ___onMouseMove_75;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t546398688* ___mMouse_76;
	// UICamera/MouseOrTouch UICamera::controller
	MouseOrTouch_t2057376333 * ___controller_77;
	// System.Collections.Generic.List`1<UICamera/MouseOrTouch> UICamera::activeTouches
	List_1_t3425561885 * ___activeTouches_78;
	// System.Collections.Generic.List`1<System.Int32> UICamera::mTouchIDs
	List_1_t2522024052 * ___mTouchIDs_79;
	// System.Int32 UICamera::mWidth
	int32_t ___mWidth_80;
	// System.Int32 UICamera::mHeight
	int32_t ___mHeight_81;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t3674682005 * ___mTooltip_82;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_84;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_86;
	// UnityEngine.GameObject UICamera::mRayHitObject
	GameObject_t3674682005 * ___mRayHitObject_87;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t3674682005 * ___mHover_88;
	// UnityEngine.GameObject UICamera::mSelected
	GameObject_t3674682005 * ___mSelected_89;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t1145614469  ___mHit_90;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t2642582481 * ___mHits_91;
	// UnityEngine.Plane UICamera::m2DPlane
	Plane_t4206452690  ___m2DPlane_92;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_93;
	// System.Int32 UICamera::mNotifying
	int32_t ___mNotifying_94;
	// System.Boolean UICamera::mUsingTouchEvents
	bool ___mUsingTouchEvents_95;
	// UICamera/GetTouchCountCallback UICamera::GetInputTouchCount
	GetTouchCountCallback_t3435560085 * ___GetInputTouchCount_96;
	// UICamera/GetTouchCallback UICamera::GetInputTouch
	GetTouchCallback_t1934354820 * ___GetInputTouch_97;
	// UICamera/GetKeyStateFunc UICamera::<>f__am$cache60
	GetKeyStateFunc_t2745734774 * ___U3CU3Ef__amU24cache60_98;
	// UICamera/GetKeyStateFunc UICamera::<>f__am$cache61
	GetKeyStateFunc_t2745734774 * ___U3CU3Ef__amU24cache61_99;
	// UICamera/GetKeyStateFunc UICamera::<>f__am$cache62
	GetKeyStateFunc_t2745734774 * ___U3CU3Ef__amU24cache62_100;
	// UICamera/GetAxisFunc UICamera::<>f__am$cache63
	GetAxisFunc_t783615269 * ___U3CU3Ef__amU24cache63_101;
	// UICamera/GetMouseDelegate UICamera::<>f__am$cache64
	GetMouseDelegate_t2962898474 * ___U3CU3Ef__amU24cache64_102;
	// UICamera/GetTouchDelegate UICamera::<>f__am$cache65
	GetTouchDelegate_t2925897412 * ___U3CU3Ef__amU24cache65_103;
	// UICamera/RemoveTouchDelegate UICamera::<>f__am$cache66
	RemoveTouchDelegate_t1357731690 * ___U3CU3Ef__amU24cache66_104;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache67
	CompareFunc_t1687333339 * ___U3CU3Ef__amU24cache67_105;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache68
	CompareFunc_t1687333339 * ___U3CU3Ef__amU24cache68_106;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___list_2)); }
	inline BetterList_1_t1686332965 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1686332965 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1686332965 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_GetKeyDown_3() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetKeyDown_3)); }
	inline GetKeyStateFunc_t2745734774 * get_GetKeyDown_3() const { return ___GetKeyDown_3; }
	inline GetKeyStateFunc_t2745734774 ** get_address_of_GetKeyDown_3() { return &___GetKeyDown_3; }
	inline void set_GetKeyDown_3(GetKeyStateFunc_t2745734774 * value)
	{
		___GetKeyDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___GetKeyDown_3, value);
	}

	inline static int32_t get_offset_of_GetKeyUp_4() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetKeyUp_4)); }
	inline GetKeyStateFunc_t2745734774 * get_GetKeyUp_4() const { return ___GetKeyUp_4; }
	inline GetKeyStateFunc_t2745734774 ** get_address_of_GetKeyUp_4() { return &___GetKeyUp_4; }
	inline void set_GetKeyUp_4(GetKeyStateFunc_t2745734774 * value)
	{
		___GetKeyUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___GetKeyUp_4, value);
	}

	inline static int32_t get_offset_of_GetKey_5() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetKey_5)); }
	inline GetKeyStateFunc_t2745734774 * get_GetKey_5() const { return ___GetKey_5; }
	inline GetKeyStateFunc_t2745734774 ** get_address_of_GetKey_5() { return &___GetKey_5; }
	inline void set_GetKey_5(GetKeyStateFunc_t2745734774 * value)
	{
		___GetKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___GetKey_5, value);
	}

	inline static int32_t get_offset_of_GetAxis_6() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetAxis_6)); }
	inline GetAxisFunc_t783615269 * get_GetAxis_6() const { return ___GetAxis_6; }
	inline GetAxisFunc_t783615269 ** get_address_of_GetAxis_6() { return &___GetAxis_6; }
	inline void set_GetAxis_6(GetAxisFunc_t783615269 * value)
	{
		___GetAxis_6 = value;
		Il2CppCodeGenWriteBarrier(&___GetAxis_6, value);
	}

	inline static int32_t get_offset_of_GetAnyKeyDown_7() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetAnyKeyDown_7)); }
	inline GetAnyKeyFunc_t4194451799 * get_GetAnyKeyDown_7() const { return ___GetAnyKeyDown_7; }
	inline GetAnyKeyFunc_t4194451799 ** get_address_of_GetAnyKeyDown_7() { return &___GetAnyKeyDown_7; }
	inline void set_GetAnyKeyDown_7(GetAnyKeyFunc_t4194451799 * value)
	{
		___GetAnyKeyDown_7 = value;
		Il2CppCodeGenWriteBarrier(&___GetAnyKeyDown_7, value);
	}

	inline static int32_t get_offset_of_GetMouse_8() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetMouse_8)); }
	inline GetMouseDelegate_t2962898474 * get_GetMouse_8() const { return ___GetMouse_8; }
	inline GetMouseDelegate_t2962898474 ** get_address_of_GetMouse_8() { return &___GetMouse_8; }
	inline void set_GetMouse_8(GetMouseDelegate_t2962898474 * value)
	{
		___GetMouse_8 = value;
		Il2CppCodeGenWriteBarrier(&___GetMouse_8, value);
	}

	inline static int32_t get_offset_of_GetTouch_9() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetTouch_9)); }
	inline GetTouchDelegate_t2925897412 * get_GetTouch_9() const { return ___GetTouch_9; }
	inline GetTouchDelegate_t2925897412 ** get_address_of_GetTouch_9() { return &___GetTouch_9; }
	inline void set_GetTouch_9(GetTouchDelegate_t2925897412 * value)
	{
		___GetTouch_9 = value;
		Il2CppCodeGenWriteBarrier(&___GetTouch_9, value);
	}

	inline static int32_t get_offset_of_RemoveTouch_10() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___RemoveTouch_10)); }
	inline RemoveTouchDelegate_t1357731690 * get_RemoveTouch_10() const { return ___RemoveTouch_10; }
	inline RemoveTouchDelegate_t1357731690 ** get_address_of_RemoveTouch_10() { return &___RemoveTouch_10; }
	inline void set_RemoveTouch_10(RemoveTouchDelegate_t1357731690 * value)
	{
		___RemoveTouch_10 = value;
		Il2CppCodeGenWriteBarrier(&___RemoveTouch_10, value);
	}

	inline static int32_t get_offset_of_onScreenResize_11() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onScreenResize_11)); }
	inline OnScreenResize_t3828578773 * get_onScreenResize_11() const { return ___onScreenResize_11; }
	inline OnScreenResize_t3828578773 ** get_address_of_onScreenResize_11() { return &___onScreenResize_11; }
	inline void set_onScreenResize_11(OnScreenResize_t3828578773 * value)
	{
		___onScreenResize_11 = value;
		Il2CppCodeGenWriteBarrier(&___onScreenResize_11, value);
	}

	inline static int32_t get_offset_of_onCustomInput_41() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onCustomInput_41)); }
	inline OnCustomInput_t736305828 * get_onCustomInput_41() const { return ___onCustomInput_41; }
	inline OnCustomInput_t736305828 ** get_address_of_onCustomInput_41() { return &___onCustomInput_41; }
	inline void set_onCustomInput_41(OnCustomInput_t736305828 * value)
	{
		___onCustomInput_41 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomInput_41, value);
	}

	inline static int32_t get_offset_of_showTooltips_42() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___showTooltips_42)); }
	inline bool get_showTooltips_42() const { return ___showTooltips_42; }
	inline bool* get_address_of_showTooltips_42() { return &___showTooltips_42; }
	inline void set_showTooltips_42(bool value)
	{
		___showTooltips_42 = value;
	}

	inline static int32_t get_offset_of_ignoreAllEvents_43() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___ignoreAllEvents_43)); }
	inline bool get_ignoreAllEvents_43() const { return ___ignoreAllEvents_43; }
	inline bool* get_address_of_ignoreAllEvents_43() { return &___ignoreAllEvents_43; }
	inline void set_ignoreAllEvents_43(bool value)
	{
		___ignoreAllEvents_43 = value;
	}

	inline static int32_t get_offset_of_ignoreControllerInput_44() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___ignoreControllerInput_44)); }
	inline bool get_ignoreControllerInput_44() const { return ___ignoreControllerInput_44; }
	inline bool* get_address_of_ignoreControllerInput_44() { return &___ignoreControllerInput_44; }
	inline void set_ignoreControllerInput_44(bool value)
	{
		___ignoreControllerInput_44 = value;
	}

	inline static int32_t get_offset_of_mDisableController_45() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mDisableController_45)); }
	inline bool get_mDisableController_45() const { return ___mDisableController_45; }
	inline bool* get_address_of_mDisableController_45() { return &___mDisableController_45; }
	inline void set_mDisableController_45(bool value)
	{
		___mDisableController_45 = value;
	}

	inline static int32_t get_offset_of_mLastPos_46() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mLastPos_46)); }
	inline Vector2_t4282066565  get_mLastPos_46() const { return ___mLastPos_46; }
	inline Vector2_t4282066565 * get_address_of_mLastPos_46() { return &___mLastPos_46; }
	inline void set_mLastPos_46(Vector2_t4282066565  value)
	{
		___mLastPos_46 = value;
	}

	inline static int32_t get_offset_of_lastWorldPosition_47() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___lastWorldPosition_47)); }
	inline Vector3_t4282066566  get_lastWorldPosition_47() const { return ___lastWorldPosition_47; }
	inline Vector3_t4282066566 * get_address_of_lastWorldPosition_47() { return &___lastWorldPosition_47; }
	inline void set_lastWorldPosition_47(Vector3_t4282066566  value)
	{
		___lastWorldPosition_47 = value;
	}

	inline static int32_t get_offset_of_lastHit_48() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___lastHit_48)); }
	inline RaycastHit_t4003175726  get_lastHit_48() const { return ___lastHit_48; }
	inline RaycastHit_t4003175726 * get_address_of_lastHit_48() { return &___lastHit_48; }
	inline void set_lastHit_48(RaycastHit_t4003175726  value)
	{
		___lastHit_48 = value;
	}

	inline static int32_t get_offset_of_current_49() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___current_49)); }
	inline UICamera_t189364953 * get_current_49() const { return ___current_49; }
	inline UICamera_t189364953 ** get_address_of_current_49() { return &___current_49; }
	inline void set_current_49(UICamera_t189364953 * value)
	{
		___current_49 = value;
		Il2CppCodeGenWriteBarrier(&___current_49, value);
	}

	inline static int32_t get_offset_of_currentCamera_50() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentCamera_50)); }
	inline Camera_t2727095145 * get_currentCamera_50() const { return ___currentCamera_50; }
	inline Camera_t2727095145 ** get_address_of_currentCamera_50() { return &___currentCamera_50; }
	inline void set_currentCamera_50(Camera_t2727095145 * value)
	{
		___currentCamera_50 = value;
		Il2CppCodeGenWriteBarrier(&___currentCamera_50, value);
	}

	inline static int32_t get_offset_of_onSchemeChange_51() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onSchemeChange_51)); }
	inline OnSchemeChange_t2731530058 * get_onSchemeChange_51() const { return ___onSchemeChange_51; }
	inline OnSchemeChange_t2731530058 ** get_address_of_onSchemeChange_51() { return &___onSchemeChange_51; }
	inline void set_onSchemeChange_51(OnSchemeChange_t2731530058 * value)
	{
		___onSchemeChange_51 = value;
		Il2CppCodeGenWriteBarrier(&___onSchemeChange_51, value);
	}

	inline static int32_t get_offset_of_mLastScheme_52() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mLastScheme_52)); }
	inline int32_t get_mLastScheme_52() const { return ___mLastScheme_52; }
	inline int32_t* get_address_of_mLastScheme_52() { return &___mLastScheme_52; }
	inline void set_mLastScheme_52(int32_t value)
	{
		___mLastScheme_52 = value;
	}

	inline static int32_t get_offset_of_currentTouchID_53() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentTouchID_53)); }
	inline int32_t get_currentTouchID_53() const { return ___currentTouchID_53; }
	inline int32_t* get_address_of_currentTouchID_53() { return &___currentTouchID_53; }
	inline void set_currentTouchID_53(int32_t value)
	{
		___currentTouchID_53 = value;
	}

	inline static int32_t get_offset_of_mCurrentKey_54() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mCurrentKey_54)); }
	inline int32_t get_mCurrentKey_54() const { return ___mCurrentKey_54; }
	inline int32_t* get_address_of_mCurrentKey_54() { return &___mCurrentKey_54; }
	inline void set_mCurrentKey_54(int32_t value)
	{
		___mCurrentKey_54 = value;
	}

	inline static int32_t get_offset_of_currentTouch_55() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___currentTouch_55)); }
	inline MouseOrTouch_t2057376333 * get_currentTouch_55() const { return ___currentTouch_55; }
	inline MouseOrTouch_t2057376333 ** get_address_of_currentTouch_55() { return &___currentTouch_55; }
	inline void set_currentTouch_55(MouseOrTouch_t2057376333 * value)
	{
		___currentTouch_55 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_55, value);
	}

	inline static int32_t get_offset_of_mInputFocus_56() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mInputFocus_56)); }
	inline bool get_mInputFocus_56() const { return ___mInputFocus_56; }
	inline bool* get_address_of_mInputFocus_56() { return &___mInputFocus_56; }
	inline void set_mInputFocus_56(bool value)
	{
		___mInputFocus_56 = value;
	}

	inline static int32_t get_offset_of_mGenericHandler_57() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mGenericHandler_57)); }
	inline GameObject_t3674682005 * get_mGenericHandler_57() const { return ___mGenericHandler_57; }
	inline GameObject_t3674682005 ** get_address_of_mGenericHandler_57() { return &___mGenericHandler_57; }
	inline void set_mGenericHandler_57(GameObject_t3674682005 * value)
	{
		___mGenericHandler_57 = value;
		Il2CppCodeGenWriteBarrier(&___mGenericHandler_57, value);
	}

	inline static int32_t get_offset_of_fallThrough_58() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___fallThrough_58)); }
	inline GameObject_t3674682005 * get_fallThrough_58() const { return ___fallThrough_58; }
	inline GameObject_t3674682005 ** get_address_of_fallThrough_58() { return &___fallThrough_58; }
	inline void set_fallThrough_58(GameObject_t3674682005 * value)
	{
		___fallThrough_58 = value;
		Il2CppCodeGenWriteBarrier(&___fallThrough_58, value);
	}

	inline static int32_t get_offset_of_onClick_59() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onClick_59)); }
	inline VoidDelegate_t3135042255 * get_onClick_59() const { return ___onClick_59; }
	inline VoidDelegate_t3135042255 ** get_address_of_onClick_59() { return &___onClick_59; }
	inline void set_onClick_59(VoidDelegate_t3135042255 * value)
	{
		___onClick_59 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_59, value);
	}

	inline static int32_t get_offset_of_onDoubleClick_60() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDoubleClick_60)); }
	inline VoidDelegate_t3135042255 * get_onDoubleClick_60() const { return ___onDoubleClick_60; }
	inline VoidDelegate_t3135042255 ** get_address_of_onDoubleClick_60() { return &___onDoubleClick_60; }
	inline void set_onDoubleClick_60(VoidDelegate_t3135042255 * value)
	{
		___onDoubleClick_60 = value;
		Il2CppCodeGenWriteBarrier(&___onDoubleClick_60, value);
	}

	inline static int32_t get_offset_of_onHover_61() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onHover_61)); }
	inline BoolDelegate_t2094540325 * get_onHover_61() const { return ___onHover_61; }
	inline BoolDelegate_t2094540325 ** get_address_of_onHover_61() { return &___onHover_61; }
	inline void set_onHover_61(BoolDelegate_t2094540325 * value)
	{
		___onHover_61 = value;
		Il2CppCodeGenWriteBarrier(&___onHover_61, value);
	}

	inline static int32_t get_offset_of_onPress_62() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onPress_62)); }
	inline BoolDelegate_t2094540325 * get_onPress_62() const { return ___onPress_62; }
	inline BoolDelegate_t2094540325 ** get_address_of_onPress_62() { return &___onPress_62; }
	inline void set_onPress_62(BoolDelegate_t2094540325 * value)
	{
		___onPress_62 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_62, value);
	}

	inline static int32_t get_offset_of_onSelect_63() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onSelect_63)); }
	inline BoolDelegate_t2094540325 * get_onSelect_63() const { return ___onSelect_63; }
	inline BoolDelegate_t2094540325 ** get_address_of_onSelect_63() { return &___onSelect_63; }
	inline void set_onSelect_63(BoolDelegate_t2094540325 * value)
	{
		___onSelect_63 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_63, value);
	}

	inline static int32_t get_offset_of_onScroll_64() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onScroll_64)); }
	inline FloatDelegate_t1146521387 * get_onScroll_64() const { return ___onScroll_64; }
	inline FloatDelegate_t1146521387 ** get_address_of_onScroll_64() { return &___onScroll_64; }
	inline void set_onScroll_64(FloatDelegate_t1146521387 * value)
	{
		___onScroll_64 = value;
		Il2CppCodeGenWriteBarrier(&___onScroll_64, value);
	}

	inline static int32_t get_offset_of_onDrag_65() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDrag_65)); }
	inline VectorDelegate_t2747913726 * get_onDrag_65() const { return ___onDrag_65; }
	inline VectorDelegate_t2747913726 ** get_address_of_onDrag_65() { return &___onDrag_65; }
	inline void set_onDrag_65(VectorDelegate_t2747913726 * value)
	{
		___onDrag_65 = value;
		Il2CppCodeGenWriteBarrier(&___onDrag_65, value);
	}

	inline static int32_t get_offset_of_onDragStart_66() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragStart_66)); }
	inline VoidDelegate_t3135042255 * get_onDragStart_66() const { return ___onDragStart_66; }
	inline VoidDelegate_t3135042255 ** get_address_of_onDragStart_66() { return &___onDragStart_66; }
	inline void set_onDragStart_66(VoidDelegate_t3135042255 * value)
	{
		___onDragStart_66 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStart_66, value);
	}

	inline static int32_t get_offset_of_onDragOver_67() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragOver_67)); }
	inline ObjectDelegate_t3703364602 * get_onDragOver_67() const { return ___onDragOver_67; }
	inline ObjectDelegate_t3703364602 ** get_address_of_onDragOver_67() { return &___onDragOver_67; }
	inline void set_onDragOver_67(ObjectDelegate_t3703364602 * value)
	{
		___onDragOver_67 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOver_67, value);
	}

	inline static int32_t get_offset_of_onDragOut_68() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragOut_68)); }
	inline ObjectDelegate_t3703364602 * get_onDragOut_68() const { return ___onDragOut_68; }
	inline ObjectDelegate_t3703364602 ** get_address_of_onDragOut_68() { return &___onDragOut_68; }
	inline void set_onDragOut_68(ObjectDelegate_t3703364602 * value)
	{
		___onDragOut_68 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOut_68, value);
	}

	inline static int32_t get_offset_of_onDragEnd_69() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDragEnd_69)); }
	inline VoidDelegate_t3135042255 * get_onDragEnd_69() const { return ___onDragEnd_69; }
	inline VoidDelegate_t3135042255 ** get_address_of_onDragEnd_69() { return &___onDragEnd_69; }
	inline void set_onDragEnd_69(VoidDelegate_t3135042255 * value)
	{
		___onDragEnd_69 = value;
		Il2CppCodeGenWriteBarrier(&___onDragEnd_69, value);
	}

	inline static int32_t get_offset_of_onDrop_70() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onDrop_70)); }
	inline ObjectDelegate_t3703364602 * get_onDrop_70() const { return ___onDrop_70; }
	inline ObjectDelegate_t3703364602 ** get_address_of_onDrop_70() { return &___onDrop_70; }
	inline void set_onDrop_70(ObjectDelegate_t3703364602 * value)
	{
		___onDrop_70 = value;
		Il2CppCodeGenWriteBarrier(&___onDrop_70, value);
	}

	inline static int32_t get_offset_of_onKey_71() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onKey_71)); }
	inline KeyCodeDelegate_t4120455995 * get_onKey_71() const { return ___onKey_71; }
	inline KeyCodeDelegate_t4120455995 ** get_address_of_onKey_71() { return &___onKey_71; }
	inline void set_onKey_71(KeyCodeDelegate_t4120455995 * value)
	{
		___onKey_71 = value;
		Il2CppCodeGenWriteBarrier(&___onKey_71, value);
	}

	inline static int32_t get_offset_of_onNavigate_72() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onNavigate_72)); }
	inline KeyCodeDelegate_t4120455995 * get_onNavigate_72() const { return ___onNavigate_72; }
	inline KeyCodeDelegate_t4120455995 ** get_address_of_onNavigate_72() { return &___onNavigate_72; }
	inline void set_onNavigate_72(KeyCodeDelegate_t4120455995 * value)
	{
		___onNavigate_72 = value;
		Il2CppCodeGenWriteBarrier(&___onNavigate_72, value);
	}

	inline static int32_t get_offset_of_onPan_73() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onPan_73)); }
	inline VectorDelegate_t2747913726 * get_onPan_73() const { return ___onPan_73; }
	inline VectorDelegate_t2747913726 ** get_address_of_onPan_73() { return &___onPan_73; }
	inline void set_onPan_73(VectorDelegate_t2747913726 * value)
	{
		___onPan_73 = value;
		Il2CppCodeGenWriteBarrier(&___onPan_73, value);
	}

	inline static int32_t get_offset_of_onTooltip_74() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onTooltip_74)); }
	inline BoolDelegate_t2094540325 * get_onTooltip_74() const { return ___onTooltip_74; }
	inline BoolDelegate_t2094540325 ** get_address_of_onTooltip_74() { return &___onTooltip_74; }
	inline void set_onTooltip_74(BoolDelegate_t2094540325 * value)
	{
		___onTooltip_74 = value;
		Il2CppCodeGenWriteBarrier(&___onTooltip_74, value);
	}

	inline static int32_t get_offset_of_onMouseMove_75() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___onMouseMove_75)); }
	inline MoveDelegate_t1906135052 * get_onMouseMove_75() const { return ___onMouseMove_75; }
	inline MoveDelegate_t1906135052 ** get_address_of_onMouseMove_75() { return &___onMouseMove_75; }
	inline void set_onMouseMove_75(MoveDelegate_t1906135052 * value)
	{
		___onMouseMove_75 = value;
		Il2CppCodeGenWriteBarrier(&___onMouseMove_75, value);
	}

	inline static int32_t get_offset_of_mMouse_76() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mMouse_76)); }
	inline MouseOrTouchU5BU5D_t546398688* get_mMouse_76() const { return ___mMouse_76; }
	inline MouseOrTouchU5BU5D_t546398688** get_address_of_mMouse_76() { return &___mMouse_76; }
	inline void set_mMouse_76(MouseOrTouchU5BU5D_t546398688* value)
	{
		___mMouse_76 = value;
		Il2CppCodeGenWriteBarrier(&___mMouse_76, value);
	}

	inline static int32_t get_offset_of_controller_77() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___controller_77)); }
	inline MouseOrTouch_t2057376333 * get_controller_77() const { return ___controller_77; }
	inline MouseOrTouch_t2057376333 ** get_address_of_controller_77() { return &___controller_77; }
	inline void set_controller_77(MouseOrTouch_t2057376333 * value)
	{
		___controller_77 = value;
		Il2CppCodeGenWriteBarrier(&___controller_77, value);
	}

	inline static int32_t get_offset_of_activeTouches_78() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___activeTouches_78)); }
	inline List_1_t3425561885 * get_activeTouches_78() const { return ___activeTouches_78; }
	inline List_1_t3425561885 ** get_address_of_activeTouches_78() { return &___activeTouches_78; }
	inline void set_activeTouches_78(List_1_t3425561885 * value)
	{
		___activeTouches_78 = value;
		Il2CppCodeGenWriteBarrier(&___activeTouches_78, value);
	}

	inline static int32_t get_offset_of_mTouchIDs_79() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mTouchIDs_79)); }
	inline List_1_t2522024052 * get_mTouchIDs_79() const { return ___mTouchIDs_79; }
	inline List_1_t2522024052 ** get_address_of_mTouchIDs_79() { return &___mTouchIDs_79; }
	inline void set_mTouchIDs_79(List_1_t2522024052 * value)
	{
		___mTouchIDs_79 = value;
		Il2CppCodeGenWriteBarrier(&___mTouchIDs_79, value);
	}

	inline static int32_t get_offset_of_mWidth_80() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mWidth_80)); }
	inline int32_t get_mWidth_80() const { return ___mWidth_80; }
	inline int32_t* get_address_of_mWidth_80() { return &___mWidth_80; }
	inline void set_mWidth_80(int32_t value)
	{
		___mWidth_80 = value;
	}

	inline static int32_t get_offset_of_mHeight_81() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHeight_81)); }
	inline int32_t get_mHeight_81() const { return ___mHeight_81; }
	inline int32_t* get_address_of_mHeight_81() { return &___mHeight_81; }
	inline void set_mHeight_81(int32_t value)
	{
		___mHeight_81 = value;
	}

	inline static int32_t get_offset_of_mTooltip_82() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mTooltip_82)); }
	inline GameObject_t3674682005 * get_mTooltip_82() const { return ___mTooltip_82; }
	inline GameObject_t3674682005 ** get_address_of_mTooltip_82() { return &___mTooltip_82; }
	inline void set_mTooltip_82(GameObject_t3674682005 * value)
	{
		___mTooltip_82 = value;
		Il2CppCodeGenWriteBarrier(&___mTooltip_82, value);
	}

	inline static int32_t get_offset_of_mTooltipTime_84() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mTooltipTime_84)); }
	inline float get_mTooltipTime_84() const { return ___mTooltipTime_84; }
	inline float* get_address_of_mTooltipTime_84() { return &___mTooltipTime_84; }
	inline void set_mTooltipTime_84(float value)
	{
		___mTooltipTime_84 = value;
	}

	inline static int32_t get_offset_of_isDragging_86() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___isDragging_86)); }
	inline bool get_isDragging_86() const { return ___isDragging_86; }
	inline bool* get_address_of_isDragging_86() { return &___isDragging_86; }
	inline void set_isDragging_86(bool value)
	{
		___isDragging_86 = value;
	}

	inline static int32_t get_offset_of_mRayHitObject_87() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mRayHitObject_87)); }
	inline GameObject_t3674682005 * get_mRayHitObject_87() const { return ___mRayHitObject_87; }
	inline GameObject_t3674682005 ** get_address_of_mRayHitObject_87() { return &___mRayHitObject_87; }
	inline void set_mRayHitObject_87(GameObject_t3674682005 * value)
	{
		___mRayHitObject_87 = value;
		Il2CppCodeGenWriteBarrier(&___mRayHitObject_87, value);
	}

	inline static int32_t get_offset_of_mHover_88() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHover_88)); }
	inline GameObject_t3674682005 * get_mHover_88() const { return ___mHover_88; }
	inline GameObject_t3674682005 ** get_address_of_mHover_88() { return &___mHover_88; }
	inline void set_mHover_88(GameObject_t3674682005 * value)
	{
		___mHover_88 = value;
		Il2CppCodeGenWriteBarrier(&___mHover_88, value);
	}

	inline static int32_t get_offset_of_mSelected_89() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mSelected_89)); }
	inline GameObject_t3674682005 * get_mSelected_89() const { return ___mSelected_89; }
	inline GameObject_t3674682005 ** get_address_of_mSelected_89() { return &___mSelected_89; }
	inline void set_mSelected_89(GameObject_t3674682005 * value)
	{
		___mSelected_89 = value;
		Il2CppCodeGenWriteBarrier(&___mSelected_89, value);
	}

	inline static int32_t get_offset_of_mHit_90() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHit_90)); }
	inline DepthEntry_t1145614469  get_mHit_90() const { return ___mHit_90; }
	inline DepthEntry_t1145614469 * get_address_of_mHit_90() { return &___mHit_90; }
	inline void set_mHit_90(DepthEntry_t1145614469  value)
	{
		___mHit_90 = value;
	}

	inline static int32_t get_offset_of_mHits_91() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mHits_91)); }
	inline BetterList_1_t2642582481 * get_mHits_91() const { return ___mHits_91; }
	inline BetterList_1_t2642582481 ** get_address_of_mHits_91() { return &___mHits_91; }
	inline void set_mHits_91(BetterList_1_t2642582481 * value)
	{
		___mHits_91 = value;
		Il2CppCodeGenWriteBarrier(&___mHits_91, value);
	}

	inline static int32_t get_offset_of_m2DPlane_92() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___m2DPlane_92)); }
	inline Plane_t4206452690  get_m2DPlane_92() const { return ___m2DPlane_92; }
	inline Plane_t4206452690 * get_address_of_m2DPlane_92() { return &___m2DPlane_92; }
	inline void set_m2DPlane_92(Plane_t4206452690  value)
	{
		___m2DPlane_92 = value;
	}

	inline static int32_t get_offset_of_mNextEvent_93() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mNextEvent_93)); }
	inline float get_mNextEvent_93() const { return ___mNextEvent_93; }
	inline float* get_address_of_mNextEvent_93() { return &___mNextEvent_93; }
	inline void set_mNextEvent_93(float value)
	{
		___mNextEvent_93 = value;
	}

	inline static int32_t get_offset_of_mNotifying_94() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mNotifying_94)); }
	inline int32_t get_mNotifying_94() const { return ___mNotifying_94; }
	inline int32_t* get_address_of_mNotifying_94() { return &___mNotifying_94; }
	inline void set_mNotifying_94(int32_t value)
	{
		___mNotifying_94 = value;
	}

	inline static int32_t get_offset_of_mUsingTouchEvents_95() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___mUsingTouchEvents_95)); }
	inline bool get_mUsingTouchEvents_95() const { return ___mUsingTouchEvents_95; }
	inline bool* get_address_of_mUsingTouchEvents_95() { return &___mUsingTouchEvents_95; }
	inline void set_mUsingTouchEvents_95(bool value)
	{
		___mUsingTouchEvents_95 = value;
	}

	inline static int32_t get_offset_of_GetInputTouchCount_96() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetInputTouchCount_96)); }
	inline GetTouchCountCallback_t3435560085 * get_GetInputTouchCount_96() const { return ___GetInputTouchCount_96; }
	inline GetTouchCountCallback_t3435560085 ** get_address_of_GetInputTouchCount_96() { return &___GetInputTouchCount_96; }
	inline void set_GetInputTouchCount_96(GetTouchCountCallback_t3435560085 * value)
	{
		___GetInputTouchCount_96 = value;
		Il2CppCodeGenWriteBarrier(&___GetInputTouchCount_96, value);
	}

	inline static int32_t get_offset_of_GetInputTouch_97() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___GetInputTouch_97)); }
	inline GetTouchCallback_t1934354820 * get_GetInputTouch_97() const { return ___GetInputTouch_97; }
	inline GetTouchCallback_t1934354820 ** get_address_of_GetInputTouch_97() { return &___GetInputTouch_97; }
	inline void set_GetInputTouch_97(GetTouchCallback_t1934354820 * value)
	{
		___GetInputTouch_97 = value;
		Il2CppCodeGenWriteBarrier(&___GetInputTouch_97, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache60_98() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache60_98)); }
	inline GetKeyStateFunc_t2745734774 * get_U3CU3Ef__amU24cache60_98() const { return ___U3CU3Ef__amU24cache60_98; }
	inline GetKeyStateFunc_t2745734774 ** get_address_of_U3CU3Ef__amU24cache60_98() { return &___U3CU3Ef__amU24cache60_98; }
	inline void set_U3CU3Ef__amU24cache60_98(GetKeyStateFunc_t2745734774 * value)
	{
		___U3CU3Ef__amU24cache60_98 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache60_98, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache61_99() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache61_99)); }
	inline GetKeyStateFunc_t2745734774 * get_U3CU3Ef__amU24cache61_99() const { return ___U3CU3Ef__amU24cache61_99; }
	inline GetKeyStateFunc_t2745734774 ** get_address_of_U3CU3Ef__amU24cache61_99() { return &___U3CU3Ef__amU24cache61_99; }
	inline void set_U3CU3Ef__amU24cache61_99(GetKeyStateFunc_t2745734774 * value)
	{
		___U3CU3Ef__amU24cache61_99 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache61_99, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache62_100() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache62_100)); }
	inline GetKeyStateFunc_t2745734774 * get_U3CU3Ef__amU24cache62_100() const { return ___U3CU3Ef__amU24cache62_100; }
	inline GetKeyStateFunc_t2745734774 ** get_address_of_U3CU3Ef__amU24cache62_100() { return &___U3CU3Ef__amU24cache62_100; }
	inline void set_U3CU3Ef__amU24cache62_100(GetKeyStateFunc_t2745734774 * value)
	{
		___U3CU3Ef__amU24cache62_100 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache62_100, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache63_101() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache63_101)); }
	inline GetAxisFunc_t783615269 * get_U3CU3Ef__amU24cache63_101() const { return ___U3CU3Ef__amU24cache63_101; }
	inline GetAxisFunc_t783615269 ** get_address_of_U3CU3Ef__amU24cache63_101() { return &___U3CU3Ef__amU24cache63_101; }
	inline void set_U3CU3Ef__amU24cache63_101(GetAxisFunc_t783615269 * value)
	{
		___U3CU3Ef__amU24cache63_101 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache63_101, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache64_102() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache64_102)); }
	inline GetMouseDelegate_t2962898474 * get_U3CU3Ef__amU24cache64_102() const { return ___U3CU3Ef__amU24cache64_102; }
	inline GetMouseDelegate_t2962898474 ** get_address_of_U3CU3Ef__amU24cache64_102() { return &___U3CU3Ef__amU24cache64_102; }
	inline void set_U3CU3Ef__amU24cache64_102(GetMouseDelegate_t2962898474 * value)
	{
		___U3CU3Ef__amU24cache64_102 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache64_102, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache65_103() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache65_103)); }
	inline GetTouchDelegate_t2925897412 * get_U3CU3Ef__amU24cache65_103() const { return ___U3CU3Ef__amU24cache65_103; }
	inline GetTouchDelegate_t2925897412 ** get_address_of_U3CU3Ef__amU24cache65_103() { return &___U3CU3Ef__amU24cache65_103; }
	inline void set_U3CU3Ef__amU24cache65_103(GetTouchDelegate_t2925897412 * value)
	{
		___U3CU3Ef__amU24cache65_103 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache65_103, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache66_104() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache66_104)); }
	inline RemoveTouchDelegate_t1357731690 * get_U3CU3Ef__amU24cache66_104() const { return ___U3CU3Ef__amU24cache66_104; }
	inline RemoveTouchDelegate_t1357731690 ** get_address_of_U3CU3Ef__amU24cache66_104() { return &___U3CU3Ef__amU24cache66_104; }
	inline void set_U3CU3Ef__amU24cache66_104(RemoveTouchDelegate_t1357731690 * value)
	{
		___U3CU3Ef__amU24cache66_104 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache66_104, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache67_105() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache67_105)); }
	inline CompareFunc_t1687333339 * get_U3CU3Ef__amU24cache67_105() const { return ___U3CU3Ef__amU24cache67_105; }
	inline CompareFunc_t1687333339 ** get_address_of_U3CU3Ef__amU24cache67_105() { return &___U3CU3Ef__amU24cache67_105; }
	inline void set_U3CU3Ef__amU24cache67_105(CompareFunc_t1687333339 * value)
	{
		___U3CU3Ef__amU24cache67_105 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache67_105, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache68_106() { return static_cast<int32_t>(offsetof(UICamera_t189364953_StaticFields, ___U3CU3Ef__amU24cache68_106)); }
	inline CompareFunc_t1687333339 * get_U3CU3Ef__amU24cache68_106() const { return ___U3CU3Ef__amU24cache68_106; }
	inline CompareFunc_t1687333339 ** get_address_of_U3CU3Ef__amU24cache68_106() { return &___U3CU3Ef__amU24cache68_106; }
	inline void set_U3CU3Ef__amU24cache68_106(CompareFunc_t1687333339 * value)
	{
		___U3CU3Ef__amU24cache68_106 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache68_106, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
