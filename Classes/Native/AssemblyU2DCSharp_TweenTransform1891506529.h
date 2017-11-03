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

#include "AssemblyU2DCSharp_UITweener105489188.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenTransform
struct  TweenTransform_t1891506529  : public UITweener_t105489188
{
public:
	// UnityEngine.Transform TweenTransform::from
	Transform_t1659122786 * ___from_20;
	// UnityEngine.Transform TweenTransform::to
	Transform_t1659122786 * ___to_21;
	// System.Boolean TweenTransform::parentWhenFinished
	bool ___parentWhenFinished_22;
	// UnityEngine.Transform TweenTransform::mTrans
	Transform_t1659122786 * ___mTrans_23;
	// UnityEngine.Vector3 TweenTransform::mPos
	Vector3_t4282066566  ___mPos_24;
	// UnityEngine.Quaternion TweenTransform::mRot
	Quaternion_t1553702882  ___mRot_25;
	// UnityEngine.Vector3 TweenTransform::mScale
	Vector3_t4282066566  ___mScale_26;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___from_20)); }
	inline Transform_t1659122786 * get_from_20() const { return ___from_20; }
	inline Transform_t1659122786 ** get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Transform_t1659122786 * value)
	{
		___from_20 = value;
		Il2CppCodeGenWriteBarrier(&___from_20, value);
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___to_21)); }
	inline Transform_t1659122786 * get_to_21() const { return ___to_21; }
	inline Transform_t1659122786 ** get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Transform_t1659122786 * value)
	{
		___to_21 = value;
		Il2CppCodeGenWriteBarrier(&___to_21, value);
	}

	inline static int32_t get_offset_of_parentWhenFinished_22() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___parentWhenFinished_22)); }
	inline bool get_parentWhenFinished_22() const { return ___parentWhenFinished_22; }
	inline bool* get_address_of_parentWhenFinished_22() { return &___parentWhenFinished_22; }
	inline void set_parentWhenFinished_22(bool value)
	{
		___parentWhenFinished_22 = value;
	}

	inline static int32_t get_offset_of_mTrans_23() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___mTrans_23)); }
	inline Transform_t1659122786 * get_mTrans_23() const { return ___mTrans_23; }
	inline Transform_t1659122786 ** get_address_of_mTrans_23() { return &___mTrans_23; }
	inline void set_mTrans_23(Transform_t1659122786 * value)
	{
		___mTrans_23 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_23, value);
	}

	inline static int32_t get_offset_of_mPos_24() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___mPos_24)); }
	inline Vector3_t4282066566  get_mPos_24() const { return ___mPos_24; }
	inline Vector3_t4282066566 * get_address_of_mPos_24() { return &___mPos_24; }
	inline void set_mPos_24(Vector3_t4282066566  value)
	{
		___mPos_24 = value;
	}

	inline static int32_t get_offset_of_mRot_25() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___mRot_25)); }
	inline Quaternion_t1553702882  get_mRot_25() const { return ___mRot_25; }
	inline Quaternion_t1553702882 * get_address_of_mRot_25() { return &___mRot_25; }
	inline void set_mRot_25(Quaternion_t1553702882  value)
	{
		___mRot_25 = value;
	}

	inline static int32_t get_offset_of_mScale_26() { return static_cast<int32_t>(offsetof(TweenTransform_t1891506529, ___mScale_26)); }
	inline Vector3_t4282066566  get_mScale_26() const { return ___mScale_26; }
	inline Vector3_t4282066566 * get_address_of_mScale_26() { return &___mScale_26; }
	inline void set_mScale_26(Vector3_t4282066566  value)
	{
		___mScale_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
