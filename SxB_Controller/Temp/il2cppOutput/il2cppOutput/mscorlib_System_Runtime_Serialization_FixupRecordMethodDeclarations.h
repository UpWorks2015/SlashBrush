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

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1484;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1480;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1474;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m9081 (FixupRecord_t1484 * __this, ObjectRecord_t1480 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t1480 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m9082 (FixupRecord_t1484 * __this, ObjectManager_t1474 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
