#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.EncoderFallback
struct EncoderFallback_t1901620832;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t671205824;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t3370229086  : public Il2CppObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::fallback
	EncoderFallback_t1901620832 * ___fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::fallback_buffer
	EncoderFallbackBuffer_t671205824 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t3370229086, ___fallback_0)); }
	inline EncoderFallback_t1901620832 * get_fallback_0() const { return ___fallback_0; }
	inline EncoderFallback_t1901620832 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(EncoderFallback_t1901620832 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_0, value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Encoder_t3370229086, ___fallback_buffer_1)); }
	inline EncoderFallbackBuffer_t671205824 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline EncoderFallbackBuffer_t671205824 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(EncoderFallbackBuffer_t671205824 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
