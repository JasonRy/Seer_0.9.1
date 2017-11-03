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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraTargeting
struct  CameraTargeting_t3570876140  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.LayerMask CameraTargeting::targetingLayerMask
	LayerMask_t3236759763  ___targetingLayerMask_2;
	// System.Single CameraTargeting::targetingRayLength
	float ___targetingRayLength_3;
	// UnityEngine.Camera CameraTargeting::cam
	Camera_t2727095145 * ___cam_4;

public:
	inline static int32_t get_offset_of_targetingLayerMask_2() { return static_cast<int32_t>(offsetof(CameraTargeting_t3570876140, ___targetingLayerMask_2)); }
	inline LayerMask_t3236759763  get_targetingLayerMask_2() const { return ___targetingLayerMask_2; }
	inline LayerMask_t3236759763 * get_address_of_targetingLayerMask_2() { return &___targetingLayerMask_2; }
	inline void set_targetingLayerMask_2(LayerMask_t3236759763  value)
	{
		___targetingLayerMask_2 = value;
	}

	inline static int32_t get_offset_of_targetingRayLength_3() { return static_cast<int32_t>(offsetof(CameraTargeting_t3570876140, ___targetingRayLength_3)); }
	inline float get_targetingRayLength_3() const { return ___targetingRayLength_3; }
	inline float* get_address_of_targetingRayLength_3() { return &___targetingRayLength_3; }
	inline void set_targetingRayLength_3(float value)
	{
		___targetingRayLength_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(CameraTargeting_t3570876140, ___cam_4)); }
	inline Camera_t2727095145 * get_cam_4() const { return ___cam_4; }
	inline Camera_t2727095145 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t2727095145 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}
};

struct CameraTargeting_t3570876140_StaticFields
{
public:
	// System.String CameraTargeting::buttonFire1
	String_t* ___buttonFire1_5;
	// System.String CameraTargeting::buttonFire2
	String_t* ___buttonFire2_6;

public:
	inline static int32_t get_offset_of_buttonFire1_5() { return static_cast<int32_t>(offsetof(CameraTargeting_t3570876140_StaticFields, ___buttonFire1_5)); }
	inline String_t* get_buttonFire1_5() const { return ___buttonFire1_5; }
	inline String_t** get_address_of_buttonFire1_5() { return &___buttonFire1_5; }
	inline void set_buttonFire1_5(String_t* value)
	{
		___buttonFire1_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttonFire1_5, value);
	}

	inline static int32_t get_offset_of_buttonFire2_6() { return static_cast<int32_t>(offsetof(CameraTargeting_t3570876140_StaticFields, ___buttonFire2_6)); }
	inline String_t* get_buttonFire2_6() const { return ___buttonFire2_6; }
	inline String_t** get_address_of_buttonFire2_6() { return &___buttonFire2_6; }
	inline void set_buttonFire2_6(String_t* value)
	{
		___buttonFire2_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonFire2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
