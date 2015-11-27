#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.NumberFormatter
struct NumberFormatter_t1660;
// System.Threading.Thread
struct Thread_t679;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1189;
// System.IFormatProvider
struct IFormatProvider_t1707;
// System.Globalization.CultureInfo
struct CultureInfo_t630;
// System.Text.StringBuilder
struct StringBuilder_t303;
// System.Int32[]
struct Int32U5BU5D_t379;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C" void NumberFormatter__ctor_m10510 (NumberFormatter_t1660 * __this, Thread_t679 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C" void NumberFormatter__cctor_m10511 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C" void NumberFormatter_GetFormatterTables_m10512 (Object_t * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C" int64_t NumberFormatter_GetTenPowerOf_m10513 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C" void NumberFormatter_InitDecHexDigits_m10514 (NumberFormatter_t1660 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m10515 (NumberFormatter_t1660 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m10516 (NumberFormatter_t1660 * __this, uint32_t ___hi, uint64_t ___lo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_FastToDecHex_m10517 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_ToDecHex_m10518 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C" int32_t NumberFormatter_FastDecHexLen_m10519 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C" int32_t NumberFormatter_DecHexLen_m10520 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C" int32_t NumberFormatter_DecHexLen_m10521 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C" int32_t NumberFormatter_ScaleOrder_m10522 (Object_t * __this /* static, unused */, int64_t ___hi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C" int32_t NumberFormatter_InitialFloatingPrecision_m10523 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C" int32_t NumberFormatter_ParsePrecision_m10524 (Object_t * __this /* static, unused */, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C" void NumberFormatter_Init_m10525 (NumberFormatter_t1660 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C" void NumberFormatter_InitHex_m10526 (NumberFormatter_t1660 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C" void NumberFormatter_Init_m10527 (NumberFormatter_t1660 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C" void NumberFormatter_Init_m10528 (NumberFormatter_t1660 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C" void NumberFormatter_Init_m10529 (NumberFormatter_t1660 * __this, String_t* ___format, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C" void NumberFormatter_Init_m10530 (NumberFormatter_t1660 * __this, String_t* ___format, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C" void NumberFormatter_Init_m10531 (NumberFormatter_t1660 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C" void NumberFormatter_Init_m10532 (NumberFormatter_t1660 * __this, String_t* ___format, Decimal_t1050  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C" void NumberFormatter_ResetCharBuf_m10533 (NumberFormatter_t1660 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C" void NumberFormatter_Resize_m10534 (NumberFormatter_t1660 * __this, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C" void NumberFormatter_Append_m10535 (NumberFormatter_t1660 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C" void NumberFormatter_Append_m10536 (NumberFormatter_t1660 * __this, uint16_t ___c, int32_t ___cnt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C" void NumberFormatter_Append_m10537 (NumberFormatter_t1660 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1189 * NumberFormatter_GetNumberFormatInstance_m10538 (NumberFormatter_t1660 * __this, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_set_CurrentCulture_m10539 (NumberFormatter_t1660 * __this, CultureInfo_t630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C" int32_t NumberFormatter_get_IntegerDigits_m10540 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C" int32_t NumberFormatter_get_DecimalDigits_m10541 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C" bool NumberFormatter_get_IsFloatingSource_m10542 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C" bool NumberFormatter_get_IsZero_m10543 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C" bool NumberFormatter_get_IsZeroInteger_m10544 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C" void NumberFormatter_RoundPos_m10545 (NumberFormatter_t1660 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C" bool NumberFormatter_RoundDecimal_m10546 (NumberFormatter_t1660 * __this, int32_t ___decimals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C" bool NumberFormatter_RoundBits_m10547 (NumberFormatter_t1660 * __this, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C" void NumberFormatter_RemoveTrailingZeros_m10548 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C" void NumberFormatter_AddOneToDecHex_m10549 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C" uint32_t NumberFormatter_AddOneToDecHex_m10550 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C" int32_t NumberFormatter_CountTrailingZeros_m10551 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C" int32_t NumberFormatter_CountTrailingZeros_m10552 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C" NumberFormatter_t1660 * NumberFormatter_GetInstance_m10553 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C" void NumberFormatter_Release_m10554 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_SetThreadCurrentCulture_m10555 (Object_t * __this /* static, unused */, CultureInfo_t630 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10556 (Object_t * __this /* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10557 (Object_t * __this /* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10558 (Object_t * __this /* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10559 (Object_t * __this /* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10560 (Object_t * __this /* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10561 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10562 (Object_t * __this /* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10563 (Object_t * __this /* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10564 (Object_t * __this /* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10565 (Object_t * __this /* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10566 (Object_t * __this /* static, unused */, String_t* ___format, Decimal_t1050  ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10567 (Object_t * __this /* static, unused */, uint32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10568 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10569 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10570 (Object_t * __this /* static, unused */, int64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10571 (Object_t * __this /* static, unused */, float ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10572 (Object_t * __this /* static, unused */, double ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_FastIntegerToString_m10573 (NumberFormatter_t1660 * __this, int32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C" String_t* NumberFormatter_IntegerToString_m10574 (NumberFormatter_t1660 * __this, String_t* ___format, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_NumberToString_m10575 (NumberFormatter_t1660 * __this, String_t* ___format, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCurrency_m10576 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatDecimal_m10577 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C" String_t* NumberFormatter_FormatHexadecimal_m10578 (NumberFormatter_t1660 * __this, int32_t ___precision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatFixedPoint_m10579 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m10580 (NumberFormatter_t1660 * __this, double ___origval, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m10581 (NumberFormatter_t1660 * __this, float ___origval, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatGeneral_m10582 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatNumber_m10583 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatPercent_m10584 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatExponential_m10585 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C" String_t* NumberFormatter_FormatExponential_m10586 (NumberFormatter_t1660 * __this, int32_t ___precision, NumberFormatInfo_t1189 * ___nfi, int32_t ___expDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCustom_m10587 (NumberFormatter_t1660 * __this, String_t* ___format, NumberFormatInfo_t1189 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C" void NumberFormatter_ZeroTrimEnd_m10588 (Object_t * __this /* static, unused */, StringBuilder_t303 * ___sb, bool ___canEmpty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C" bool NumberFormatter_IsZeroOnly_m10589 (Object_t * __this /* static, unused */, StringBuilder_t303 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C" void NumberFormatter_AppendNonNegativeNumber_m10590 (Object_t * __this /* static, unused */, StringBuilder_t303 * ___sb, int32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendIntegerString_m10591 (NumberFormatter_t1660 * __this, int32_t ___minLength, StringBuilder_t303 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C" void NumberFormatter_AppendIntegerString_m10592 (NumberFormatter_t1660 * __this, int32_t ___minLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDecimalString_m10593 (NumberFormatter_t1660 * __this, int32_t ___precision, StringBuilder_t303 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C" void NumberFormatter_AppendDecimalString_m10594 (NumberFormatter_t1660 * __this, int32_t ___precision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C" void NumberFormatter_AppendIntegerStringWithGroupSeparator_m10595 (NumberFormatter_t1660 * __this, Int32U5BU5D_t379* ___groups, String_t* ___groupSeparator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendExponent_m10596 (NumberFormatter_t1660 * __this, NumberFormatInfo_t1189 * ___nfi, int32_t ___exponent, int32_t ___minDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C" void NumberFormatter_AppendOneDigit_m10597 (NumberFormatter_t1660 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C" void NumberFormatter_FastAppendDigits_m10598 (NumberFormatter_t1660 * __this, int32_t ___val, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendDigits_m10599 (NumberFormatter_t1660 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDigits_m10600 (NumberFormatter_t1660 * __this, int32_t ___start, int32_t ___end, StringBuilder_t303 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C" void NumberFormatter_Multiply10_m10601 (NumberFormatter_t1660 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C" void NumberFormatter_Divide10_m10602 (NumberFormatter_t1660 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C" NumberFormatter_t1660 * NumberFormatter_GetClone_m10603 (NumberFormatter_t1660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
