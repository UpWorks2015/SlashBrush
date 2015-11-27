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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t812;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t814;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t807;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t849;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t813;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m4357 (CaptureAssertion_t812 * __this, Literal_t814 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m4358 (CaptureAssertion_t812 * __this, CapturingGroup_t807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m4359 (CaptureAssertion_t812 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m4360 (CaptureAssertion_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t813 * CaptureAssertion_get_Alternate_m4361 (CaptureAssertion_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
