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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCamera
struct  GameCamera_t2145425879  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera GameCamera::_unityCamera
	Camera_t2727095145 * ____unityCamera_2;

public:
	inline static int32_t get_offset_of__unityCamera_2() { return static_cast<int32_t>(offsetof(GameCamera_t2145425879, ____unityCamera_2)); }
	inline Camera_t2727095145 * get__unityCamera_2() const { return ____unityCamera_2; }
	inline Camera_t2727095145 ** get_address_of__unityCamera_2() { return &____unityCamera_2; }
	inline void set__unityCamera_2(Camera_t2727095145 * value)
	{
		____unityCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&____unityCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
