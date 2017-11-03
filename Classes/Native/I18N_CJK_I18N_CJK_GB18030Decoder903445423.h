#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// I18N.CJK.DbcsConvert
struct DbcsConvert_t2366949127;

#include "I18N_CJK_I18N_CJK_DbcsEncoding_DbcsDecoder320438914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.GB18030Decoder
struct  GB18030Decoder_t903445423  : public DbcsDecoder_t320438914
{
public:

public:
};

struct GB18030Decoder_t903445423_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Decoder::gb2312
	DbcsConvert_t2366949127 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Decoder_t903445423_StaticFields, ___gb2312_3)); }
	inline DbcsConvert_t2366949127 * get_gb2312_3() const { return ___gb2312_3; }
	inline DbcsConvert_t2366949127 ** get_address_of_gb2312_3() { return &___gb2312_3; }
	inline void set_gb2312_3(DbcsConvert_t2366949127 * value)
	{
		___gb2312_3 = value;
		Il2CppCodeGenWriteBarrier(&___gb2312_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
