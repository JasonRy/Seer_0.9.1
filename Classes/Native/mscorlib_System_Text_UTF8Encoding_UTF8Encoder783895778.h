#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Text_Encoder3370229086.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t783895778  : public Encoder_t3370229086
{
public:
	// System.Char System.Text.UTF8Encoding/UTF8Encoder::leftOverForCount
	Il2CppChar ___leftOverForCount_2;
	// System.Char System.Text.UTF8Encoding/UTF8Encoder::leftOverForConv
	Il2CppChar ___leftOverForConv_3;

public:
	inline static int32_t get_offset_of_leftOverForCount_2() { return static_cast<int32_t>(offsetof(UTF8Encoder_t783895778, ___leftOverForCount_2)); }
	inline Il2CppChar get_leftOverForCount_2() const { return ___leftOverForCount_2; }
	inline Il2CppChar* get_address_of_leftOverForCount_2() { return &___leftOverForCount_2; }
	inline void set_leftOverForCount_2(Il2CppChar value)
	{
		___leftOverForCount_2 = value;
	}

	inline static int32_t get_offset_of_leftOverForConv_3() { return static_cast<int32_t>(offsetof(UTF8Encoder_t783895778, ___leftOverForConv_3)); }
	inline Il2CppChar get_leftOverForConv_3() const { return ___leftOverForConv_3; }
	inline Il2CppChar* get_address_of_leftOverForConv_3() { return &___leftOverForConv_3; }
	inline void set_leftOverForConv_3(Il2CppChar value)
	{
		___leftOverForConv_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
