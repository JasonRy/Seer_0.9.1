#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_IO_IOException2404867879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileLoadException
struct  FileLoadException_t2341042667  : public IOException_t2404867879
{
public:
	// System.String System.IO.FileLoadException::msg
	String_t* ___msg_11;
	// System.String System.IO.FileLoadException::fileName
	String_t* ___fileName_12;
	// System.String System.IO.FileLoadException::fusionLog
	String_t* ___fusionLog_13;

public:
	inline static int32_t get_offset_of_msg_11() { return static_cast<int32_t>(offsetof(FileLoadException_t2341042667, ___msg_11)); }
	inline String_t* get_msg_11() const { return ___msg_11; }
	inline String_t** get_address_of_msg_11() { return &___msg_11; }
	inline void set_msg_11(String_t* value)
	{
		___msg_11 = value;
		Il2CppCodeGenWriteBarrier(&___msg_11, value);
	}

	inline static int32_t get_offset_of_fileName_12() { return static_cast<int32_t>(offsetof(FileLoadException_t2341042667, ___fileName_12)); }
	inline String_t* get_fileName_12() const { return ___fileName_12; }
	inline String_t** get_address_of_fileName_12() { return &___fileName_12; }
	inline void set_fileName_12(String_t* value)
	{
		___fileName_12 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_12, value);
	}

	inline static int32_t get_offset_of_fusionLog_13() { return static_cast<int32_t>(offsetof(FileLoadException_t2341042667, ___fusionLog_13)); }
	inline String_t* get_fusionLog_13() const { return ___fusionLog_13; }
	inline String_t** get_address_of_fusionLog_13() { return &___fusionLog_13; }
	inline void set_fusionLog_13(String_t* value)
	{
		___fusionLog_13 = value;
		Il2CppCodeGenWriteBarrier(&___fusionLog_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
