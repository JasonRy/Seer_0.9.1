#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spin
struct  Spin_t2583650  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 Spin::rotationsPerSecond
	Vector3_t4282066566  ___rotationsPerSecond_2;
	// System.Boolean Spin::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Rigidbody Spin::mRb
	Rigidbody_t3346577219 * ___mRb_4;
	// UnityEngine.Transform Spin::mTrans
	Transform_t1659122786 * ___mTrans_5;

public:
	inline static int32_t get_offset_of_rotationsPerSecond_2() { return static_cast<int32_t>(offsetof(Spin_t2583650, ___rotationsPerSecond_2)); }
	inline Vector3_t4282066566  get_rotationsPerSecond_2() const { return ___rotationsPerSecond_2; }
	inline Vector3_t4282066566 * get_address_of_rotationsPerSecond_2() { return &___rotationsPerSecond_2; }
	inline void set_rotationsPerSecond_2(Vector3_t4282066566  value)
	{
		___rotationsPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_3() { return static_cast<int32_t>(offsetof(Spin_t2583650, ___ignoreTimeScale_3)); }
	inline bool get_ignoreTimeScale_3() const { return ___ignoreTimeScale_3; }
	inline bool* get_address_of_ignoreTimeScale_3() { return &___ignoreTimeScale_3; }
	inline void set_ignoreTimeScale_3(bool value)
	{
		___ignoreTimeScale_3 = value;
	}

	inline static int32_t get_offset_of_mRb_4() { return static_cast<int32_t>(offsetof(Spin_t2583650, ___mRb_4)); }
	inline Rigidbody_t3346577219 * get_mRb_4() const { return ___mRb_4; }
	inline Rigidbody_t3346577219 ** get_address_of_mRb_4() { return &___mRb_4; }
	inline void set_mRb_4(Rigidbody_t3346577219 * value)
	{
		___mRb_4 = value;
		Il2CppCodeGenWriteBarrier(&___mRb_4, value);
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(Spin_t2583650, ___mTrans_5)); }
	inline Transform_t1659122786 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t1659122786 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t1659122786 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
