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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t760;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t638;
// System.Text.RegularExpressions.Match
struct Match_t759;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t758;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t833;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m4034 (BaseMachine_t760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m4035 (BaseMachine_t760 * __this, Regex_t638 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t759 * BaseMachine_Scan_m4036 (BaseMachine_t760 * __this, Regex_t638 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m4037 (BaseMachine_t760 * __this, Regex_t638 * ___regex, String_t* ___input, MatchAppendEvaluator_t758 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m4038 (BaseMachine_t760 * __this, Regex_t638 * ___regex, String_t* ___input, MatchEvaluator_t833 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
