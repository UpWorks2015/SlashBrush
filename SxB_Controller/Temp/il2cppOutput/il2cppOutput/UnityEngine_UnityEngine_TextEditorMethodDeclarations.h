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

// UnityEngine.TextEditor
struct TextEditor_t574;
// UnityEngine.Event
struct Event_t178;
struct Event_t178_marshaled;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C" void TextEditor__ctor_m3290 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C" Rect_t173  TextEditor_get_position_m3291 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C" void TextEditor_set_position_m3292 (TextEditor_t574 * __this, Rect_t173  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C" int32_t TextEditor_get_cursorIndex_m3293 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C" void TextEditor_set_cursorIndex_m3294 (TextEditor_t574 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C" int32_t TextEditor_get_selectIndex_m3295 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C" void TextEditor_set_selectIndex_m3296 (TextEditor_t574 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3297 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m3298 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m3299 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C" void TextEditor_GrabGraphicalCursorPos_m3300 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern "C" bool TextEditor_HandleKeyEvent_m3301 (TextEditor_t574 * __this, Event_t178 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C" bool TextEditor_DeleteLineBack_m3302 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C" bool TextEditor_DeleteWordBack_m3303 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C" bool TextEditor_DeleteWordForward_m3304 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C" bool TextEditor_Delete_m3305 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C" bool TextEditor_Backspace_m3306 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3307 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C" void TextEditor_SelectNone_m3308 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C" bool TextEditor_get_hasSelection_m3309 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m3310 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3311 (TextEditor_t574 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C" void TextEditor_Insert_m3312 (TextEditor_t574 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C" void TextEditor_MoveRight_m3313 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C" void TextEditor_MoveLeft_m3314 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C" void TextEditor_MoveUp_m3315 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C" void TextEditor_MoveDown_m3316 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C" void TextEditor_MoveLineStart_m3317 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C" void TextEditor_MoveLineEnd_m3318 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C" void TextEditor_MoveGraphicalLineStart_m3319 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C" void TextEditor_MoveGraphicalLineEnd_m3320 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C" void TextEditor_MoveTextStart_m3321 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C" void TextEditor_MoveTextEnd_m3322 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C" int32_t TextEditor_IndexOfEndOfLine_m3323 (TextEditor_t574 * __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C" void TextEditor_MoveParagraphForward_m3324 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C" void TextEditor_MoveParagraphBackward_m3325 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_MoveCursorToPosition_m3326 (TextEditor_t574 * __this, Vector2_t72  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_SelectToPosition_m3327 (TextEditor_t574 * __this, Vector2_t72  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C" void TextEditor_SelectLeft_m3328 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C" void TextEditor_SelectRight_m3329 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C" void TextEditor_SelectUp_m3330 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C" void TextEditor_SelectDown_m3331 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C" void TextEditor_SelectTextEnd_m3332 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C" void TextEditor_SelectTextStart_m3333 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C" void TextEditor_MouseDragSelectsWholeWords_m3334 (TextEditor_t574 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C" void TextEditor_DblClickSnap_m3335 (TextEditor_t574 * __this, uint8_t ___snapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineStart_m3336 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineEnd_m3337 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C" int32_t TextEditor_FindNextSeperator_m3338 (TextEditor_t574 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern "C" bool TextEditor_isLetterLikeChar_m3339 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C" int32_t TextEditor_FindPrevSeperator_m3340 (TextEditor_t574 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C" void TextEditor_MoveWordRight_m3341 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C" void TextEditor_MoveToStartOfNextWord_m3342 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C" void TextEditor_MoveToEndOfPreviousWord_m3343 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C" void TextEditor_SelectToStartOfNextWord_m3344 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C" void TextEditor_SelectToEndOfPreviousWord_m3345 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern "C" int32_t TextEditor_ClassifyChar_m3346 (TextEditor_t574 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern "C" int32_t TextEditor_FindStartOfNextWord_m3347 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C" int32_t TextEditor_FindEndOfPreviousWord_m3348 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C" void TextEditor_MoveWordLeft_m3349 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C" void TextEditor_SelectWordRight_m3350 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C" void TextEditor_SelectWordLeft_m3351 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C" void TextEditor_ExpandSelectGraphicalLineStart_m3352 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C" void TextEditor_ExpandSelectGraphicalLineEnd_m3353 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C" void TextEditor_SelectGraphicalLineStart_m3354 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C" void TextEditor_SelectGraphicalLineEnd_m3355 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C" void TextEditor_SelectParagraphForward_m3356 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C" void TextEditor_SelectParagraphBackward_m3357 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C" void TextEditor_SelectCurrentWord_m3358 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C" int32_t TextEditor_FindEndOfClassification_m3359 (TextEditor_t574 * __this, int32_t ___p, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C" void TextEditor_SelectCurrentParagraph_m3360 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m3361 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3362 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern "C" void TextEditor_DrawCursor_m3363 (TextEditor_t574 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern "C" bool TextEditor_PerformOperation_m3364 (TextEditor_t574 * __this, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m3365 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C" bool TextEditor_Cut_m3366 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C" void TextEditor_Copy_m3367 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3368 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C" bool TextEditor_Paste_m3369 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern "C" void TextEditor_MapKey_m3370 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern "C" void TextEditor_InitKeyActions_m3371 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern "C" void TextEditor_DetectFocusChange_m3372 (TextEditor_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
