#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t548;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t549;
// UnityEngine.Texture2D
struct Texture2D_t139;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t550;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t406;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t553;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t551;
// System.String[]
struct StringU5BU5D_t26;
// UnityEngine.GUILayer
struct GUILayer_t411;
// System.Object
struct Object_t;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t561;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t562;
// UnityEngine.SpaceAttribute
struct SpaceAttribute_t563;
// UnityEngine.RangeAttribute
struct RangeAttribute_t564;
// UnityEngine.TextAreaAttribute
struct TextAreaAttribute_t565;
// UnityEngine.SelectionBaseAttribute
struct SelectionBaseAttribute_t566;
// UnityEngine.SliderState
struct SliderState_t567;
// UnityEngine.StackTraceUtility
struct StackTraceUtility_t568;
// System.Diagnostics.StackTrace
struct StackTrace_t607;
// UnityEngine.UnityException
struct UnityException_t342;
// System.Exception
struct Exception_t309;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;
// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t569;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t570;
// UnityEngine.TextEditor
struct TextEditor_t574;
// UnityEngine.Event
struct Event_t178;
struct Event_t178_marshaled;
// UnityEngine.TrackedReference
struct TrackedReference_t479;
struct TrackedReference_t479_marshaled;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t577;
// UnityEngine.Object
struct Object_t296;
struct Object_t296_marshaled;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t578;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Delegate
struct Delegate_t336;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t579;
// UnityEngine.Events.UnityAction
struct UnityAction_t137;
// System.Object[]
struct ObjectU5BU5D_t15;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t581;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t586;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t582;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t584;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t606;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t102;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t587;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t588;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t589;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t591;
// UnityEngineInternal.GenericStack
struct GenericStack_t498;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t455;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Double.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTimeMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2D.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
#include "mscorlib_System_Int64.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
#include "mscorlib_System_UInt32.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_GUILayer.h"
#include "UnityEngine_UnityEngine_GUIElement.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_RenderTexture.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
#include "mscorlib_System_AttributeMethodDeclarations.h"
#include "mscorlib_System_Attribute.h"
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SliderState.h"
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackTrace.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
#include "mscorlib_System_Exception.h"
#include "mscorlib_System_Text_StringBuilder.h"
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_System_ExceptionMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_Reflection_MemberInfo.h"
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
#include "mscorlib_System_Char.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackFrame.h"
#include "mscorlib_System_Reflection_MethodBase.h"
#include "mscorlib_System_Reflection_ParameterInfo.h"
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_UnityException.h"
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterTypeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextEditor.h"
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIContent.h"
#include "UnityEngine_UnityEngine_GUIStyle.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Event.h"
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
#include "UnityEngine_UnityEngine_EventModifiers.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
#include "mscorlib_System_CharMethodDeclarations.h"
#include "UnityEngine_UnityEngine_EventType.h"
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectOffset.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_UnityEngine_Font.h"
#include "UnityEngine_UnityEngine_TrackedReference.h"
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"
#include "mscorlib_System_IntPtrMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException.h"
#include "mscorlib_System_Delegate.h"
#include "mscorlib_System_DelegateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
#include "mscorlib_System_Reflection_ConstructorInfo.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
#include "mscorlib_System_Predicate_1_gen_1MethodDeclarations.h"
#include "mscorlib_System_Predicate_1_gen_1.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_Binder.h"
#include "mscorlib_System_Reflection_ParameterModifier.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
#include "mscorlib_System_Collections_Stack.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
#include "mscorlib_System_AsyncCallback.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m96_gshared (Component_t29 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m96(__this, method) (( Object_t * (*) (Component_t29 *, const MethodInfo*))Component_GetComponent_TisObject_t_m96_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t411_m3503(__this, method) (( GUILayer_t411 * (*) (Component_t29 *, const MethodInfo*))Component_GetComponent_TisObject_t_m96_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m3216 (Achievement_t548 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t499  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t499  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t499_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m3217 (Achievement_t548 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t499_il2cpp_TypeInfo_var);
		DateTime_t499  L_2 = ((DateTime_t499_StaticFields*)DateTime_t499_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern Il2CppCodeGenString* _stringLiteral288;
extern "C" void Achievement__ctor_m3218 (Achievement_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral288 = il2cpp_codegen_string_literal_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		Achievement__ctor_m3217(__this, _stringLiteral288, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t631_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t306_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t499_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral287;
extern "C" String_t* Achievement_ToString_m3219 (Achievement_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Double_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Boolean_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		DateTime_t499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral287 = il2cpp_codegen_string_literal_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t15* L_0 = ((ObjectU5BU5D_t15*)SZArrayNew(ObjectU5BU5D_t15_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t15* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t631_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t15* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t306_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t15* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t306_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t15* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_18 = L_17;
		DateTime_t499  L_19 = (DateTime_t499 )VirtFuncInvoker0< DateTime_t499  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t499  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t499_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8, sizeof(Object_t *))) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m72(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3220 (Achievement_t548 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3221 (Achievement_t548 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3222 (Achievement_t548 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3223 (Achievement_t548 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3224 (Achievement_t548 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3225 (Achievement_t548 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t499  Achievement_get_lastReportedDate_m3226 (Achievement_t548 * __this, const MethodInfo* method)
{
	{
		DateTime_t499  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m3227 (AchievementDescription_t549 * __this, String_t* ___id, String_t* ___title, Texture2D_t139 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t139 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t306_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral287;
extern "C" String_t* AchievementDescription_ToString_m3228 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Boolean_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral287 = il2cpp_codegen_string_literal_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t15* L_0 = ((ObjectU5BU5D_t15*)SZArrayNew(ObjectU5BU5D_t15_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t15* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t15* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t15* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t15* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t16_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t15* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, _stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)_stringLiteral287;
		ObjectU5BU5D_t15* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t306_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m72(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m3229 (AchievementDescription_t549 * __this, Texture2D_t139 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t139 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3230 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3231 (AchievementDescription_t549 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3232 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3233 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3234 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3235 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3236 (AchievementDescription_t549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t499_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral144;
extern "C" void Score__ctor_m3237 (Score_t550 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t499_il2cpp_TypeInfo_var);
		DateTime_t499  L_2 = DateTime_get_Now_m3483(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m3238(__this, L_0, L_1, _stringLiteral144, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3238 (Score_t550 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t499  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t499  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t16_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t632_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t499_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral289;
extern Il2CppCodeGenString* _stringLiteral290;
extern Il2CppCodeGenString* _stringLiteral291;
extern Il2CppCodeGenString* _stringLiteral292;
extern Il2CppCodeGenString* _stringLiteral293;
extern "C" String_t* Score_ToString_m3239 (Score_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int64_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		DateTime_t499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral289 = il2cpp_codegen_string_literal_from_index(289);
		_stringLiteral290 = il2cpp_codegen_string_literal_from_index(290);
		_stringLiteral291 = il2cpp_codegen_string_literal_from_index(291);
		_stringLiteral292 = il2cpp_codegen_string_literal_from_index(292);
		_stringLiteral293 = il2cpp_codegen_string_literal_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t15* L_0 = ((ObjectU5BU5D_t15*)SZArrayNew(ObjectU5BU5D_t15_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral289);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral289;
		ObjectU5BU5D_t15* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t16_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t15* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral290);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral290;
		ObjectU5BU5D_t15* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t632_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t15* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral291);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral291;
		ObjectU5BU5D_t15* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t15* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, _stringLiteral292);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral292;
		ObjectU5BU5D_t15* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t15* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, _stringLiteral293);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral293;
		ObjectU5BU5D_t15* L_17 = L_16;
		DateTime_t499  L_18 = (__this->___m_Date_0);
		DateTime_t499  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t499_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m72(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3240 (Score_t550 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3241 (Score_t550 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3242 (Score_t550 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3243 (Score_t550 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t550_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t616_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t26_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral294;
extern "C" void Leaderboard__ctor_m3244 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		ScoreU5BU5D_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		StringU5BU5D_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		_stringLiteral294 = il2cpp_codegen_string_literal_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, _stringLiteral294);
		Range_t552  L_0 = {0};
		Range__ctor_m3266(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t552  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t550 * L_1 = (Score_t550 *)il2cpp_codegen_object_new (Score_t550_il2cpp_TypeInfo_var);
		Score__ctor_m3237(L_1, _stringLiteral294, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t551*)((ScoreU5BU5D_t616*)SZArrayNew(ScoreU5BU5D_t616_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = _stringLiteral294;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t26*)SZArrayNew(StringU5BU5D_t26_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t15_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t306_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t16_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t633_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t559_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t560_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral295;
extern Il2CppCodeGenString* _stringLiteral296;
extern Il2CppCodeGenString* _stringLiteral297;
extern Il2CppCodeGenString* _stringLiteral298;
extern Il2CppCodeGenString* _stringLiteral299;
extern Il2CppCodeGenString* _stringLiteral300;
extern Il2CppCodeGenString* _stringLiteral301;
extern Il2CppCodeGenString* _stringLiteral302;
extern Il2CppCodeGenString* _stringLiteral303;
extern Il2CppCodeGenString* _stringLiteral304;
extern "C" String_t* Leaderboard_ToString_m3245 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Boolean_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		Int32_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UInt32_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(376);
		UserScope_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		TimeScope_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral295 = il2cpp_codegen_string_literal_from_index(295);
		_stringLiteral296 = il2cpp_codegen_string_literal_from_index(296);
		_stringLiteral297 = il2cpp_codegen_string_literal_from_index(297);
		_stringLiteral298 = il2cpp_codegen_string_literal_from_index(298);
		_stringLiteral299 = il2cpp_codegen_string_literal_from_index(299);
		_stringLiteral300 = il2cpp_codegen_string_literal_from_index(300);
		_stringLiteral301 = il2cpp_codegen_string_literal_from_index(301);
		_stringLiteral302 = il2cpp_codegen_string_literal_from_index(302);
		_stringLiteral303 = il2cpp_codegen_string_literal_from_index(303);
		_stringLiteral304 = il2cpp_codegen_string_literal_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	Range_t552  V_0 = {0};
	Range_t552  V_1 = {0};
	{
		ObjectU5BU5D_t15* L_0 = ((ObjectU5BU5D_t15*)SZArrayNew(ObjectU5BU5D_t15_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral295);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral295;
		ObjectU5BU5D_t15* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_2;
		ObjectU5BU5D_t15* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral296);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral296;
		ObjectU5BU5D_t15* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t15* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral297);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral297;
		ObjectU5BU5D_t15* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t306_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t15* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, _stringLiteral298);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral298;
		ObjectU5BU5D_t15* L_12 = L_11;
		Range_t552  L_13 = (Range_t552 )VirtFuncInvoker0< Range_t552  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t16_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t15* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, _stringLiteral299);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral299;
		ObjectU5BU5D_t15* L_18 = L_17;
		Range_t552  L_19 = (Range_t552 )VirtFuncInvoker0< Range_t552  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t16_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_22;
		ObjectU5BU5D_t15* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, _stringLiteral300);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)_stringLiteral300;
		ObjectU5BU5D_t15* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t633_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t15* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, _stringLiteral301);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)_stringLiteral301;
		ObjectU5BU5D_t15* L_29 = L_28;
		IScoreU5BU5D_t551* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)((int32_t)(((Array_t *)L_30)->max_length))));
		Object_t * L_32 = Box(Int32_t16_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t15* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, _stringLiteral302);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)_stringLiteral302;
		ObjectU5BU5D_t15* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t559_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_37;
		ObjectU5BU5D_t15* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, _stringLiteral303);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16), sizeof(Object_t *))) = (Object_t *)_stringLiteral303;
		ObjectU5BU5D_t15* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t560_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17), sizeof(Object_t *))) = (Object_t *)L_42;
		ObjectU5BU5D_t15* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, _stringLiteral304);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18), sizeof(Object_t *))) = (Object_t *)_stringLiteral304;
		ObjectU5BU5D_t15* L_44 = L_43;
		StringU5BU5D_t26* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)((int32_t)(((Array_t *)L_45)->max_length))));
		Object_t * L_47 = Box(Int32_t16_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19), sizeof(Object_t *))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m72(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m3246 (Leaderboard_t406 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m3247 (Leaderboard_t406 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m3248 (Leaderboard_t406 * __this, IScoreU5BU5D_t551* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t551* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m3249 (Leaderboard_t406 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t26* Leaderboard_GetUserFilter_m3250 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t26* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3251 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3252 (Leaderboard_t406 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3253 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3254 (Leaderboard_t406 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t552  Leaderboard_get_range_m3255 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	{
		Range_t552  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3256 (Leaderboard_t406 * __this, Range_t552  ___value, const MethodInfo* method)
{
	{
		Range_t552  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3257 (Leaderboard_t406 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3258 (Leaderboard_t406 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m3259 (HitInfo_t554 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t36 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m2599(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m3260 (Object_t * __this /* static, unused */, HitInfo_t554  ___lhs, HitInfo_t554  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t36 * L_0 = ((&___lhs)->___target_0);
		GameObject_t36 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m1507(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t9 * L_3 = ((&___lhs)->___camera_1);
		Camera_t9 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m1507(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m3261 (Object_t * __this /* static, unused */, HitInfo_t554  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t36 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_0, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t9 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_2, (Object_t296 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* SendMouseEvents_t555_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfoU5BU5D_t556_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t554_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3262 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SendMouseEvents_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		HitInfoU5BU5D_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		HitInfo_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t554  V_0 = {0};
	HitInfo_t554  V_1 = {0};
	HitInfo_t554  V_2 = {0};
	HitInfo_t554  V_3 = {0};
	HitInfo_t554  V_4 = {0};
	HitInfo_t554  V_5 = {0};
	HitInfo_t554  V_6 = {0};
	HitInfo_t554  V_7 = {0};
	HitInfo_t554  V_8 = {0};
	{
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		HitInfoU5BU5D_t556* L_0 = ((HitInfoU5BU5D_t556*)SZArrayNew(HitInfoU5BU5D_t556_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t554  L_1 = V_0;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_0, 0, sizeof(HitInfo_t554 )))) = L_1;
		HitInfoU5BU5D_t556* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t554  L_3 = V_1;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_2, 1, sizeof(HitInfo_t554 )))) = L_3;
		HitInfoU5BU5D_t556* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t554  L_5 = V_2;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_4, 2, sizeof(HitInfo_t554 )))) = L_5;
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4 = L_4;
		HitInfoU5BU5D_t556* L_6 = ((HitInfoU5BU5D_t556*)SZArrayNew(HitInfoU5BU5D_t556_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t554  L_7 = V_3;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_6, 0, sizeof(HitInfo_t554 )))) = L_7;
		HitInfoU5BU5D_t556* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t554  L_9 = V_4;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_8, 1, sizeof(HitInfo_t554 )))) = L_9;
		HitInfoU5BU5D_t556* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t554  L_11 = V_5;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_10, 2, sizeof(HitInfo_t554 )))) = L_11;
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5 = L_10;
		HitInfoU5BU5D_t556* L_12 = ((HitInfoU5BU5D_t556*)SZArrayNew(HitInfoU5BU5D_t556_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t554  L_13 = V_6;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_12, 0, sizeof(HitInfo_t554 )))) = L_13;
		HitInfoU5BU5D_t556* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t554  L_15 = V_7;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_14, 1, sizeof(HitInfo_t554 )))) = L_15;
		HitInfoU5BU5D_t556* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t554  L_17 = V_8;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_16, 2, sizeof(HitInfo_t554 )))) = L_17;
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SetMouseMoved()
extern TypeInfo* SendMouseEvents_t555_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SetMouseMoved_m3263 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SendMouseEvents_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 1;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32)
extern TypeInfo* Input_t24_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t555_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t557_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t554_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t411_m3503_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3264 (Object_t * __this /* static, unused */, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		SendMouseEvents_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		CameraU5BU5D_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		HitInfo_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		Component_GetComponent_TisGUILayer_t411_m3503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483963);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t71  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t9 * V_3 = {0};
	CameraU5BU5D_t557* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t173  V_6 = {0};
	GUILayer_t411 * V_7 = {0};
	GUIElement_t410 * V_8 = {0};
	Ray_t314  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t36 * V_12 = {0};
	GameObject_t36 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t554  V_15 = {0};
	Vector3_t71  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t24_il2cpp_TypeInfo_var);
		Vector3_t71  L_0 = Input_get_mousePosition_m1572(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m2523(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		CameraU5BU5D_t557* L_2 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		CameraU5BU5D_t557* L_3 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_3)->max_length))))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7 = ((CameraU5BU5D_t557*)SZArrayNew(CameraU5BU5D_t557_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		CameraU5BU5D_t557* L_6 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		Camera_GetAllCameras_m2524(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_7 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t554  L_9 = V_15;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_7, L_8, sizeof(HitInfo_t554 )))) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_12 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		bool L_13 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3;
		if (L_13)
		{
			goto IL_02c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		CameraU5BU5D_t557* L_14 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b8;
	}

IL_0084:
	{
		CameraU5BU5D_t557* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t9 **)(Camera_t9 **)SZArrayLdElema(L_15, L_17, sizeof(Camera_t9 *)));
		Camera_t9 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m1507(NULL /*static, unused*/, L_18, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		Camera_t9 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t412 * L_22 = Camera_get_targetTexture_m2519(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_22, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b2;
		}
	}

IL_00ad:
	{
		goto IL_02b2;
	}

IL_00b2:
	{
		Camera_t9 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t173  L_25 = Camera_get_pixelRect_m2517(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t71  L_26 = V_0;
		bool L_27 = Rect_Contains_m1734((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_02b2;
	}

IL_00cc:
	{
		Camera_t9 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t411 * L_29 = Component_GetComponent_TisGUILayer_t411_m3503(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t411_m3503_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t411 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m1504(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0145;
		}
	}
	{
		GUILayer_t411 * L_32 = V_7;
		Vector3_t71  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t410 * L_34 = GUILayer_HitTest_m2276(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t410 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m1504(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_37 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t410 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t36 * L_39 = Component_get_gameObject_m1559(L_38, /*hidden argument*/NULL);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_37, 0, sizeof(HitInfo_t554 )))->___target_0 = L_39;
		HitInfoU5BU5D_t556* L_40 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t9 * L_41 = V_3;
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_40, 0, sizeof(HitInfo_t554 )))->___camera_1 = L_41;
		goto IL_0145;
	}

IL_0123:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_42 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_42, 0, sizeof(HitInfo_t554 )))->___target_0 = (GameObject_t36 *)NULL;
		HitInfoU5BU5D_t556* L_43 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_43, 0, sizeof(HitInfo_t554 )))->___camera_1 = (Camera_t9 *)NULL;
	}

IL_0145:
	{
		Camera_t9 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m2516(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_02b2;
	}

IL_0155:
	{
		Camera_t9 * L_46 = V_3;
		Vector3_t71  L_47 = V_0;
		NullCheck(L_46);
		Ray_t314  L_48 = Camera_ScreenPointToRay_m1616(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t71  L_49 = Ray_get_direction_m1620((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m1593(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_018b;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_01a0;
	}

IL_018b:
	{
		Camera_t9 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1617(L_53, /*hidden argument*/NULL);
		Camera_t9 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1618(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_01a0:
	{
		V_11 = G_B23_0;
		Camera_t9 * L_59 = V_3;
		Ray_t314  L_60 = V_9;
		float L_61 = V_11;
		Camera_t9 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1634(L_62, /*hidden argument*/NULL);
		Camera_t9 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m2516(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t36 * L_66 = Camera_RaycastTry_m2528(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t36 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_67, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01f0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_69 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t36 * L_70 = V_12;
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_69, 1, sizeof(HitInfo_t554 )))->___target_0 = L_70;
		HitInfoU5BU5D_t556* L_71 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t9 * L_72 = V_3;
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_71, 1, sizeof(HitInfo_t554 )))->___camera_1 = L_72;
		goto IL_022a;
	}

IL_01f0:
	{
		Camera_t9 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m2520(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0208;
		}
	}
	{
		Camera_t9 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m2520(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_022a;
		}
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_77 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_77, 1, sizeof(HitInfo_t554 )))->___target_0 = (GameObject_t36 *)NULL;
		HitInfoU5BU5D_t556* L_78 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_78, 1, sizeof(HitInfo_t554 )))->___camera_1 = (Camera_t9 *)NULL;
	}

IL_022a:
	{
		Camera_t9 * L_79 = V_3;
		Ray_t314  L_80 = V_9;
		float L_81 = V_11;
		Camera_t9 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1634(L_82, /*hidden argument*/NULL);
		Camera_t9 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m2516(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t36 * L_86 = Camera_RaycastTry2D_m2530(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t36 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_87, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0278;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_89 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t36 * L_90 = V_13;
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_89, 2, sizeof(HitInfo_t554 )))->___target_0 = L_90;
		HitInfoU5BU5D_t556* L_91 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t9 * L_92 = V_3;
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_91, 2, sizeof(HitInfo_t554 )))->___camera_1 = L_92;
		goto IL_02b2;
	}

IL_0278:
	{
		Camera_t9 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m2520(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_0290;
		}
	}
	{
		Camera_t9 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m2520(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02b2;
		}
	}

IL_0290:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_97 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_97, 2, sizeof(HitInfo_t554 )))->___target_0 = (GameObject_t36 *)NULL;
		HitInfoU5BU5D_t556* L_98 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_98, 2, sizeof(HitInfo_t554 )))->___camera_1 = (Camera_t9 *)NULL;
	}

IL_02b2:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t557* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_101)->max_length)))))))
		{
			goto IL_0084;
		}
	}

IL_02c3:
	{
		V_14 = 0;
		goto IL_02e9;
	}

IL_02cb:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_103 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3265(NULL /*static, unused*/, L_102, (*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_103, L_104, sizeof(HitInfo_t554 )))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e9:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_107 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_107)->max_length)))))))
		{
			goto IL_02cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t24_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t555_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t554_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral305;
extern Il2CppCodeGenString* _stringLiteral306;
extern Il2CppCodeGenString* _stringLiteral307;
extern Il2CppCodeGenString* _stringLiteral308;
extern Il2CppCodeGenString* _stringLiteral309;
extern Il2CppCodeGenString* _stringLiteral310;
extern Il2CppCodeGenString* _stringLiteral311;
extern "C" void SendMouseEvents_SendEvents_m3265 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t554  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		SendMouseEvents_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		HitInfo_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		_stringLiteral305 = il2cpp_codegen_string_literal_from_index(305);
		_stringLiteral306 = il2cpp_codegen_string_literal_from_index(306);
		_stringLiteral307 = il2cpp_codegen_string_literal_from_index(307);
		_stringLiteral308 = il2cpp_codegen_string_literal_from_index(308);
		_stringLiteral309 = il2cpp_codegen_string_literal_from_index(309);
		_stringLiteral310 = il2cpp_codegen_string_literal_from_index(310);
		_stringLiteral311 = il2cpp_codegen_string_literal_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t554  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t24_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m1570(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m1612(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t554  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3261(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_5 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t554  L_7 = ___hit;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_5, L_6, sizeof(HitInfo_t554 )))) = L_7;
		HitInfoU5BU5D_t556* L_8 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3259(((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_8, L_9, sizeof(HitInfo_t554 ))), _stringLiteral305, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_11 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3261(NULL /*static, unused*/, (*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_11, L_12, sizeof(HitInfo_t554 )))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t554  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_15 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3260(NULL /*static, unused*/, L_14, (*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_15, L_16, sizeof(HitInfo_t554 )))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_18 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3259(((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_18, L_19, sizeof(HitInfo_t554 ))), _stringLiteral306, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_20 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3259(((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_20, L_21, sizeof(HitInfo_t554 ))), _stringLiteral307, /*hidden argument*/NULL);
		HitInfoU5BU5D_t556* L_22 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t554_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t554  L_24 = V_2;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_22, L_23, sizeof(HitInfo_t554 )))) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_25 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3261(NULL /*static, unused*/, (*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_25, L_26, sizeof(HitInfo_t554 )))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_28 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3259(((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_28, L_29, sizeof(HitInfo_t554 ))), _stringLiteral308, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t554  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_31 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3260(NULL /*static, unused*/, L_30, (*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_31, L_32, sizeof(HitInfo_t554 )))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t554  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3261(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3259((&___hit), _stringLiteral309, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_36 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3261(NULL /*static, unused*/, (*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_36, L_37, sizeof(HitInfo_t554 )))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_39 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3259(((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_39, L_40, sizeof(HitInfo_t554 ))), _stringLiteral310, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t554  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3261(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3259((&___hit), _stringLiteral311, /*hidden argument*/NULL);
		HitInfo_SendMessage_m3259((&___hit), _stringLiteral309, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t555_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t556* L_43 = ((SendMouseEvents_t555_StaticFields*)SendMouseEvents_t555_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t554  L_45 = ___hit;
		(*(HitInfo_t554 *)((HitInfo_t554 *)(HitInfo_t554 *)SZArrayLdElema(L_43, L_44, sizeof(HitInfo_t554 )))) = L_45;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m3266 (Range_t552 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" void PropertyAttribute__ctor_m3267 (PropertyAttribute_t561 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m3268 (TooltipAttribute_t562 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3267(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor()
extern "C" void SpaceAttribute__ctor_m3269 (SpaceAttribute_t563 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3267(__this, /*hidden argument*/NULL);
		__this->___height_0 = (8.0f);
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m3270 (SpaceAttribute_t563 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3267(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m3271 (RangeAttribute_t564 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3267(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m3272 (TextAreaAttribute_t565 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3267(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m3273 (SelectionBaseAttribute_t566 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m3274 (SliderState_t567 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m3275 (StackTraceUtility_t568 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m3276 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t568_StaticFields*)StackTraceUtility_t568_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m3277 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		((StackTraceUtility_t568_StaticFields*)StackTraceUtility_t568_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t607_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3278 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t607 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t607 * L_0 = (StackTrace_t607 *)il2cpp_codegen_object_new (StackTrace_t607_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3504(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t607 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m3283(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m3505(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral312;
extern Il2CppCodeGenString* _stringLiteral313;
extern Il2CppCodeGenString* _stringLiteral314;
extern Il2CppCodeGenString* _stringLiteral315;
extern Il2CppCodeGenString* _stringLiteral316;
extern Il2CppCodeGenString* _stringLiteral317;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3279 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral312 = il2cpp_codegen_string_literal_from_index(312);
		_stringLiteral313 = il2cpp_codegen_string_literal_from_index(313);
		_stringLiteral314 = il2cpp_codegen_string_literal_from_index(314);
		_stringLiteral315 = il2cpp_codegen_string_literal_from_index(315);
		_stringLiteral316 = il2cpp_codegen_string_literal_from_index(316);
		_stringLiteral317 = il2cpp_codegen_string_literal_from_index(317);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3506(L_1, _stringLiteral312, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3506(L_3, _stringLiteral313, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3506(L_5, _stringLiteral314, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3506(L_7, _stringLiteral315, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3506(L_9, _stringLiteral316, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3506(L_11, _stringLiteral317, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral253;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3280 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m3281(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m85(NULL /*static, unused*/, L_3, _stringLiteral253, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t363_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t309_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t303_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t607_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral318;
extern Il2CppCodeGenString* _stringLiteral319;
extern Il2CppCodeGenString* _stringLiteral253;
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral320;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3281 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		Exception_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		StringBuilder_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTrace_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		_stringLiteral318 = il2cpp_codegen_string_literal_from_index(318);
		_stringLiteral319 = il2cpp_codegen_string_literal_from_index(319);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral320 = il2cpp_codegen_string_literal_from_index(320);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t309 * V_0 = {0};
	StringBuilder_t303 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t607 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t363 * L_1 = (ArgumentException_t363 *)il2cpp_codegen_object_new (ArgumentException_t363_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2065(L_1, _stringLiteral318, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t309 *)IsInstClass(L_2, Exception_t309_il2cpp_TypeInfo_var));
		Exception_t309 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t363 * L_4 = (ArgumentException_t363 *)il2cpp_codegen_object_new (ArgumentException_t363_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2065(L_4, _stringLiteral319, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		Exception_t309 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t309 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1876(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t303 * L_10 = (StringBuilder_t303 *)il2cpp_codegen_object_new (StringBuilder_t303_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3507(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1876(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t309 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t309 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m85(NULL /*static, unused*/, L_19, _stringLiteral253, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t309 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t309 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t309 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m81(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1876(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m61(NULL /*static, unused*/, L_33, _stringLiteral15, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m61(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t309 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t309 * L_41 = (Exception_t309 *)VirtFuncInvoker0< Exception_t309 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m3508(NULL /*static, unused*/, _stringLiteral320, L_42, _stringLiteral253, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t309 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t309 * L_46 = (Exception_t309 *)VirtFuncInvoker0< Exception_t309 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t309 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t303 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m61(NULL /*static, unused*/, L_49, _stringLiteral253, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m3509(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t607 * L_51 = (StackTrace_t607 *)il2cpp_codegen_object_new (StackTrace_t607_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3504(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t303 * L_52 = V_1;
		StackTrace_t607 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m3283(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m3509(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t303 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m1519(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t25_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t303_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral321;
extern Il2CppCodeGenString* _stringLiteral322;
extern Il2CppCodeGenString* _stringLiteral323;
extern Il2CppCodeGenString* _stringLiteral324;
extern Il2CppCodeGenString* _stringLiteral325;
extern Il2CppCodeGenString* _stringLiteral326;
extern Il2CppCodeGenString* _stringLiteral327;
extern Il2CppCodeGenString* _stringLiteral328;
extern Il2CppCodeGenString* _stringLiteral329;
extern Il2CppCodeGenString* _stringLiteral330;
extern Il2CppCodeGenString* _stringLiteral331;
extern Il2CppCodeGenString* _stringLiteral332;
extern Il2CppCodeGenString* _stringLiteral333;
extern Il2CppCodeGenString* _stringLiteral334;
extern Il2CppCodeGenString* _stringLiteral253;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3282 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		CharU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		StringBuilder_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		_stringLiteral321 = il2cpp_codegen_string_literal_from_index(321);
		_stringLiteral322 = il2cpp_codegen_string_literal_from_index(322);
		_stringLiteral323 = il2cpp_codegen_string_literal_from_index(323);
		_stringLiteral324 = il2cpp_codegen_string_literal_from_index(324);
		_stringLiteral325 = il2cpp_codegen_string_literal_from_index(325);
		_stringLiteral326 = il2cpp_codegen_string_literal_from_index(326);
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		_stringLiteral328 = il2cpp_codegen_string_literal_from_index(328);
		_stringLiteral329 = il2cpp_codegen_string_literal_from_index(329);
		_stringLiteral330 = il2cpp_codegen_string_literal_from_index(330);
		_stringLiteral331 = il2cpp_codegen_string_literal_from_index(331);
		_stringLiteral332 = il2cpp_codegen_string_literal_from_index(332);
		_stringLiteral333 = il2cpp_codegen_string_literal_from_index(333);
		_stringLiteral334 = il2cpp_codegen_string_literal_from_index(334);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t26* V_0 = {0};
	StringBuilder_t303 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t25* L_3 = ((CharU5BU5D_t25*)SZArrayNew(CharU5BU5D_t25_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t26* L_4 = String_Split_m95(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1876(L_5, /*hidden argument*/NULL);
		StringBuilder_t303 * L_7 = (StringBuilder_t303 *)il2cpp_codegen_object_new (StringBuilder_t303_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3507(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t26* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t26* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m81((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9, sizeof(String_t*))) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t26* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_16)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t26* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19, sizeof(String_t*)));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1876(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1895(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3506(L_24, _stringLiteral321, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3506(L_27, _stringLiteral322, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t26* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_31)->max_length))))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m3279(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t26* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m3279(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36, sizeof(String_t*))), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m3510(L_38, _stringLiteral323, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1896(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3510(L_44, _stringLiteral324, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m3510(L_46, _stringLiteral325, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m3510(L_48, _stringLiteral326, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3506(L_51, _stringLiteral327, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m3511(L_53, _stringLiteral328, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3506(L_55, _stringLiteral329, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1919(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3510(L_59, _stringLiteral330, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m3512(L_62, _stringLiteral328, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1919(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3513(L_73, _stringLiteral331, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t568_StaticFields*)StackTraceUtility_t568_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3513(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m3514(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m3515(L_82, _stringLiteral332, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1919(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1921(L_88, L_89, _stringLiteral333, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1876(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1921(L_91, L_93, _stringLiteral334, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t303 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m61(NULL /*static, unused*/, L_96, _stringLiteral253, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m3509(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t26* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_100)->max_length)))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t303 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m1519(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t303_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral335;
extern Il2CppCodeGenString* _stringLiteral336;
extern Il2CppCodeGenString* _stringLiteral334;
extern Il2CppCodeGenString* _stringLiteral337;
extern Il2CppCodeGenString* _stringLiteral338;
extern Il2CppCodeGenString* _stringLiteral333;
extern Il2CppCodeGenString* _stringLiteral253;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3283 (Object_t * __this /* static, unused */, StackTrace_t607 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		StackTraceUtility_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral335 = il2cpp_codegen_string_literal_from_index(335);
		_stringLiteral336 = il2cpp_codegen_string_literal_from_index(336);
		_stringLiteral334 = il2cpp_codegen_string_literal_from_index(334);
		_stringLiteral337 = il2cpp_codegen_string_literal_from_index(337);
		_stringLiteral338 = il2cpp_codegen_string_literal_from_index(338);
		_stringLiteral333 = il2cpp_codegen_string_literal_from_index(333);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t303 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t634 * V_2 = {0};
	MethodBase_t635 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t636* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t303 * L_0 = (StringBuilder_t303 *)il2cpp_codegen_object_new (StringBuilder_t303_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3507(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t607 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t634 * L_3 = (StackFrame_t634 *)VirtFuncInvoker1< StackFrame_t634 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t634 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t635 * L_5 = (MethodBase_t635 *)VirtFuncInvoker0< MethodBase_t635 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t635 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t635 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1876(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t303 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3509(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t303 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3509(L_17, _stringLiteral114, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t303 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3509(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t303 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3509(L_21, _stringLiteral8, /*hidden argument*/NULL);
		StringBuilder_t303 * L_22 = V_0;
		MethodBase_t635 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3509(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t303 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3509(L_25, _stringLiteral335, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t635 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t636* L_27 = (ParameterInfoU5BU5D_t636*)VirtFuncInvoker0< ParameterInfoU5BU5D_t636* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t303 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3509(L_29, _stringLiteral336, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t303 * L_30 = V_0;
		ParameterInfoU5BU5D_t636* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t637 **)(ParameterInfo_t637 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t637 *))));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t637 **)(ParameterInfo_t637 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t637 *))));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3509(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t636* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_38)->max_length)))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t303 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3509(L_39, _stringLiteral334, /*hidden argument*/NULL);
		StackFrame_t634 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1874(NULL /*static, unused*/, L_44, _stringLiteral337, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1874(NULL /*static, unused*/, L_47, _stringLiteral338, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t303 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3509(L_49, _stringLiteral333, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t568_StaticFields*)StackTraceUtility_t568_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3506(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t568_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t568_StaticFields*)StackTraceUtility_t568_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1876(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1876(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t568_StaticFields*)StackTraceUtility_t568_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1876(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1896(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t303 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3509(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t303 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3509(L_63, _stringLiteral8, /*hidden argument*/NULL);
		StringBuilder_t303 * L_64 = V_0;
		StackFrame_t634 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m60((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m3509(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t303 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3509(L_68, _stringLiteral334, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t303 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3509(L_69, _stringLiteral253, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t607 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t303 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m1519(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Void UnityEngine.UnityException::.ctor()
extern Il2CppCodeGenString* _stringLiteral339;
extern "C" void UnityException__ctor_m3284 (UnityException_t342 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral339 = il2cpp_codegen_string_literal_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m3516(__this, _stringLiteral339, /*hidden argument*/NULL);
		Exception_set_HResult_m3517(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m3285 (UnityException_t342 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3516(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3517(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m3286 (UnityException_t342 * __this, String_t* ___message, Exception_t309 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t309 * L_1 = ___innerException;
		Exception__ctor_m3518(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m3517(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m3287 (UnityException_t342 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t608 * L_0 = ___info;
		StreamingContext_t609  L_1 = ___context;
		Exception__ctor_m3519(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m3288 (SharedBetweenAnimatorsAttribute_t569 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m3289 (StateMachineBehaviour_t570 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2166(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t500_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t506_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m3290 (TextEditor_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		GUIStyle_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t500 * L_0 = (GUIContent_t500 *)il2cpp_codegen_object_new (GUIContent_t500_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2939(L_0, /*hidden argument*/NULL);
		__this->___content_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t506_il2cpp_TypeInfo_var);
		GUIStyle_t506 * L_1 = GUIStyle_get_none_m3106(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_3 = L_1;
		Vector2_t72  L_2 = Vector2_get_zero_m1551(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_8 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C" Rect_t173  TextEditor_get_position_m3291 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		Rect_t173  L_0 = (__this->___m_Position_9);
		return L_0;
	}
}
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C" void TextEditor_set_position_m3292 (TextEditor_t574 * __this, Rect_t173  ___value, const MethodInfo* method)
{
	{
		Rect_t173  L_0 = (__this->___m_Position_9);
		Rect_t173  L_1 = ___value;
		bool L_2 = Rect_op_Equality_m1974(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Rect_t173  L_3 = ___value;
		__this->___m_Position_9 = L_3;
		TextEditor_UpdateScrollOffset_m3362(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C" int32_t TextEditor_get_cursorIndex_m3293 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_CursorIndex_10);
		return L_0;
	}
}
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern "C" void TextEditor_set_cursorIndex_m3294 (TextEditor_t574 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___m_CursorIndex_10);
		V_0 = L_0;
		int32_t L_1 = ___value;
		GUIContent_t500 * L_2 = (__this->___content_2);
		NullCheck(L_2);
		String_t* L_3 = GUIContent_get_text_m2943(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1876(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Clamp_m1706(NULL /*static, unused*/, L_1, 0, L_4, /*hidden argument*/NULL);
		__this->___m_CursorIndex_10 = L_5;
		int32_t L_6 = (__this->___m_CursorIndex_10);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		__this->___m_RevealCursor_12 = 1;
	}

IL_0037:
	{
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C" int32_t TextEditor_get_selectIndex_m3295 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_SelectIndex_11);
		return L_0;
	}
}
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern "C" void TextEditor_set_selectIndex_m3296 (TextEditor_t574 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		GUIContent_t500 * L_1 = (__this->___content_2);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m2943(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1876(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Clamp_m1706(NULL /*static, unused*/, L_0, 0, L_3, /*hidden argument*/NULL);
		__this->___m_SelectIndex_11 = L_4;
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3297 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_5 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m3298 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_4);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m3307(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_7 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m3299 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasFocus_7 = 0;
		Vector2_t72  L_0 = Vector2_get_zero_m1551(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_8 = L_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C" void TextEditor_GrabGraphicalCursorPos_m3300 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___hasHorizontalCursorPos_5);
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		GUIStyle_t506 * L_1 = (__this->___style_3);
		Rect_t173  L_2 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_3 = (__this->___content_2);
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t72  L_5 = GUIStyle_GetCursorPixelPosition_m3107(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_5;
		GUIStyle_t506 * L_6 = (__this->___style_3);
		Rect_t173  L_7 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_8 = (__this->___content_2);
		int32_t L_9 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t72  L_10 = GUIStyle_GetCursorPixelPosition_m3107(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->___graphicalSelectCursorPos_14 = L_10;
		__this->___hasHorizontalCursorPos_5 = 0;
	}

IL_0058:
	{
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern TypeInfo* TextEditor_t574_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_HandleKeyEvent_m3301 (TextEditor_t574 * __this, Event_t178 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditor_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		TextEditor_InitKeyActions_m3371(__this, /*hidden argument*/NULL);
		Event_t178 * L_0 = ___e;
		NullCheck(L_0);
		int32_t L_1 = Event_get_modifiers_m1906(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t178 * L_2 = ___e;
		Event_t178 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = Event_get_modifiers_m1906(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Event_set_modifiers_m2903(L_3, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)-33))), /*hidden argument*/NULL);
		Dictionary_2_t575 * L_5 = ((TextEditor_t574_StaticFields*)TextEditor_t574_il2cpp_TypeInfo_var->static_fields)->___s_Keyactions_23;
		Event_t178 * L_6 = ___e;
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Event_t178 * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKey(!0) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t575 * L_8 = ((TextEditor_t574_StaticFields*)TextEditor_t574_il2cpp_TypeInfo_var->static_fields)->___s_Keyactions_23;
		Event_t178 * L_9 = ___e;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)VirtFuncInvoker1< int32_t, Event_t178 * >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Item(!0) */, L_8, L_9);
		V_1 = L_10;
		int32_t L_11 = V_1;
		TextEditor_PerformOperation_m3364(__this, L_11, /*hidden argument*/NULL);
		Event_t178 * L_12 = ___e;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Event_set_modifiers_m2903(L_12, L_13, /*hidden argument*/NULL);
		return 1;
	}

IL_0049:
	{
		Event_t178 * L_14 = ___e;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Event_set_modifiers_m2903(L_14, L_15, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C" bool TextEditor_DeleteLineBack_m3302 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_m3309(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		return 1;
	}

IL_0014:
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0043;
	}

IL_0022:
	{
		GUIContent_t500 * L_3 = (__this->___content_2);
		NullCheck(L_3);
		String_t* L_4 = GUIContent_get_text_m2943(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m1895(L_4, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_7 = V_1;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
		goto IL_004d;
	}

IL_0043:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		if (L_9)
		{
			goto IL_0022;
		}
	}

IL_004d:
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0056;
		}
	}
	{
		V_0 = 0;
	}

IL_0056:
	{
		int32_t L_11 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0098;
		}
	}
	{
		GUIContent_t500 * L_13 = (__this->___content_2);
		GUIContent_t500 * L_14 = (__this->___content_2);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2943(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		int32_t L_17 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		NullCheck(L_15);
		String_t* L_19 = String_Remove_m1919(L_15, L_16, ((int32_t)((int32_t)L_17-(int32_t)L_18)), /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m2944(L_13, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		V_2 = L_20;
		int32_t L_21 = V_2;
		TextEditor_set_cursorIndex_m3294(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		TextEditor_set_selectIndex_m3296(__this, L_22, /*hidden argument*/NULL);
		return 1;
	}

IL_0098:
	{
		return 0;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C" bool TextEditor_DeleteWordBack_m3303 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_m3309(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		return 1;
	}

IL_0014:
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_FindEndOfPreviousWord_m3348(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0063;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		GUIContent_t500 * L_6 = (__this->___content_2);
		NullCheck(L_6);
		String_t* L_7 = GUIContent_get_text_m2943(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		int32_t L_9 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_7);
		String_t* L_11 = String_Remove_m1919(L_7, L_8, ((int32_t)((int32_t)L_9-(int32_t)L_10)), /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIContent_set_text_m2944(L_5, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		V_1 = L_12;
		int32_t L_13 = V_1;
		TextEditor_set_cursorIndex_m3294(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		TextEditor_set_selectIndex_m3296(__this, L_14, /*hidden argument*/NULL);
		return 1;
	}

IL_0063:
	{
		return 0;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C" bool TextEditor_DeleteWordForward_m3304 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_m3309(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		return 1;
	}

IL_0014:
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_FindStartOfNextWord_m3347(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_4 = (__this->___content_2);
		NullCheck(L_4);
		String_t* L_5 = GUIContent_get_text_m2943(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1876(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_6)))
		{
			goto IL_0067;
		}
	}
	{
		GUIContent_t500 * L_7 = (__this->___content_2);
		GUIContent_t500 * L_8 = (__this->___content_2);
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_m2943(L_8, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_13 = String_Remove_m1919(L_9, L_10, ((int32_t)((int32_t)L_11-(int32_t)L_12)), /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIContent_set_text_m2944(L_7, L_13, /*hidden argument*/NULL);
		return 1;
	}

IL_0067:
	{
		return 0;
	}
}
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C" bool TextEditor_Delete_m3305 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TextEditor_get_hasSelection_m3309(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		return 1;
	}

IL_0014:
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_2 = (__this->___content_2);
		NullCheck(L_2);
		String_t* L_3 = GUIContent_get_text_m2943(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1876(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_4)))
		{
			goto IL_0053;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		GUIContent_t500 * L_6 = (__this->___content_2);
		NullCheck(L_6);
		String_t* L_7 = GUIContent_get_text_m2943(L_6, /*hidden argument*/NULL);
		int32_t L_8 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_9 = String_Remove_m1919(L_7, L_8, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIContent_set_text_m2944(L_5, L_9, /*hidden argument*/NULL);
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C" bool TextEditor_Backspace_m3306 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = TextEditor_get_hasSelection_m3309(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		return 1;
	}

IL_0014:
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		GUIContent_t500 * L_2 = (__this->___content_2);
		GUIContent_t500 * L_3 = (__this->___content_2);
		NullCheck(L_3);
		String_t* L_4 = GUIContent_get_text_m2943(L_3, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_6 = String_Remove_m1919(L_4, ((int32_t)((int32_t)L_5-(int32_t)1)), 1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIContent_set_text_m2944(L_2, L_6, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
		int32_t L_8 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_9, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return 1;
	}

IL_0063:
	{
		return 0;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3307 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_set_cursorIndex_m3294(__this, 0, /*hidden argument*/NULL);
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_2, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C" void TextEditor_SelectNone_m3308 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_0, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C" bool TextEditor_get_hasSelection_m3309 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_DeleteSelection_m3310 (TextEditor_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		int32_t L_6 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_8, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_12 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t500 * L_13 = (__this->___content_2);
		GUIContent_t500 * L_14 = (__this->___content_2);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2943(L_14, /*hidden argument*/NULL);
		int32_t L_16 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m1896(L_15, 0, L_16, /*hidden argument*/NULL);
		GUIContent_t500 * L_18 = (__this->___content_2);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m2943(L_18, /*hidden argument*/NULL);
		int32_t L_20 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_21 = (__this->___content_2);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m2943(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1876(L_22, /*hidden argument*/NULL);
		int32_t L_24 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m1896(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m61(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m2944(L_13, L_26, /*hidden argument*/NULL);
		int32_t L_27 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_27, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t500 * L_28 = (__this->___content_2);
		GUIContent_t500 * L_29 = (__this->___content_2);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m2943(L_29, /*hidden argument*/NULL);
		int32_t L_31 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m1896(L_30, 0, L_31, /*hidden argument*/NULL);
		GUIContent_t500 * L_33 = (__this->___content_2);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m2943(L_33, /*hidden argument*/NULL);
		int32_t L_35 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_36 = (__this->___content_2);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m2943(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m1876(L_37, /*hidden argument*/NULL);
		int32_t L_39 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m1896(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m61(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIContent_set_text_m2944(L_28, L_41, /*hidden argument*/NULL);
		int32_t L_42 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_42, /*hidden argument*/NULL);
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3311 (TextEditor_t574 * __this, String_t* ___replace, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_0 = (__this->___content_2);
		GUIContent_t500 * L_1 = (__this->___content_2);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m2943(L_1, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m1921(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m2944(L_0, L_5, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1876(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		TextEditor_set_cursorIndex_m3294(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_10, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C" void TextEditor_Insert_m3312 (TextEditor_t574 * __this, uint16_t ___c, const MethodInfo* method)
{
	{
		String_t* L_0 = Char_ToString_m1920((&___c), /*hidden argument*/NULL);
		TextEditor_ReplaceSelection_m3311(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C" void TextEditor_MoveRight_m3313 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		TextEditor_DetectFocusChange_m3372(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_3, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003c:
	{
		int32_t L_4 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_6, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_005e:
	{
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_7, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C" void TextEditor_MoveLeft_m3314 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_2-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_3, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0030:
	{
		int32_t L_4 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_6 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_6, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0052:
	{
		int32_t L_7 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C" void TextEditor_MoveUp_m3315 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_2, /*hidden argument*/NULL);
		goto IL_002e;
	}

IL_0022:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_3, /*hidden argument*/NULL);
	}

IL_002e:
	{
		TextEditor_GrabGraphicalCursorPos_m3300(__this, /*hidden argument*/NULL);
		Vector2_t72 * L_4 = &(__this->___graphicalCursorPos_13);
		Vector2_t72 * L_5 = L_4;
		float L_6 = (L_5->___y_2);
		L_5->___y_2 = ((float)((float)L_6-(float)(1.0f)));
		GUIStyle_t506 * L_7 = (__this->___style_3);
		Rect_t173  L_8 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_9 = (__this->___content_2);
		Vector2_t72  L_10 = (__this->___graphicalCursorPos_13);
		NullCheck(L_7);
		int32_t L_11 = GUIStyle_GetCursorStringIndex_m3108(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C" void TextEditor_MoveDown_m3316 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_2, /*hidden argument*/NULL);
		goto IL_002e;
	}

IL_0022:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_3, /*hidden argument*/NULL);
	}

IL_002e:
	{
		TextEditor_GrabGraphicalCursorPos_m3300(__this, /*hidden argument*/NULL);
		Vector2_t72 * L_4 = &(__this->___graphicalCursorPos_13);
		Vector2_t72 * L_5 = L_4;
		float L_6 = (L_5->___y_2);
		GUIStyle_t506 * L_7 = (__this->___style_3);
		NullCheck(L_7);
		float L_8 = GUIStyle_get_lineHeight_m3100(L_7, /*hidden argument*/NULL);
		L_5->___y_2 = ((float)((float)L_6+(float)((float)((float)L_8+(float)(5.0f)))));
		GUIStyle_t506 * L_9 = (__this->___style_3);
		Rect_t173  L_10 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_11 = (__this->___content_2);
		Vector2_t72  L_12 = (__this->___graphicalCursorPos_13);
		NullCheck(L_9);
		int32_t L_13 = GUIStyle_GetCursorStringIndex_m3108(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_15, /*hidden argument*/NULL);
		int32_t L_16 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_17 = (__this->___content_2);
		NullCheck(L_17);
		String_t* L_18 = GUIContent_get_text_m2943(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1876(L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_19))))
		{
			goto IL_00a4;
		}
	}
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C" void TextEditor_MoveLineStart_m3317 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_0055;
	}

IL_002a:
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2943(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m1895(L_6, L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_9 = V_1;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_2;
		TextEditor_set_cursorIndex_m3294(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		TextEditor_set_selectIndex_m3296(__this, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)((int32_t)L_13-(int32_t)1));
		if (L_13)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = 0;
		int32_t L_14 = V_2;
		TextEditor_set_cursorIndex_m3294(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		TextEditor_set_selectIndex_m3296(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C" void TextEditor_MoveLineEnd_m3318 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		V_1 = L_4;
		GUIContent_t500 * L_5 = (__this->___content_2);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2943(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1876(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0068;
	}

IL_003b:
	{
		GUIContent_t500 * L_8 = (__this->___content_2);
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_m2943(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m1895(L_9, L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_12 = V_1;
		V_3 = L_12;
		int32_t L_13 = V_3;
		TextEditor_set_cursorIndex_m3294(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_3;
		TextEditor_set_selectIndex_m3296(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0064:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0068:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_18 = V_2;
		V_3 = L_18;
		int32_t L_19 = V_3;
		TextEditor_set_cursorIndex_m3294(__this, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_3;
		TextEditor_set_selectIndex_m3296(__this, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C" void TextEditor_MoveGraphicalLineStart_m3319 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B2_0 = {0};
	TextEditor_t574 * G_B2_1 = {0};
	TextEditor_t574 * G_B1_0 = {0};
	TextEditor_t574 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	TextEditor_t574 * G_B3_1 = {0};
	TextEditor_t574 * G_B3_2 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		G_B1_1 = __this;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0024;
	}

IL_001e:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = TextEditor_GetGraphicalLineStart_m3336(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(G_B3_2);
		TextEditor_set_cursorIndex_m3294(G_B3_2, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C" void TextEditor_MoveGraphicalLineEnd_m3320 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B2_0 = {0};
	TextEditor_t574 * G_B2_1 = {0};
	TextEditor_t574 * G_B1_0 = {0};
	TextEditor_t574 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	TextEditor_t574 * G_B3_1 = {0};
	TextEditor_t574 * G_B3_2 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		G_B1_1 = __this;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0024;
	}

IL_001e:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = TextEditor_GetGraphicalLineEnd_m3337(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(G_B3_2);
		TextEditor_set_cursorIndex_m3294(G_B3_2, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C" void TextEditor_MoveTextStart_m3321 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C" void TextEditor_MoveTextEnd_m3322 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C" int32_t TextEditor_IndexOfEndOfLine_m3323 (TextEditor_t574 * __this, int32_t ___startIndex, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___startIndex;
		NullCheck(L_1);
		int32_t L_3 = String_IndexOf_m3520(L_1, ((int32_t)10), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B3_0 = L_5;
		goto IL_0031;
	}

IL_0021:
	{
		GUIContent_t500 * L_6 = (__this->___content_2);
		NullCheck(L_6);
		String_t* L_7 = GUIContent_get_text_m2943(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1876(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0031:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C" void TextEditor_MoveParagraphForward_m3324 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B2_0 = {0};
	TextEditor_t574 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TextEditor_t574 * G_B3_1 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_m3294(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_5 = (__this->___content_2);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2943(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1876(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_7)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_IndexOfEndOfLine_m3323(__this, ((int32_t)((int32_t)L_8+(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C" void TextEditor_MoveParagraphBackward_m3325 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B2_0 = {0};
	TextEditor_t574 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TextEditor_t574 * G_B3_1 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_m3294(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2943(L_5, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_8 = String_LastIndexOf_m3521(L_6, ((int32_t)10), ((int32_t)((int32_t)L_7-(int32_t)2)), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_10, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0064:
	{
		V_0 = 0;
		int32_t L_11 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_12, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_MoveCursorToPosition_m3326 (TextEditor_t574 * __this, Vector2_t72  ___cursorPosition, const MethodInfo* method)
{
	{
		GUIStyle_t506 * L_0 = (__this->___style_3);
		Rect_t173  L_1 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_2 = (__this->___content_2);
		Vector2_t72  L_3 = ___cursorPosition;
		Vector2_t72  L_4 = (__this->___scrollOffset_8);
		Vector2_t72  L_5 = Vector2_op_Addition_m1726(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_6 = GUIStyle_GetCursorStringIndex_m3108(L_0, L_1, L_2, L_5, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_6, /*hidden argument*/NULL);
		Event_t178 * L_7 = Event_get_current_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = Event_get_shift_m2867(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		TextEditor_DetectFocusChange_m3372(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern "C" void TextEditor_SelectToPosition_m3327 (TextEditor_t574 * __this, Vector2_t72  ___cursorPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_MouseDragSelectsWholeWords_15);
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		GUIStyle_t506 * L_1 = (__this->___style_3);
		Rect_t173  L_2 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_3 = (__this->___content_2);
		Vector2_t72  L_4 = ___cursorPosition;
		Vector2_t72  L_5 = (__this->___scrollOffset_8);
		Vector2_t72  L_6 = Vector2_op_Addition_m1726(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_7 = GUIStyle_GetCursorStringIndex_m3108(L_1, L_2, L_3, L_6, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_7, /*hidden argument*/NULL);
		goto IL_01b6;
	}

IL_0039:
	{
		GUIStyle_t506 * L_8 = (__this->___style_3);
		Rect_t173  L_9 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_10 = (__this->___content_2);
		Vector2_t72  L_11 = ___cursorPosition;
		Vector2_t72  L_12 = (__this->___scrollOffset_8);
		Vector2_t72  L_13 = Vector2_op_Addition_m1726(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_14 = GUIStyle_GetCursorStringIndex_m3108(L_8, L_9, L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		uint8_t L_15 = (__this->___m_DblClickSnap_17);
		if (L_15)
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->___m_DblClickInitPos_16);
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_18 = V_0;
		int32_t L_19 = TextEditor_FindEndOfClassification_m3359(__this, L_18, (-1), /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_19, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___m_DblClickInitPos_16);
		int32_t L_21 = TextEditor_FindEndOfClassification_m3359(__this, L_20, 1, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_21, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_009a:
	{
		int32_t L_22 = V_0;
		GUIContent_t500 * L_23 = (__this->___content_2);
		NullCheck(L_23);
		String_t* L_24 = GUIContent_get_text_m2943(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m1876(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_25)))
		{
			goto IL_00c3;
		}
	}
	{
		GUIContent_t500 * L_26 = (__this->___content_2);
		NullCheck(L_26);
		String_t* L_27 = GUIContent_get_text_m2943(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m1876(L_27, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_00c3:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = TextEditor_FindEndOfClassification_m3359(__this, L_29, 1, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_30, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___m_DblClickInitPos_16);
		int32_t L_32 = TextEditor_FindEndOfClassification_m3359(__this, ((int32_t)((int32_t)L_31-(int32_t)1)), (-1), /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_32, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = (__this->___m_DblClickInitPos_16);
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		GUIContent_t500 * L_36 = (__this->___content_2);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m2943(L_36, /*hidden argument*/NULL);
		int32_t L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		int32_t L_39 = Mathf_Max_m1916(NULL /*static, unused*/, 0, ((int32_t)((int32_t)L_38-(int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_40 = String_LastIndexOf_m3521(L_37, ((int32_t)10), L_39, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_40+(int32_t)1)), /*hidden argument*/NULL);
		goto IL_012d;
	}

IL_0126:
	{
		TextEditor_set_cursorIndex_m3294(__this, 0, /*hidden argument*/NULL);
	}

IL_012d:
	{
		GUIContent_t500 * L_41 = (__this->___content_2);
		NullCheck(L_41);
		String_t* L_42 = GUIContent_get_text_m2943(L_41, /*hidden argument*/NULL);
		int32_t L_43 = (__this->___m_DblClickInitPos_16);
		NullCheck(L_42);
		int32_t L_44 = String_LastIndexOf_m3521(L_42, ((int32_t)10), L_43, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_44, /*hidden argument*/NULL);
		goto IL_01b6;
	}

IL_0150:
	{
		int32_t L_45 = V_0;
		GUIContent_t500 * L_46 = (__this->___content_2);
		NullCheck(L_46);
		String_t* L_47 = GUIContent_get_text_m2943(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m1876(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_45) >= ((int32_t)L_48)))
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_49 = V_0;
		int32_t L_50 = TextEditor_IndexOfEndOfLine_m3323(__this, L_49, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_50, /*hidden argument*/NULL);
		goto IL_018e;
	}

IL_0178:
	{
		GUIContent_t500 * L_51 = (__this->___content_2);
		NullCheck(L_51);
		String_t* L_52 = GUIContent_get_text_m2943(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53 = String_get_Length_m1876(L_52, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_53, /*hidden argument*/NULL);
	}

IL_018e:
	{
		GUIContent_t500 * L_54 = (__this->___content_2);
		NullCheck(L_54);
		String_t* L_55 = GUIContent_get_text_m2943(L_54, /*hidden argument*/NULL);
		int32_t L_56 = (__this->___m_DblClickInitPos_16);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		int32_t L_57 = Mathf_Max_m1916(NULL /*static, unused*/, 0, ((int32_t)((int32_t)L_56-(int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_55);
		int32_t L_58 = String_LastIndexOf_m3521(L_55, ((int32_t)10), L_57, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, ((int32_t)((int32_t)L_58+(int32_t)1)), /*hidden argument*/NULL);
	}

IL_01b6:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C" void TextEditor_SelectLeft_m3328 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_bJustSelected_18);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		__this->___m_bJustSelected_18 = 0;
		int32_t L_6 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_6-(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C" void TextEditor_SelectRight_m3329 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->___m_bJustSelected_18);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		__this->___m_bJustSelected_18 = 0;
		int32_t L_6 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/NULL);
		GUIContent_t500 * L_7 = (__this->___content_2);
		NullCheck(L_7);
		String_t* L_8 = GUIContent_get_text_m2943(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1876(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_12 = V_1;
		TextEditor_set_cursorIndex_m3294(__this, L_12, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C" void TextEditor_SelectUp_m3330 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_GrabGraphicalCursorPos_m3300(__this, /*hidden argument*/NULL);
		Vector2_t72 * L_0 = &(__this->___graphicalCursorPos_13);
		Vector2_t72 * L_1 = L_0;
		float L_2 = (L_1->___y_2);
		L_1->___y_2 = ((float)((float)L_2-(float)(1.0f)));
		GUIStyle_t506 * L_3 = (__this->___style_3);
		Rect_t173  L_4 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_5 = (__this->___content_2);
		Vector2_t72  L_6 = (__this->___graphicalCursorPos_13);
		NullCheck(L_3);
		int32_t L_7 = GUIStyle_GetCursorStringIndex_m3108(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C" void TextEditor_SelectDown_m3331 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_GrabGraphicalCursorPos_m3300(__this, /*hidden argument*/NULL);
		Vector2_t72 * L_0 = &(__this->___graphicalCursorPos_13);
		Vector2_t72 * L_1 = L_0;
		float L_2 = (L_1->___y_2);
		GUIStyle_t506 * L_3 = (__this->___style_3);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_lineHeight_m3100(L_3, /*hidden argument*/NULL);
		L_1->___y_2 = ((float)((float)L_2+(float)((float)((float)L_4+(float)(5.0f)))));
		GUIStyle_t506 * L_5 = (__this->___style_3);
		Rect_t173  L_6 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_7 = (__this->___content_2);
		Vector2_t72  L_8 = (__this->___graphicalCursorPos_13);
		NullCheck(L_5);
		int32_t L_9 = GUIStyle_GetCursorStringIndex_m3108(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C" void TextEditor_SelectTextEnd_m3332 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C" void TextEditor_SelectTextStart_m3333 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_set_cursorIndex_m3294(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C" void TextEditor_MouseDragSelectsWholeWords_m3334 (TextEditor_t574 * __this, bool ___on, const MethodInfo* method)
{
	{
		bool L_0 = ___on;
		__this->___m_MouseDragSelectsWholeWords_15 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		__this->___m_DblClickInitPos_16 = L_1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C" void TextEditor_DblClickSnap_m3335 (TextEditor_t574 * __this, uint8_t ___snapping, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___snapping;
		__this->___m_DblClickSnap_17 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineStart_m3336 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method)
{
	Vector2_t72  V_0 = {0};
	{
		GUIStyle_t506 * L_0 = (__this->___style_3);
		Rect_t173  L_1 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_2 = (__this->___content_2);
		int32_t L_3 = ___p;
		NullCheck(L_0);
		Vector2_t72  L_4 = GUIStyle_GetCursorPixelPosition_m3107(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		(&V_0)->___x_1 = (0.0f);
		GUIStyle_t506 * L_5 = (__this->___style_3);
		Rect_t173  L_6 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_7 = (__this->___content_2);
		Vector2_t72  L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = GUIStyle_GetCursorStringIndex_m3108(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineEnd_m3337 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method)
{
	Vector2_t72  V_0 = {0};
	{
		GUIStyle_t506 * L_0 = (__this->___style_3);
		Rect_t173  L_1 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_2 = (__this->___content_2);
		int32_t L_3 = ___p;
		NullCheck(L_0);
		Vector2_t72  L_4 = GUIStyle_GetCursorPixelPosition_m3107(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_t72 * L_5 = (&V_0);
		float L_6 = (L_5->___x_1);
		L_5->___x_1 = ((float)((float)L_6+(float)(5000.0f)));
		GUIStyle_t506 * L_7 = (__this->___style_3);
		Rect_t173  L_8 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_9 = (__this->___content_2);
		Vector2_t72  L_10 = V_0;
		NullCheck(L_7);
		int32_t L_11 = GUIStyle_GetCursorStringIndex_m3108(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C" int32_t TextEditor_FindNextSeperator_m3338 (TextEditor_t574 * __this, int32_t ___startPos, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_0016:
	{
		int32_t L_3 = ___startPos;
		___startPos = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001b:
	{
		int32_t L_4 = ___startPos;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_003d;
		}
	}
	{
		GUIContent_t500 * L_6 = (__this->___content_2);
		NullCheck(L_6);
		String_t* L_7 = GUIContent_get_text_m2943(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___startPos;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m1895(L_7, L_8, /*hidden argument*/NULL);
		bool L_10 = TextEditor_isLetterLikeChar_m3339(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0016;
		}
	}

IL_003d:
	{
		goto IL_0047;
	}

IL_0042:
	{
		int32_t L_11 = ___startPos;
		___startPos = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_12 = ___startPos;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0069;
		}
	}
	{
		GUIContent_t500 * L_14 = (__this->___content_2);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2943(L_14, /*hidden argument*/NULL);
		int32_t L_16 = ___startPos;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m1895(L_15, L_16, /*hidden argument*/NULL);
		bool L_18 = TextEditor_isLetterLikeChar_m3339(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0042;
		}
	}

IL_0069:
	{
		int32_t L_19 = ___startPos;
		return L_19;
	}
}
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern TypeInfo* Char_t343_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_isLetterLikeChar_m3339 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t343_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsLetterOrDigit_m3522(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = ___c;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)((int32_t)39)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C" int32_t TextEditor_FindPrevSeperator_m3340 (TextEditor_t574 * __this, int32_t ___startPos, const MethodInfo* method)
{
	{
		int32_t L_0 = ___startPos;
		___startPos = ((int32_t)((int32_t)L_0-(int32_t)1));
		goto IL_000f;
	}

IL_000a:
	{
		int32_t L_1 = ___startPos;
		___startPos = ((int32_t)((int32_t)L_1-(int32_t)1));
	}

IL_000f:
	{
		int32_t L_2 = ___startPos;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		GUIContent_t500 * L_3 = (__this->___content_2);
		NullCheck(L_3);
		String_t* L_4 = GUIContent_get_text_m2943(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___startPos;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m1895(L_4, L_5, /*hidden argument*/NULL);
		bool L_7 = TextEditor_isLetterLikeChar_m3339(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_000a;
		}
	}

IL_0031:
	{
		goto IL_003b;
	}

IL_0036:
	{
		int32_t L_8 = ___startPos;
		___startPos = ((int32_t)((int32_t)L_8-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_9 = ___startPos;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GUIContent_t500 * L_10 = (__this->___content_2);
		NullCheck(L_10);
		String_t* L_11 = GUIContent_get_text_m2943(L_10, /*hidden argument*/NULL);
		int32_t L_12 = ___startPos;
		NullCheck(L_11);
		uint16_t L_13 = String_get_Chars_m1895(L_11, L_12, /*hidden argument*/NULL);
		bool L_14 = TextEditor_isLetterLikeChar_m3339(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0036;
		}
	}

IL_005d:
	{
		int32_t L_15 = ___startPos;
		return ((int32_t)((int32_t)L_15+(int32_t)1));
	}
}
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C" void TextEditor_MoveWordRight_m3341 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B2_0 = {0};
	TextEditor_t574 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TextEditor_t574 * G_B3_1 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_m3294(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_FindNextSeperator_m3338(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_7, /*hidden argument*/NULL);
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C" void TextEditor_MoveToStartOfNextWord_m3342 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		TextEditor_MoveRight_m3313(__this, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_FindStartOfNextWord_m3347(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C" void TextEditor_MoveToEndOfPreviousWord_m3343 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		TextEditor_MoveLeft_m3314(__this, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_FindEndOfPreviousWord_m3348(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C" void TextEditor_SelectToStartOfNextWord_m3344 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_FindStartOfNextWord_m3347(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C" void TextEditor_SelectToEndOfPreviousWord_m3345 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_FindEndOfPreviousWord_m3348(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern TypeInfo* Char_t343_il2cpp_TypeInfo_var;
extern "C" int32_t TextEditor_ClassifyChar_m3346 (TextEditor_t574 * __this, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t343_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m3523(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (int32_t)(3);
	}

IL_000d:
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t343_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsLetterOrDigit_m3522(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_4 = ___c;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (int32_t)(0);
	}

IL_0022:
	{
		return (int32_t)(1);
	}
}
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern TypeInfo* Char_t343_il2cpp_TypeInfo_var;
extern "C" int32_t TextEditor_FindStartOfNextWord_m3347 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = {0};
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___p;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_5 = ___p;
		return L_5;
	}

IL_001a:
	{
		GUIContent_t500 * L_6 = (__this->___content_2);
		NullCheck(L_6);
		String_t* L_7 = GUIContent_get_text_m2943(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___p;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m1895(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		uint16_t L_10 = V_1;
		int32_t L_11 = TextEditor_ClassifyChar_m3346(__this, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_13 = ___p;
		___p = ((int32_t)((int32_t)L_13+(int32_t)1));
		goto IL_004a;
	}

IL_0045:
	{
		int32_t L_14 = ___p;
		___p = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_15 = ___p;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_006e;
		}
	}
	{
		GUIContent_t500 * L_17 = (__this->___content_2);
		NullCheck(L_17);
		String_t* L_18 = GUIContent_get_text_m2943(L_17, /*hidden argument*/NULL);
		int32_t L_19 = ___p;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m1895(L_18, L_19, /*hidden argument*/NULL);
		int32_t L_21 = TextEditor_ClassifyChar_m3346(__this, L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0045;
		}
	}

IL_006e:
	{
		goto IL_0087;
	}

IL_0073:
	{
		uint16_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)9))))
		{
			goto IL_0083;
		}
	}
	{
		uint16_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0087;
		}
	}

IL_0083:
	{
		int32_t L_25 = ___p;
		return ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0087:
	{
		int32_t L_26 = ___p;
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_28 = ___p;
		return L_28;
	}

IL_0090:
	{
		GUIContent_t500 * L_29 = (__this->___content_2);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m2943(L_29, /*hidden argument*/NULL);
		int32_t L_31 = ___p;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m1895(L_30, L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_00db;
		}
	}
	{
		goto IL_00b4;
	}

IL_00af:
	{
		int32_t L_34 = ___p;
		___p = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_35 = ___p;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00d6;
		}
	}
	{
		GUIContent_t500 * L_37 = (__this->___content_2);
		NullCheck(L_37);
		String_t* L_38 = GUIContent_get_text_m2943(L_37, /*hidden argument*/NULL);
		int32_t L_39 = ___p;
		NullCheck(L_38);
		uint16_t L_40 = String_get_Chars_m1895(L_38, L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t343_il2cpp_TypeInfo_var);
		bool L_41 = Char_IsWhiteSpace_m3523(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00af;
		}
	}

IL_00d6:
	{
		goto IL_00ed;
	}

IL_00db:
	{
		uint16_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)9))))
		{
			goto IL_00eb;
		}
	}
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ed;
		}
	}

IL_00eb:
	{
		int32_t L_44 = ___p;
		return L_44;
	}

IL_00ed:
	{
		int32_t L_45 = ___p;
		return L_45;
	}
}
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C" int32_t TextEditor_FindEndOfPreviousWord_m3348 (TextEditor_t574 * __this, int32_t ___p, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___p;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___p;
		return L_1;
	}

IL_0008:
	{
		int32_t L_2 = ___p;
		___p = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0017;
	}

IL_0012:
	{
		int32_t L_3 = ___p;
		___p = ((int32_t)((int32_t)L_3-(int32_t)1));
	}

IL_0017:
	{
		int32_t L_4 = ___p;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2943(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___p;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m1895(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_0012;
		}
	}

IL_0036:
	{
		GUIContent_t500 * L_9 = (__this->___content_2);
		NullCheck(L_9);
		String_t* L_10 = GUIContent_get_text_m2943(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___p;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m1895(L_10, L_11, /*hidden argument*/NULL);
		int32_t L_13 = TextEditor_ClassifyChar_m3346(__this, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_005f;
	}

IL_005a:
	{
		int32_t L_15 = ___p;
		___p = ((int32_t)((int32_t)L_15-(int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = ___p;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		GUIContent_t500 * L_17 = (__this->___content_2);
		NullCheck(L_17);
		String_t* L_18 = GUIContent_get_text_m2943(L_17, /*hidden argument*/NULL);
		int32_t L_19 = ___p;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m1895(L_18, ((int32_t)((int32_t)L_19-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_21 = TextEditor_ClassifyChar_m3346(__this, L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_005a;
		}
	}

IL_0085:
	{
		int32_t L_23 = ___p;
		return L_23;
	}
}
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C" void TextEditor_MoveWordLeft_m3349 (TextEditor_t574 * __this, const MethodInfo* method)
{
	TextEditor_t574 * G_B2_0 = {0};
	TextEditor_t574 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TextEditor_t574 * G_B3_1 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		TextEditor_set_cursorIndex_m3294(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_FindPrevSeperator_m3340(__this, L_4, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C" void TextEditor_SelectWordRight_m3350 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B3_0 = {0};
	TextEditor_t574 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	TextEditor_t574 * G_B4_1 = {0};
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_3, /*hidden argument*/NULL);
		TextEditor_MoveWordRight_m3341(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			G_B3_0 = __this;
			goto IL_0054;
		}
	}
	{
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_005a;
	}

IL_0054:
	{
		int32_t L_8 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_005a:
	{
		NullCheck(G_B4_1);
		TextEditor_set_cursorIndex_m3294(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		return;
	}

IL_0060:
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_9, /*hidden argument*/NULL);
		TextEditor_MoveWordRight_m3341(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C" void TextEditor_SelectWordLeft_m3351 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	TextEditor_t574 * G_B3_0 = {0};
	TextEditor_t574 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	TextEditor_t574 * G_B4_1 = {0};
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_2 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_3, /*hidden argument*/NULL);
		TextEditor_MoveWordLeft_m3349(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			G_B3_0 = __this;
			goto IL_0054;
		}
	}
	{
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_005a;
	}

IL_0054:
	{
		int32_t L_8 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_005a:
	{
		NullCheck(G_B4_1);
		TextEditor_set_cursorIndex_m3294(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		return;
	}

IL_0060:
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_9, /*hidden argument*/NULL);
		TextEditor_MoveWordLeft_m3349(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C" void TextEditor_ExpandSelectGraphicalLineStart_m3352 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_GetGraphicalLineStart_m3336(__this, L_2, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_3, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_002e:
	{
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_GetGraphicalLineStart_m3336(__this, L_5, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C" void TextEditor_ExpandSelectGraphicalLineEnd_m3353 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_3 = TextEditor_GetGraphicalLineEnd_m3337(__this, L_2, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_3, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_002e:
	{
		int32_t L_4 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_GetGraphicalLineEnd_m3337(__this, L_5, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		TextEditor_set_selectIndex_m3296(__this, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C" void TextEditor_SelectGraphicalLineStart_m3354 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_GetGraphicalLineStart_m3336(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C" void TextEditor_SelectGraphicalLineEnd_m3355 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_GetGraphicalLineEnd_m3337(__this, L_0, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C" void TextEditor_SelectParagraphForward_m3356 (TextEditor_t574 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_3 = (__this->___content_2);
		NullCheck(L_3);
		String_t* L_4 = GUIContent_get_text_m2943(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1876(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_IndexOfEndOfLine_m3323(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_9 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_11, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C" void TextEditor_SelectParagraphBackward_m3357 (TextEditor_t574 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		GUIContent_t500 * L_3 = (__this->___content_2);
		NullCheck(L_3);
		String_t* L_4 = GUIContent_get_text_m2943(L_3, /*hidden argument*/NULL);
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = String_LastIndexOf_m3521(L_4, ((int32_t)10), ((int32_t)((int32_t)L_5-(int32_t)2)), /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/NULL);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_10, /*hidden argument*/NULL);
	}

IL_0066:
	{
		goto IL_007b;
	}

IL_006b:
	{
		V_1 = 0;
		int32_t L_11 = V_1;
		TextEditor_set_cursorIndex_m3294(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		TextEditor_set_selectIndex_m3296(__this, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C" void TextEditor_SelectCurrentWord_m3358 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = V_0;
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/NULL);
	}

IL_003f:
	{
		int32_t L_8 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_10 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, ((int32_t)((int32_t)L_10-(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0059:
	{
		int32_t L_11 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_12 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_13 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_14 = TextEditor_FindEndOfClassification_m3359(__this, L_13, (-1), /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_16 = TextEditor_FindEndOfClassification_m3359(__this, L_15, 1, /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_16, /*hidden argument*/NULL);
		goto IL_00bb;
	}

IL_0095:
	{
		int32_t L_17 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_18 = TextEditor_FindEndOfClassification_m3359(__this, L_17, 1, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, L_18, /*hidden argument*/NULL);
		int32_t L_19 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_20 = TextEditor_FindEndOfClassification_m3359(__this, L_19, (-1), /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, L_20, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		__this->___m_bJustSelected_18 = 1;
		return;
	}
}
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C" int32_t TextEditor_FindEndOfClassification_m3359 (TextEditor_t574 * __this, int32_t ___p, int32_t ___dir, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___p;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = ___p;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		int32_t L_6 = ___p;
		return L_6;
	}

IL_0021:
	{
		GUIContent_t500 * L_7 = (__this->___content_2);
		NullCheck(L_7);
		String_t* L_8 = GUIContent_get_text_m2943(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ___p;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m1895(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_11 = TextEditor_ClassifyChar_m3346(__this, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_0039:
	{
		int32_t L_12 = ___p;
		int32_t L_13 = ___dir;
		___p = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___p;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		return 0;
	}

IL_0047:
	{
		int32_t L_15 = ___p;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0050:
	{
		GUIContent_t500 * L_18 = (__this->___content_2);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m2943(L_18, /*hidden argument*/NULL);
		int32_t L_20 = ___p;
		NullCheck(L_19);
		uint16_t L_21 = String_get_Chars_m1895(L_19, L_20, /*hidden argument*/NULL);
		int32_t L_22 = TextEditor_ClassifyChar_m3346(__this, L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_24 = ___dir;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_25 = ___p;
		return L_25;
	}

IL_0076:
	{
		int32_t L_26 = ___p;
		return ((int32_t)((int32_t)L_26+(int32_t)1));
	}
}
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C" void TextEditor_SelectCurrentParagraph_m3360 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_ClearCursorPos_m3297(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1876(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_5 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_6 = TextEditor_IndexOfEndOfLine_m3323(__this, L_5, /*hidden argument*/NULL);
		TextEditor_set_cursorIndex_m3294(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_7 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		GUIContent_t500 * L_8 = (__this->___content_2);
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_m2943(L_8, /*hidden argument*/NULL);
		int32_t L_10 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_11 = String_LastIndexOf_m3521(L_9, ((int32_t)10), ((int32_t)((int32_t)L_10-(int32_t)1)), /*hidden argument*/NULL);
		TextEditor_set_selectIndex_m3296(__this, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m3361 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		Event_t178 * L_0 = Event_get_current_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m1911(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_0026;
		}
	}
	{
		Event_t178 * L_2 = Event_get_current_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m1911(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0026;
		}
	}
	{
		TextEditor_UpdateScrollOffset_m3362(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3362 (TextEditor_t574 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t173  V_1 = {0};
	Vector2_t72  V_2 = {0};
	Rect_t173  V_3 = {0};
	Rect_t173  V_4 = {0};
	Vector2_t72  V_5 = {0};
	Rect_t173  V_6 = {0};
	Rect_t173  V_7 = {0};
	Vector2_t72 * G_B19_0 = {0};
	Vector2_t72 * G_B18_0 = {0};
	float G_B20_0 = 0.0f;
	Vector2_t72 * G_B20_1 = {0};
	{
		int32_t L_0 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		GUIStyle_t506 * L_1 = (__this->___style_3);
		Rect_t173  L_2 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = Rect_get_width_m1781((&V_3), /*hidden argument*/NULL);
		Rect_t173  L_4 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5 = Rect_get_height_m1731((&V_4), /*hidden argument*/NULL);
		Rect_t173  L_6 = {0};
		Rect__ctor_m1969(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t500 * L_7 = (__this->___content_2);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t72  L_9 = GUIStyle_GetCursorPixelPosition_m3107(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t506 * L_10 = (__this->___style_3);
		NullCheck(L_10);
		RectOffset_t245 * L_11 = GUIStyle_get_padding_m3098(L_10, /*hidden argument*/NULL);
		Rect_t173  L_12 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Rect_t173  L_13 = RectOffset_Remove_m3091(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t506 * L_14 = (__this->___style_3);
		GUIContent_t500 * L_15 = (__this->___content_2);
		NullCheck(L_14);
		Vector2_t72  L_16 = GUIStyle_CalcSize_m3109(L_14, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = ((&V_5)->___x_1);
		GUIStyle_t506 * L_18 = (__this->___style_3);
		GUIContent_t500 * L_19 = (__this->___content_2);
		Rect_t173  L_20 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_6 = L_20;
		float L_21 = Rect_get_width_m1781((&V_6), /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m3110(L_18, L_19, L_21, /*hidden argument*/NULL);
		Vector2__ctor_m1558((&V_2), L_17, L_22, /*hidden argument*/NULL);
		float L_23 = ((&V_2)->___x_1);
		Rect_t173  L_24 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_7 = L_24;
		float L_25 = Rect_get_width_m1781((&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00d3;
		}
	}
	{
		Vector2_t72 * L_26 = &(__this->___scrollOffset_8);
		L_26->___x_1 = (0.0f);
		goto IL_017a;
	}

IL_00d3:
	{
		bool L_27 = (__this->___m_RevealCursor_12);
		if (!L_27)
		{
			goto IL_017a;
		}
	}
	{
		Vector2_t72 * L_28 = &(__this->___graphicalCursorPos_13);
		float L_29 = (L_28->___x_1);
		Vector2_t72 * L_30 = &(__this->___scrollOffset_8);
		float L_31 = (L_30->___x_1);
		float L_32 = Rect_get_width_m1781((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_29+(float)(1.0f)))) > ((float)((float)((float)L_31+(float)L_32))))))
		{
			goto IL_0125;
		}
	}
	{
		Vector2_t72 * L_33 = &(__this->___scrollOffset_8);
		Vector2_t72 * L_34 = &(__this->___graphicalCursorPos_13);
		float L_35 = (L_34->___x_1);
		float L_36 = Rect_get_width_m1781((&V_1), /*hidden argument*/NULL);
		L_33->___x_1 = ((float)((float)L_35-(float)L_36));
	}

IL_0125:
	{
		Vector2_t72 * L_37 = &(__this->___graphicalCursorPos_13);
		float L_38 = (L_37->___x_1);
		Vector2_t72 * L_39 = &(__this->___scrollOffset_8);
		float L_40 = (L_39->___x_1);
		GUIStyle_t506 * L_41 = (__this->___style_3);
		NullCheck(L_41);
		RectOffset_t245 * L_42 = GUIStyle_get_padding_m3098(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		int32_t L_43 = RectOffset_get_left_m2092(L_42, /*hidden argument*/NULL);
		if ((!(((float)L_38) < ((float)((float)((float)L_40+(float)(((float)((float)L_43)))))))))
		{
			goto IL_017a;
		}
	}
	{
		Vector2_t72 * L_44 = &(__this->___scrollOffset_8);
		Vector2_t72 * L_45 = &(__this->___graphicalCursorPos_13);
		float L_46 = (L_45->___x_1);
		GUIStyle_t506 * L_47 = (__this->___style_3);
		NullCheck(L_47);
		RectOffset_t245 * L_48 = GUIStyle_get_padding_m3098(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_left_m2092(L_48, /*hidden argument*/NULL);
		L_44->___x_1 = ((float)((float)L_46-(float)(((float)((float)L_49)))));
	}

IL_017a:
	{
		float L_50 = ((&V_2)->___y_2);
		float L_51 = Rect_get_height_m1731((&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_50) < ((float)L_51))))
		{
			goto IL_01a2;
		}
	}
	{
		Vector2_t72 * L_52 = &(__this->___scrollOffset_8);
		L_52->___y_2 = (0.0f);
		goto IL_027f;
	}

IL_01a2:
	{
		bool L_53 = (__this->___m_RevealCursor_12);
		if (!L_53)
		{
			goto IL_027f;
		}
	}
	{
		Vector2_t72 * L_54 = &(__this->___graphicalCursorPos_13);
		float L_55 = (L_54->___y_2);
		GUIStyle_t506 * L_56 = (__this->___style_3);
		NullCheck(L_56);
		float L_57 = GUIStyle_get_lineHeight_m3100(L_56, /*hidden argument*/NULL);
		Vector2_t72 * L_58 = &(__this->___scrollOffset_8);
		float L_59 = (L_58->___y_2);
		float L_60 = Rect_get_height_m1731((&V_1), /*hidden argument*/NULL);
		GUIStyle_t506 * L_61 = (__this->___style_3);
		NullCheck(L_61);
		RectOffset_t245 * L_62 = GUIStyle_get_padding_m3098(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		int32_t L_63 = RectOffset_get_top_m2093(L_62, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_55+(float)L_57))) > ((float)((float)((float)((float)((float)L_59+(float)L_60))+(float)(((float)((float)L_63)))))))))
		{
			goto IL_022a;
		}
	}
	{
		Vector2_t72 * L_64 = &(__this->___scrollOffset_8);
		Vector2_t72 * L_65 = &(__this->___graphicalCursorPos_13);
		float L_66 = (L_65->___y_2);
		float L_67 = Rect_get_height_m1731((&V_1), /*hidden argument*/NULL);
		GUIStyle_t506 * L_68 = (__this->___style_3);
		NullCheck(L_68);
		RectOffset_t245 * L_69 = GUIStyle_get_padding_m3098(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		int32_t L_70 = RectOffset_get_top_m2093(L_69, /*hidden argument*/NULL);
		GUIStyle_t506 * L_71 = (__this->___style_3);
		NullCheck(L_71);
		float L_72 = GUIStyle_get_lineHeight_m3100(L_71, /*hidden argument*/NULL);
		L_64->___y_2 = ((float)((float)((float)((float)((float)((float)L_66-(float)L_67))-(float)(((float)((float)L_70)))))+(float)L_72));
	}

IL_022a:
	{
		Vector2_t72 * L_73 = &(__this->___graphicalCursorPos_13);
		float L_74 = (L_73->___y_2);
		Vector2_t72 * L_75 = &(__this->___scrollOffset_8);
		float L_76 = (L_75->___y_2);
		GUIStyle_t506 * L_77 = (__this->___style_3);
		NullCheck(L_77);
		RectOffset_t245 * L_78 = GUIStyle_get_padding_m3098(L_77, /*hidden argument*/NULL);
		NullCheck(L_78);
		int32_t L_79 = RectOffset_get_top_m2093(L_78, /*hidden argument*/NULL);
		if ((!(((float)L_74) < ((float)((float)((float)L_76+(float)(((float)((float)L_79)))))))))
		{
			goto IL_027f;
		}
	}
	{
		Vector2_t72 * L_80 = &(__this->___scrollOffset_8);
		Vector2_t72 * L_81 = &(__this->___graphicalCursorPos_13);
		float L_82 = (L_81->___y_2);
		GUIStyle_t506 * L_83 = (__this->___style_3);
		NullCheck(L_83);
		RectOffset_t245 * L_84 = GUIStyle_get_padding_m3098(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_top_m2093(L_84, /*hidden argument*/NULL);
		L_80->___y_2 = ((float)((float)L_82-(float)(((float)((float)L_85)))));
	}

IL_027f:
	{
		Vector2_t72 * L_86 = &(__this->___scrollOffset_8);
		float L_87 = (L_86->___y_2);
		if ((!(((float)L_87) > ((float)(0.0f)))))
		{
			goto IL_02f1;
		}
	}
	{
		float L_88 = ((&V_2)->___y_2);
		Vector2_t72 * L_89 = &(__this->___scrollOffset_8);
		float L_90 = (L_89->___y_2);
		float L_91 = Rect_get_height_m1731((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_88-(float)L_90))) < ((float)L_91))))
		{
			goto IL_02f1;
		}
	}
	{
		Vector2_t72 * L_92 = &(__this->___scrollOffset_8);
		float L_93 = ((&V_2)->___y_2);
		float L_94 = Rect_get_height_m1731((&V_1), /*hidden argument*/NULL);
		GUIStyle_t506 * L_95 = (__this->___style_3);
		NullCheck(L_95);
		RectOffset_t245 * L_96 = GUIStyle_get_padding_m3098(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		int32_t L_97 = RectOffset_get_top_m2093(L_96, /*hidden argument*/NULL);
		GUIStyle_t506 * L_98 = (__this->___style_3);
		NullCheck(L_98);
		RectOffset_t245 * L_99 = GUIStyle_get_padding_m3098(L_98, /*hidden argument*/NULL);
		NullCheck(L_99);
		int32_t L_100 = RectOffset_get_bottom_m3089(L_99, /*hidden argument*/NULL);
		L_92->___y_2 = ((float)((float)((float)((float)((float)((float)L_93-(float)L_94))-(float)(((float)((float)L_97)))))-(float)(((float)((float)L_100)))));
	}

IL_02f1:
	{
		Vector2_t72 * L_101 = &(__this->___scrollOffset_8);
		Vector2_t72 * L_102 = &(__this->___scrollOffset_8);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_101;
		if ((!(((float)L_103) < ((float)(0.0f)))))
		{
			G_B19_0 = L_101;
			goto IL_0316;
		}
	}
	{
		G_B20_0 = (0.0f);
		G_B20_1 = G_B18_0;
		goto IL_0321;
	}

IL_0316:
	{
		Vector2_t72 * L_104 = &(__this->___scrollOffset_8);
		float L_105 = (L_104->___y_2);
		G_B20_0 = L_105;
		G_B20_1 = G_B19_0;
	}

IL_0321:
	{
		G_B20_1->___y_2 = G_B20_0;
		__this->___m_RevealCursor_12 = 0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern TypeInfo* Input_t24_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TextEditor_DrawCursor_m3363 (TextEditor_t574 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	Vector2_t72  V_2 = {0};
	Rect_t173  V_3 = {0};
	Rect_t173  V_4 = {0};
	Rect_t173  V_5 = {0};
	Rect_t173  V_6 = {0};
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t24_il2cpp_TypeInfo_var);
		String_t* L_3 = Input_get_compositionString_m1888(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1876(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		String_t* L_6 = ___text;
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_8 = String_Substring_m1896(L_6, 0, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t24_il2cpp_TypeInfo_var);
		String_t* L_9 = Input_get_compositionString_m1888(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = ___text;
		int32_t L_11 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_12 = String_Substring_m1923(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m85(NULL /*static, unused*/, L_8, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIContent_set_text_m2944(L_5, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		String_t* L_15 = Input_get_compositionString_m1888(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m1876(L_15, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)L_16));
		goto IL_006f;
	}

IL_0063:
	{
		GUIContent_t500 * L_17 = (__this->___content_2);
		String_t* L_18 = ___text;
		NullCheck(L_17);
		GUIContent_set_text_m2944(L_17, L_18, /*hidden argument*/NULL);
	}

IL_006f:
	{
		GUIStyle_t506 * L_19 = (__this->___style_3);
		Rect_t173  L_20 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_3 = L_20;
		float L_21 = Rect_get_width_m1781((&V_3), /*hidden argument*/NULL);
		Rect_t173  L_22 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = Rect_get_height_m1731((&V_4), /*hidden argument*/NULL);
		Rect_t173  L_24 = {0};
		Rect__ctor_m1969(&L_24, (0.0f), (0.0f), L_21, L_23, /*hidden argument*/NULL);
		GUIContent_t500 * L_25 = (__this->___content_2);
		int32_t L_26 = V_1;
		NullCheck(L_19);
		Vector2_t72  L_27 = GUIStyle_GetCursorPixelPosition_m3107(L_19, L_24, L_25, L_26, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_27;
		GUIStyle_t506 * L_28 = (__this->___style_3);
		NullCheck(L_28);
		Vector2_t72  L_29 = GUIStyle_get_contentOffset_m3122(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		GUIStyle_t506 * L_30 = (__this->___style_3);
		GUIStyle_t506 * L_31 = L_30;
		NullCheck(L_31);
		Vector2_t72  L_32 = GUIStyle_get_contentOffset_m3122(L_31, /*hidden argument*/NULL);
		Vector2_t72  L_33 = (__this->___scrollOffset_8);
		Vector2_t72  L_34 = Vector2_op_Subtraction_m1569(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyle_set_contentOffset_m3123(L_31, L_34, /*hidden argument*/NULL);
		GUIStyle_t506 * L_35 = (__this->___style_3);
		Vector2_t72  L_36 = (__this->___scrollOffset_8);
		NullCheck(L_35);
		GUIStyle_set_Internal_clipOffset_m3126(L_35, L_36, /*hidden argument*/NULL);
		Vector2_t72  L_37 = (__this->___graphicalCursorPos_13);
		Rect_t173  L_38 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_5 = L_38;
		float L_39 = Rect_get_x_m1786((&V_5), /*hidden argument*/NULL);
		Rect_t173  L_40 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		V_6 = L_40;
		float L_41 = Rect_get_y_m1787((&V_6), /*hidden argument*/NULL);
		GUIStyle_t506 * L_42 = (__this->___style_3);
		NullCheck(L_42);
		float L_43 = GUIStyle_get_lineHeight_m3100(L_42, /*hidden argument*/NULL);
		Vector2_t72  L_44 = {0};
		Vector2__ctor_m1558(&L_44, L_39, ((float)((float)L_41+(float)L_43)), /*hidden argument*/NULL);
		Vector2_t72  L_45 = Vector2_op_Addition_m1726(NULL /*static, unused*/, L_37, L_44, /*hidden argument*/NULL);
		Vector2_t72  L_46 = (__this->___scrollOffset_8);
		Vector2_t72  L_47 = Vector2_op_Subtraction_m1569(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t24_il2cpp_TypeInfo_var);
		Input_set_compositionCursorPos_m1943(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		String_t* L_48 = Input_get_compositionString_m1888(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_48);
		int32_t L_49 = String_get_Length_m1876(L_48, /*hidden argument*/NULL);
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_0180;
		}
	}
	{
		GUIStyle_t506 * L_50 = (__this->___style_3);
		Rect_t173  L_51 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_52 = (__this->___content_2);
		int32_t L_53 = (__this->___controlID_1);
		int32_t L_54 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_55 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t24_il2cpp_TypeInfo_var);
		String_t* L_56 = Input_get_compositionString_m1888(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1876(L_56, /*hidden argument*/NULL);
		NullCheck(L_50);
		GUIStyle_DrawWithTextSelection_m3104(L_50, L_51, L_52, L_53, L_54, ((int32_t)((int32_t)L_55+(int32_t)L_57)), 1, /*hidden argument*/NULL);
		goto IL_01a9;
	}

IL_0180:
	{
		GUIStyle_t506 * L_58 = (__this->___style_3);
		Rect_t173  L_59 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_60 = (__this->___content_2);
		int32_t L_61 = (__this->___controlID_1);
		int32_t L_62 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_63 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		GUIStyle_DrawWithTextSelection_m3105(L_58, L_59, L_60, L_61, L_62, L_63, /*hidden argument*/NULL);
	}

IL_01a9:
	{
		int32_t L_64 = (__this->___m_iAltCursorPos_19);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_01d8;
		}
	}
	{
		GUIStyle_t506 * L_65 = (__this->___style_3);
		Rect_t173  L_66 = TextEditor_get_position_m3291(__this, /*hidden argument*/NULL);
		GUIContent_t500 * L_67 = (__this->___content_2);
		int32_t L_68 = (__this->___controlID_1);
		int32_t L_69 = (__this->___m_iAltCursorPos_19);
		NullCheck(L_65);
		GUIStyle_DrawCursor_m3103(L_65, L_66, L_67, L_68, L_69, /*hidden argument*/NULL);
	}

IL_01d8:
	{
		GUIStyle_t506 * L_70 = (__this->___style_3);
		Vector2_t72  L_71 = V_2;
		NullCheck(L_70);
		GUIStyle_set_contentOffset_m3123(L_70, L_71, /*hidden argument*/NULL);
		GUIStyle_t506 * L_72 = (__this->___style_3);
		Vector2_t72  L_73 = Vector2_get_zero_m1551(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_72);
		GUIStyle_set_Internal_clipOffset_m3126(L_72, L_73, /*hidden argument*/NULL);
		GUIContent_t500 * L_74 = (__this->___content_2);
		String_t* L_75 = V_0;
		NullCheck(L_74);
		GUIContent_set_text_m2944(L_74, L_75, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern TypeInfo* TextEditOp_t573_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral340;
extern "C" bool TextEditor_PerformOperation_m3364 (TextEditor_t574 * __this, int32_t ___operation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditOp_t573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		__this->___m_RevealCursor_12 = 1;
		int32_t L_0 = ___operation;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_00cc;
		}
		if (L_1 == 1)
		{
			goto IL_00d7;
		}
		if (L_1 == 2)
		{
			goto IL_00e2;
		}
		if (L_1 == 3)
		{
			goto IL_00ed;
		}
		if (L_1 == 4)
		{
			goto IL_00f8;
		}
		if (L_1 == 5)
		{
			goto IL_0103;
		}
		if (L_1 == 6)
		{
			goto IL_013a;
		}
		if (L_1 == 7)
		{
			goto IL_0145;
		}
		if (L_1 == 8)
		{
			goto IL_027e;
		}
		if (L_1 == 9)
		{
			goto IL_027e;
		}
		if (L_1 == 10)
		{
			goto IL_0166;
		}
		if (L_1 == 11)
		{
			goto IL_0171;
		}
		if (L_1 == 12)
		{
			goto IL_012f;
		}
		if (L_1 == 13)
		{
			goto IL_010e;
		}
		if (L_1 == 14)
		{
			goto IL_0150;
		}
		if (L_1 == 15)
		{
			goto IL_015b;
		}
		if (L_1 == 16)
		{
			goto IL_0119;
		}
		if (L_1 == 17)
		{
			goto IL_0124;
		}
		if (L_1 == 18)
		{
			goto IL_017c;
		}
		if (L_1 == 19)
		{
			goto IL_0187;
		}
		if (L_1 == 20)
		{
			goto IL_0192;
		}
		if (L_1 == 21)
		{
			goto IL_019d;
		}
		if (L_1 == 22)
		{
			goto IL_01d4;
		}
		if (L_1 == 23)
		{
			goto IL_01df;
		}
		if (L_1 == 24)
		{
			goto IL_027e;
		}
		if (L_1 == 25)
		{
			goto IL_027e;
		}
		if (L_1 == 26)
		{
			goto IL_01ea;
		}
		if (L_1 == 27)
		{
			goto IL_01f5;
		}
		if (L_1 == 28)
		{
			goto IL_0216;
		}
		if (L_1 == 29)
		{
			goto IL_0221;
		}
		if (L_1 == 30)
		{
			goto IL_01b3;
		}
		if (L_1 == 31)
		{
			goto IL_01a8;
		}
		if (L_1 == 32)
		{
			goto IL_01be;
		}
		if (L_1 == 33)
		{
			goto IL_01c9;
		}
		if (L_1 == 34)
		{
			goto IL_020b;
		}
		if (L_1 == 35)
		{
			goto IL_0200;
		}
		if (L_1 == 36)
		{
			goto IL_022c;
		}
		if (L_1 == 37)
		{
			goto IL_0233;
		}
		if (L_1 == 38)
		{
			goto IL_0269;
		}
		if (L_1 == 39)
		{
			goto IL_0277;
		}
		if (L_1 == 40)
		{
			goto IL_0270;
		}
		if (L_1 == 41)
		{
			goto IL_023a;
		}
		if (L_1 == 42)
		{
			goto IL_0241;
		}
		if (L_1 == 43)
		{
			goto IL_024c;
		}
		if (L_1 == 44)
		{
			goto IL_0253;
		}
		if (L_1 == 45)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_027e;
	}

IL_00cc:
	{
		TextEditor_MoveLeft_m3314(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_00d7:
	{
		TextEditor_MoveRight_m3313(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_00e2:
	{
		TextEditor_MoveUp_m3315(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_00ed:
	{
		TextEditor_MoveDown_m3316(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_00f8:
	{
		TextEditor_MoveLineStart_m3317(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0103:
	{
		TextEditor_MoveLineEnd_m3318(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_010e:
	{
		TextEditor_MoveWordRight_m3341(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0119:
	{
		TextEditor_MoveToStartOfNextWord_m3342(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0124:
	{
		TextEditor_MoveToEndOfPreviousWord_m3343(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_012f:
	{
		TextEditor_MoveWordLeft_m3349(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_013a:
	{
		TextEditor_MoveTextStart_m3321(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0145:
	{
		TextEditor_MoveTextEnd_m3322(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0150:
	{
		TextEditor_MoveParagraphForward_m3324(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_015b:
	{
		TextEditor_MoveParagraphBackward_m3325(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0166:
	{
		TextEditor_MoveGraphicalLineStart_m3319(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0171:
	{
		TextEditor_MoveGraphicalLineEnd_m3320(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_017c:
	{
		TextEditor_SelectLeft_m3328(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0187:
	{
		TextEditor_SelectRight_m3329(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0192:
	{
		TextEditor_SelectUp_m3330(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_019d:
	{
		TextEditor_SelectDown_m3331(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01a8:
	{
		TextEditor_SelectWordRight_m3350(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01b3:
	{
		TextEditor_SelectWordLeft_m3351(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01be:
	{
		TextEditor_SelectToEndOfPreviousWord_m3345(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01c9:
	{
		TextEditor_SelectToStartOfNextWord_m3344(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01d4:
	{
		TextEditor_SelectTextStart_m3333(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01df:
	{
		TextEditor_SelectTextEnd_m3332(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01ea:
	{
		TextEditor_ExpandSelectGraphicalLineStart_m3352(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_01f5:
	{
		TextEditor_ExpandSelectGraphicalLineEnd_m3353(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0200:
	{
		TextEditor_SelectParagraphForward_m3356(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_020b:
	{
		TextEditor_SelectParagraphBackward_m3357(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0216:
	{
		TextEditor_SelectGraphicalLineStart_m3354(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0221:
	{
		TextEditor_SelectGraphicalLineEnd_m3355(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_022c:
	{
		bool L_2 = TextEditor_Delete_m3305(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0233:
	{
		bool L_3 = TextEditor_Backspace_m3306(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_023a:
	{
		bool L_4 = TextEditor_Cut_m3366(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0241:
	{
		TextEditor_Copy_m3367(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_024c:
	{
		bool L_5 = TextEditor_Paste_m3369(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0253:
	{
		TextEditor_SelectAll_m3307(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_025e:
	{
		TextEditor_SelectNone_m3308(__this, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0269:
	{
		bool L_6 = TextEditor_DeleteWordBack_m3303(__this, /*hidden argument*/NULL);
		return L_6;
	}

IL_0270:
	{
		bool L_7 = TextEditor_DeleteLineBack_m3302(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_0277:
	{
		bool L_8 = TextEditor_DeleteWordForward_m3304(__this, /*hidden argument*/NULL);
		return L_8;
	}

IL_027e:
	{
		int32_t L_9 = ___operation;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(TextEditOp_t573_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m73(NULL /*static, unused*/, _stringLiteral340, L_11, /*hidden argument*/NULL);
		Debug_Log_m69(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0298;
	}

IL_0298:
	{
		return 0;
	}
}
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m3365 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		GUIContent_t500 * L_0 = (__this->___content_2);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2943(L_0, /*hidden argument*/NULL);
		__this->___oldText_20 = L_1;
		int32_t L_2 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		__this->___oldPos_21 = L_2;
		int32_t L_3 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		__this->___oldSelectPos_22 = L_3;
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C" bool TextEditor_Cut_m3366 (TextEditor_t574 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isPasswordField_6);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		TextEditor_Copy_m3367(__this, /*hidden argument*/NULL);
		bool L_1 = TextEditor_DeleteSelection_m3310(__this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern TypeInfo* GUIUtility_t345_il2cpp_TypeInfo_var;
extern "C" void TextEditor_Copy_m3367 (TextEditor_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_1 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_6);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_4 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_2);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2943(L_5, /*hidden argument*/NULL);
		int32_t L_7 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_8 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_9 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m1896(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t500 * L_11 = (__this->___content_2);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m2943(L_11, /*hidden argument*/NULL);
		int32_t L_13 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		int32_t L_14 = TextEditor_get_cursorIndex_m3293(__this, /*hidden argument*/NULL);
		int32_t L_15 = TextEditor_get_selectIndex_m3295(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m1896(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t345_il2cpp_TypeInfo_var);
		GUIUtility_set_systemCopyBuffer_m1891(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern Il2CppCodeGenString* _stringLiteral341;
extern Il2CppCodeGenString* _stringLiteral240;
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3368 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral341 = il2cpp_codegen_string_literal_from_index(341);
		_stringLiteral240 = il2cpp_codegen_string_literal_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m3513(L_0, _stringLiteral341, _stringLiteral240, /*hidden argument*/NULL);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m3514(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m3514(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern TypeInfo* GUIUtility_t345_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_Paste_m3369 (TextEditor_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t345_il2cpp_TypeInfo_var);
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m1890(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m1894(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_4);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m3368(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m3311(__this, L_7, /*hidden argument*/NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern TypeInfo* TextEditor_t574_il2cpp_TypeInfo_var;
extern "C" void TextEditor_MapKey_m3370 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditor_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t575 * L_0 = ((TextEditor_t574_StaticFields*)TextEditor_t574_il2cpp_TypeInfo_var->static_fields)->___s_Keyactions_23;
		String_t* L_1 = ___key;
		Event_t178 * L_2 = Event_KeyboardEvent_m2885(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___action;
		NullCheck(L_0);
		VirtActionInvoker2< Event_t178 *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::set_Item(!0,!1) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern TypeInfo* TextEditor_t574_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t575_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3524_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral194;
extern Il2CppCodeGenString* _stringLiteral195;
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral193;
extern Il2CppCodeGenString* _stringLiteral342;
extern Il2CppCodeGenString* _stringLiteral343;
extern Il2CppCodeGenString* _stringLiteral344;
extern Il2CppCodeGenString* _stringLiteral345;
extern Il2CppCodeGenString* _stringLiteral204;
extern Il2CppCodeGenString* _stringLiteral203;
extern Il2CppCodeGenString* _stringLiteral346;
extern Il2CppCodeGenString* _stringLiteral347;
extern Il2CppCodeGenString* _stringLiteral348;
extern Il2CppCodeGenString* _stringLiteral349;
extern Il2CppCodeGenString* _stringLiteral350;
extern Il2CppCodeGenString* _stringLiteral351;
extern Il2CppCodeGenString* _stringLiteral352;
extern Il2CppCodeGenString* _stringLiteral353;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral355;
extern Il2CppCodeGenString* _stringLiteral356;
extern Il2CppCodeGenString* _stringLiteral357;
extern Il2CppCodeGenString* _stringLiteral358;
extern Il2CppCodeGenString* _stringLiteral359;
extern Il2CppCodeGenString* _stringLiteral360;
extern Il2CppCodeGenString* _stringLiteral361;
extern Il2CppCodeGenString* _stringLiteral362;
extern Il2CppCodeGenString* _stringLiteral363;
extern Il2CppCodeGenString* _stringLiteral364;
extern Il2CppCodeGenString* _stringLiteral365;
extern Il2CppCodeGenString* _stringLiteral366;
extern Il2CppCodeGenString* _stringLiteral367;
extern Il2CppCodeGenString* _stringLiteral368;
extern Il2CppCodeGenString* _stringLiteral369;
extern Il2CppCodeGenString* _stringLiteral370;
extern Il2CppCodeGenString* _stringLiteral371;
extern Il2CppCodeGenString* _stringLiteral372;
extern Il2CppCodeGenString* _stringLiteral373;
extern Il2CppCodeGenString* _stringLiteral374;
extern Il2CppCodeGenString* _stringLiteral375;
extern Il2CppCodeGenString* _stringLiteral376;
extern Il2CppCodeGenString* _stringLiteral377;
extern Il2CppCodeGenString* _stringLiteral378;
extern Il2CppCodeGenString* _stringLiteral379;
extern Il2CppCodeGenString* _stringLiteral380;
extern Il2CppCodeGenString* _stringLiteral381;
extern Il2CppCodeGenString* _stringLiteral382;
extern Il2CppCodeGenString* _stringLiteral383;
extern Il2CppCodeGenString* _stringLiteral384;
extern Il2CppCodeGenString* _stringLiteral197;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral385;
extern Il2CppCodeGenString* _stringLiteral386;
extern Il2CppCodeGenString* _stringLiteral387;
extern Il2CppCodeGenString* _stringLiteral388;
extern Il2CppCodeGenString* _stringLiteral389;
extern Il2CppCodeGenString* _stringLiteral390;
extern Il2CppCodeGenString* _stringLiteral391;
extern Il2CppCodeGenString* _stringLiteral392;
extern Il2CppCodeGenString* _stringLiteral393;
extern Il2CppCodeGenString* _stringLiteral394;
extern "C" void TextEditor_InitKeyActions_m3371 (TextEditor_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextEditor_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		Dictionary_2_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		Dictionary_2__ctor_m3524_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483964);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		_stringLiteral342 = il2cpp_codegen_string_literal_from_index(342);
		_stringLiteral343 = il2cpp_codegen_string_literal_from_index(343);
		_stringLiteral344 = il2cpp_codegen_string_literal_from_index(344);
		_stringLiteral345 = il2cpp_codegen_string_literal_from_index(345);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		_stringLiteral346 = il2cpp_codegen_string_literal_from_index(346);
		_stringLiteral347 = il2cpp_codegen_string_literal_from_index(347);
		_stringLiteral348 = il2cpp_codegen_string_literal_from_index(348);
		_stringLiteral349 = il2cpp_codegen_string_literal_from_index(349);
		_stringLiteral350 = il2cpp_codegen_string_literal_from_index(350);
		_stringLiteral351 = il2cpp_codegen_string_literal_from_index(351);
		_stringLiteral352 = il2cpp_codegen_string_literal_from_index(352);
		_stringLiteral353 = il2cpp_codegen_string_literal_from_index(353);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral355 = il2cpp_codegen_string_literal_from_index(355);
		_stringLiteral356 = il2cpp_codegen_string_literal_from_index(356);
		_stringLiteral357 = il2cpp_codegen_string_literal_from_index(357);
		_stringLiteral358 = il2cpp_codegen_string_literal_from_index(358);
		_stringLiteral359 = il2cpp_codegen_string_literal_from_index(359);
		_stringLiteral360 = il2cpp_codegen_string_literal_from_index(360);
		_stringLiteral361 = il2cpp_codegen_string_literal_from_index(361);
		_stringLiteral362 = il2cpp_codegen_string_literal_from_index(362);
		_stringLiteral363 = il2cpp_codegen_string_literal_from_index(363);
		_stringLiteral364 = il2cpp_codegen_string_literal_from_index(364);
		_stringLiteral365 = il2cpp_codegen_string_literal_from_index(365);
		_stringLiteral366 = il2cpp_codegen_string_literal_from_index(366);
		_stringLiteral367 = il2cpp_codegen_string_literal_from_index(367);
		_stringLiteral368 = il2cpp_codegen_string_literal_from_index(368);
		_stringLiteral369 = il2cpp_codegen_string_literal_from_index(369);
		_stringLiteral370 = il2cpp_codegen_string_literal_from_index(370);
		_stringLiteral371 = il2cpp_codegen_string_literal_from_index(371);
		_stringLiteral372 = il2cpp_codegen_string_literal_from_index(372);
		_stringLiteral373 = il2cpp_codegen_string_literal_from_index(373);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		_stringLiteral375 = il2cpp_codegen_string_literal_from_index(375);
		_stringLiteral376 = il2cpp_codegen_string_literal_from_index(376);
		_stringLiteral377 = il2cpp_codegen_string_literal_from_index(377);
		_stringLiteral378 = il2cpp_codegen_string_literal_from_index(378);
		_stringLiteral379 = il2cpp_codegen_string_literal_from_index(379);
		_stringLiteral380 = il2cpp_codegen_string_literal_from_index(380);
		_stringLiteral381 = il2cpp_codegen_string_literal_from_index(381);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		_stringLiteral384 = il2cpp_codegen_string_literal_from_index(384);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral385 = il2cpp_codegen_string_literal_from_index(385);
		_stringLiteral386 = il2cpp_codegen_string_literal_from_index(386);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		_stringLiteral388 = il2cpp_codegen_string_literal_from_index(388);
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t575 * L_0 = ((TextEditor_t574_StaticFields*)TextEditor_t574_il2cpp_TypeInfo_var->static_fields)->___s_Keyactions_23;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Dictionary_2_t575 * L_1 = (Dictionary_2_t575 *)il2cpp_codegen_object_new (Dictionary_2_t575_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3524(L_1, /*hidden argument*/Dictionary_2__ctor_m3524_MethodInfo_var);
		((TextEditor_t574_StaticFields*)TextEditor_t574_il2cpp_TypeInfo_var->static_fields)->___s_Keyactions_23 = L_1;
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral194, 0, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral195, 1, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral192, 2, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral193, 3, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral342, ((int32_t)18), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral343, ((int32_t)19), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral344, ((int32_t)20), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral345, ((int32_t)21), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral204, ((int32_t)36), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral203, ((int32_t)37), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral346, ((int32_t)37), /*hidden argument*/NULL);
		int32_t L_2 = Application_get_platform_m1871(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m1871(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_4 = Application_get_platform_m1871(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_5 = Application_get_platform_m1871(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m1871(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_029b;
		}
	}
	{
		String_t* L_7 = SystemInfo_get_operatingSystem_m2161(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3506(L_7, _stringLiteral347, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_029b;
		}
	}

IL_00e0:
	{
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral348, ((int32_t)10), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral349, ((int32_t)11), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral350, ((int32_t)12), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral351, ((int32_t)13), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral352, ((int32_t)15), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral353, ((int32_t)14), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral354, ((int32_t)10), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral355, ((int32_t)11), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral356, 6, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral357, 7, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral358, ((int32_t)22), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral359, ((int32_t)23), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral360, ((int32_t)26), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral361, ((int32_t)27), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral362, ((int32_t)34), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral363, ((int32_t)35), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral364, ((int32_t)30), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral365, ((int32_t)31), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral366, ((int32_t)34), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral367, ((int32_t)35), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral368, ((int32_t)26), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral369, ((int32_t)27), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral370, ((int32_t)22), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral371, ((int32_t)23), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral372, ((int32_t)44), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral373, ((int32_t)41), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral374, ((int32_t)42), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral375, ((int32_t)43), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral376, ((int32_t)36), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral377, ((int32_t)37), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral378, 0, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral379, 1, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral380, 4, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral381, 5, /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral382, ((int32_t)39), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral383, ((int32_t)38), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral384, ((int32_t)40), /*hidden argument*/NULL);
		goto IL_03d3;
	}

IL_029b:
	{
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral197, ((int32_t)10), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral198, ((int32_t)11), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral354, ((int32_t)12), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral355, ((int32_t)13), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral356, ((int32_t)15), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral357, ((int32_t)14), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral348, ((int32_t)17), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral349, ((int32_t)16), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral385, ((int32_t)15), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral386, ((int32_t)14), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral360, ((int32_t)32), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral361, ((int32_t)33), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral362, ((int32_t)34), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral363, ((int32_t)35), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral358, ((int32_t)28), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral359, ((int32_t)29), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral387, ((int32_t)39), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral388, ((int32_t)38), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral384, ((int32_t)40), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral380, ((int32_t)44), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral389, ((int32_t)41), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral390, ((int32_t)42), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral391, ((int32_t)43), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral392, ((int32_t)41), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral393, ((int32_t)42), /*hidden argument*/NULL);
		TextEditor_MapKey_m3370(NULL /*static, unused*/, _stringLiteral394, ((int32_t)43), /*hidden argument*/NULL);
	}

IL_03d3:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern TypeInfo* GUIUtility_t345_il2cpp_TypeInfo_var;
extern "C" void TextEditor_DetectFocusChange_m3372 (TextEditor_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasFocus_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = (__this->___controlID_1);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t345_il2cpp_TypeInfo_var);
		int32_t L_2 = GUIUtility_get_keyboardControl_m3165(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		TextEditor_OnLostFocus_m3299(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		bool L_3 = (__this->___m_HasFocus_7);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = (__this->___controlID_1);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t345_il2cpp_TypeInfo_var);
		int32_t L_5 = GUIUtility_get_keyboardControl_m3165(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		TextEditor_OnFocus_m3298(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m3373 (TextGenerationSettings_t298 * __this, Color_t96  ___left, Color_t96  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___left)->___r_0);
		float L_1 = ((&___right)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = ((&___left)->___g_1);
		float L_4 = ((&___right)->___g_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = ((&___left)->___b_2);
		float L_7 = ((&___right)->___b_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9 = ((&___left)->___a_3);
		float L_10 = ((&___right)->___a_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_11 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m3374 (TextGenerationSettings_t298 * __this, Vector2_t72  ___left, Vector2_t72  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t307_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m3375 (TextGenerationSettings_t298 * __this, TextGenerationSettings_t298  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t96  L_0 = (__this->___color_1);
		Color_t96  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m3373(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t307_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m1593(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t72  L_35 = (__this->___generationExtents_14);
		Vector2_t72  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m3374(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t72  L_38 = (__this->___pivot_15);
		Vector2_t72  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m3374(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t130 * L_41 = (__this->___font_0);
		Font_t130 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m1507(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t479_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m3376 (TrackedReference_t479 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m3378(NULL /*static, unused*/, ((TrackedReference_t479 *)IsInstClass(L_0, TrackedReference_t479_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3377 (TrackedReference_t479 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m3525(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m3378 (Object_t * __this /* static, unused */, TrackedReference_t479 * ___x, TrackedReference_t479 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t479 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t479 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t479 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m3526(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t479 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m3526(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t479 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t479 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m3526(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t479_marshal(const TrackedReference_t479& unmarshaled, TrackedReference_t479_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void TrackedReference_t479_marshal_back(const TrackedReference_t479_marshaled& marshaled, TrackedReference_t479& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t479_marshal_cleanup(TrackedReference_t479_marshaled& marshaled)
{
}
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m3379 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t296 * ArgumentCache_get_unityObjectArgument_m3380 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		Object_t296 * L_0 = (__this->___m_ObjectArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3381 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m3382 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_5);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m3383 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_6);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m3384 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m3385 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_8);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t638_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral395;
extern Il2CppCodeGenString* _stringLiteral396;
extern Il2CppCodeGenString* _stringLiteral397;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m3386 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Regex_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m82(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t638_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m3527(NULL /*static, unused*/, L_2, _stringLiteral395, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m3527(NULL /*static, unused*/, L_5, _stringLiteral396, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m3527(NULL /*static, unused*/, L_8, _stringLiteral397, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m3387 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3386(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m3388 (ArgumentCache_t577 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3386(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m3389 (BaseInvokableCall_t578 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t639_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral398;
extern Il2CppCodeGenString* _stringLiteral399;
extern "C" void BaseInvokableCall__ctor_m3390 (BaseInvokableCall_t578 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		_stringLiteral399 = il2cpp_codegen_string_literal_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t639 * L_1 = (ArgumentNullException_t639 *)il2cpp_codegen_object_new (ArgumentNullException_t639_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3528(L_1, _stringLiteral398, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t639 * L_3 = (ArgumentNullException_t639 *)il2cpp_codegen_object_new (ArgumentNullException_t639_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3528(L_3, _stringLiteral399, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern TypeInfo* Object_t296_il2cpp_TypeInfo_var;
extern "C" bool BaseInvokableCall_AllowInvoke_m3391 (Object_t * __this /* static, unused */, Delegate_t336 * ___delegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t296 * V_1 = {0};
	{
		Delegate_t336 * L_0 = ___delegate;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3529(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		Object_t * L_3 = V_0;
		V_1 = ((Object_t296 *)IsInstClass(L_3, Object_t296_il2cpp_TypeInfo_var));
		Object_t296 * L_4 = V_1;
		bool L_5 = Object_ReferenceEquals_m3482(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Object_t296 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_6, (Object_t296 *)NULL, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		return 1;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t137_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t137_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3392 (InvokableCall_t579 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t137_0_0_0_var = il2cpp_codegen_type_from_index(145);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		UnityAction_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3390(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t137 * L_2 = (__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(UnityAction_t137_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t336 * L_6 = NetFxCoreExtensions_CreateDelegate_m3437(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t336 * L_7 = Delegate_Combine_m1802(NULL /*static, unused*/, L_2, ((UnityAction_t137 *)CastclassSealed(L_6, UnityAction_t137_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t137 *)CastclassSealed(L_7, UnityAction_t137_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t137_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3393 (InvokableCall_t579 * __this, UnityAction_t137 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m3389(__this, /*hidden argument*/NULL);
		UnityAction_t137 * L_0 = (__this->___Delegate_0);
		UnityAction_t137 * L_1 = ___action;
		Delegate_t336 * L_2 = Delegate_Combine_m1802(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t137 *)CastclassSealed(L_2, UnityAction_t137_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m3394 (InvokableCall_t579 * __this, ObjectU5BU5D_t15* ___args, const MethodInfo* method)
{
	{
		UnityAction_t137 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3391(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t137 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		UnityAction_Invoke_m1767(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m3395 (InvokableCall_t579 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t137 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3529(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t137 * L_3 = (__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3438(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t577_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m3396 (PersistentCall_t581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t577 * L_0 = (ArgumentCache_t577 *)il2cpp_codegen_object_new (ArgumentCache_t577_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m3379(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t296 * PersistentCall_get_target_m3397 (PersistentCall_t581 * __this, const MethodInfo* method)
{
	{
		Object_t296 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3398 (PersistentCall_t581 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3399 (PersistentCall_t581 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t577 * PersistentCall_get_arguments_m3400 (PersistentCall_t581 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t577 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m3401 (PersistentCall_t581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t296 * L_0 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_0, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3398(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m82(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t640_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t641_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t642_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t643_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3530_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3531_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3532_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3533_MethodInfo_var;
extern "C" BaseInvokableCall_t578 * PersistentCall_GetRuntimeCall_m3402 (PersistentCall_t581 * __this, UnityEventBase_t586 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		CachedInvokableCall_1_t641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		CachedInvokableCall_1_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		CachedInvokableCall_1_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		InvokableCall_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		CachedInvokableCall_1__ctor_m3530_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483965);
		CachedInvokableCall_1__ctor_m3531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483966);
		CachedInvokableCall_1__ctor_m3532_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483967);
		CachedInvokableCall_1__ctor_m3533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483968);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t586 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t578 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t586 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3415(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t578 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t586 * L_7 = ___theEvent;
		Object_t296 * L_8 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t578 * L_10 = (BaseInvokableCall_t578 *)VirtFuncInvoker2< BaseInvokableCall_t578 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t296 * L_11 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t577 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t578 * L_14 = PersistentCall_GetObjectCall_m3403(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t296 * L_15 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t577 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m3383(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t640 * L_19 = (CachedInvokableCall_1_t640 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t640_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3530(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m3530_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t296 * L_20 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t577 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m3382(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t641 * L_24 = (CachedInvokableCall_1_t641 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t641_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3531(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m3531_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t296 * L_25 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t577 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m3384(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t642 * L_29 = (CachedInvokableCall_1_t642 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t642_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3532(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m3532_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t296 * L_30 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t577 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m3385(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t643 * L_34 = (CachedInvokableCall_1_t643 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t643_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3533(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3533_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t296 * L_35 = PersistentCall_get_target_m3397(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t579 * L_37 = (InvokableCall_t579 *)il2cpp_codegen_object_new (InvokableCall_t579_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3392(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t578 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t296_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t645_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t15_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t578_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t578 * PersistentCall_GetObjectCall_m3403 (Object_t * __this /* static, unused */, Object_t296 * ___target, MethodInfo_t * ___method, ArgumentCache_t577 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t296_0_0_0_var = il2cpp_codegen_type_from_index(112);
		CachedInvokableCall_1_t645_0_0_0_var = il2cpp_codegen_type_from_index(397);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(398);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		ObjectU5BU5D_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		BaseInvokableCall_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t644 * V_3 = {0};
	Object_t296 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t296_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t577 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3381(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m82(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t577 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3381(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m3534, L_5, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t296_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t645_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t606* L_11 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0, sizeof(Type_t *))) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t606* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t606* L_15 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t296_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		TypeU5BU5D_t606* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t606* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t644 * L_21 = (ConstructorInfo_t644 *)VirtFuncInvoker1< ConstructorInfo_t644 *, TypeU5BU5D_t606* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t577 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t296 * L_23 = ArgumentCache_get_unityObjectArgument_m3380(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t296 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m1510(NULL /*static, unused*/, L_24, (Object_t296 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t296 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1582(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t296 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t644 * L_30 = V_3;
		ObjectU5BU5D_t15* L_31 = ((ObjectU5BU5D_t15*)SZArrayNew(ObjectU5BU5D_t15_il2cpp_TypeInfo_var, 3));
		Object_t296 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t15* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t15* L_35 = L_33;
		Object_t296 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m3535(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t578 *)IsInstClass(L_37, BaseInvokableCall_t578_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t583_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3536_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3404 (PersistentCallGroup_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		List_1__ctor_m3536_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483969);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		List_1_t583 * L_0 = (List_1_t583 *)il2cpp_codegen_object_new (List_1_t583_il2cpp_TypeInfo_var);
		List_1__ctor_m3536(L_0, /*hidden argument*/List_1__ctor_m3536_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t646_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t311_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3537_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3538_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3539_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3405 (PersistentCallGroup_t582 * __this, InvokableCallList_t584 * ___invokableList, UnityEventBase_t586 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		IDisposable_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		List_1_GetEnumerator_m3537_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483970);
		Enumerator_get_Current_m3538_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		Enumerator_MoveNext_m3539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483972);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t581 * V_0 = {0};
	Enumerator_t646  V_1 = {0};
	BaseInvokableCall_t578 * V_2 = {0};
	Exception_t309 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t309 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t583 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t646  L_1 = List_1_GetEnumerator_m3537(L_0, /*hidden argument*/List_1_GetEnumerator_m3537_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t581 * L_2 = Enumerator_get_Current_m3538((&V_1), /*hidden argument*/Enumerator_get_Current_m3538_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t581 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3401(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t581 * L_5 = V_0;
			UnityEventBase_t586 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t578 * L_7 = PersistentCall_GetRuntimeCall_m3402(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t578 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t584 * L_9 = ___invokableList;
			BaseInvokableCall_t578 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3407(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m3539((&V_1), /*hidden argument*/Enumerator_MoveNext_m3539_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t309 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t646  L_12 = V_1;
		Enumerator_t646  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t646_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t311_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t309 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3540_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3406 (InvokableCallList_t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		List_1__ctor_m3540_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483973);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t585 * L_0 = (List_1_t585 *)il2cpp_codegen_object_new (List_1_t585_il2cpp_TypeInfo_var);
		List_1__ctor_m3540(L_0, /*hidden argument*/List_1__ctor_m3540_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t585 * L_1 = (List_1_t585 *)il2cpp_codegen_object_new (List_1_t585_il2cpp_TypeInfo_var);
		List_1__ctor_m3540(L_1, /*hidden argument*/List_1__ctor_m3540_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t585 * L_2 = (List_1_t585 *)il2cpp_codegen_object_new (List_1_t585_il2cpp_TypeInfo_var);
		List_1__ctor_m3540(L_2, /*hidden argument*/List_1__ctor_m3540_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3407 (InvokableCallList_t584 * __this, BaseInvokableCall_t578 * ___call, const MethodInfo* method)
{
	{
		List_1_t585 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t578 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t578 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3408 (InvokableCallList_t584 * __this, BaseInvokableCall_t578 * ___call, const MethodInfo* method)
{
	{
		List_1_t585 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t578 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t578 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t585_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t647_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3540_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3541_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m3542_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3409 (InvokableCallList_t584 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		Predicate_1_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		List_1__ctor_m3540_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483973);
		Predicate_1__ctor_m3541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483974);
		List_1_RemoveAll_m3542_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t585 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t585 * L_0 = (List_1_t585 *)il2cpp_codegen_object_new (List_1_t585_il2cpp_TypeInfo_var);
		List_1__ctor_m3540(L_0, /*hidden argument*/List_1__ctor_m3540_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t585 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t578 * L_3 = (BaseInvokableCall_t578 *)VirtFuncInvoker1< BaseInvokableCall_t578 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t585 * L_7 = V_0;
		List_1_t585 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t578 * L_10 = (BaseInvokableCall_t578 *)VirtFuncInvoker1< BaseInvokableCall_t578 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t578 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t585 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t585 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t585 * L_16 = V_0;
		List_1_t585 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t647 * L_19 = (Predicate_1_t647 *)il2cpp_codegen_object_new (Predicate_1_t647_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3541(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m3541_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m3542(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m3542_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3410 (InvokableCallList_t584 * __this, const MethodInfo* method)
{
	{
		List_1_t585 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m3543_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3411 (InvokableCallList_t584 * __this, ObjectU5BU5D_t15* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m3543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_NeedsUpdate_3);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t585 * L_1 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_1);
		List_1_t585 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t585 * L_3 = (__this->___m_PersistentCalls_0);
		NullCheck(L_2);
		List_1_AddRange_m3543(L_2, L_3, /*hidden argument*/List_1_AddRange_m3543_MethodInfo_var);
		List_1_t585 * L_4 = (__this->___m_ExecutingCalls_2);
		List_1_t585 * L_5 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		List_1_AddRange_m3543(L_4, L_5, /*hidden argument*/List_1_AddRange_m3543_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 0;
	}

IL_003f:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0046:
	{
		List_1_t585 * L_6 = (__this->___m_ExecutingCalls_2);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BaseInvokableCall_t578 * L_8 = (BaseInvokableCall_t578 *)VirtFuncInvoker1< BaseInvokableCall_t578 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_6, L_7);
		ObjectU5BU5D_t15* L_9 = ___parameters;
		NullCheck(L_8);
		VirtActionInvoker1< ObjectU5BU5D_t15* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		List_1_t585 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t584_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t582_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m3412 (UnityEventBase_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		PersistentCallGroup_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1521(__this, /*hidden argument*/NULL);
		InvokableCallList_t584 * L_0 = (InvokableCallList_t584 *)il2cpp_codegen_object_new (InvokableCallList_t584_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m3406(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t582 * L_1 = (PersistentCallGroup_t582 *)il2cpp_codegen_object_new (PersistentCallGroup_t582_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m3404(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1582(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3413 (UnityEventBase_t586 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3414 (UnityEventBase_t586 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3417(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1582(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t296_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3415 (UnityEventBase_t586 * __this, PersistentCall_t581 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t296_0_0_0_var = il2cpp_codegen_type_from_index(112);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t296_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t581 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t577 * L_2 = PersistentCall_get_arguments_m3400(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3381(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m82(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t581 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t577 * L_6 = PersistentCall_get_arguments_m3400(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3381(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m3534, L_7, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t296_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t581 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3398(L_11, /*hidden argument*/NULL);
		PersistentCall_t581 * L_13 = ___call;
		NullCheck(L_13);
		Object_t296 * L_14 = PersistentCall_get_target_m3397(L_13, /*hidden argument*/NULL);
		PersistentCall_t581 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3399(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3416(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t305_0_0_0_var;
extern const Il2CppType* Int32_t16_0_0_0_var;
extern const Il2CppType* Boolean_t306_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t296_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3416 (UnityEventBase_t586 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t305_0_0_0_var = il2cpp_codegen_type_from_index(79);
		Int32_t16_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Boolean_t306_0_0_0_var = il2cpp_codegen_type_from_index(84);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(2);
		Object_t296_0_0_0_var = il2cpp_codegen_type_from_index(112);
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t606* G_B10_2 = {0};
	TypeU5BU5D_t606* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t606* G_B9_2 = {0};
	TypeU5BU5D_t606* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t606* L_10 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Single_t305_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t606* L_15 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Int32_t16_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t606* L_20 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Boolean_t306_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0, sizeof(Type_t *))) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t606* L_25 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0, sizeof(Type_t *))) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t606* L_30 = ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t296_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1, sizeof(Type_t *))) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3417 (UnityEventBase_t586 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t584 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3410(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3418 (UnityEventBase_t586 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t582 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t584 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3405(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m3419 (UnityEventBase_t586 * __this, BaseInvokableCall_t578 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t584 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t578 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3408(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m3420 (UnityEventBase_t586 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t584 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3409(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m3421 (UnityEventBase_t586 * __this, ObjectU5BU5D_t15* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3418(__this, /*hidden argument*/NULL);
		InvokableCallList_t584 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t15* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3411(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral240;
extern "C" String_t* UnityEventBase_ToString_m3422 (UnityEventBase_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral240 = il2cpp_codegen_string_literal_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m3544(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1582(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m85(NULL /*static, unused*/, L_0, _stringLiteral240, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3423 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t606* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t636* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t637 * V_5 = {0};
	ParameterInfoU5BU5D_t636* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1582(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t606* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t628 *, TypeU5BU5D_t606*, ParameterModifierU5BU5D_t629* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t628 *)NULL, L_4, (ParameterModifierU5BU5D_t629*)(ParameterModifierU5BU5D_t629*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t636* L_8 = (ParameterInfoU5BU5D_t636*)VirtFuncInvoker0< ParameterInfoU5BU5D_t636* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t636* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t636* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t637 **)(ParameterInfo_t637 **)SZArrayLdElema(L_10, L_12, sizeof(ParameterInfo_t637 *)));
		TypeU5BU5D_t606* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15, sizeof(Type_t *)));
		ParameterInfo_t637 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t636* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_26)->max_length)))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1772(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t15_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1651 (UnityEvent_t102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t15*)SZArrayNew(ObjectU5BU5D_t15_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m1749 (UnityEvent_t102 * __this, UnityAction_t137 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t137 * L_0 = ___call;
		BaseInvokableCall_t578 * L_1 = UnityEvent_GetDelegate_m3426(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m3419(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t606_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m3424 (UnityEvent_t102 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3423(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t606*)SZArrayNew(TypeU5BU5D_t606_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t579_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t578 * UnityEvent_GetDelegate_m3425 (UnityEvent_t102 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t579 * L_2 = (InvokableCall_t579 *)il2cpp_codegen_object_new (InvokableCall_t579_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3392(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t579_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t578 * UnityEvent_GetDelegate_m3426 (Object_t * __this /* static, unused */, UnityAction_t137 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t137 * L_0 = ___action;
		InvokableCall_t579 * L_1 = (InvokableCall_t579 *)il2cpp_codegen_object_new (InvokableCall_t579_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3393(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m1654 (UnityEvent_t102 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t15* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3421(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m3427 (DefaultValueAttribute_t587 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3428 (DefaultValueAttribute_t587 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t587_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m3429 (DefaultValueAttribute_t587 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t587 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t587 *)IsInstClass(L_0, DefaultValueAttribute_t587_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t587 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t587 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3428(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t587 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3428(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3430 (DefaultValueAttribute_t587 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3545(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m3431 (ExcludeFromDocsAttribute_t588 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m3432 (FormerlySerializedAsAttribute_t589 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t590_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m3433 (TypeInferenceRuleAttribute_t591 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t590_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m3434(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m3434 (TypeInferenceRuleAttribute_t591 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m3470(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3435 (TypeInferenceRuleAttribute_t591 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m3436 (GenericStack_t498 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m3546(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" Delegate_t336 * NetFxCoreExtensions_CreateDelegate_m3437 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t336 * L_3 = Delegate_CreateDelegate_m3547(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m3438 (Object_t * __this /* static, unused */, Delegate_t336 * ___self, const MethodInfo* method)
{
	{
		Delegate_t336 * L_0 = ___self;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3548(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate__ctor_m3439 (UnityAdsDelegate_t455 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m3440 (UnityAdsDelegate_t455 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m3440((UnityAdsDelegate_t455 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t455(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m3441 (UnityAdsDelegate_t455 * __this, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m3442 (UnityAdsDelegate_t455 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m1748 (UnityAction_t137 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m1767 (UnityAction_t137 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1767((UnityAction_t137 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t137(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m3443 (UnityAction_t137 * __this, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m3444 (UnityAction_t137 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
