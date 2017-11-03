#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_JumpControl_jumpMethod3051922319.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JumpControl
struct  JumpControl_t3745726767  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Slider JumpControl::Loading_Circle
	Slider_t79469677 * ___Loading_Circle_4;
	// UnityEngine.RectTransform JumpControl::Loading_ball
	RectTransform_t972643934 * ___Loading_ball_5;
	// System.String JumpControl::DBM_STAFF_URL
	String_t* ___DBM_STAFF_URL_7;
	// System.String JumpControl::DBM_URL
	String_t* ___DBM_URL_9;
	// System.Collections.Generic.List`1<System.String> JumpControl::allDeviceID_URL
	List_1_t1375417109 * ___allDeviceID_URL_10;
	// System.Int32 JumpControl::loadingIndex
	int32_t ___loadingIndex_11;

public:
	inline static int32_t get_offset_of_Loading_Circle_4() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767, ___Loading_Circle_4)); }
	inline Slider_t79469677 * get_Loading_Circle_4() const { return ___Loading_Circle_4; }
	inline Slider_t79469677 ** get_address_of_Loading_Circle_4() { return &___Loading_Circle_4; }
	inline void set_Loading_Circle_4(Slider_t79469677 * value)
	{
		___Loading_Circle_4 = value;
		Il2CppCodeGenWriteBarrier(&___Loading_Circle_4, value);
	}

	inline static int32_t get_offset_of_Loading_ball_5() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767, ___Loading_ball_5)); }
	inline RectTransform_t972643934 * get_Loading_ball_5() const { return ___Loading_ball_5; }
	inline RectTransform_t972643934 ** get_address_of_Loading_ball_5() { return &___Loading_ball_5; }
	inline void set_Loading_ball_5(RectTransform_t972643934 * value)
	{
		___Loading_ball_5 = value;
		Il2CppCodeGenWriteBarrier(&___Loading_ball_5, value);
	}

	inline static int32_t get_offset_of_DBM_STAFF_URL_7() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767, ___DBM_STAFF_URL_7)); }
	inline String_t* get_DBM_STAFF_URL_7() const { return ___DBM_STAFF_URL_7; }
	inline String_t** get_address_of_DBM_STAFF_URL_7() { return &___DBM_STAFF_URL_7; }
	inline void set_DBM_STAFF_URL_7(String_t* value)
	{
		___DBM_STAFF_URL_7 = value;
		Il2CppCodeGenWriteBarrier(&___DBM_STAFF_URL_7, value);
	}

	inline static int32_t get_offset_of_DBM_URL_9() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767, ___DBM_URL_9)); }
	inline String_t* get_DBM_URL_9() const { return ___DBM_URL_9; }
	inline String_t** get_address_of_DBM_URL_9() { return &___DBM_URL_9; }
	inline void set_DBM_URL_9(String_t* value)
	{
		___DBM_URL_9 = value;
		Il2CppCodeGenWriteBarrier(&___DBM_URL_9, value);
	}

	inline static int32_t get_offset_of_allDeviceID_URL_10() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767, ___allDeviceID_URL_10)); }
	inline List_1_t1375417109 * get_allDeviceID_URL_10() const { return ___allDeviceID_URL_10; }
	inline List_1_t1375417109 ** get_address_of_allDeviceID_URL_10() { return &___allDeviceID_URL_10; }
	inline void set_allDeviceID_URL_10(List_1_t1375417109 * value)
	{
		___allDeviceID_URL_10 = value;
		Il2CppCodeGenWriteBarrier(&___allDeviceID_URL_10, value);
	}

	inline static int32_t get_offset_of_loadingIndex_11() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767, ___loadingIndex_11)); }
	inline int32_t get_loadingIndex_11() const { return ___loadingIndex_11; }
	inline int32_t* get_address_of_loadingIndex_11() { return &___loadingIndex_11; }
	inline void set_loadingIndex_11(int32_t value)
	{
		___loadingIndex_11 = value;
	}
};

struct JumpControl_t3745726767_StaticFields
{
public:
	// System.Int32 JumpControl::jumpIndex
	int32_t ___jumpIndex_2;
	// System.String JumpControl::jumpStr
	String_t* ___jumpStr_3;
	// System.String JumpControl::sJson
	String_t* ___sJson_6;
	// JumpControl/jumpMethod JumpControl::_jumpMethod
	int32_t ____jumpMethod_8;

public:
	inline static int32_t get_offset_of_jumpIndex_2() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767_StaticFields, ___jumpIndex_2)); }
	inline int32_t get_jumpIndex_2() const { return ___jumpIndex_2; }
	inline int32_t* get_address_of_jumpIndex_2() { return &___jumpIndex_2; }
	inline void set_jumpIndex_2(int32_t value)
	{
		___jumpIndex_2 = value;
	}

	inline static int32_t get_offset_of_jumpStr_3() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767_StaticFields, ___jumpStr_3)); }
	inline String_t* get_jumpStr_3() const { return ___jumpStr_3; }
	inline String_t** get_address_of_jumpStr_3() { return &___jumpStr_3; }
	inline void set_jumpStr_3(String_t* value)
	{
		___jumpStr_3 = value;
		Il2CppCodeGenWriteBarrier(&___jumpStr_3, value);
	}

	inline static int32_t get_offset_of_sJson_6() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767_StaticFields, ___sJson_6)); }
	inline String_t* get_sJson_6() const { return ___sJson_6; }
	inline String_t** get_address_of_sJson_6() { return &___sJson_6; }
	inline void set_sJson_6(String_t* value)
	{
		___sJson_6 = value;
		Il2CppCodeGenWriteBarrier(&___sJson_6, value);
	}

	inline static int32_t get_offset_of__jumpMethod_8() { return static_cast<int32_t>(offsetof(JumpControl_t3745726767_StaticFields, ____jumpMethod_8)); }
	inline int32_t get__jumpMethod_8() const { return ____jumpMethod_8; }
	inline int32_t* get_address_of__jumpMethod_8() { return &____jumpMethod_8; }
	inline void set__jumpMethod_8(int32_t value)
	{
		____jumpMethod_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
