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
// UnityEngine.Camera
struct Camera_t2727095145;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIRect/AnchorPoint
struct  AnchorPoint_t3581172420  : public Il2CppObject
{
public:
	// UnityEngine.Transform UIRect/AnchorPoint::target
	Transform_t1659122786 * ___target_0;
	// System.Single UIRect/AnchorPoint::relative
	float ___relative_1;
	// System.Int32 UIRect/AnchorPoint::absolute
	int32_t ___absolute_2;
	// UIRect UIRect/AnchorPoint::rect
	UIRect_t2503437976 * ___rect_3;
	// UnityEngine.Camera UIRect/AnchorPoint::targetCam
	Camera_t2727095145 * ___targetCam_4;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(AnchorPoint_t3581172420, ___target_0)); }
	inline Transform_t1659122786 * get_target_0() const { return ___target_0; }
	inline Transform_t1659122786 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_t1659122786 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_relative_1() { return static_cast<int32_t>(offsetof(AnchorPoint_t3581172420, ___relative_1)); }
	inline float get_relative_1() const { return ___relative_1; }
	inline float* get_address_of_relative_1() { return &___relative_1; }
	inline void set_relative_1(float value)
	{
		___relative_1 = value;
	}

	inline static int32_t get_offset_of_absolute_2() { return static_cast<int32_t>(offsetof(AnchorPoint_t3581172420, ___absolute_2)); }
	inline int32_t get_absolute_2() const { return ___absolute_2; }
	inline int32_t* get_address_of_absolute_2() { return &___absolute_2; }
	inline void set_absolute_2(int32_t value)
	{
		___absolute_2 = value;
	}

	inline static int32_t get_offset_of_rect_3() { return static_cast<int32_t>(offsetof(AnchorPoint_t3581172420, ___rect_3)); }
	inline UIRect_t2503437976 * get_rect_3() const { return ___rect_3; }
	inline UIRect_t2503437976 ** get_address_of_rect_3() { return &___rect_3; }
	inline void set_rect_3(UIRect_t2503437976 * value)
	{
		___rect_3 = value;
		Il2CppCodeGenWriteBarrier(&___rect_3, value);
	}

	inline static int32_t get_offset_of_targetCam_4() { return static_cast<int32_t>(offsetof(AnchorPoint_t3581172420, ___targetCam_4)); }
	inline Camera_t2727095145 * get_targetCam_4() const { return ___targetCam_4; }
	inline Camera_t2727095145 ** get_address_of_targetCam_4() { return &___targetCam_4; }
	inline void set_targetCam_4(Camera_t2727095145 * value)
	{
		___targetCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetCam_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
