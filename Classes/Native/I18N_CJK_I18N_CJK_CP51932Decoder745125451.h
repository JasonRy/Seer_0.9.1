﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "I18N_CJK_I18N_CJK_DbcsEncoding_DbcsDecoder320438914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.CP51932Decoder
struct  CP51932Decoder_t745125451  : public DbcsDecoder_t320438914
{
public:
	// System.Int32 I18N.CJK.CP51932Decoder::last_count
	int32_t ___last_count_3;
	// System.Int32 I18N.CJK.CP51932Decoder::last_bytes
	int32_t ___last_bytes_4;

public:
	inline static int32_t get_offset_of_last_count_3() { return static_cast<int32_t>(offsetof(CP51932Decoder_t745125451, ___last_count_3)); }
	inline int32_t get_last_count_3() const { return ___last_count_3; }
	inline int32_t* get_address_of_last_count_3() { return &___last_count_3; }
	inline void set_last_count_3(int32_t value)
	{
		___last_count_3 = value;
	}

	inline static int32_t get_offset_of_last_bytes_4() { return static_cast<int32_t>(offsetof(CP51932Decoder_t745125451, ___last_bytes_4)); }
	inline int32_t get_last_bytes_4() const { return ___last_bytes_4; }
	inline int32_t* get_address_of_last_bytes_4() { return &___last_bytes_4; }
	inline void set_last_bytes_4(int32_t value)
	{
		___last_bytes_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
