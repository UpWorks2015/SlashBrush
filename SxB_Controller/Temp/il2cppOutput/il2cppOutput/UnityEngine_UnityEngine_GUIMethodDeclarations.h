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

// UnityEngine.GUISkin
struct GUISkin_t497;
// UnityEngine.GUIContent
struct GUIContent_t500;
// UnityEngine.GUIStyle
struct GUIStyle_t506;
// System.String
struct String_t;
// UnityEngine.TextEditor
struct TextEditor_t574;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2919 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2920 (Object_t * __this /* static, unused */, DateTime_t499  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2921 (Object_t * __this /* static, unused */, GUISkin_t497 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t497 * GUI_get_skin_m2922 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m2923 (Object_t * __this /* static, unused */, GUISkin_t497 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m2924 (Object_t * __this /* static, unused */, Rect_t173  ___position, GUIContent_t500 * ___content, GUIStyle_t506 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m2925 (Object_t * __this /* static, unused */, Rect_t173  ___position, GUIContent_t500 * ___content, GUIStyle_t506 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m2926 (Object_t * __this /* static, unused */, Rect_t173  ___position, GUIContent_t500 * ___content, GUIStyle_t506 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m2927 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C" void GUI_DoTextField_m2928 (Object_t * __this /* static, unused */, Rect_t173  ___position, int32_t ___id, GUIContent_t500 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t506 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C" void GUI_DoTextField_m2929 (Object_t * __this /* static, unused */, Rect_t173  ___position, int32_t ___id, GUIContent_t500 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t506 * ___style, String_t* ___secureText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m2930 (Object_t * __this /* static, unused */, Rect_t173  ___position, int32_t ___id, GUIContent_t500 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t506 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m2931 (Object_t * __this /* static, unused */, Rect_t173  ___position, int32_t ___id, GUIContent_t500 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t506 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t574 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForDesktop_m2932 (Object_t * __this /* static, unused */, Rect_t173  ___position, int32_t ___id, GUIContent_t500 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t506 * ___style, TextEditor_t574 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2933 (Object_t * __this /* static, unused */, WindowFunction_t495 * ___func, int32_t ___id, GUISkin_t497 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t506 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2934 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m2935 (Object_t * __this /* static, unused */, Rect_t173  ___position, GUIContent_t500 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m2936 (Object_t * __this /* static, unused */, Rect_t173 * ___position, GUIContent_t500 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m2937 (Object_t * __this /* static, unused */, Rect_t173  ___position, GUIContent_t500 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m2938 (Object_t * __this /* static, unused */, Rect_t173 * ___position, GUIContent_t500 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
