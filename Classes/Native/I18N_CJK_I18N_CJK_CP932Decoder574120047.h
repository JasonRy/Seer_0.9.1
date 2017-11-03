#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// I18N.CJK.JISConvert
struct JISConvert_t1383524885;

#include "I18N_CJK_I18N_CJK_DbcsEncoding_DbcsDecoder320438914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.CP932Decoder
struct  CP932Decoder_t574120047  : public DbcsDecoder_t320438914
{
public:
	// I18N.CJK.JISConvert I18N.CJK.CP932Decoder::convert
	JISConvert_t1383524885 * ___convert_3;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_chars
	int32_t ___last_byte_chars_5;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(CP932Decoder_t574120047, ___convert_3)); }
	inline JISConvert_t1383524885 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t1383524885 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t1383524885 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier(&___convert_3, value);
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(CP932Decoder_t574120047, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_chars_5() { return static_cast<int32_t>(offsetof(CP932Decoder_t574120047, ___last_byte_chars_5)); }
	inline int32_t get_last_byte_chars_5() const { return ___last_byte_chars_5; }
	inline int32_t* get_address_of_last_byte_chars_5() { return &___last_byte_chars_5; }
	inline void set_last_byte_chars_5(int32_t value)
	{
		___last_byte_chars_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
