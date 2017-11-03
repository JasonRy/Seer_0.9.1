#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TweenRotation
struct TweenRotation_t2896252649;
// Move
struct Move_t2404337;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateObj
struct  RotateObj_t754496892  : public MonoBehaviour_t667441552
{
public:
	// TweenRotation RotateObj::TR
	TweenRotation_t2896252649 * ___TR_2;
	// Move RotateObj::cam
	Move_t2404337 * ___cam_3;
	// System.Boolean RotateObj::isCamera
	bool ___isCamera_4;

public:
	inline static int32_t get_offset_of_TR_2() { return static_cast<int32_t>(offsetof(RotateObj_t754496892, ___TR_2)); }
	inline TweenRotation_t2896252649 * get_TR_2() const { return ___TR_2; }
	inline TweenRotation_t2896252649 ** get_address_of_TR_2() { return &___TR_2; }
	inline void set_TR_2(TweenRotation_t2896252649 * value)
	{
		___TR_2 = value;
		Il2CppCodeGenWriteBarrier(&___TR_2, value);
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(RotateObj_t754496892, ___cam_3)); }
	inline Move_t2404337 * get_cam_3() const { return ___cam_3; }
	inline Move_t2404337 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Move_t2404337 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}

	inline static int32_t get_offset_of_isCamera_4() { return static_cast<int32_t>(offsetof(RotateObj_t754496892, ___isCamera_4)); }
	inline bool get_isCamera_4() const { return ___isCamera_4; }
	inline bool* get_address_of_isCamera_4() { return &___isCamera_4; }
	inline void set_isCamera_4(bool value)
	{
		___isCamera_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
