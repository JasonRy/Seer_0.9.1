#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
struct Vector3_t4282066566_marshaled_pinvoke;
struct Vector3_t4282066566_marshaled_com;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct  ChannelMixerSettings_t1763893499 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings::currentChannel
	int32_t ___currentChannel_0;
	// UnityEngine.Vector3[] UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings::channels
	Vector3U5BU5D_t215400611* ___channels_1;

public:
	inline static int32_t get_offset_of_currentChannel_0() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t1763893499, ___currentChannel_0)); }
	inline int32_t get_currentChannel_0() const { return ___currentChannel_0; }
	inline int32_t* get_address_of_currentChannel_0() { return &___currentChannel_0; }
	inline void set_currentChannel_0(int32_t value)
	{
		___currentChannel_0 = value;
	}

	inline static int32_t get_offset_of_channels_1() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t1763893499, ___channels_1)); }
	inline Vector3U5BU5D_t215400611* get_channels_1() const { return ___channels_1; }
	inline Vector3U5BU5D_t215400611** get_address_of_channels_1() { return &___channels_1; }
	inline void set_channels_1(Vector3U5BU5D_t215400611* value)
	{
		___channels_1 = value;
		Il2CppCodeGenWriteBarrier(&___channels_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct ChannelMixerSettings_t1763893499_marshaled_pinvoke
{
	int32_t ___currentChannel_0;
	Vector3_t4282066566_marshaled_pinvoke* ___channels_1;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct ChannelMixerSettings_t1763893499_marshaled_com
{
	int32_t ___currentChannel_0;
	Vector3_t4282066566_marshaled_com* ___channels_1;
};
