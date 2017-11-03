#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// SingleAttribute
struct SingleAttribute_t76566292;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peoplePatrol>
struct List_1_t3891158129;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peopleOrderPatrol>
struct List_1_t1366174677;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// ConsoleApplication.Program/peoplePatrol
struct peoplePatrol_t1477854907;
// ConsoleApplication.Program/peopleOrder
struct peopleOrder_t1709807871;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeviceProperties
struct  DeviceProperties_t1171609673  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text DeviceProperties::id
	Text_t9039225 * ___id_2;
	// UnityEngine.UI.Text DeviceProperties::type
	Text_t9039225 * ___type_3;
	// UnityEngine.UI.Text DeviceProperties::name
	Text_t9039225 * ___name_4;
	// UnityEngine.UI.Text DeviceProperties::state
	Text_t9039225 * ___state_5;
	// UnityEngine.UI.Text DeviceProperties::active
	Text_t9039225 * ___active_6;
	// UnityEngine.UI.Text DeviceProperties::isAutomaticImage
	Text_t9039225 * ___isAutomaticImage_7;
	// UnityEngine.UI.Text DeviceProperties::tips
	Text_t9039225 * ___tips_8;
	// UnityEngine.UI.Image DeviceProperties::activeStateImage
	Image_t538875265 * ___activeStateImage_9;
	// UnityEngine.UI.Image DeviceProperties::noinfoImage
	Image_t538875265 * ___noinfoImage_10;
	// UnityEngine.Transform DeviceProperties::deviceInformationParent
	Transform_t1659122786 * ___deviceInformationParent_11;
	// System.String DeviceProperties::target
	String_t* ___target_12;
	// System.Boolean DeviceProperties::isOffline
	bool ___isOffline_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DeviceProperties::allDeviceInformationList
	List_1_t747900261 * ___allDeviceInformationList_14;
	// UnityEngine.UI.Image DeviceProperties::deviceInformationInterfaceBtn
	Image_t538875265 * ___deviceInformationInterfaceBtn_15;
	// UnityEngine.GameObject DeviceProperties::nowDeviceInterface
	GameObject_t3674682005 * ___nowDeviceInterface_16;
	// SingleAttribute DeviceProperties::SA
	SingleAttribute_t76566292 * ___SA_17;
	// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peoplePatrol> DeviceProperties::LPPS
	List_1_t3891158129 * ___LPPS_18;
	// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peopleOrderPatrol> DeviceProperties::LPPSOrder
	List_1_t1366174677 * ___LPPSOrder_19;
	// System.Collections.Generic.List`1<System.String> DeviceProperties::orderUrl
	List_1_t1375417109 * ___orderUrl_20;
	// UnityEngine.UI.Image DeviceProperties::line
	Image_t538875265 * ___line_21;
	// UnityEngine.UI.Image DeviceProperties::backGround_1
	Image_t538875265 * ___backGround_1_22;
	// UnityEngine.UI.Image DeviceProperties::backGround_2
	Image_t538875265 * ___backGround_2_23;
	// UnityEngine.UI.Image DeviceProperties::backGround_3
	Image_t538875265 * ___backGround_3_24;
	// UnityEngine.UI.Image DeviceProperties::backGround_4
	Image_t538875265 * ___backGround_4_25;
	// UnityEngine.UI.Image DeviceProperties::isFineIcon
	Image_t538875265 * ___isFineIcon_26;
	// UnityEngine.UI.Image DeviceProperties::isRunIcon
	Image_t538875265 * ___isRunIcon_27;
	// UnityEngine.UI.Image DeviceProperties::line_1
	Image_t538875265 * ___line_1_28;
	// UnityEngine.UI.Image DeviceProperties::titleIcon_1
	Image_t538875265 * ___titleIcon_1_29;
	// UnityEngine.UI.Text DeviceProperties::deviceName
	Text_t9039225 * ___deviceName_30;
	// UnityEngine.UI.Text DeviceProperties::deviceNum
	Text_t9039225 * ___deviceNum_31;
	// UnityEngine.UI.Text DeviceProperties::isFineText
	Text_t9039225 * ___isFineText_32;
	// UnityEngine.UI.Text DeviceProperties::isRunText
	Text_t9039225 * ___isRunText_33;
	// UnityEngine.UI.Text DeviceProperties::isAutoText
	Text_t9039225 * ___isAutoText_34;
	// UnityEngine.UI.Text DeviceProperties::titleText_1
	Text_t9039225 * ___titleText_1_35;
	// UnityEngine.RectTransform DeviceProperties::scrollView
	RectTransform_t972643934 * ___scrollView_36;
	// System.String DeviceProperties::entryJson
	String_t* ___entryJson_37;
	// ConsoleApplication.Program/peoplePatrol DeviceProperties::_patrolInfo
	peoplePatrol_t1477854907 * ____patrolInfo_38;
	// System.String DeviceProperties::orderJson
	String_t* ___orderJson_39;
	// ConsoleApplication.Program/peopleOrder DeviceProperties::_orderInfo
	peopleOrder_t1709807871 * ____orderInfo_40;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___id_2)); }
	inline Text_t9039225 * get_id_2() const { return ___id_2; }
	inline Text_t9039225 ** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(Text_t9039225 * value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___type_3)); }
	inline Text_t9039225 * get_type_3() const { return ___type_3; }
	inline Text_t9039225 ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Text_t9039225 * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___name_4)); }
	inline Text_t9039225 * get_name_4() const { return ___name_4; }
	inline Text_t9039225 ** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(Text_t9039225 * value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___state_5)); }
	inline Text_t9039225 * get_state_5() const { return ___state_5; }
	inline Text_t9039225 ** get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(Text_t9039225 * value)
	{
		___state_5 = value;
		Il2CppCodeGenWriteBarrier(&___state_5, value);
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___active_6)); }
	inline Text_t9039225 * get_active_6() const { return ___active_6; }
	inline Text_t9039225 ** get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(Text_t9039225 * value)
	{
		___active_6 = value;
		Il2CppCodeGenWriteBarrier(&___active_6, value);
	}

	inline static int32_t get_offset_of_isAutomaticImage_7() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isAutomaticImage_7)); }
	inline Text_t9039225 * get_isAutomaticImage_7() const { return ___isAutomaticImage_7; }
	inline Text_t9039225 ** get_address_of_isAutomaticImage_7() { return &___isAutomaticImage_7; }
	inline void set_isAutomaticImage_7(Text_t9039225 * value)
	{
		___isAutomaticImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___isAutomaticImage_7, value);
	}

	inline static int32_t get_offset_of_tips_8() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___tips_8)); }
	inline Text_t9039225 * get_tips_8() const { return ___tips_8; }
	inline Text_t9039225 ** get_address_of_tips_8() { return &___tips_8; }
	inline void set_tips_8(Text_t9039225 * value)
	{
		___tips_8 = value;
		Il2CppCodeGenWriteBarrier(&___tips_8, value);
	}

	inline static int32_t get_offset_of_activeStateImage_9() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___activeStateImage_9)); }
	inline Image_t538875265 * get_activeStateImage_9() const { return ___activeStateImage_9; }
	inline Image_t538875265 ** get_address_of_activeStateImage_9() { return &___activeStateImage_9; }
	inline void set_activeStateImage_9(Image_t538875265 * value)
	{
		___activeStateImage_9 = value;
		Il2CppCodeGenWriteBarrier(&___activeStateImage_9, value);
	}

	inline static int32_t get_offset_of_noinfoImage_10() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___noinfoImage_10)); }
	inline Image_t538875265 * get_noinfoImage_10() const { return ___noinfoImage_10; }
	inline Image_t538875265 ** get_address_of_noinfoImage_10() { return &___noinfoImage_10; }
	inline void set_noinfoImage_10(Image_t538875265 * value)
	{
		___noinfoImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___noinfoImage_10, value);
	}

	inline static int32_t get_offset_of_deviceInformationParent_11() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___deviceInformationParent_11)); }
	inline Transform_t1659122786 * get_deviceInformationParent_11() const { return ___deviceInformationParent_11; }
	inline Transform_t1659122786 ** get_address_of_deviceInformationParent_11() { return &___deviceInformationParent_11; }
	inline void set_deviceInformationParent_11(Transform_t1659122786 * value)
	{
		___deviceInformationParent_11 = value;
		Il2CppCodeGenWriteBarrier(&___deviceInformationParent_11, value);
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___target_12)); }
	inline String_t* get_target_12() const { return ___target_12; }
	inline String_t** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(String_t* value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier(&___target_12, value);
	}

	inline static int32_t get_offset_of_isOffline_13() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isOffline_13)); }
	inline bool get_isOffline_13() const { return ___isOffline_13; }
	inline bool* get_address_of_isOffline_13() { return &___isOffline_13; }
	inline void set_isOffline_13(bool value)
	{
		___isOffline_13 = value;
	}

	inline static int32_t get_offset_of_allDeviceInformationList_14() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___allDeviceInformationList_14)); }
	inline List_1_t747900261 * get_allDeviceInformationList_14() const { return ___allDeviceInformationList_14; }
	inline List_1_t747900261 ** get_address_of_allDeviceInformationList_14() { return &___allDeviceInformationList_14; }
	inline void set_allDeviceInformationList_14(List_1_t747900261 * value)
	{
		___allDeviceInformationList_14 = value;
		Il2CppCodeGenWriteBarrier(&___allDeviceInformationList_14, value);
	}

	inline static int32_t get_offset_of_deviceInformationInterfaceBtn_15() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___deviceInformationInterfaceBtn_15)); }
	inline Image_t538875265 * get_deviceInformationInterfaceBtn_15() const { return ___deviceInformationInterfaceBtn_15; }
	inline Image_t538875265 ** get_address_of_deviceInformationInterfaceBtn_15() { return &___deviceInformationInterfaceBtn_15; }
	inline void set_deviceInformationInterfaceBtn_15(Image_t538875265 * value)
	{
		___deviceInformationInterfaceBtn_15 = value;
		Il2CppCodeGenWriteBarrier(&___deviceInformationInterfaceBtn_15, value);
	}

	inline static int32_t get_offset_of_nowDeviceInterface_16() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___nowDeviceInterface_16)); }
	inline GameObject_t3674682005 * get_nowDeviceInterface_16() const { return ___nowDeviceInterface_16; }
	inline GameObject_t3674682005 ** get_address_of_nowDeviceInterface_16() { return &___nowDeviceInterface_16; }
	inline void set_nowDeviceInterface_16(GameObject_t3674682005 * value)
	{
		___nowDeviceInterface_16 = value;
		Il2CppCodeGenWriteBarrier(&___nowDeviceInterface_16, value);
	}

	inline static int32_t get_offset_of_SA_17() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___SA_17)); }
	inline SingleAttribute_t76566292 * get_SA_17() const { return ___SA_17; }
	inline SingleAttribute_t76566292 ** get_address_of_SA_17() { return &___SA_17; }
	inline void set_SA_17(SingleAttribute_t76566292 * value)
	{
		___SA_17 = value;
		Il2CppCodeGenWriteBarrier(&___SA_17, value);
	}

	inline static int32_t get_offset_of_LPPS_18() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___LPPS_18)); }
	inline List_1_t3891158129 * get_LPPS_18() const { return ___LPPS_18; }
	inline List_1_t3891158129 ** get_address_of_LPPS_18() { return &___LPPS_18; }
	inline void set_LPPS_18(List_1_t3891158129 * value)
	{
		___LPPS_18 = value;
		Il2CppCodeGenWriteBarrier(&___LPPS_18, value);
	}

	inline static int32_t get_offset_of_LPPSOrder_19() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___LPPSOrder_19)); }
	inline List_1_t1366174677 * get_LPPSOrder_19() const { return ___LPPSOrder_19; }
	inline List_1_t1366174677 ** get_address_of_LPPSOrder_19() { return &___LPPSOrder_19; }
	inline void set_LPPSOrder_19(List_1_t1366174677 * value)
	{
		___LPPSOrder_19 = value;
		Il2CppCodeGenWriteBarrier(&___LPPSOrder_19, value);
	}

	inline static int32_t get_offset_of_orderUrl_20() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___orderUrl_20)); }
	inline List_1_t1375417109 * get_orderUrl_20() const { return ___orderUrl_20; }
	inline List_1_t1375417109 ** get_address_of_orderUrl_20() { return &___orderUrl_20; }
	inline void set_orderUrl_20(List_1_t1375417109 * value)
	{
		___orderUrl_20 = value;
		Il2CppCodeGenWriteBarrier(&___orderUrl_20, value);
	}

	inline static int32_t get_offset_of_line_21() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___line_21)); }
	inline Image_t538875265 * get_line_21() const { return ___line_21; }
	inline Image_t538875265 ** get_address_of_line_21() { return &___line_21; }
	inline void set_line_21(Image_t538875265 * value)
	{
		___line_21 = value;
		Il2CppCodeGenWriteBarrier(&___line_21, value);
	}

	inline static int32_t get_offset_of_backGround_1_22() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___backGround_1_22)); }
	inline Image_t538875265 * get_backGround_1_22() const { return ___backGround_1_22; }
	inline Image_t538875265 ** get_address_of_backGround_1_22() { return &___backGround_1_22; }
	inline void set_backGround_1_22(Image_t538875265 * value)
	{
		___backGround_1_22 = value;
		Il2CppCodeGenWriteBarrier(&___backGround_1_22, value);
	}

	inline static int32_t get_offset_of_backGround_2_23() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___backGround_2_23)); }
	inline Image_t538875265 * get_backGround_2_23() const { return ___backGround_2_23; }
	inline Image_t538875265 ** get_address_of_backGround_2_23() { return &___backGround_2_23; }
	inline void set_backGround_2_23(Image_t538875265 * value)
	{
		___backGround_2_23 = value;
		Il2CppCodeGenWriteBarrier(&___backGround_2_23, value);
	}

	inline static int32_t get_offset_of_backGround_3_24() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___backGround_3_24)); }
	inline Image_t538875265 * get_backGround_3_24() const { return ___backGround_3_24; }
	inline Image_t538875265 ** get_address_of_backGround_3_24() { return &___backGround_3_24; }
	inline void set_backGround_3_24(Image_t538875265 * value)
	{
		___backGround_3_24 = value;
		Il2CppCodeGenWriteBarrier(&___backGround_3_24, value);
	}

	inline static int32_t get_offset_of_backGround_4_25() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___backGround_4_25)); }
	inline Image_t538875265 * get_backGround_4_25() const { return ___backGround_4_25; }
	inline Image_t538875265 ** get_address_of_backGround_4_25() { return &___backGround_4_25; }
	inline void set_backGround_4_25(Image_t538875265 * value)
	{
		___backGround_4_25 = value;
		Il2CppCodeGenWriteBarrier(&___backGround_4_25, value);
	}

	inline static int32_t get_offset_of_isFineIcon_26() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isFineIcon_26)); }
	inline Image_t538875265 * get_isFineIcon_26() const { return ___isFineIcon_26; }
	inline Image_t538875265 ** get_address_of_isFineIcon_26() { return &___isFineIcon_26; }
	inline void set_isFineIcon_26(Image_t538875265 * value)
	{
		___isFineIcon_26 = value;
		Il2CppCodeGenWriteBarrier(&___isFineIcon_26, value);
	}

	inline static int32_t get_offset_of_isRunIcon_27() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isRunIcon_27)); }
	inline Image_t538875265 * get_isRunIcon_27() const { return ___isRunIcon_27; }
	inline Image_t538875265 ** get_address_of_isRunIcon_27() { return &___isRunIcon_27; }
	inline void set_isRunIcon_27(Image_t538875265 * value)
	{
		___isRunIcon_27 = value;
		Il2CppCodeGenWriteBarrier(&___isRunIcon_27, value);
	}

	inline static int32_t get_offset_of_line_1_28() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___line_1_28)); }
	inline Image_t538875265 * get_line_1_28() const { return ___line_1_28; }
	inline Image_t538875265 ** get_address_of_line_1_28() { return &___line_1_28; }
	inline void set_line_1_28(Image_t538875265 * value)
	{
		___line_1_28 = value;
		Il2CppCodeGenWriteBarrier(&___line_1_28, value);
	}

	inline static int32_t get_offset_of_titleIcon_1_29() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___titleIcon_1_29)); }
	inline Image_t538875265 * get_titleIcon_1_29() const { return ___titleIcon_1_29; }
	inline Image_t538875265 ** get_address_of_titleIcon_1_29() { return &___titleIcon_1_29; }
	inline void set_titleIcon_1_29(Image_t538875265 * value)
	{
		___titleIcon_1_29 = value;
		Il2CppCodeGenWriteBarrier(&___titleIcon_1_29, value);
	}

	inline static int32_t get_offset_of_deviceName_30() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___deviceName_30)); }
	inline Text_t9039225 * get_deviceName_30() const { return ___deviceName_30; }
	inline Text_t9039225 ** get_address_of_deviceName_30() { return &___deviceName_30; }
	inline void set_deviceName_30(Text_t9039225 * value)
	{
		___deviceName_30 = value;
		Il2CppCodeGenWriteBarrier(&___deviceName_30, value);
	}

	inline static int32_t get_offset_of_deviceNum_31() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___deviceNum_31)); }
	inline Text_t9039225 * get_deviceNum_31() const { return ___deviceNum_31; }
	inline Text_t9039225 ** get_address_of_deviceNum_31() { return &___deviceNum_31; }
	inline void set_deviceNum_31(Text_t9039225 * value)
	{
		___deviceNum_31 = value;
		Il2CppCodeGenWriteBarrier(&___deviceNum_31, value);
	}

	inline static int32_t get_offset_of_isFineText_32() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isFineText_32)); }
	inline Text_t9039225 * get_isFineText_32() const { return ___isFineText_32; }
	inline Text_t9039225 ** get_address_of_isFineText_32() { return &___isFineText_32; }
	inline void set_isFineText_32(Text_t9039225 * value)
	{
		___isFineText_32 = value;
		Il2CppCodeGenWriteBarrier(&___isFineText_32, value);
	}

	inline static int32_t get_offset_of_isRunText_33() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isRunText_33)); }
	inline Text_t9039225 * get_isRunText_33() const { return ___isRunText_33; }
	inline Text_t9039225 ** get_address_of_isRunText_33() { return &___isRunText_33; }
	inline void set_isRunText_33(Text_t9039225 * value)
	{
		___isRunText_33 = value;
		Il2CppCodeGenWriteBarrier(&___isRunText_33, value);
	}

	inline static int32_t get_offset_of_isAutoText_34() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___isAutoText_34)); }
	inline Text_t9039225 * get_isAutoText_34() const { return ___isAutoText_34; }
	inline Text_t9039225 ** get_address_of_isAutoText_34() { return &___isAutoText_34; }
	inline void set_isAutoText_34(Text_t9039225 * value)
	{
		___isAutoText_34 = value;
		Il2CppCodeGenWriteBarrier(&___isAutoText_34, value);
	}

	inline static int32_t get_offset_of_titleText_1_35() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___titleText_1_35)); }
	inline Text_t9039225 * get_titleText_1_35() const { return ___titleText_1_35; }
	inline Text_t9039225 ** get_address_of_titleText_1_35() { return &___titleText_1_35; }
	inline void set_titleText_1_35(Text_t9039225 * value)
	{
		___titleText_1_35 = value;
		Il2CppCodeGenWriteBarrier(&___titleText_1_35, value);
	}

	inline static int32_t get_offset_of_scrollView_36() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___scrollView_36)); }
	inline RectTransform_t972643934 * get_scrollView_36() const { return ___scrollView_36; }
	inline RectTransform_t972643934 ** get_address_of_scrollView_36() { return &___scrollView_36; }
	inline void set_scrollView_36(RectTransform_t972643934 * value)
	{
		___scrollView_36 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_36, value);
	}

	inline static int32_t get_offset_of_entryJson_37() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___entryJson_37)); }
	inline String_t* get_entryJson_37() const { return ___entryJson_37; }
	inline String_t** get_address_of_entryJson_37() { return &___entryJson_37; }
	inline void set_entryJson_37(String_t* value)
	{
		___entryJson_37 = value;
		Il2CppCodeGenWriteBarrier(&___entryJson_37, value);
	}

	inline static int32_t get_offset_of__patrolInfo_38() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ____patrolInfo_38)); }
	inline peoplePatrol_t1477854907 * get__patrolInfo_38() const { return ____patrolInfo_38; }
	inline peoplePatrol_t1477854907 ** get_address_of__patrolInfo_38() { return &____patrolInfo_38; }
	inline void set__patrolInfo_38(peoplePatrol_t1477854907 * value)
	{
		____patrolInfo_38 = value;
		Il2CppCodeGenWriteBarrier(&____patrolInfo_38, value);
	}

	inline static int32_t get_offset_of_orderJson_39() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ___orderJson_39)); }
	inline String_t* get_orderJson_39() const { return ___orderJson_39; }
	inline String_t** get_address_of_orderJson_39() { return &___orderJson_39; }
	inline void set_orderJson_39(String_t* value)
	{
		___orderJson_39 = value;
		Il2CppCodeGenWriteBarrier(&___orderJson_39, value);
	}

	inline static int32_t get_offset_of__orderInfo_40() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673, ____orderInfo_40)); }
	inline peopleOrder_t1709807871 * get__orderInfo_40() const { return ____orderInfo_40; }
	inline peopleOrder_t1709807871 ** get_address_of__orderInfo_40() { return &____orderInfo_40; }
	inline void set__orderInfo_40(peopleOrder_t1709807871 * value)
	{
		____orderInfo_40 = value;
		Il2CppCodeGenWriteBarrier(&____orderInfo_40, value);
	}
};

struct DeviceProperties_t1171609673_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DeviceProperties::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_41;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_41() { return static_cast<int32_t>(offsetof(DeviceProperties_t1171609673_StaticFields, ___U3CU3Ef__switchU24map0_41)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_41() const { return ___U3CU3Ef__switchU24map0_41; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_41() { return &___U3CU3Ef__switchU24map0_41; }
	inline void set_U3CU3Ef__switchU24map0_41(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
