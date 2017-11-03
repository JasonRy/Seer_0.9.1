#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UIRect
struct UIRect_t2503437976;

#include "AssemblyU2DCSharp_UITweener105489188.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenPosition
struct  TweenPosition_t3684358292  : public UITweener_t105489188
{
public:
	// UnityEngine.Vector3 TweenPosition::from
	Vector3_t4282066566  ___from_20;
	// UnityEngine.Vector3 TweenPosition::to
	Vector3_t4282066566  ___to_21;
	// System.Boolean TweenPosition::worldSpace
	bool ___worldSpace_22;
	// UnityEngine.Transform TweenPosition::mTrans
	Transform_t1659122786 * ___mTrans_23;
	// UIRect TweenPosition::mRect
	UIRect_t2503437976 * ___mRect_24;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenPosition_t3684358292, ___from_20)); }
	inline Vector3_t4282066566  get_from_20() const { return ___from_20; }
	inline Vector3_t4282066566 * get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Vector3_t4282066566  value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenPosition_t3684358292, ___to_21)); }
	inline Vector3_t4282066566  get_to_21() const { return ___to_21; }
	inline Vector3_t4282066566 * get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Vector3_t4282066566  value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_worldSpace_22() { return static_cast<int32_t>(offsetof(TweenPosition_t3684358292, ___worldSpace_22)); }
	inline bool get_worldSpace_22() const { return ___worldSpace_22; }
	inline bool* get_address_of_worldSpace_22() { return &___worldSpace_22; }
	inline void set_worldSpace_22(bool value)
	{
		___worldSpace_22 = value;
	}

	inline static int32_t get_offset_of_mTrans_23() { return static_cast<int32_t>(offsetof(TweenPosition_t3684358292, ___mTrans_23)); }
	inline Transform_t1659122786 * get_mTrans_23() const { return ___mTrans_23; }
	inline Transform_t1659122786 ** get_address_of_mTrans_23() { return &___mTrans_23; }
	inline void set_mTrans_23(Transform_t1659122786 * value)
	{
		___mTrans_23 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_23, value);
	}

	inline static int32_t get_offset_of_mRect_24() { return static_cast<int32_t>(offsetof(TweenPosition_t3684358292, ___mRect_24)); }
	inline UIRect_t2503437976 * get_mRect_24() const { return ___mRect_24; }
	inline UIRect_t2503437976 ** get_address_of_mRect_24() { return &___mRect_24; }
	inline void set_mRect_24(UIRect_t2503437976 * value)
	{
		___mRect_24 = value;
		Il2CppCodeGenWriteBarrier(&___mRect_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
