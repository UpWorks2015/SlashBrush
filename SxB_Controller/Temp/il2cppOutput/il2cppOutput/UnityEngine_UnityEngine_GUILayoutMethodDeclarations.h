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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t14;
// UnityEngine.GUIContent
struct GUIContent_t500;
// UnityEngine.GUIStyle
struct GUIStyle_t506;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t18;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m62 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m2947 (Object_t * __this /* static, unused */, GUIContent_t500 * ___content, GUIStyle_t506 * ___style, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m63 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m2948 (Object_t * __this /* static, unused */, GUIContent_t500 * ___content, GUIStyle_t506 * ___style, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m65 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_DoTextField_m2949 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t506 * ___style, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m78 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m80 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m2950 (Object_t * __this /* static, unused */, GUIContent_t500 * ___content, GUIStyle_t506 * ___style, GUILayoutOptionU5BU5D_t14* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m88 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t18 * GUILayout_Width_m79 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t18 * GUILayout_Height_m2951 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
