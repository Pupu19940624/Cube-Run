﻿#include "il2cpp-config.h"

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
struct Achievement_t572;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t573;
// UnityEngine.Texture2D
struct Texture2D_t176;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t574;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t432;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t578;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t575;
// System.String[]
struct StringU5BU5D_t576;
// UnityEngine.GUILayer
struct GUILayer_t437;
// System.Object
struct Object_t;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t586;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t587;
// UnityEngine.SpaceAttribute
struct SpaceAttribute_t588;
// UnityEngine.RangeAttribute
struct RangeAttribute_t589;
// UnityEngine.TextAreaAttribute
struct TextAreaAttribute_t590;
// UnityEngine.SelectionBaseAttribute
struct SelectionBaseAttribute_t591;
// UnityEngine.SliderState
struct SliderState_t592;
// UnityEngine.StackTraceUtility
struct StackTraceUtility_t593;
// System.Diagnostics.StackTrace
struct StackTrace_t630;
// UnityEngine.UnityException
struct UnityException_t367;
// System.Exception
struct Exception_t39;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t594;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t595;
// UnityEngine.TextEditor
struct TextEditor_t598;
// UnityEngine.TrackedReference
struct TrackedReference_t506;
struct TrackedReference_t506_marshaled;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t601;
// UnityEngine.Object
struct Object_t31;
struct Object_t31_marshaled;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t602;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Delegate
struct Delegate_t362;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t603;
// UnityEngine.Events.UnityAction
struct UnityAction_t174;
// System.Object[]
struct ObjectU5BU5D_t336;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t605;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t610;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t606;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t608;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t629;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t140;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t611;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t612;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t613;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t615;
// UnityEngineInternal.GenericStack
struct GenericStack_t524;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t478;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

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
extern "C" Object_t * Component_GetComponent_TisObject_t_m186_gshared (Component_t45 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m186(__this, method) (( Object_t * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t437_m3535(__this, method) (( GUILayer_t437 * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m3333 (Achievement_t572 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t525  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t525  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t525_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m3334 (Achievement_t572 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t525_il2cpp_TypeInfo_var);
		DateTime_t525  L_2 = ((DateTime_t525_StaticFields*)DateTime_t525_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern Il2CppCodeGenString* _stringLiteral314;
extern "C" void Achievement__ctor_m3335 (Achievement_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral314 = il2cpp_codegen_string_literal_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	{
		Achievement__ctor_m3334(__this, _stringLiteral314, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t336_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t654_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t339_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t525_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral313;
extern "C" String_t* Achievement_ToString_m3336 (Achievement_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Double_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		Boolean_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		DateTime_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral313 = il2cpp_codegen_string_literal_from_index(313);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t336* L_0 = ((ObjectU5BU5D_t336*)SZArrayNew(ObjectU5BU5D_t336_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t336* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t654_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t336* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t339_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t336* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t339_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t336* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_18 = L_17;
		DateTime_t525  L_19 = (DateTime_t525 )VirtFuncInvoker0< DateTime_t525  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t525  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t525_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8, sizeof(Object_t *))) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1763(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3337 (Achievement_t572 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3338 (Achievement_t572 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3339 (Achievement_t572 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3340 (Achievement_t572 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3341 (Achievement_t572 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3342 (Achievement_t572 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t525  Achievement_get_lastReportedDate_m3343 (Achievement_t572 * __this, const MethodInfo* method)
{
	{
		DateTime_t525  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m3344 (AchievementDescription_t573 * __this, String_t* ___id, String_t* ___title, Texture2D_t176 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t176 * L_2 = ___image;
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
extern TypeInfo* ObjectU5BU5D_t336_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral313;
extern "C" String_t* AchievementDescription_ToString_m3345 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Int32_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Boolean_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral313 = il2cpp_codegen_string_literal_from_index(313);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t336* L_0 = ((ObjectU5BU5D_t336*)SZArrayNew(ObjectU5BU5D_t336_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		ObjectU5BU5D_t336* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t336* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t336* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t336* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t338_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t336* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, _stringLiteral313);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)_stringLiteral313;
		ObjectU5BU5D_t336* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t339_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1763(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m3346 (AchievementDescription_t573 * __this, Texture2D_t176 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t176 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3347 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3348 (AchievementDescription_t573 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3349 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3350 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3351 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3352 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3353 (AchievementDescription_t573 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t525_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral175;
extern "C" void Score__ctor_m3354 (Score_t574 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral175 = il2cpp_codegen_string_literal_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t525_il2cpp_TypeInfo_var);
		DateTime_t525  L_2 = DateTime_get_Now_m3518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m3355(__this, L_0, L_1, _stringLiteral175, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3355 (Score_t574 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t525  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t525  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t336_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t655_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t525_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral315;
extern Il2CppCodeGenString* _stringLiteral316;
extern Il2CppCodeGenString* _stringLiteral317;
extern Il2CppCodeGenString* _stringLiteral318;
extern Il2CppCodeGenString* _stringLiteral319;
extern "C" String_t* Score_ToString_m3356 (Score_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Int32_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Int64_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		DateTime_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral315 = il2cpp_codegen_string_literal_from_index(315);
		_stringLiteral316 = il2cpp_codegen_string_literal_from_index(316);
		_stringLiteral317 = il2cpp_codegen_string_literal_from_index(317);
		_stringLiteral318 = il2cpp_codegen_string_literal_from_index(318);
		_stringLiteral319 = il2cpp_codegen_string_literal_from_index(319);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t336* L_0 = ((ObjectU5BU5D_t336*)SZArrayNew(ObjectU5BU5D_t336_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral315);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral315;
		ObjectU5BU5D_t336* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t338_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_4;
		ObjectU5BU5D_t336* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral316);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral316;
		ObjectU5BU5D_t336* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t655_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t336* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral317);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral317;
		ObjectU5BU5D_t336* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t336* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, _stringLiteral318);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral318;
		ObjectU5BU5D_t336* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t336* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, _stringLiteral319);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral319;
		ObjectU5BU5D_t336* L_17 = L_16;
		DateTime_t525  L_18 = (__this->___m_Date_0);
		DateTime_t525  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t525_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1763(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3357 (Score_t574 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3358 (Score_t574 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3359 (Score_t574 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3360 (Score_t574 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t574_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t639_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t576_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral320;
extern "C" void Leaderboard__ctor_m3361 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		ScoreU5BU5D_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		StringU5BU5D_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		_stringLiteral320 = il2cpp_codegen_string_literal_from_index(320);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, _stringLiteral320);
		Range_t577  L_0 = {0};
		Range__ctor_m3383(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t577  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t574 * L_1 = (Score_t574 *)il2cpp_codegen_object_new (Score_t574_il2cpp_TypeInfo_var);
		Score__ctor_m3354(L_1, _stringLiteral320, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t575*)((ScoreU5BU5D_t639*)SZArrayNew(ScoreU5BU5D_t639_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = _stringLiteral320;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t576*)SZArrayNew(StringU5BU5D_t576_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t336_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t339_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t338_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t656_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t584_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t585_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
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
extern "C" String_t* Leaderboard_ToString_m3362 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Boolean_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		Int32_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		UInt32_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		UserScope_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		TimeScope_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
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
		s_Il2CppMethodIntialized = true;
	}
	Range_t577  V_0 = {0};
	Range_t577  V_1 = {0};
	{
		ObjectU5BU5D_t336* L_0 = ((ObjectU5BU5D_t336*)SZArrayNew(ObjectU5BU5D_t336_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral321);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral321;
		ObjectU5BU5D_t336* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1, sizeof(Object_t *))) = (Object_t *)L_2;
		ObjectU5BU5D_t336* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, _stringLiteral322);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral322;
		ObjectU5BU5D_t336* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t336* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, _stringLiteral323);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral323;
		ObjectU5BU5D_t336* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t339_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t336* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, _stringLiteral324);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral324;
		ObjectU5BU5D_t336* L_12 = L_11;
		Range_t577  L_13 = (Range_t577 )VirtFuncInvoker0< Range_t577  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t338_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t336* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, _stringLiteral325);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8, sizeof(Object_t *))) = (Object_t *)_stringLiteral325;
		ObjectU5BU5D_t336* L_18 = L_17;
		Range_t577  L_19 = (Range_t577 )VirtFuncInvoker0< Range_t577  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t338_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_22;
		ObjectU5BU5D_t336* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, _stringLiteral326);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)_stringLiteral326;
		ObjectU5BU5D_t336* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t656_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t336* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, _stringLiteral327);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)_stringLiteral327;
		ObjectU5BU5D_t336* L_29 = L_28;
		IScoreU5BU5D_t575* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)((int32_t)(((Array_t *)L_30)->max_length))));
		Object_t * L_32 = Box(Int32_t338_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t336* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, _stringLiteral328);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)_stringLiteral328;
		ObjectU5BU5D_t336* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t584_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_37;
		ObjectU5BU5D_t336* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, _stringLiteral329);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16), sizeof(Object_t *))) = (Object_t *)_stringLiteral329;
		ObjectU5BU5D_t336* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t585_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17), sizeof(Object_t *))) = (Object_t *)L_42;
		ObjectU5BU5D_t336* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, _stringLiteral330);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18), sizeof(Object_t *))) = (Object_t *)_stringLiteral330;
		ObjectU5BU5D_t336* L_44 = L_43;
		StringU5BU5D_t576* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)((int32_t)(((Array_t *)L_45)->max_length))));
		Object_t * L_47 = Box(Int32_t338_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19), sizeof(Object_t *))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m1763(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m3363 (Leaderboard_t432 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m3364 (Leaderboard_t432 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m3365 (Leaderboard_t432 * __this, IScoreU5BU5D_t575* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t575* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m3366 (Leaderboard_t432 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t576* Leaderboard_GetUserFilter_m3367 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t576* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3368 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3369 (Leaderboard_t432 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3370 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3371 (Leaderboard_t432 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t577  Leaderboard_get_range_m3372 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	{
		Range_t577  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3373 (Leaderboard_t432 * __this, Range_t577  ___value, const MethodInfo* method)
{
	{
		Range_t577  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3374 (Leaderboard_t432 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3375 (Leaderboard_t432 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m3376 (HitInfo_t579 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t36 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m2758(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m3377 (Object_t * __this /* static, unused */, HitInfo_t579  ___lhs, HitInfo_t579  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t36 * L_0 = ((&___lhs)->___target_0);
		GameObject_t36 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m136(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t127 * L_3 = ((&___lhs)->___camera_1);
		Camera_t127 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m136(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
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
extern "C" bool HitInfo_op_Implicit_m3378 (Object_t * __this /* static, unused */, HitInfo_t579  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t36 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m135(NULL /*static, unused*/, L_0, (Object_t31 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t127 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m135(NULL /*static, unused*/, L_2, (Object_t31 *)NULL, /*hidden argument*/NULL);
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
extern TypeInfo* SendMouseEvents_t580_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfoU5BU5D_t581_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t579_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3379 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SendMouseEvents_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		HitInfoU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		HitInfo_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t579  V_0 = {0};
	HitInfo_t579  V_1 = {0};
	HitInfo_t579  V_2 = {0};
	HitInfo_t579  V_3 = {0};
	HitInfo_t579  V_4 = {0};
	HitInfo_t579  V_5 = {0};
	HitInfo_t579  V_6 = {0};
	HitInfo_t579  V_7 = {0};
	HitInfo_t579  V_8 = {0};
	{
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		HitInfoU5BU5D_t581* L_0 = ((HitInfoU5BU5D_t581*)SZArrayNew(HitInfoU5BU5D_t581_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t579  L_1 = V_0;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_0, 0, sizeof(HitInfo_t579 )))) = L_1;
		HitInfoU5BU5D_t581* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t579  L_3 = V_1;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_2, 1, sizeof(HitInfo_t579 )))) = L_3;
		HitInfoU5BU5D_t581* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t579  L_5 = V_2;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_4, 2, sizeof(HitInfo_t579 )))) = L_5;
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4 = L_4;
		HitInfoU5BU5D_t581* L_6 = ((HitInfoU5BU5D_t581*)SZArrayNew(HitInfoU5BU5D_t581_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t579  L_7 = V_3;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_6, 0, sizeof(HitInfo_t579 )))) = L_7;
		HitInfoU5BU5D_t581* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t579  L_9 = V_4;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_8, 1, sizeof(HitInfo_t579 )))) = L_9;
		HitInfoU5BU5D_t581* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t579  L_11 = V_5;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_10, 2, sizeof(HitInfo_t579 )))) = L_11;
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5 = L_10;
		HitInfoU5BU5D_t581* L_12 = ((HitInfoU5BU5D_t581*)SZArrayNew(HitInfoU5BU5D_t581_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t579  L_13 = V_6;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_12, 0, sizeof(HitInfo_t579 )))) = L_13;
		HitInfoU5BU5D_t581* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t579  L_15 = V_7;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_14, 1, sizeof(HitInfo_t579 )))) = L_15;
		HitInfoU5BU5D_t581* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t579  L_17 = V_8;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_16, 2, sizeof(HitInfo_t579 )))) = L_17;
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SetMouseMoved()
extern TypeInfo* SendMouseEvents_t580_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SetMouseMoved_m3380 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SendMouseEvents_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 1;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32)
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t580_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t579_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t32_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t437_m3535_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3381 (Object_t * __this /* static, unused */, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		SendMouseEvents_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		CameraU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		HitInfo_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		Mathf_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Component_GetComponent_TisGUILayer_t437_m3535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483969);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t12  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t127 * V_3 = {0};
	CameraU5BU5D_t582* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t66  V_6 = {0};
	GUILayer_t437 * V_7 = {0};
	GUIElement_t436 * V_8 = {0};
	Ray_t72  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t36 * V_12 = {0};
	GameObject_t36 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t579  V_15 = {0};
	Vector3_t12  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		Vector3_t12  L_0 = Input_get_mousePosition_m165(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m2676(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		CameraU5BU5D_t582* L_2 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		CameraU5BU5D_t582* L_3 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
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
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7 = ((CameraU5BU5D_t582*)SZArrayNew(CameraU5BU5D_t582_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		CameraU5BU5D_t582* L_6 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		Camera_GetAllCameras_m2677(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_7 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t579  L_9 = V_15;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_7, L_8, sizeof(HitInfo_t579 )))) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_12 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		bool L_13 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3;
		if (L_13)
		{
			goto IL_02c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		CameraU5BU5D_t582* L_14 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_7;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b8;
	}

IL_0084:
	{
		CameraU5BU5D_t582* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t127 **)(Camera_t127 **)SZArrayLdElema(L_15, L_17, sizeof(Camera_t127 *)));
		Camera_t127 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m136(NULL /*static, unused*/, L_18, (Object_t31 *)NULL, /*hidden argument*/NULL);
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
		Camera_t127 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t438 * L_22 = Camera_get_targetTexture_m2672(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m135(NULL /*static, unused*/, L_22, (Object_t31 *)NULL, /*hidden argument*/NULL);
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
		Camera_t127 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t66  L_25 = Camera_get_pixelRect_m2670(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t12  L_26 = V_0;
		bool L_27 = Rect_Contains_m1927((&V_6), L_26, /*hidden argument*/NULL);
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
		Camera_t127 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t437 * L_29 = Component_GetComponent_TisGUILayer_t437_m3535(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t437_m3535_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t437 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m291(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0145;
		}
	}
	{
		GUILayer_t437 * L_32 = V_7;
		Vector3_t12  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t436 * L_34 = GUILayer_HitTest_m2447(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t436 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m291(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_37 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t436 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t36 * L_39 = Component_get_gameObject_m157(L_38, /*hidden argument*/NULL);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_37, 0, sizeof(HitInfo_t579 )))->___target_0 = L_39;
		HitInfoU5BU5D_t581* L_40 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t127 * L_41 = V_3;
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_40, 0, sizeof(HitInfo_t579 )))->___camera_1 = L_41;
		goto IL_0145;
	}

IL_0123:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_42 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_42, 0, sizeof(HitInfo_t579 )))->___target_0 = (GameObject_t36 *)NULL;
		HitInfoU5BU5D_t581* L_43 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_43, 0, sizeof(HitInfo_t579 )))->___camera_1 = (Camera_t127 *)NULL;
	}

IL_0145:
	{
		Camera_t127 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m2669(L_44, /*hidden argument*/NULL);
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
		Camera_t127 * L_46 = V_3;
		Vector3_t12  L_47 = V_0;
		NullCheck(L_46);
		Ray_t72  L_48 = Camera_ScreenPointToRay_m1817(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t12  L_49 = Ray_get_direction_m1821((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m1797(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
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
		Camera_t127 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m1818(L_53, /*hidden argument*/NULL);
		Camera_t127 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m1819(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_01a0:
	{
		V_11 = G_B23_0;
		Camera_t127 * L_59 = V_3;
		Ray_t72  L_60 = V_9;
		float L_61 = V_11;
		Camera_t127 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m1833(L_62, /*hidden argument*/NULL);
		Camera_t127 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m2669(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t36 * L_66 = Camera_RaycastTry_m2681(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t36 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m135(NULL /*static, unused*/, L_67, (Object_t31 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01f0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_69 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t36 * L_70 = V_12;
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_69, 1, sizeof(HitInfo_t579 )))->___target_0 = L_70;
		HitInfoU5BU5D_t581* L_71 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t127 * L_72 = V_3;
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_71, 1, sizeof(HitInfo_t579 )))->___camera_1 = L_72;
		goto IL_022a;
	}

IL_01f0:
	{
		Camera_t127 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m2673(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0208;
		}
	}
	{
		Camera_t127 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m2673(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_022a;
		}
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_77 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_77, 1, sizeof(HitInfo_t579 )))->___target_0 = (GameObject_t36 *)NULL;
		HitInfoU5BU5D_t581* L_78 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_78, 1, sizeof(HitInfo_t579 )))->___camera_1 = (Camera_t127 *)NULL;
	}

IL_022a:
	{
		Camera_t127 * L_79 = V_3;
		Ray_t72  L_80 = V_9;
		float L_81 = V_11;
		Camera_t127 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m1833(L_82, /*hidden argument*/NULL);
		Camera_t127 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m2669(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t36 * L_86 = Camera_RaycastTry2D_m2683(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t36 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m135(NULL /*static, unused*/, L_87, (Object_t31 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0278;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_89 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t36 * L_90 = V_13;
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_89, 2, sizeof(HitInfo_t579 )))->___target_0 = L_90;
		HitInfoU5BU5D_t581* L_91 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t127 * L_92 = V_3;
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_91, 2, sizeof(HitInfo_t579 )))->___camera_1 = L_92;
		goto IL_02b2;
	}

IL_0278:
	{
		Camera_t127 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m2673(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_0290;
		}
	}
	{
		Camera_t127 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m2673(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02b2;
		}
	}

IL_0290:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_97 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_97, 2, sizeof(HitInfo_t579 )))->___target_0 = (GameObject_t36 *)NULL;
		HitInfoU5BU5D_t581* L_98 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_98, 2, sizeof(HitInfo_t579 )))->___camera_1 = (Camera_t127 *)NULL;
	}

IL_02b2:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t582* L_101 = V_4;
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
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_103 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3382(NULL /*static, unused*/, L_102, (*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_103, L_104, sizeof(HitInfo_t579 )))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e9:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_107 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_6;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_107)->max_length)))))))
		{
			goto IL_02cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___s_MouseUsed_3 = 0;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t580_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t579_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral331;
extern Il2CppCodeGenString* _stringLiteral332;
extern Il2CppCodeGenString* _stringLiteral333;
extern Il2CppCodeGenString* _stringLiteral334;
extern Il2CppCodeGenString* _stringLiteral335;
extern Il2CppCodeGenString* _stringLiteral336;
extern Il2CppCodeGenString* _stringLiteral337;
extern "C" void SendMouseEvents_SendEvents_m3382 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t579  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		SendMouseEvents_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		HitInfo_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral331 = il2cpp_codegen_string_literal_from_index(331);
		_stringLiteral332 = il2cpp_codegen_string_literal_from_index(332);
		_stringLiteral333 = il2cpp_codegen_string_literal_from_index(333);
		_stringLiteral334 = il2cpp_codegen_string_literal_from_index(334);
		_stringLiteral335 = il2cpp_codegen_string_literal_from_index(335);
		_stringLiteral336 = il2cpp_codegen_string_literal_from_index(336);
		_stringLiteral337 = il2cpp_codegen_string_literal_from_index(337);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t579  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m262(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m263(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t579  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3378(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_5 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t579  L_7 = ___hit;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_5, L_6, sizeof(HitInfo_t579 )))) = L_7;
		HitInfoU5BU5D_t581* L_8 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3376(((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_8, L_9, sizeof(HitInfo_t579 ))), _stringLiteral331, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_11 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3378(NULL /*static, unused*/, (*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_11, L_12, sizeof(HitInfo_t579 )))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t579  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_15 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3377(NULL /*static, unused*/, L_14, (*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_15, L_16, sizeof(HitInfo_t579 )))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_18 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3376(((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_18, L_19, sizeof(HitInfo_t579 ))), _stringLiteral332, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_20 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3376(((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_20, L_21, sizeof(HitInfo_t579 ))), _stringLiteral333, /*hidden argument*/NULL);
		HitInfoU5BU5D_t581* L_22 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t579_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t579  L_24 = V_2;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_22, L_23, sizeof(HitInfo_t579 )))) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_25 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3378(NULL /*static, unused*/, (*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_25, L_26, sizeof(HitInfo_t579 )))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_28 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_5;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3376(((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_28, L_29, sizeof(HitInfo_t579 ))), _stringLiteral334, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t579  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_31 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3377(NULL /*static, unused*/, L_30, (*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_31, L_32, sizeof(HitInfo_t579 )))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t579  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3378(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3376((&___hit), _stringLiteral335, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_36 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3378(NULL /*static, unused*/, (*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_36, L_37, sizeof(HitInfo_t579 )))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_39 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3376(((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_39, L_40, sizeof(HitInfo_t579 ))), _stringLiteral336, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t579  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3378(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3376((&___hit), _stringLiteral337, /*hidden argument*/NULL);
		HitInfo_SendMessage_m3376((&___hit), _stringLiteral335, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t580_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t581* L_43 = ((SendMouseEvents_t580_StaticFields*)SendMouseEvents_t580_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_4;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t579  L_45 = ___hit;
		(*(HitInfo_t579 *)((HitInfo_t579 *)(HitInfo_t579 *)SZArrayLdElema(L_43, L_44, sizeof(HitInfo_t579 )))) = L_45;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m3383 (Range_t577 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
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
extern "C" void PropertyAttribute__ctor_m3384 (PropertyAttribute_t586 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m3385 (TooltipAttribute_t587 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3384(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor()
extern "C" void SpaceAttribute__ctor_m3386 (SpaceAttribute_t588 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3384(__this, /*hidden argument*/NULL);
		__this->___height_0 = (8.0f);
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m3387 (SpaceAttribute_t588 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3384(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m3388 (RangeAttribute_t589 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3384(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m3389 (TextAreaAttribute_t590 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3384(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m3390 (SelectionBaseAttribute_t591 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m3391 (SliderState_t592 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m3392 (StackTraceUtility_t593 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m3393 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t593_StaticFields*)StackTraceUtility_t593_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m3394 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		((StackTraceUtility_t593_StaticFields*)StackTraceUtility_t593_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t630_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3395 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t630 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t630 * L_0 = (StackTrace_t630 *)il2cpp_codegen_object_new (StackTrace_t630_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3536(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t630 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m3400(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m3537(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral338;
extern Il2CppCodeGenString* _stringLiteral339;
extern Il2CppCodeGenString* _stringLiteral340;
extern Il2CppCodeGenString* _stringLiteral341;
extern Il2CppCodeGenString* _stringLiteral342;
extern Il2CppCodeGenString* _stringLiteral343;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3396 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral338 = il2cpp_codegen_string_literal_from_index(338);
		_stringLiteral339 = il2cpp_codegen_string_literal_from_index(339);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		_stringLiteral341 = il2cpp_codegen_string_literal_from_index(341);
		_stringLiteral342 = il2cpp_codegen_string_literal_from_index(342);
		_stringLiteral343 = il2cpp_codegen_string_literal_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3538(L_1, _stringLiteral338, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3538(L_3, _stringLiteral339, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3538(L_5, _stringLiteral340, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3538(L_7, _stringLiteral341, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3538(L_9, _stringLiteral342, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3538(L_11, _stringLiteral343, /*hidden argument*/NULL);
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
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral279;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3397 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral279 = il2cpp_codegen_string_literal_from_index(279);
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
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m3398(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m182(NULL /*static, unused*/, L_3, _stringLiteral279, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t388_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t39_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t334_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t630_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral344;
extern Il2CppCodeGenString* _stringLiteral345;
extern Il2CppCodeGenString* _stringLiteral279;
extern Il2CppCodeGenString* _stringLiteral139;
extern Il2CppCodeGenString* _stringLiteral346;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3398 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		Exception_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		StringBuilder_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTrace_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral344 = il2cpp_codegen_string_literal_from_index(344);
		_stringLiteral345 = il2cpp_codegen_string_literal_from_index(345);
		_stringLiteral279 = il2cpp_codegen_string_literal_from_index(279);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		_stringLiteral346 = il2cpp_codegen_string_literal_from_index(346);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t39 * V_0 = {0};
	StringBuilder_t334 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t630 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t388 * L_1 = (ArgumentException_t388 *)il2cpp_codegen_object_new (ArgumentException_t388_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2237(L_1, _stringLiteral344, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t39 *)IsInstClass(L_2, Exception_t39_il2cpp_TypeInfo_var));
		Exception_t39 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t388 * L_4 = (ArgumentException_t388 *)il2cpp_codegen_object_new (ArgumentException_t388_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2237(L_4, _stringLiteral345, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		Exception_t39 * L_5 = V_0;
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
		Exception_t39 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2061(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t334 * L_10 = (StringBuilder_t334 *)il2cpp_codegen_object_new (StringBuilder_t334_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3539(L_10, G_B7_0, /*hidden argument*/NULL);
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
		int32_t L_15 = String_get_Length_m2061(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t39 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t39 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m182(NULL /*static, unused*/, L_19, _stringLiteral279, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t39 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t39 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t39 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m3540(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m2061(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1946(NULL /*static, unused*/, L_33, _stringLiteral139, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m1946(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t39 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t39 * L_41 = (Exception_t39 *)VirtFuncInvoker0< Exception_t39 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m3541(NULL /*static, unused*/, _stringLiteral346, L_42, _stringLiteral279, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t39 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t39 * L_46 = (Exception_t39 *)VirtFuncInvoker0< Exception_t39 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t39 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t334 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m1946(NULL /*static, unused*/, L_49, _stringLiteral279, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m3542(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t630 * L_51 = (StackTrace_t630 *)il2cpp_codegen_object_new (StackTrace_t630_il2cpp_TypeInfo_var);
		StackTrace__ctor_m3536(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t334 * L_52 = V_1;
		StackTrace_t630 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m3400(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m3542(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t334 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m1733(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t215_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t334_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
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
extern Il2CppCodeGenString* _stringLiteral279;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3399 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		StringBuilder_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
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
		_stringLiteral279 = il2cpp_codegen_string_literal_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t576* V_0 = {0};
	StringBuilder_t334 * V_1 = {0};
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
		CharU5BU5D_t215* L_3 = ((CharU5BU5D_t215*)SZArrayNew(CharU5BU5D_t215_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t576* L_4 = String_Split_m3543(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2061(L_5, /*hidden argument*/NULL);
		StringBuilder_t334 * L_7 = (StringBuilder_t334 *)il2cpp_codegen_object_new (StringBuilder_t334_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3539(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t576* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t576* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m3540((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
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
		StringU5BU5D_t576* L_16 = V_0;
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
		StringU5BU5D_t576* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19, sizeof(String_t*)));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m2061(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m2080(L_22, 0, /*hidden argument*/NULL);
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
		bool L_25 = String_StartsWith_m3538(L_24, _stringLiteral347, /*hidden argument*/NULL);
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
		bool L_28 = String_StartsWith_m3538(L_27, _stringLiteral348, /*hidden argument*/NULL);
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
		StringU5BU5D_t576* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_31)->max_length))))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m3396(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t576* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m3396(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36, sizeof(String_t*))), /*hidden argument*/NULL);
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
		int32_t L_39 = String_IndexOf_m3544(L_38, _stringLiteral349, /*hidden argument*/NULL);
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
		String_t* L_43 = String_Substring_m2081(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3544(L_44, _stringLiteral350, /*hidden argument*/NULL);
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
		int32_t L_47 = String_IndexOf_m3544(L_46, _stringLiteral351, /*hidden argument*/NULL);
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
		int32_t L_49 = String_IndexOf_m3544(L_48, _stringLiteral352, /*hidden argument*/NULL);
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
		bool L_52 = String_StartsWith_m3538(L_51, _stringLiteral353, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m3545(L_53, _stringLiteral354, /*hidden argument*/NULL);
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
		bool L_56 = String_StartsWith_m3538(L_55, _stringLiteral355, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m2104(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3544(L_59, _stringLiteral356, /*hidden argument*/NULL);
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
		int32_t L_64 = String_IndexOf_m3546(L_62, _stringLiteral354, L_63, /*hidden argument*/NULL);
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
		String_t* L_72 = String_Remove_m2104(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3547(L_73, _stringLiteral357, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t593_StaticFields*)StackTraceUtility_t593_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3547(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m3548(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m3549(L_82, _stringLiteral358, /*hidden argument*/NULL);
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
		String_t* L_87 = String_Remove_m2104(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m2106(L_88, L_89, _stringLiteral359, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m2061(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m2106(L_91, L_93, _stringLiteral360, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t334 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m1946(NULL /*static, unused*/, L_96, _stringLiteral279, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m3542(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t576* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_100)->max_length)))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t334 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m1733(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t334_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t593_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral145;
extern Il2CppCodeGenString* _stringLiteral361;
extern Il2CppCodeGenString* _stringLiteral362;
extern Il2CppCodeGenString* _stringLiteral363;
extern Il2CppCodeGenString* _stringLiteral360;
extern Il2CppCodeGenString* _stringLiteral364;
extern Il2CppCodeGenString* _stringLiteral365;
extern Il2CppCodeGenString* _stringLiteral359;
extern Il2CppCodeGenString* _stringLiteral279;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3400 (Object_t * __this /* static, unused */, StackTrace_t630 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StackTraceUtility_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		_stringLiteral361 = il2cpp_codegen_string_literal_from_index(361);
		_stringLiteral362 = il2cpp_codegen_string_literal_from_index(362);
		_stringLiteral363 = il2cpp_codegen_string_literal_from_index(363);
		_stringLiteral360 = il2cpp_codegen_string_literal_from_index(360);
		_stringLiteral364 = il2cpp_codegen_string_literal_from_index(364);
		_stringLiteral365 = il2cpp_codegen_string_literal_from_index(365);
		_stringLiteral359 = il2cpp_codegen_string_literal_from_index(359);
		_stringLiteral279 = il2cpp_codegen_string_literal_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t334 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t657 * V_2 = {0};
	MethodBase_t658 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t659* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t334 * L_0 = (StringBuilder_t334 *)il2cpp_codegen_object_new (StringBuilder_t334_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3539(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t630 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t657 * L_3 = (StackFrame_t657 *)VirtFuncInvoker1< StackFrame_t657 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t657 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t658 * L_5 = (MethodBase_t658 *)VirtFuncInvoker0< MethodBase_t658 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t658 * L_6 = V_3;
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
		MethodBase_t658 * L_7 = V_3;
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
		int32_t L_14 = String_get_Length_m2061(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t334 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3542(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t334 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3542(L_17, _stringLiteral145, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t334 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3542(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t334 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3542(L_21, _stringLiteral361, /*hidden argument*/NULL);
		StringBuilder_t334 * L_22 = V_0;
		MethodBase_t658 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3542(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t334 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3542(L_25, _stringLiteral362, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t658 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t659* L_27 = (ParameterInfoU5BU5D_t659*)VirtFuncInvoker0< ParameterInfoU5BU5D_t659* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
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
		StringBuilder_t334 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3542(L_29, _stringLiteral363, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t334 * L_30 = V_0;
		ParameterInfoU5BU5D_t659* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t660 **)(ParameterInfo_t660 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t660 *))));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t660 **)(ParameterInfo_t660 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t660 *))));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3542(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t659* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_38)->max_length)))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t334 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3542(L_39, _stringLiteral360, /*hidden argument*/NULL);
		StackFrame_t657 * L_40 = V_2;
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
		bool L_45 = String_op_Equality_m134(NULL /*static, unused*/, L_44, _stringLiteral364, /*hidden argument*/NULL);
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
		bool L_48 = String_op_Equality_m134(NULL /*static, unused*/, L_47, _stringLiteral365, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t334 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3542(L_49, _stringLiteral359, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t593_StaticFields*)StackTraceUtility_t593_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3538(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t593_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t593_StaticFields*)StackTraceUtility_t593_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m2061(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m2061(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t593_StaticFields*)StackTraceUtility_t593_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m2061(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m2081(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t334 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3542(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t334 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3542(L_63, _stringLiteral361, /*hidden argument*/NULL);
		StringBuilder_t334 * L_64 = V_0;
		StackFrame_t657 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m3550((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m3542(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t334 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3542(L_68, _stringLiteral360, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t334 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3542(L_69, _stringLiteral279, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t630 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t334 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m1733(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Void UnityEngine.UnityException::.ctor()
extern Il2CppCodeGenString* _stringLiteral366;
extern "C" void UnityException__ctor_m3401 (UnityException_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral366 = il2cpp_codegen_string_literal_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m164(__this, _stringLiteral366, /*hidden argument*/NULL);
		Exception_set_HResult_m3551(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m3402 (UnityException_t367 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m164(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3551(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m3403 (UnityException_t367 * __this, String_t* ___message, Exception_t39 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t39 * L_1 = ___innerException;
		Exception__ctor_m3552(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m3551(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m3404 (UnityException_t367 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t631 * L_0 = ___info;
		StreamingContext_t632  L_1 = ___context;
		Exception__ctor_m3553(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m3405 (SharedBetweenAnimatorsAttribute_t594 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m3406 (StateMachineBehaviour_t595 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2337(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t526_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t532_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m3407 (TextEditor_t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		GUIStyle_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t526 * L_0 = (GUIContent_t526 *)il2cpp_codegen_object_new (GUIContent_t526_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3108(L_0, /*hidden argument*/NULL);
		__this->___content_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t532_il2cpp_TypeInfo_var);
		GUIStyle_t532 * L_1 = GUIStyle_get_none_m3252(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_3 = L_1;
		Vector2_t23  L_2 = Vector2_get_zero_m1761(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_8 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Mathf_t32_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m3408 (TextGenerationSettings_t329 * __this, Color_t134  ___left, Color_t134  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___left)->___r_0);
		float L_1 = ((&___right)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = ((&___left)->___g_1);
		float L_4 = ((&___right)->___g_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = ((&___left)->___b_2);
		float L_7 = ((&___right)->___b_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9 = ((&___left)->___a_3);
		float L_10 = ((&___right)->___a_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_11 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
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
extern TypeInfo* Mathf_t32_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m3409 (TextGenerationSettings_t329 * __this, Vector2_t23  ___left, Vector2_t23  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
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
extern TypeInfo* Mathf_t32_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m3410 (TextGenerationSettings_t329 * __this, TextGenerationSettings_t329  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t134  L_0 = (__this->___color_1);
		Color_t134  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m3408(__this, L_0, L_1, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m1797(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
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
		Vector2_t23  L_35 = (__this->___generationExtents_14);
		Vector2_t23  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m3409(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t23  L_38 = (__this->___pivot_15);
		Vector2_t23  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m3409(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t167 * L_41 = (__this->___font_0);
		Font_t167 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m136(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
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
extern TypeInfo* TrackedReference_t506_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m3411 (TrackedReference_t506 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m3413(NULL /*static, unused*/, ((TrackedReference_t506 *)IsInstClass(L_0, TrackedReference_t506_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3412 (TrackedReference_t506 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m3554(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m3413 (Object_t * __this /* static, unused */, TrackedReference_t506 * ___x, TrackedReference_t506 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(312);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t506 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t506 * L_1 = ___y;
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
		TrackedReference_t506 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m3555(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
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
		TrackedReference_t506 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m3555(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t506 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t506 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m3555(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t506_marshal(const TrackedReference_t506& unmarshaled, TrackedReference_t506_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void TrackedReference_t506_marshal_back(const TrackedReference_t506_marshaled& marshaled, TrackedReference_t506& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t506_marshal_cleanup(TrackedReference_t506_marshaled& marshaled)
{
}
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m3414 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t31 * ArgumentCache_get_unityObjectArgument_m3415 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		Object_t31 * L_0 = (__this->___m_ObjectArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3416 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m3417 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_5);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m3418 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_6);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m3419 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m3420 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_8);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t661_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral367;
extern Il2CppCodeGenString* _stringLiteral368;
extern Il2CppCodeGenString* _stringLiteral369;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m3421 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Regex_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		_stringLiteral367 = il2cpp_codegen_string_literal_from_index(367);
		_stringLiteral368 = il2cpp_codegen_string_literal_from_index(368);
		_stringLiteral369 = il2cpp_codegen_string_literal_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2110(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t661_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m3556(NULL /*static, unused*/, L_2, _stringLiteral367, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m3556(NULL /*static, unused*/, L_5, _stringLiteral368, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m3556(NULL /*static, unused*/, L_8, _stringLiteral369, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m3422 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m3423 (ArgumentCache_t601 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m3424 (BaseInvokableCall_t602 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t33_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral370;
extern Il2CppCodeGenString* _stringLiteral371;
extern "C" void BaseInvokableCall__ctor_m3425 (BaseInvokableCall_t602 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		_stringLiteral370 = il2cpp_codegen_string_literal_from_index(370);
		_stringLiteral371 = il2cpp_codegen_string_literal_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t33 * L_1 = (ArgumentNullException_t33 *)il2cpp_codegen_object_new (ArgumentNullException_t33_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m141(L_1, _stringLiteral370, /*hidden argument*/NULL);
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
		ArgumentNullException_t33 * L_3 = (ArgumentNullException_t33 *)il2cpp_codegen_object_new (ArgumentNullException_t33_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m141(L_3, _stringLiteral371, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern TypeInfo* Object_t31_il2cpp_TypeInfo_var;
extern "C" bool BaseInvokableCall_AllowInvoke_m3426 (Object_t * __this /* static, unused */, Delegate_t362 * ___delegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t31 * V_1 = {0};
	{
		Delegate_t362 * L_0 = ___delegate;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3557(L_0, /*hidden argument*/NULL);
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
		V_1 = ((Object_t31 *)IsInstClass(L_3, Object_t31_il2cpp_TypeInfo_var));
		Object_t31 * L_4 = V_1;
		bool L_5 = Object_ReferenceEquals_m3517(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Object_t31 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m135(NULL /*static, unused*/, L_6, (Object_t31 *)NULL, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		return 1;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t174_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t174_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3427 (InvokableCall_t603 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t174_0_0_0_var = il2cpp_codegen_type_from_index(154);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UnityAction_t174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3425(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t174 * L_2 = (__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(UnityAction_t174_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t362 * L_6 = NetFxCoreExtensions_CreateDelegate_m3472(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t362 * L_7 = Delegate_Combine_m1995(NULL /*static, unused*/, L_2, ((UnityAction_t174 *)CastclassSealed(L_6, UnityAction_t174_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t174 *)CastclassSealed(L_7, UnityAction_t174_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t174_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m3428 (InvokableCall_t603 * __this, UnityAction_t174 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m3424(__this, /*hidden argument*/NULL);
		UnityAction_t174 * L_0 = (__this->___Delegate_0);
		UnityAction_t174 * L_1 = ___action;
		Delegate_t362 * L_2 = Delegate_Combine_m1995(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t174 *)CastclassSealed(L_2, UnityAction_t174_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m3429 (InvokableCall_t603 * __this, ObjectU5BU5D_t336* ___args, const MethodInfo* method)
{
	{
		UnityAction_t174 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3426(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t174 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		UnityAction_Invoke_m1961(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m3430 (InvokableCall_t603 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t174 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3557(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t174 * L_3 = (__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3473(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
extern TypeInfo* ArgumentCache_t601_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m3431 (PersistentCall_t605 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t601 * L_0 = (ArgumentCache_t601 *)il2cpp_codegen_object_new (ArgumentCache_t601_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m3414(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t31 * PersistentCall_get_target_m3432 (PersistentCall_t605 * __this, const MethodInfo* method)
{
	{
		Object_t31 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3433 (PersistentCall_t605 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3434 (PersistentCall_t605 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t601 * PersistentCall_get_arguments_m3435 (PersistentCall_t605 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t601 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m3436 (PersistentCall_t605 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t31 * L_0 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m135(NULL /*static, unused*/, L_0, (Object_t31 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3433(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2110(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
extern TypeInfo* CachedInvokableCall_1_t662_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t663_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t664_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t665_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t603_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3558_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3559_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3560_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m3561_MethodInfo_var;
extern "C" BaseInvokableCall_t602 * PersistentCall_GetRuntimeCall_m3437 (PersistentCall_t605 * __this, UnityEventBase_t610 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		CachedInvokableCall_1_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		CachedInvokableCall_1_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		CachedInvokableCall_1_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		InvokableCall_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		CachedInvokableCall_1__ctor_m3558_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483970);
		CachedInvokableCall_1__ctor_m3559_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		CachedInvokableCall_1__ctor_m3560_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483972);
		CachedInvokableCall_1__ctor_m3561_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483973);
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
		UnityEventBase_t610 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t602 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t610 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3450(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t602 *)NULL;
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
		UnityEventBase_t610 * L_7 = ___theEvent;
		Object_t31 * L_8 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t602 * L_10 = (BaseInvokableCall_t602 *)VirtFuncInvoker2< BaseInvokableCall_t602 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t31 * L_11 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t601 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t602 * L_14 = PersistentCall_GetObjectCall_m3438(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t31 * L_15 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t601 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m3418(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t662 * L_19 = (CachedInvokableCall_1_t662 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t662_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3558(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m3558_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t31 * L_20 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t601 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m3417(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t663 * L_24 = (CachedInvokableCall_1_t663 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t663_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3559(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m3559_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t31 * L_25 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t601 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m3419(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t664 * L_29 = (CachedInvokableCall_1_t664 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t664_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3560(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m3560_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t31 * L_30 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t601 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m3420(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t665 * L_34 = (CachedInvokableCall_1_t665 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t665_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3561(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3561_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t31 * L_35 = PersistentCall_get_target_m3432(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t603 * L_37 = (InvokableCall_t603 *)il2cpp_codegen_object_new (InvokableCall_t603_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3427(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t602 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t31_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t667_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t629_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t336_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t602_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t602 * PersistentCall_GetObjectCall_m3438 (Object_t * __this /* static, unused */, Object_t31 * ___target, MethodInfo_t * ___method, ArgumentCache_t601 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t31_0_0_0_var = il2cpp_codegen_type_from_index(124);
		CachedInvokableCall_1_t667_0_0_0_var = il2cpp_codegen_type_from_index(398);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(399);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TypeU5BU5D_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		ObjectU5BU5D_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		BaseInvokableCall_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t666 * V_3 = {0};
	Object_t31 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t31_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t601 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3416(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2110(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t601 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3416(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m3562, L_5, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
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
		Type_t * L_8 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t31_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t667_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t629* L_11 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0, sizeof(Type_t *))) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t629* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t629* L_15 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t31_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		TypeU5BU5D_t629* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t629* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t666 * L_21 = (ConstructorInfo_t666 *)VirtFuncInvoker1< ConstructorInfo_t666 *, TypeU5BU5D_t629* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t601 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t31 * L_23 = ArgumentCache_get_unityObjectArgument_m3415(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t31 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m135(NULL /*static, unused*/, L_24, (Object_t31 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t31 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1788(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t31 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t666 * L_30 = V_3;
		ObjectU5BU5D_t336* L_31 = ((ObjectU5BU5D_t336*)SZArrayNew(ObjectU5BU5D_t336_il2cpp_TypeInfo_var, 3));
		Object_t31 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t336* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t336* L_35 = L_33;
		Object_t31 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m3563(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t602 *)IsInstClass(L_37, BaseInvokableCall_t602_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t607_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3564_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3439 (PersistentCallGroup_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		List_1__ctor_m3564_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483974);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		List_1_t607 * L_0 = (List_1_t607 *)il2cpp_codegen_object_new (List_1_t607_il2cpp_TypeInfo_var);
		List_1__ctor_m3564(L_0, /*hidden argument*/List_1__ctor_m3564_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t668_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t41_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3565_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3566_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3567_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3440 (PersistentCallGroup_t606 * __this, InvokableCallList_t608 * ___invokableList, UnityEventBase_t610 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IDisposable_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		List_1_GetEnumerator_m3565_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		Enumerator_get_Current_m3566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		Enumerator_MoveNext_m3567_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t605 * V_0 = {0};
	Enumerator_t668  V_1 = {0};
	BaseInvokableCall_t602 * V_2 = {0};
	Exception_t39 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t39 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t607 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t668  L_1 = List_1_GetEnumerator_m3565(L_0, /*hidden argument*/List_1_GetEnumerator_m3565_MethodInfo_var);
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
			PersistentCall_t605 * L_2 = Enumerator_get_Current_m3566((&V_1), /*hidden argument*/Enumerator_get_Current_m3566_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t605 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3436(L_3, /*hidden argument*/NULL);
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
			PersistentCall_t605 * L_5 = V_0;
			UnityEventBase_t610 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t602 * L_7 = PersistentCall_GetRuntimeCall_m3437(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t602 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t608 * L_9 = ___invokableList;
			BaseInvokableCall_t602 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3442(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m3567((&V_1), /*hidden argument*/Enumerator_MoveNext_m3567_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t39 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t668  L_12 = V_1;
		Enumerator_t668  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t668_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t41_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t39 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3568_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3441 (InvokableCallList_t608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		List_1__ctor_m3568_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t609 * L_0 = (List_1_t609 *)il2cpp_codegen_object_new (List_1_t609_il2cpp_TypeInfo_var);
		List_1__ctor_m3568(L_0, /*hidden argument*/List_1__ctor_m3568_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t609 * L_1 = (List_1_t609 *)il2cpp_codegen_object_new (List_1_t609_il2cpp_TypeInfo_var);
		List_1__ctor_m3568(L_1, /*hidden argument*/List_1__ctor_m3568_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t609 * L_2 = (List_1_t609 *)il2cpp_codegen_object_new (List_1_t609_il2cpp_TypeInfo_var);
		List_1__ctor_m3568(L_2, /*hidden argument*/List_1__ctor_m3568_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3442 (InvokableCallList_t608 * __this, BaseInvokableCall_t602 * ___call, const MethodInfo* method)
{
	{
		List_1_t609 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t602 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t602 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3443 (InvokableCallList_t608 * __this, BaseInvokableCall_t602 * ___call, const MethodInfo* method)
{
	{
		List_1_t609 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t602 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t602 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t609_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t669_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3568_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3569_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m3570_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3444 (InvokableCallList_t608 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		Predicate_1_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		List_1__ctor_m3568_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		Predicate_1__ctor_m3569_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		List_1_RemoveAll_m3570_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483980);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t609 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t609 * L_0 = (List_1_t609 *)il2cpp_codegen_object_new (List_1_t609_il2cpp_TypeInfo_var);
		List_1__ctor_m3568(L_0, /*hidden argument*/List_1__ctor_m3568_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t609 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t602 * L_3 = (BaseInvokableCall_t602 *)VirtFuncInvoker1< BaseInvokableCall_t602 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
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
		List_1_t609 * L_7 = V_0;
		List_1_t609 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t602 * L_10 = (BaseInvokableCall_t602 *)VirtFuncInvoker1< BaseInvokableCall_t602 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t602 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t609 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t609 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t609 * L_16 = V_0;
		List_1_t609 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t669 * L_19 = (Predicate_1_t669 *)il2cpp_codegen_object_new (Predicate_1_t669_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3569(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m3569_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m3570(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m3570_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3445 (InvokableCallList_t608 * __this, const MethodInfo* method)
{
	{
		List_1_t609 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m3571_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3446 (InvokableCallList_t608 * __this, ObjectU5BU5D_t336* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m3571_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
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
		List_1_t609 * L_1 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_1);
		List_1_t609 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t609 * L_3 = (__this->___m_PersistentCalls_0);
		NullCheck(L_2);
		List_1_AddRange_m3571(L_2, L_3, /*hidden argument*/List_1_AddRange_m3571_MethodInfo_var);
		List_1_t609 * L_4 = (__this->___m_ExecutingCalls_2);
		List_1_t609 * L_5 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		List_1_AddRange_m3571(L_4, L_5, /*hidden argument*/List_1_AddRange_m3571_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 0;
	}

IL_003f:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0046:
	{
		List_1_t609 * L_6 = (__this->___m_ExecutingCalls_2);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BaseInvokableCall_t602 * L_8 = (BaseInvokableCall_t602 *)VirtFuncInvoker1< BaseInvokableCall_t602 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_6, L_7);
		ObjectU5BU5D_t336* L_9 = ___parameters;
		NullCheck(L_8);
		VirtActionInvoker1< ObjectU5BU5D_t336* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		List_1_t609 * L_12 = (__this->___m_ExecutingCalls_2);
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
extern TypeInfo* InvokableCallList_t608_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t606_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m3447 (UnityEventBase_t610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		PersistentCallGroup_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		InvokableCallList_t608 * L_0 = (InvokableCallList_t608 *)il2cpp_codegen_object_new (InvokableCallList_t608_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m3441(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t606 * L_1 = (PersistentCallGroup_t606 *)il2cpp_codegen_object_new (PersistentCallGroup_t606_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m3439(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1788(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3448 (UnityEventBase_t610 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3449 (UnityEventBase_t610 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3452(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1788(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t31_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3450 (UnityEventBase_t610 * __this, PersistentCall_t605 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t31_0_0_0_var = il2cpp_codegen_type_from_index(124);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t31_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t605 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t601 * L_2 = PersistentCall_get_arguments_m3435(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3416(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2110(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t605 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t601 * L_6 = PersistentCall_get_arguments_m3435(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3416(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m3562, L_7, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
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
		Type_t * L_10 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t31_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t605 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3433(L_11, /*hidden argument*/NULL);
		PersistentCall_t605 * L_13 = ___call;
		NullCheck(L_13);
		Object_t31 * L_14 = PersistentCall_get_target_m3432(L_13, /*hidden argument*/NULL);
		PersistentCall_t605 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3434(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3451(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t337_0_0_0_var;
extern const Il2CppType* Int32_t338_0_0_0_var;
extern const Il2CppType* Boolean_t339_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t31_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t629_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3451 (UnityEventBase_t610 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t337_0_0_0_var = il2cpp_codegen_type_from_index(95);
		Int32_t338_0_0_0_var = il2cpp_codegen_type_from_index(96);
		Boolean_t339_0_0_0_var = il2cpp_codegen_type_from_index(100);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Object_t31_0_0_0_var = il2cpp_codegen_type_from_index(124);
		TypeU5BU5D_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t629* G_B10_2 = {0};
	TypeU5BU5D_t629* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t629* G_B9_2 = {0};
	TypeU5BU5D_t629* G_B9_3 = {0};
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
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t629* L_10 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Single_t337_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t629* L_15 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Int32_t338_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t629* L_20 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Boolean_t339_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0, sizeof(Type_t *))) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t629* L_25 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0, sizeof(Type_t *))) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t629* L_30 = ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 1));
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
		Type_t * L_33 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t31_0_0_0_var), /*hidden argument*/NULL);
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
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3452 (UnityEventBase_t610 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t608 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3445(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3453 (UnityEventBase_t610 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t606 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t608 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3440(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m3454 (UnityEventBase_t610 * __this, BaseInvokableCall_t602 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t608 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t602 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3443(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m3455 (UnityEventBase_t610 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t608 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3444(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m3456 (UnityEventBase_t610 * __this, ObjectU5BU5D_t336* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3453(__this, /*hidden argument*/NULL);
		InvokableCallList_t608 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t336* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3446(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral266;
extern "C" String_t* UnityEventBase_ToString_m3457 (UnityEventBase_t610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral266 = il2cpp_codegen_string_literal_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m3572(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1788(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m182(NULL /*static, unused*/, L_0, _stringLiteral266, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3458 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t629* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t659* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t660 * V_5 = {0};
	ParameterInfoU5BU5D_t659* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1788(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t629* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t651 *, TypeU5BU5D_t629*, ParameterModifierU5BU5D_t652* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t651 *)NULL, L_4, (ParameterModifierU5BU5D_t652*)(ParameterModifierU5BU5D_t652*)NULL);
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
		ParameterInfoU5BU5D_t659* L_8 = (ParameterInfoU5BU5D_t659*)VirtFuncInvoker0< ParameterInfoU5BU5D_t659* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t659* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t659* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t660 **)(ParameterInfo_t660 **)SZArrayLdElema(L_10, L_12, sizeof(ParameterInfo_t660 *)));
		TypeU5BU5D_t629* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15, sizeof(Type_t *)));
		ParameterInfo_t660 * L_16 = V_5;
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
		ParameterInfoU5BU5D_t659* L_26 = V_6;
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
		Type_t * L_32 = Type_GetTypeFromHandle_m132(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
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
extern TypeInfo* ObjectU5BU5D_t336_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1848 (UnityEvent_t140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t336*)SZArrayNew(ObjectU5BU5D_t336_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3447(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m1942 (UnityEvent_t140 * __this, UnityAction_t174 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t174 * L_0 = ___call;
		BaseInvokableCall_t602 * L_1 = UnityEvent_GetDelegate_m3461(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m3454(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t629_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m3459 (UnityEvent_t140 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3458(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t629*)SZArrayNew(TypeU5BU5D_t629_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t603_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t602 * UnityEvent_GetDelegate_m3460 (UnityEvent_t140 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t603 * L_2 = (InvokableCall_t603 *)il2cpp_codegen_object_new (InvokableCall_t603_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3427(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t603_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t602 * UnityEvent_GetDelegate_m3461 (Object_t * __this /* static, unused */, UnityAction_t174 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t174 * L_0 = ___action;
		InvokableCall_t603 * L_1 = (InvokableCall_t603 *)il2cpp_codegen_object_new (InvokableCall_t603_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m3428(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m1850 (UnityEvent_t140 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t336* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3456(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m3462 (DefaultValueAttribute_t611 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3463 (DefaultValueAttribute_t611 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t611_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m3464 (DefaultValueAttribute_t611 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t611 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t611 *)IsInstClass(L_0, DefaultValueAttribute_t611_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t611 * L_1 = V_0;
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
		DefaultValueAttribute_t611 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3463(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t611 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3463(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3465 (DefaultValueAttribute_t611 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3573(__this, /*hidden argument*/NULL);
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
extern "C" void ExcludeFromDocsAttribute__ctor_m3466 (ExcludeFromDocsAttribute_t612 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m3467 (FormerlySerializedAsAttribute_t613 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t614_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m3468 (TypeInferenceRuleAttribute_t615 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t614_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m3469(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m3469 (TypeInferenceRuleAttribute_t615 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m3505(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3470 (TypeInferenceRuleAttribute_t615 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m3471 (GenericStack_t524 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m3574(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" Delegate_t362 * NetFxCoreExtensions_CreateDelegate_m3472 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t362 * L_3 = Delegate_CreateDelegate_m3575(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m3473 (Object_t * __this /* static, unused */, Delegate_t362 * ___self, const MethodInfo* method)
{
	{
		Delegate_t362 * L_0 = ___self;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3576(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate__ctor_m3474 (UnityAdsDelegate_t478 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m3475 (UnityAdsDelegate_t478 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m3475((UnityAdsDelegate_t478 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t478(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m3476 (UnityAdsDelegate_t478 * __this, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m3477 (UnityAdsDelegate_t478 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m1941 (UnityAction_t174 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m1961 (UnityAction_t174 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1961((UnityAction_t174 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAction_t174(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m3478 (UnityAction_t174 * __this, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m3479 (UnityAction_t174 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
