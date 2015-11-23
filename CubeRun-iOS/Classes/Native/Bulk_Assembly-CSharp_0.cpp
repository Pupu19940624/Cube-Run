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

// CharacterMovement
struct CharacterMovement_t47;
// UnityEngine.Animator
struct Animator_t49;
// System.Object
struct Object_t;
// UnityEngine.CharacterController
struct CharacterController_t48;
// TrailCollider
struct TrailCollider_t50;
// UnityEngine.Collider
struct Collider_t64;
// CameraController.CameraController
struct CameraController_t52;
// System.String
struct String_t;
// FaceUpdate
struct FaceUpdate_t53;
// IdleChanger/<RandomChange>c__Iterator0
struct U3CRandomChangeU3Ec__Iterator0_t55;
// IdleChanger
struct IdleChanger_t56;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// SceneLoader
struct SceneLoader_t58;
// ThirdPersonCamera
struct ThirdPersonCamera_t59;
// UnityChanControlScriptWithRgidBody
struct UnityChanControlScriptWithRgidBody_t60;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t61;
// UnityEngine.Rigidbody
struct Rigidbody_t62;
// prefabscript
struct prefabscript_t63;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_CharacterMovement.h"
#include "AssemblyU2DCSharp_CharacterMovementMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Animator.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_CharacterController.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DCSharp_TrailCollider.h"
#include "AssemblyU2DCSharp_TrailColliderMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController_MouseButtonDown.h"
#include "AssemblyU2DCSharp_CameraController_MouseButtonDownMethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController_CameraController.h"
#include "AssemblyU2DCSharp_CameraController_CameraControllerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "AssemblyU2DCSharp_FaceUpdate.h"
#include "AssemblyU2DCSharp_FaceUpdateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimationClip.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "AssemblyU2DCSharp_IdleChanger_U3CRandomChangeU3Ec__Iterator0.h"
#include "AssemblyU2DCSharp_IdleChanger_U3CRandomChangeU3Ec__Iterator0MethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "AssemblyU2DCSharp_IdleChanger.h"
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "AssemblyU2DCSharp_IdleChangerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
#include "UnityEngine_UnityEngine_Coroutine.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
#include "AssemblyU2DCSharp_SceneLoader.h"
#include "AssemblyU2DCSharp_SceneLoaderMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "AssemblyU2DCSharp_ThirdPersonCamera.h"
#include "AssemblyU2DCSharp_ThirdPersonCameraMethodDeclarations.h"
#include "AssemblyU2DCSharp_UnityChanControlScriptWithRgidBody.h"
#include "AssemblyU2DCSharp_UnityChanControlScriptWithRgidBodyMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CapsuleColliderMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CapsuleCollider.h"
#include "UnityEngine_UnityEngine_Rigidbody.h"
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_ForceMode.h"
#include "AssemblyU2DCSharp_prefabscript.h"
#include "AssemblyU2DCSharp_prefabscriptMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m186_gshared (Component_t45 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m186(__this, method) (( Object_t * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t49_m240(__this, method) (( Animator_t49 * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t48_m241(__this, method) (( CharacterController_t48 * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
#define Component_GetComponent_TisCapsuleCollider_t61_m296(__this, method) (( CapsuleCollider_t61 * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t62_m297(__this, method) (( Rigidbody_t62 * (*) (Component_t45 *, const MethodInfo*))Component_GetComponent_TisObject_t_m186_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterMovement::.ctor()
extern "C" void CharacterMovement__ctor_m187 (CharacterMovement_t47 * __this, const MethodInfo* method)
{
	{
		__this->___movementSpeed_2 = (4.0f);
		__this->___jumpSpeed_3 = (6.0f);
		__this->___maxSpeed_6 = (1.0f);
		__this->___trailInterval_11 = (0.3f);
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterMovement::Start()
extern TypeInfo* CharacterMovement_t47_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCharacterController_t48_m241_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral8;
extern "C" void CharacterMovement_Start_m188 (CharacterMovement_t47 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterMovement_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Component_GetComponent_TisCharacterController_t48_m241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t49 * L_0 = Component_GetComponent_TisAnimator_t49_m240(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var);
		((CharacterMovement_t47_StaticFields*)CharacterMovement_t47_il2cpp_TypeInfo_var->static_fields)->___animator_4 = L_0;
		Vector3_t12  L_1 = Vector3_get_zero_m146(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___moveToward_8 = L_1;
		CharacterController_t48 * L_2 = Component_GetComponent_TisCharacterController_t48_m241(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t48_m241_MethodInfo_var);
		__this->___characterController_9 = L_2;
		float L_3 = (__this->___trailInterval_11);
		MonoBehaviour_InvokeRepeating_m242(__this, _stringLiteral8, (0.0f), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterMovement::Update()
extern TypeInfo* CrossPlatformInputManager_t7_il2cpp_TypeInfo_var;
extern TypeInfo* CharacterMovement_t47_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern "C" void CharacterMovement_Update_m189 (CharacterMovement_t47 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossPlatformInputManager_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CharacterMovement_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Animator_t49 * G_B12_0 = {0};
	Animator_t49 * G_B11_0 = {0};
	String_t* G_B13_0 = {0};
	Animator_t49 * G_B13_1 = {0};
	{
		CharacterController_t48 * L_0 = (__this->___characterController_9);
		NullCheck(L_0);
		bool L_1 = CharacterController_get_isGrounded_m243(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0118;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t7_il2cpp_TypeInfo_var);
		float L_2 = CrossPlatformInputManager_GetAxis_m45(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t7_il2cpp_TypeInfo_var);
		float L_3 = CrossPlatformInputManager_GetAxis_m45(NULL /*static, unused*/, _stringLiteral2, /*hidden argument*/NULL);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_005d;
		}
	}

IL_0038:
	{
		__this->___speed_5 = (1.0f);
		Animator_t49 * L_4 = ((CharacterMovement_t47_StaticFields*)CharacterMovement_t47_il2cpp_TypeInfo_var->static_fields)->___animator_4;
		float L_5 = (__this->___speed_5);
		NullCheck(L_4);
		Animator_SetFloat_m244(L_4, _stringLiteral9, L_5, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_005d:
	{
		__this->___speed_5 = (0.0f);
		Animator_t49 * L_6 = ((CharacterMovement_t47_StaticFields*)CharacterMovement_t47_il2cpp_TypeInfo_var->static_fields)->___animator_4;
		float L_7 = (__this->___speed_5);
		NullCheck(L_6);
		Animator_SetFloat_m244(L_6, _stringLiteral9, L_7, /*hidden argument*/NULL);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t7_il2cpp_TypeInfo_var);
		float L_8 = CrossPlatformInputManager_GetAxis_m45(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		Vector3_t12 * L_9 = &(__this->___moveToward_8);
		float L_10 = (L_9->___y_2);
		float L_11 = CrossPlatformInputManager_GetAxis_m45(NULL /*static, unused*/, _stringLiteral2, /*hidden argument*/NULL);
		Vector3_t12  L_12 = {0};
		Vector3__ctor_m148(&L_12, L_8, L_10, L_11, /*hidden argument*/NULL);
		__this->___moveToward_8 = L_12;
		GameObject_t36 * L_13 = Component_get_gameObject_m157(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t34 * L_14 = GameObject_get_transform_m245(L_13, /*hidden argument*/NULL);
		GameObject_t36 * L_15 = Component_get_gameObject_m157(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_t34 * L_16 = GameObject_get_transform_m245(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t12  L_17 = Transform_get_position_m143(L_16, /*hidden argument*/NULL);
		Vector3_t12 * L_18 = &(__this->___moveToward_8);
		float L_19 = (L_18->___x_1);
		Vector3_t12 * L_20 = &(__this->___moveToward_8);
		float L_21 = (L_20->___z_3);
		Vector3_t12  L_22 = {0};
		Vector3__ctor_m148(&L_22, L_19, (0.0f), L_21, /*hidden argument*/NULL);
		Vector3_t12  L_23 = Vector3_op_Addition_m150(NULL /*static, unused*/, L_17, L_22, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_LookAt_m246(L_14, L_23, /*hidden argument*/NULL);
		GameObject_t36 * L_24 = Component_get_gameObject_m157(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_t34 * L_25 = GameObject_get_transform_m245(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t12  L_26 = Transform_get_forward_m247(L_25, /*hidden argument*/NULL);
		float L_27 = (__this->___speed_5);
		Vector3_t12  L_28 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		float L_29 = (__this->___movementSpeed_2);
		Vector3_t12  L_30 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		__this->___moveToward_8 = L_30;
	}

IL_0118:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t7_il2cpp_TypeInfo_var);
		bool L_31 = CrossPlatformInputManager_GetButtonDown_m49(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0136;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_32 = Input_GetKeyDown_m249(NULL /*static, unused*/, _stringLiteral11, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_01c6;
		}
	}

IL_0136:
	{
		bool L_33 = (__this->___doubleJump_12);
		if (L_33)
		{
			goto IL_0151;
		}
	}
	{
		CharacterController_t48 * L_34 = (__this->___characterController_9);
		NullCheck(L_34);
		bool L_35 = CharacterController_get_isGrounded_m243(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_01c6;
		}
	}

IL_0151:
	{
		Debug_Log_m250(NULL /*static, unused*/, _stringLiteral12, /*hidden argument*/NULL);
		Animator_t49 * L_36 = ((CharacterMovement_t47_StaticFields*)CharacterMovement_t47_il2cpp_TypeInfo_var->static_fields)->___animator_4;
		bool L_37 = (__this->___doubleJump_12);
		G_B11_0 = L_36;
		if (!L_37)
		{
			G_B12_0 = L_36;
			goto IL_0175;
		}
	}
	{
		G_B13_0 = _stringLiteral13;
		G_B13_1 = G_B11_0;
		goto IL_017a;
	}

IL_0175:
	{
		G_B13_0 = _stringLiteral10;
		G_B13_1 = G_B12_0;
	}

IL_017a:
	{
		NullCheck(G_B13_1);
		Animator_SetTrigger_m251(G_B13_1, G_B13_0, /*hidden argument*/NULL);
		__this->___speed_5 = (0.0f);
		Vector3_t12 * L_38 = &(__this->___moveToward_8);
		Vector3_t12 * L_39 = L_38;
		float L_40 = (L_39->___y_2);
		float L_41 = (__this->___jumpSpeed_3);
		L_39->___y_2 = ((float)((float)L_40+(float)L_41));
		Animator_t49 * L_42 = ((CharacterMovement_t47_StaticFields*)CharacterMovement_t47_il2cpp_TypeInfo_var->static_fields)->___animator_4;
		float L_43 = (__this->___speed_5);
		NullCheck(L_42);
		Animator_SetFloat_m244(L_42, _stringLiteral9, L_43, /*hidden argument*/NULL);
		bool L_44 = (__this->___doubleJump_12);
		__this->___doubleJump_12 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
	}

IL_01c6:
	{
		CharacterController_t48 * L_45 = (__this->___characterController_9);
		Vector3_t12  L_46 = (__this->___moveToward_8);
		float L_47 = Time_get_deltaTime_m137(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t12  L_48 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		CharacterController_Move_m252(L_45, L_48, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterMovement::CreateFootPrint()
extern "C" void CharacterMovement_CreateFootPrint_m190 (CharacterMovement_t47 * __this, const MethodInfo* method)
{
	Object_t31 * V_0 = {0};
	{
		GameObject_t36 * L_0 = (__this->___trail_10);
		GameObject_t36 * L_1 = Component_get_gameObject_m157(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t34 * L_2 = GameObject_get_transform_m245(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t12  L_3 = Transform_get_position_m143(L_2, /*hidden argument*/NULL);
		Vector3_t12  L_4 = {0};
		Vector3__ctor_m148(&L_4, (-0.5f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t12  L_5 = Vector3_op_Addition_m150(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		GameObject_t36 * L_6 = Component_get_gameObject_m157(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t34 * L_7 = GameObject_get_transform_m245(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t65  L_8 = Transform_get_rotation_m253(L_7, /*hidden argument*/NULL);
		Object_t31 * L_9 = Object_Instantiate_m254(NULL /*static, unused*/, L_0, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Object_t31 * L_10 = V_0;
		Object_Destroy_m255(NULL /*static, unused*/, L_10, (5.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrailCollider::.ctor()
extern "C" void TrailCollider__ctor_m191 (TrailCollider_t50 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrailCollider::Awake()
extern "C" void TrailCollider_Awake_m192 (TrailCollider_t50 * __this, const MethodInfo* method)
{
	{
		__this->___firstTrigger_2 = 1;
		return;
	}
}
// System.Void TrailCollider::Update()
extern "C" void TrailCollider_Update_m193 (TrailCollider_t50 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TrailCollider::OnTriggerEnter(UnityEngine.Collider)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharacterMovement_t47_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" void TrailCollider_OnTriggerEnter_m194 (TrailCollider_t50 * __this, Collider_t64 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharacterMovement_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t64 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t36 * L_1 = Component_get_gameObject_m157(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m256(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m134(NULL /*static, unused*/, L_2, _stringLiteral14, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = (__this->___firstTrigger_2);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		Debug_Log_m250(NULL /*static, unused*/, _stringLiteral15, /*hidden argument*/NULL);
		Animator_t49 * L_5 = ((CharacterMovement_t47_StaticFields*)CharacterMovement_t47_il2cpp_TypeInfo_var->static_fields)->___animator_4;
		NullCheck(L_5);
		Animator_SetTrigger_m251(L_5, _stringLiteral16, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void TrailCollider::OnTriggerExit(UnityEngine.Collider)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void TrailCollider_OnTriggerExit_m195 (TrailCollider_t50 * __this, Collider_t64 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t64 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t36 * L_1 = Component_get_gameObject_m157(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m256(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m134(NULL /*static, unused*/, L_2, _stringLiteral14, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		__this->___firstTrigger_2 = 0;
	}

IL_0021:
	{
		return;
	}
}
// System.Void CameraController.CameraController::.ctor()
extern "C" void CameraController__ctor_m196 (CameraController_t52 * __this, const MethodInfo* method)
{
	{
		Vector3_t12  L_0 = Vector3_get_zero_m146(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___focus_2 = L_0;
		__this->___showInstWindow_4 = 1;
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController.CameraController::setupFocusObject(System.String)
extern TypeInfo* GameObject_t36_il2cpp_TypeInfo_var;
extern "C" void CameraController_setupFocusObject_m197 (CameraController_t52 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t36 * V_0 = {0};
	GameObject_t36 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		GameObject_t36 * L_1 = (GameObject_t36 *)il2cpp_codegen_object_new (GameObject_t36_il2cpp_TypeInfo_var);
		GameObject__ctor_m153(L_1, L_0, /*hidden argument*/NULL);
		GameObject_t36 * L_2 = L_1;
		V_1 = L_2;
		__this->___focusObj_3 = L_2;
		GameObject_t36 * L_3 = V_1;
		V_0 = L_3;
		GameObject_t36 * L_4 = V_0;
		NullCheck(L_4);
		Transform_t34 * L_5 = GameObject_get_transform_m245(L_4, /*hidden argument*/NULL);
		Vector3_t12  L_6 = (__this->___focus_2);
		NullCheck(L_5);
		Transform_set_position_m151(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t36 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t34 * L_8 = GameObject_get_transform_m245(L_7, /*hidden argument*/NULL);
		Transform_t34 * L_9 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t12  L_10 = Transform_get_position_m143(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_LookAt_m246(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController.CameraController::Start()
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" void CameraController_Start_m198 (CameraController_t52 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t34 * V_0 = {0};
	{
		GameObject_t36 * L_0 = (__this->___focusObj_3);
		bool L_1 = Object_op_Equality_m136(NULL /*static, unused*/, L_0, (Object_t31 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CameraController_setupFocusObject_m197(__this, _stringLiteral17, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t34 * L_2 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t34 * L_3 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		GameObject_t36 * L_4 = (__this->___focusObj_3);
		NullCheck(L_4);
		Transform_t34 * L_5 = GameObject_get_transform_m245(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m257(L_3, L_5, /*hidden argument*/NULL);
		Transform_t34 * L_6 = V_0;
		Vector3_t12  L_7 = (__this->___focus_2);
		NullCheck(L_6);
		Transform_LookAt_m246(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController.CameraController::Update()
extern "C" void CameraController_Update_m199 (CameraController_t52 * __this, const MethodInfo* method)
{
	{
		CameraController_mouseEvent_m201(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController.CameraController::OnGUI()
extern TypeInfo* GUI_t67_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" void CameraController_OnGUI_m200 (CameraController_t52 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___showInstWindow_4);
		if (!L_0)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_3 = {0};
		Rect__ctor_m259(&L_3, (((float)((float)((int32_t)((int32_t)L_1-(int32_t)((int32_t)210)))))), (((float)((float)((int32_t)((int32_t)L_2-(int32_t)((int32_t)100)))))), (200.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t67_il2cpp_TypeInfo_var);
		GUI_Box_m260(NULL /*static, unused*/, L_3, _stringLiteral18, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_6 = {0};
		Rect__ctor_m259(&L_6, (((float)((float)((int32_t)((int32_t)L_4-(int32_t)((int32_t)200)))))), (((float)((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)80)))))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_6, _stringLiteral19, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_9 = {0};
		Rect__ctor_m259(&L_9, (((float)((float)((int32_t)((int32_t)L_7-(int32_t)((int32_t)200)))))), (((float)((float)((int32_t)((int32_t)L_8-(int32_t)((int32_t)60)))))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_9, _stringLiteral20, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_12 = {0};
		Rect__ctor_m259(&L_12, (((float)((float)((int32_t)((int32_t)L_10-(int32_t)((int32_t)200)))))), (((float)((float)((int32_t)((int32_t)L_11-(int32_t)((int32_t)40)))))), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_12, _stringLiteral21, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		return;
	}
}
// System.Void CameraController.CameraController::mouseEvent()
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void CameraController_mouseEvent_m201 (CameraController_t52 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m160(NULL /*static, unused*/, _stringLiteral22, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001d;
		}
	}
	{
		float L_2 = V_0;
		CameraController_mouseWheelEvent_m203(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButtonDown_m262(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetMouseButtonDown_m262(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonDown_m262(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		Vector3_t12  L_6 = Input_get_mousePosition_m165(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___oldPos_5 = L_6;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		Vector3_t12  L_7 = Input_get_mousePosition_m165(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraController_mouseDragEvent_m202(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController.CameraController::mouseDragEvent(UnityEngine.Vector3)
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern "C" void CameraController_mouseDragEvent_m202 (CameraController_t52 * __this, Vector3_t12  ___mousePos, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t12  V_0 = {0};
	{
		Vector3_t12  L_0 = ___mousePos;
		Vector3_t12  L_1 = (__this->___oldPos_5);
		Vector3_t12  L_2 = Vector3_op_Subtraction_m144(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButton_m263(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKey_m264(NULL /*static, unused*/, ((int32_t)308), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKey_m264(NULL /*static, unused*/, ((int32_t)310), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		float L_6 = Vector3_get_magnitude_m265((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_6) > ((float)(1.0E-05f)))))
		{
			goto IL_005d;
		}
	}
	{
		Vector3_t12  L_7 = V_0;
		Vector3_t12  L_8 = Vector3_op_UnaryNegation_m266(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector3_t12  L_9 = Vector3_op_Division_m145(NULL /*static, unused*/, L_8, (100.0f), /*hidden argument*/NULL);
		CameraController_cameraTranslate_m204(__this, L_9, /*hidden argument*/NULL);
	}

IL_005d:
	{
		goto IL_00a0;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKey_m264(NULL /*static, unused*/, ((int32_t)308), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00a0;
		}
	}
	{
		float L_11 = Vector3_get_magnitude_m265((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_11) > ((float)(1.0E-05f)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_12 = ((&V_0)->___y_2);
		float L_13 = ((&V_0)->___x_1);
		Vector3_t12  L_14 = {0};
		Vector3__ctor_m148(&L_14, L_12, L_13, (0.0f), /*hidden argument*/NULL);
		CameraController_cameraRotate_m205(__this, L_14, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		goto IL_0116;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_15 = Input_GetMouseButton_m263(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00dc;
		}
	}
	{
		float L_16 = Vector3_get_magnitude_m265((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_16) > ((float)(1.0E-05f)))))
		{
			goto IL_00d7;
		}
	}
	{
		Vector3_t12  L_17 = V_0;
		Vector3_t12  L_18 = Vector3_op_UnaryNegation_m266(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Vector3_t12  L_19 = Vector3_op_Division_m145(NULL /*static, unused*/, L_18, (100.0f), /*hidden argument*/NULL);
		CameraController_cameraTranslate_m204(__this, L_19, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		goto IL_0116;
	}

IL_00dc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_20 = Input_GetMouseButton_m263(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0116;
		}
	}
	{
		float L_21 = Vector3_get_magnitude_m265((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_21) > ((float)(1.0E-05f)))))
		{
			goto IL_0116;
		}
	}
	{
		float L_22 = ((&V_0)->___y_2);
		float L_23 = ((&V_0)->___x_1);
		Vector3_t12  L_24 = {0};
		Vector3__ctor_m148(&L_24, L_22, L_23, (0.0f), /*hidden argument*/NULL);
		CameraController_cameraRotate_m205(__this, L_24, /*hidden argument*/NULL);
	}

IL_0116:
	{
		Vector3_t12  L_25 = ___mousePos;
		__this->___oldPos_5 = L_25;
		return;
	}
}
// System.Void CameraController.CameraController::mouseWheelEvent(System.Single)
extern "C" void CameraController_mouseWheelEvent_m203 (CameraController_t52 * __this, float ___delta, const MethodInfo* method)
{
	Vector3_t12  V_0 = {0};
	Vector3_t12  V_1 = {0};
	{
		Transform_t34 * L_0 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t12  L_1 = Transform_get_position_m143(L_0, /*hidden argument*/NULL);
		Vector3_t12  L_2 = (__this->___focus_2);
		Vector3_t12  L_3 = Vector3_op_Subtraction_m144(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t12  L_4 = V_0;
		float L_5 = ___delta;
		Vector3_t12  L_6 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_4, ((float)((float)(1.0f)+(float)L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = Vector3_get_magnitude_m265((&V_1), /*hidden argument*/NULL);
		if ((!(((double)(((double)((double)L_7)))) > ((double)(0.01)))))
		{
			goto IL_0052;
		}
	}
	{
		Transform_t34 * L_8 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Vector3_t12  L_9 = (__this->___focus_2);
		Vector3_t12  L_10 = V_1;
		Vector3_t12  L_11 = Vector3_op_Addition_m150(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m151(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void CameraController.CameraController::cameraTranslate(UnityEngine.Vector3)
extern "C" void CameraController_cameraTranslate_m204 (CameraController_t52 * __this, Vector3_t12  ___vec, const MethodInfo* method)
{
	Transform_t34 * V_0 = {0};
	{
		GameObject_t36 * L_0 = (__this->___focusObj_3);
		NullCheck(L_0);
		Transform_t34 * L_1 = GameObject_get_transform_m245(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t12 * L_2 = (&___vec);
		float L_3 = (L_2->___x_1);
		L_2->___x_1 = ((float)((float)L_3*(float)(-1.0f)));
		Transform_t34 * L_4 = V_0;
		Vector3_t12  L_5 = Vector3_get_right_m267(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = ((&___vec)->___x_1);
		Vector3_t12  L_7 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Translate_m268(L_4, L_7, /*hidden argument*/NULL);
		Transform_t34 * L_8 = V_0;
		Vector3_t12  L_9 = Vector3_get_up_m269(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = ((&___vec)->___y_2);
		Vector3_t12  L_11 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Translate_m268(L_8, L_11, /*hidden argument*/NULL);
		Transform_t34 * L_12 = V_0;
		NullCheck(L_12);
		Vector3_t12  L_13 = Transform_get_position_m143(L_12, /*hidden argument*/NULL);
		__this->___focus_2 = L_13;
		return;
	}
}
// System.Void CameraController.CameraController::cameraRotate(UnityEngine.Vector3)
extern "C" void CameraController_cameraRotate_m205 (CameraController_t52 * __this, Vector3_t12  ___eulerAngle, const MethodInfo* method)
{
	Quaternion_t65  V_0 = {0};
	Transform_t34 * V_1 = {0};
	{
		Quaternion_t65  L_0 = Quaternion_get_identity_m270(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t36 * L_1 = (__this->___focusObj_3);
		NullCheck(L_1);
		Transform_t34 * L_2 = GameObject_get_transform_m245(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Transform_t34 * L_3 = V_1;
		Transform_t34 * L_4 = V_1;
		NullCheck(L_4);
		Vector3_t12  L_5 = Transform_get_localEulerAngles_m271(L_4, /*hidden argument*/NULL);
		Vector3_t12  L_6 = ___eulerAngle;
		Vector3_t12  L_7 = Vector3_op_Addition_m150(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localEulerAngles_m272(L_3, L_7, /*hidden argument*/NULL);
		Vector3_t12  L_8 = (__this->___focus_2);
		Quaternion_SetLookRotation_m273((&V_0), L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FaceUpdate::.ctor()
extern "C" void FaceUpdate__ctor_m206 (FaceUpdate_t53 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FaceUpdate::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var;
extern "C" void FaceUpdate_Start_m207 (FaceUpdate_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t49 * L_0 = Component_GetComponent_TisAnimator_t49_m240(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var);
		__this->___anim_3 = L_0;
		return;
	}
}
// System.Void FaceUpdate::OnGUI()
extern TypeInfo* GUILayoutOptionU5BU5D_t69_il2cpp_TypeInfo_var;
extern "C" void FaceUpdate_OnGUI_m208 (FaceUpdate_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	AnimationClip_t68 * V_0 = {0};
	AnimationClipU5BU5D_t54* V_1 = {0};
	int32_t V_2 = 0;
	{
		AnimationClipU5BU5D_t54* L_0 = (__this->___animations_2);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0042;
	}

IL_000e:
	{
		AnimationClipU5BU5D_t54* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(AnimationClip_t68 **)(AnimationClip_t68 **)SZArrayLdElema(L_1, L_3, sizeof(AnimationClip_t68 *)));
		AnimationClip_t68 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m256(L_4, /*hidden argument*/NULL);
		bool L_6 = GUILayout_Button_m274(NULL /*static, unused*/, L_5, ((GUILayoutOptionU5BU5D_t69*)SZArrayNew(GUILayoutOptionU5BU5D_t69_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		Animator_t49 * L_7 = (__this->___anim_3);
		AnimationClip_t68 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = Object_get_name_m256(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Animator_CrossFade_m275(L_7, L_9, (0.0f), /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_11 = V_2;
		AnimationClipU5BU5D_t54* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void FaceUpdate::Update()
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t32_il2cpp_TypeInfo_var;
extern "C" void FaceUpdate_Update_m209 (FaceUpdate_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Mathf_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m263(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		__this->___current_5 = (1.0f);
		goto IL_0037;
	}

IL_001b:
	{
		float L_1 = (__this->___current_5);
		float L_2 = (__this->___delayWeight_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t32_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Lerp_m276(NULL /*static, unused*/, L_1, (0.0f), L_2, /*hidden argument*/NULL);
		__this->___current_5 = L_3;
	}

IL_0037:
	{
		Animator_t49 * L_4 = (__this->___anim_3);
		float L_5 = (__this->___current_5);
		NullCheck(L_4);
		Animator_SetLayerWeight_m277(L_4, 1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IdleChanger/<RandomChange>c__Iterator0::.ctor()
extern "C" void U3CRandomChangeU3Ec__Iterator0__ctor_m210 (U3CRandomChangeU3Ec__Iterator0_t55 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object IdleChanger/<RandomChange>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CRandomChangeU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m211 (U3CRandomChangeU3Ec__Iterator0_t55 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object IdleChanger/<RandomChange>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CRandomChangeU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m212 (U3CRandomChangeU3Ec__Iterator0_t55 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean IdleChanger/<RandomChange>c__Iterator0::MoveNext()
extern TypeInfo* WaitForSeconds_t70_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern "C" bool U3CRandomChangeU3Ec__Iterator0_MoveNext_m213 (U3CRandomChangeU3Ec__Iterator0_t55 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_00d2;
	}

IL_0021:
	{
		IdleChanger_t56 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		bool L_3 = (L_2->____random_5);
		if (!L_3)
		{
			goto IL_00a4;
		}
	}
	{
		float L_4 = Random_Range_m278(NULL /*static, unused*/, (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___U3C_seedU3E__0_0 = L_4;
		float L_5 = (__this->___U3C_seedU3E__0_0);
		IdleChanger_t56 * L_6 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_6);
		float L_7 = (L_6->____threshold_6);
		if ((!(((float)L_5) <= ((float)((-L_7))))))
		{
			goto IL_0078;
		}
	}
	{
		IdleChanger_t56 * L_8 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_8);
		Animator_t49 * L_9 = (L_8->___anim_2);
		NullCheck(L_9);
		Animator_SetBool_m279(L_9, _stringLiteral23, 1, /*hidden argument*/NULL);
		goto IL_00a4;
	}

IL_0078:
	{
		float L_10 = (__this->___U3C_seedU3E__0_0);
		IdleChanger_t56 * L_11 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_11);
		float L_12 = (L_11->____threshold_6);
		if ((!(((float)L_10) >= ((float)L_12))))
		{
			goto IL_00a4;
		}
	}
	{
		IdleChanger_t56 * L_13 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_13);
		Animator_t49 * L_14 = (L_13->___anim_2);
		NullCheck(L_14);
		Animator_SetBool_m279(L_14, _stringLiteral24, 1, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		IdleChanger_t56 * L_15 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_15);
		float L_16 = (L_15->____interval_7);
		WaitForSeconds_t70 * L_17 = (WaitForSeconds_t70 *)il2cpp_codegen_object_new (WaitForSeconds_t70_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m280(L_17, L_16, /*hidden argument*/NULL);
		__this->___U24current_2 = L_17;
		__this->___U24PC_1 = 1;
		goto IL_00d4;
	}

IL_00c6:
	{
		goto IL_0021;
	}
	// Dead block : IL_00cb: ldarg.0

IL_00d2:
	{
		return 0;
	}

IL_00d4:
	{
		return 1;
	}
}
// System.Void IdleChanger/<RandomChange>c__Iterator0::Dispose()
extern "C" void U3CRandomChangeU3Ec__Iterator0_Dispose_m214 (U3CRandomChangeU3Ec__Iterator0_t55 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void IdleChanger/<RandomChange>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t71_il2cpp_TypeInfo_var;
extern "C" void U3CRandomChangeU3Ec__Iterator0_Reset_m215 (U3CRandomChangeU3Ec__Iterator0_t55 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t71 * L_0 = (NotSupportedException_t71 *)il2cpp_codegen_object_new (NotSupportedException_t71_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m281(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void IdleChanger::.ctor()
extern "C" void IdleChanger__ctor_m216 (IdleChanger_t56 * __this, const MethodInfo* method)
{
	{
		__this->____threshold_6 = (0.5f);
		__this->____interval_7 = (2.0f);
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IdleChanger::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern "C" void IdleChanger_Start_m217 (IdleChanger_t56 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t49 * L_0 = Component_GetComponent_TisAnimator_t49_m240(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var);
		__this->___anim_2 = L_0;
		Animator_t49 * L_1 = (__this->___anim_2);
		NullCheck(L_1);
		AnimatorStateInfo_t57  L_2 = Animator_GetCurrentAnimatorStateInfo_m282(L_1, 0, /*hidden argument*/NULL);
		__this->___currentState_3 = L_2;
		AnimatorStateInfo_t57  L_3 = (__this->___currentState_3);
		__this->___previousState_4 = L_3;
		MonoBehaviour_StartCoroutine_m283(__this, _stringLiteral25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IdleChanger::Update()
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void IdleChanger_Update_m218 (IdleChanger_t56 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m249(NULL /*static, unused*/, _stringLiteral26, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m161(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}

IL_001e:
	{
		Animator_t49 * L_2 = (__this->___anim_2);
		NullCheck(L_2);
		Animator_SetBool_m279(L_2, _stringLiteral24, 1, /*hidden argument*/NULL);
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m249(NULL /*static, unused*/, _stringLiteral27, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Animator_t49 * L_4 = (__this->___anim_2);
		NullCheck(L_4);
		Animator_SetBool_m279(L_4, _stringLiteral23, 1, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Animator_t49 * L_5 = (__this->___anim_2);
		NullCheck(L_5);
		bool L_6 = Animator_GetBool_m284(L_5, _stringLiteral24, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		Animator_t49 * L_7 = (__this->___anim_2);
		NullCheck(L_7);
		AnimatorStateInfo_t57  L_8 = Animator_GetCurrentAnimatorStateInfo_m282(L_7, 0, /*hidden argument*/NULL);
		__this->___currentState_3 = L_8;
		AnimatorStateInfo_t57 * L_9 = &(__this->___previousState_4);
		int32_t L_10 = AnimatorStateInfo_get_nameHash_m285(L_9, /*hidden argument*/NULL);
		AnimatorStateInfo_t57 * L_11 = &(__this->___currentState_3);
		int32_t L_12 = AnimatorStateInfo_get_nameHash_m285(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_00ae;
		}
	}
	{
		Animator_t49 * L_13 = (__this->___anim_2);
		NullCheck(L_13);
		Animator_SetBool_m279(L_13, _stringLiteral24, 0, /*hidden argument*/NULL);
		AnimatorStateInfo_t57  L_14 = (__this->___currentState_3);
		__this->___previousState_4 = L_14;
	}

IL_00ae:
	{
		Animator_t49 * L_15 = (__this->___anim_2);
		NullCheck(L_15);
		bool L_16 = Animator_GetBool_m284(L_15, _stringLiteral23, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_010d;
		}
	}
	{
		Animator_t49 * L_17 = (__this->___anim_2);
		NullCheck(L_17);
		AnimatorStateInfo_t57  L_18 = Animator_GetCurrentAnimatorStateInfo_m282(L_17, 0, /*hidden argument*/NULL);
		__this->___currentState_3 = L_18;
		AnimatorStateInfo_t57 * L_19 = &(__this->___previousState_4);
		int32_t L_20 = AnimatorStateInfo_get_nameHash_m285(L_19, /*hidden argument*/NULL);
		AnimatorStateInfo_t57 * L_21 = &(__this->___currentState_3);
		int32_t L_22 = AnimatorStateInfo_get_nameHash_m285(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_010d;
		}
	}
	{
		Animator_t49 * L_23 = (__this->___anim_2);
		NullCheck(L_23);
		Animator_SetBool_m279(L_23, _stringLiteral23, 0, /*hidden argument*/NULL);
		AnimatorStateInfo_t57  L_24 = (__this->___currentState_3);
		__this->___previousState_4 = L_24;
	}

IL_010d:
	{
		return;
	}
}
// System.Void IdleChanger::OnGUI()
extern TypeInfo* GUI_t67_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void IdleChanger_OnGUI_m219 (IdleChanger_t56 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_1 = {0};
		Rect__ctor_m259(&L_1, (((float)((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)110)))))), (10.0f), (100.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t67_il2cpp_TypeInfo_var);
		GUI_Box_m260(NULL /*static, unused*/, L_1, _stringLiteral28, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_3 = {0};
		Rect__ctor_m259(&L_3, (((float)((float)((int32_t)((int32_t)L_2-(int32_t)((int32_t)100)))))), (40.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		bool L_4 = GUI_Button_m286(NULL /*static, unused*/, L_3, _stringLiteral24, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		Animator_t49 * L_5 = (__this->___anim_2);
		NullCheck(L_5);
		Animator_SetBool_m279(L_5, _stringLiteral24, 1, /*hidden argument*/NULL);
	}

IL_0064:
	{
		int32_t L_6 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_7 = {0};
		Rect__ctor_m259(&L_7, (((float)((float)((int32_t)((int32_t)L_6-(int32_t)((int32_t)100)))))), (70.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t67_il2cpp_TypeInfo_var);
		bool L_8 = GUI_Button_m286(NULL /*static, unused*/, L_7, _stringLiteral23, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00a1;
		}
	}
	{
		Animator_t49 * L_9 = (__this->___anim_2);
		NullCheck(L_9);
		Animator_SetBool_m279(L_9, _stringLiteral23, 1, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Collections.IEnumerator IdleChanger::RandomChange()
extern TypeInfo* U3CRandomChangeU3Ec__Iterator0_t55_il2cpp_TypeInfo_var;
extern "C" Object_t * IdleChanger_RandomChange_m220 (IdleChanger_t56 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRandomChangeU3Ec__Iterator0_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	U3CRandomChangeU3Ec__Iterator0_t55 * V_0 = {0};
	{
		U3CRandomChangeU3Ec__Iterator0_t55 * L_0 = (U3CRandomChangeU3Ec__Iterator0_t55 *)il2cpp_codegen_object_new (U3CRandomChangeU3Ec__Iterator0_t55_il2cpp_TypeInfo_var);
		U3CRandomChangeU3Ec__Iterator0__ctor_m210(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRandomChangeU3Ec__Iterator0_t55 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CRandomChangeU3Ec__Iterator0_t55 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SceneLoader::.ctor()
extern "C" void SceneLoader__ctor_m221 (SceneLoader_t58 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneLoader::OnGUI()
extern TypeInfo* GUI_t67_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void SceneLoader_OnGUI_m222 (SceneLoader_t58 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_1 = {0};
		Rect__ctor_m259(&L_1, (10.0f), (((float)((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)100)))))), (100.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t67_il2cpp_TypeInfo_var);
		GUI_Box_m260(NULL /*static, unused*/, L_1, _stringLiteral29, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_3 = {0};
		Rect__ctor_m259(&L_3, (20.0f), (((float)((float)((int32_t)((int32_t)L_2-(int32_t)((int32_t)70)))))), (80.0f), (20.0f), /*hidden argument*/NULL);
		bool L_4 = GUI_Button_m286(NULL /*static, unused*/, L_3, _stringLiteral24, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		SceneLoader_LoadNextScene_m224(__this, /*hidden argument*/NULL);
	}

IL_0059:
	{
		int32_t L_5 = Screen_get_height_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_6 = {0};
		Rect__ctor_m259(&L_6, (20.0f), (((float)((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)40)))))), (80.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t67_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m286(NULL /*static, unused*/, L_6, _stringLiteral23, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		SceneLoader_LoadPreScene_m223(__this, /*hidden argument*/NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void SceneLoader::LoadPreScene()
extern "C" void SceneLoader_LoadPreScene_m223 (SceneLoader_t58 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Application_get_loadedLevel_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = Application_get_levelCount_m288(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		Application_LoadLevel_m289(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneLoader::LoadNextScene()
extern "C" void SceneLoader_LoadNextScene_m224 (SceneLoader_t58 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Application_get_loadedLevel_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = V_0;
		int32_t L_2 = Application_get_levelCount_m288(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = 1;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		Application_LoadLevel_m289(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThirdPersonCamera::.ctor()
extern "C" void ThirdPersonCamera__ctor_m225 (ThirdPersonCamera_t59 * __this, const MethodInfo* method)
{
	{
		__this->___smooth_2 = (3.0f);
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThirdPersonCamera::Start()
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral31;
extern Il2CppCodeGenString* _stringLiteral32;
extern "C" void ThirdPersonCamera_Start_m226 (ThirdPersonCamera_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t36 * L_0 = GameObject_Find_m290(NULL /*static, unused*/, _stringLiteral30, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t34 * L_1 = GameObject_get_transform_m245(L_0, /*hidden argument*/NULL);
		__this->___standardPos_3 = L_1;
		GameObject_t36 * L_2 = GameObject_Find_m290(NULL /*static, unused*/, _stringLiteral31, /*hidden argument*/NULL);
		bool L_3 = Object_op_Implicit_m291(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		GameObject_t36 * L_4 = GameObject_Find_m290(NULL /*static, unused*/, _stringLiteral31, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t34 * L_5 = GameObject_get_transform_m245(L_4, /*hidden argument*/NULL);
		__this->___frontPos_4 = L_5;
	}

IL_003e:
	{
		GameObject_t36 * L_6 = GameObject_Find_m290(NULL /*static, unused*/, _stringLiteral32, /*hidden argument*/NULL);
		bool L_7 = Object_op_Implicit_m291(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		GameObject_t36 * L_8 = GameObject_Find_m290(NULL /*static, unused*/, _stringLiteral32, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t34 * L_9 = GameObject_get_transform_m245(L_8, /*hidden argument*/NULL);
		__this->___jumpPos_5 = L_9;
	}

IL_0067:
	{
		Transform_t34 * L_10 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_11 = (__this->___standardPos_3);
		NullCheck(L_11);
		Vector3_t12  L_12 = Transform_get_position_m143(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m151(L_10, L_12, /*hidden argument*/NULL);
		Transform_t34 * L_13 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_14 = (__this->___standardPos_3);
		NullCheck(L_14);
		Vector3_t12  L_15 = Transform_get_forward_m247(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_forward_m292(L_13, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThirdPersonCamera::FixedUpdate()
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral34;
extern "C" void ThirdPersonCamera_FixedUpdate_m227 (ThirdPersonCamera_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButton_m161(NULL /*static, unused*/, _stringLiteral33, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ThirdPersonCamera_setCameraPositionFrontView_m229(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m161(NULL /*static, unused*/, _stringLiteral34, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		ThirdPersonCamera_setCameraPositionJumpView_m230(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_0034:
	{
		ThirdPersonCamera_setCameraPositionNormalView_m228(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void ThirdPersonCamera::setCameraPositionNormalView()
extern "C" void ThirdPersonCamera_setCameraPositionNormalView_m228 (ThirdPersonCamera_t59 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___bQuickSwitch_6);
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		Transform_t34 * L_1 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_2 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t12  L_3 = Transform_get_position_m143(L_2, /*hidden argument*/NULL);
		Transform_t34 * L_4 = (__this->___standardPos_3);
		NullCheck(L_4);
		Vector3_t12  L_5 = Transform_get_position_m143(L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_fixedDeltaTime_m293(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___smooth_2);
		Vector3_t12  L_8 = Vector3_Lerp_m294(NULL /*static, unused*/, L_3, L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m151(L_1, L_8, /*hidden argument*/NULL);
		Transform_t34 * L_9 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_10 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t12  L_11 = Transform_get_forward_m247(L_10, /*hidden argument*/NULL);
		Transform_t34 * L_12 = (__this->___standardPos_3);
		NullCheck(L_12);
		Vector3_t12  L_13 = Transform_get_forward_m247(L_12, /*hidden argument*/NULL);
		float L_14 = Time_get_fixedDeltaTime_m293(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___smooth_2);
		Vector3_t12  L_16 = Vector3_Lerp_m294(NULL /*static, unused*/, L_11, L_13, ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_forward_m292(L_9, L_16, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_0074:
	{
		Transform_t34 * L_17 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_18 = (__this->___standardPos_3);
		NullCheck(L_18);
		Vector3_t12  L_19 = Transform_get_position_m143(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m151(L_17, L_19, /*hidden argument*/NULL);
		Transform_t34 * L_20 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_21 = (__this->___standardPos_3);
		NullCheck(L_21);
		Vector3_t12  L_22 = Transform_get_forward_m247(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_forward_m292(L_20, L_22, /*hidden argument*/NULL);
		__this->___bQuickSwitch_6 = 0;
	}

IL_00a7:
	{
		return;
	}
}
// System.Void ThirdPersonCamera::setCameraPositionFrontView()
extern "C" void ThirdPersonCamera_setCameraPositionFrontView_m229 (ThirdPersonCamera_t59 * __this, const MethodInfo* method)
{
	{
		__this->___bQuickSwitch_6 = 1;
		Transform_t34 * L_0 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_1 = (__this->___frontPos_4);
		NullCheck(L_1);
		Vector3_t12  L_2 = Transform_get_position_m143(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m151(L_0, L_2, /*hidden argument*/NULL);
		Transform_t34 * L_3 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_4 = (__this->___frontPos_4);
		NullCheck(L_4);
		Vector3_t12  L_5 = Transform_get_forward_m247(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_forward_m292(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThirdPersonCamera::setCameraPositionJumpView()
extern "C" void ThirdPersonCamera_setCameraPositionJumpView_m230 (ThirdPersonCamera_t59 * __this, const MethodInfo* method)
{
	{
		__this->___bQuickSwitch_6 = 0;
		Transform_t34 * L_0 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_1 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t12  L_2 = Transform_get_position_m143(L_1, /*hidden argument*/NULL);
		Transform_t34 * L_3 = (__this->___jumpPos_5);
		NullCheck(L_3);
		Vector3_t12  L_4 = Transform_get_position_m143(L_3, /*hidden argument*/NULL);
		float L_5 = Time_get_fixedDeltaTime_m293(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = (__this->___smooth_2);
		Vector3_t12  L_7 = Vector3_Lerp_m294(NULL /*static, unused*/, L_2, L_4, ((float)((float)L_5*(float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m151(L_0, L_7, /*hidden argument*/NULL);
		Transform_t34 * L_8 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_9 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t12  L_10 = Transform_get_forward_m247(L_9, /*hidden argument*/NULL);
		Transform_t34 * L_11 = (__this->___jumpPos_5);
		NullCheck(L_11);
		Vector3_t12  L_12 = Transform_get_forward_m247(L_11, /*hidden argument*/NULL);
		float L_13 = Time_get_fixedDeltaTime_m293(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = (__this->___smooth_2);
		Vector3_t12  L_15 = Vector3_Lerp_m294(NULL /*static, unused*/, L_10, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_forward_m292(L_8, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChanControlScriptWithRgidBody::.ctor()
extern "C" void UnityChanControlScriptWithRgidBody__ctor_m231 (UnityChanControlScriptWithRgidBody_t60 * __this, const MethodInfo* method)
{
	{
		__this->___animSpeed_2 = (1.5f);
		__this->___lookSmoother_3 = (3.0f);
		__this->___useCurves_4 = 1;
		__this->___useCurvesHeight_5 = (0.5f);
		__this->___forwardSpeed_6 = (7.0f);
		__this->___backwardSpeed_7 = (2.0f);
		__this->___rotateSpeed_8 = (2.0f);
		__this->___jumpPower_9 = (3.0f);
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChanControlScriptWithRgidBody::.cctor()
extern TypeInfo* UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral38;
extern "C" void UnityChanControlScriptWithRgidBody__cctor_m232 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Animator_StringToHash_m295(NULL /*static, unused*/, _stringLiteral35, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___idleState_18 = L_0;
		int32_t L_1 = Animator_StringToHash_m295(NULL /*static, unused*/, _stringLiteral36, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___locoState_19 = L_1;
		int32_t L_2 = Animator_StringToHash_m295(NULL /*static, unused*/, _stringLiteral37, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___jumpState_20 = L_2;
		int32_t L_3 = Animator_StringToHash_m295(NULL /*static, unused*/, _stringLiteral38, /*hidden argument*/NULL);
		((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___restState_21 = L_3;
		return;
	}
}
// System.Void UnityChanControlScriptWithRgidBody::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCapsuleCollider_t61_m296_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t62_m297_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral39;
extern "C" void UnityChanControlScriptWithRgidBody_Start_m233 (UnityChanControlScriptWithRgidBody_t60 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		Component_GetComponent_TisCapsuleCollider_t61_m296_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		Component_GetComponent_TisRigidbody_t62_m297_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t49 * L_0 = Component_GetComponent_TisAnimator_t49_m240(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t49_m240_MethodInfo_var);
		__this->___anim_15 = L_0;
		CapsuleCollider_t61 * L_1 = Component_GetComponent_TisCapsuleCollider_t61_m296(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t61_m296_MethodInfo_var);
		__this->___col_10 = L_1;
		Rigidbody_t62 * L_2 = Component_GetComponent_TisRigidbody_t62_m297(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t62_m297_MethodInfo_var);
		__this->___rb_11 = L_2;
		GameObject_t36 * L_3 = GameObject_FindWithTag_m298(NULL /*static, unused*/, _stringLiteral39, /*hidden argument*/NULL);
		__this->___cameraObject_17 = L_3;
		CapsuleCollider_t61 * L_4 = (__this->___col_10);
		NullCheck(L_4);
		float L_5 = CapsuleCollider_get_height_m299(L_4, /*hidden argument*/NULL);
		__this->___orgColHight_13 = L_5;
		CapsuleCollider_t61 * L_6 = (__this->___col_10);
		NullCheck(L_6);
		Vector3_t12  L_7 = CapsuleCollider_get_center_m300(L_6, /*hidden argument*/NULL);
		__this->___orgVectColCenter_14 = L_7;
		return;
	}
}
// System.Void UnityChanControlScriptWithRgidBody::FixedUpdate()
extern TypeInfo* Input_t42_il2cpp_TypeInfo_var;
extern TypeInfo* UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var;
extern TypeInfo* RaycastHit_t73_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral45;
extern "C" void UnityChanControlScriptWithRgidBody_FixedUpdate_m234 (UnityChanControlScriptWithRgidBody_t60 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		RaycastHit_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Ray_t72  V_4 = {0};
	RaycastHit_t73  V_5 = {0};
	float V_6 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m160(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m160(NULL /*static, unused*/, _stringLiteral2, /*hidden argument*/NULL);
		V_1 = L_1;
		Animator_t49 * L_2 = (__this->___anim_15);
		float L_3 = V_1;
		NullCheck(L_2);
		Animator_SetFloat_m244(L_2, _stringLiteral40, L_3, /*hidden argument*/NULL);
		Animator_t49 * L_4 = (__this->___anim_15);
		float L_5 = V_0;
		NullCheck(L_4);
		Animator_SetFloat_m244(L_4, _stringLiteral41, L_5, /*hidden argument*/NULL);
		Animator_t49 * L_6 = (__this->___anim_15);
		float L_7 = (__this->___animSpeed_2);
		NullCheck(L_6);
		Animator_set_speed_m301(L_6, L_7, /*hidden argument*/NULL);
		Animator_t49 * L_8 = (__this->___anim_15);
		NullCheck(L_8);
		AnimatorStateInfo_t57  L_9 = Animator_GetCurrentAnimatorStateInfo_m282(L_8, 0, /*hidden argument*/NULL);
		__this->___currentBaseState_16 = L_9;
		Rigidbody_t62 * L_10 = (__this->___rb_11);
		NullCheck(L_10);
		Rigidbody_set_useGravity_m302(L_10, 1, /*hidden argument*/NULL);
		float L_11 = V_1;
		Vector3_t12  L_12 = {0};
		Vector3__ctor_m148(&L_12, (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		__this->___velocity_12 = L_12;
		Transform_t34 * L_13 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Vector3_t12  L_14 = (__this->___velocity_12);
		NullCheck(L_13);
		Vector3_t12  L_15 = Transform_TransformDirection_m303(L_13, L_14, /*hidden argument*/NULL);
		__this->___velocity_12 = L_15;
		float L_16 = V_1;
		if ((!(((double)(((double)((double)L_16)))) > ((double)(0.1)))))
		{
			goto IL_00c0;
		}
	}
	{
		Vector3_t12  L_17 = (__this->___velocity_12);
		float L_18 = (__this->___forwardSpeed_6);
		Vector3_t12  L_19 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		__this->___velocity_12 = L_19;
		goto IL_00e7;
	}

IL_00c0:
	{
		float L_20 = V_1;
		if ((!(((double)(((double)((double)L_20)))) < ((double)(-0.1)))))
		{
			goto IL_00e7;
		}
	}
	{
		Vector3_t12  L_21 = (__this->___velocity_12);
		float L_22 = (__this->___backwardSpeed_7);
		Vector3_t12  L_23 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		__this->___velocity_12 = L_23;
	}

IL_00e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_24 = Input_GetButtonDown_m162(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0149;
		}
	}
	{
		AnimatorStateInfo_t57 * L_25 = &(__this->___currentBaseState_16);
		int32_t L_26 = AnimatorStateInfo_get_nameHash_m285(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var);
		int32_t L_27 = ((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___locoState_19;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_0149;
		}
	}
	{
		Animator_t49 * L_28 = (__this->___anim_15);
		NullCheck(L_28);
		bool L_29 = Animator_IsInTransition_m304(L_28, 0, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0149;
		}
	}
	{
		Rigidbody_t62 * L_30 = (__this->___rb_11);
		Vector3_t12  L_31 = Vector3_get_up_m269(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_32 = (__this->___jumpPower_9);
		Vector3_t12  L_33 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody_AddForce_m305(L_30, L_33, 2, /*hidden argument*/NULL);
		Animator_t49 * L_34 = (__this->___anim_15);
		NullCheck(L_34);
		Animator_SetBool_m279(L_34, _stringLiteral10, 1, /*hidden argument*/NULL);
	}

IL_0149:
	{
		Transform_t34 * L_35 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		Transform_t34 * L_36 = L_35;
		NullCheck(L_36);
		Vector3_t12  L_37 = Transform_get_localPosition_m306(L_36, /*hidden argument*/NULL);
		Vector3_t12  L_38 = (__this->___velocity_12);
		float L_39 = Time_get_fixedDeltaTime_m293(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t12  L_40 = Vector3_op_Multiply_m248(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		Vector3_t12  L_41 = Vector3_op_Addition_m150(NULL /*static, unused*/, L_37, L_40, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localPosition_m307(L_36, L_41, /*hidden argument*/NULL);
		Transform_t34 * L_42 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		float L_43 = V_0;
		float L_44 = (__this->___rotateSpeed_8);
		NullCheck(L_42);
		Transform_Rotate_m308(L_42, (0.0f), ((float)((float)L_43*(float)L_44)), (0.0f), /*hidden argument*/NULL);
		AnimatorStateInfo_t57 * L_45 = &(__this->___currentBaseState_16);
		int32_t L_46 = AnimatorStateInfo_get_nameHash_m285(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var);
		int32_t L_47 = ((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___locoState_19;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_01b7;
		}
	}
	{
		bool L_48 = (__this->___useCurves_4);
		if (!L_48)
		{
			goto IL_01b2;
		}
	}
	{
		UnityChanControlScriptWithRgidBody_resetCollider_m236(__this, /*hidden argument*/NULL);
	}

IL_01b2:
	{
		goto IL_0360;
	}

IL_01b7:
	{
		AnimatorStateInfo_t57 * L_49 = &(__this->___currentBaseState_16);
		int32_t L_50 = AnimatorStateInfo_get_nameHash_m285(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var);
		int32_t L_51 = ((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___jumpState_20;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_02de;
		}
	}
	{
		GameObject_t36 * L_52 = (__this->___cameraObject_17);
		NullCheck(L_52);
		GameObject_SendMessage_m309(L_52, _stringLiteral42, /*hidden argument*/NULL);
		Animator_t49 * L_53 = (__this->___anim_15);
		NullCheck(L_53);
		bool L_54 = Animator_IsInTransition_m304(L_53, 0, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_02d9;
		}
	}
	{
		bool L_55 = (__this->___useCurves_4);
		if (!L_55)
		{
			goto IL_02c8;
		}
	}
	{
		Animator_t49 * L_56 = (__this->___anim_15);
		NullCheck(L_56);
		float L_57 = Animator_GetFloat_m310(L_56, _stringLiteral43, /*hidden argument*/NULL);
		V_2 = L_57;
		Animator_t49 * L_58 = (__this->___anim_15);
		NullCheck(L_58);
		float L_59 = Animator_GetFloat_m310(L_58, _stringLiteral44, /*hidden argument*/NULL);
		V_3 = L_59;
		float L_60 = V_3;
		if ((!(((float)L_60) > ((float)(0.0f)))))
		{
			goto IL_0231;
		}
	}
	{
		Rigidbody_t62 * L_61 = (__this->___rb_11);
		NullCheck(L_61);
		Rigidbody_set_useGravity_m302(L_61, 0, /*hidden argument*/NULL);
	}

IL_0231:
	{
		Transform_t34 * L_62 = Component_get_transform_m142(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t12  L_63 = Transform_get_position_m143(L_62, /*hidden argument*/NULL);
		Vector3_t12  L_64 = Vector3_get_up_m269(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t12  L_65 = Vector3_op_Addition_m150(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		Vector3_t12  L_66 = Vector3_get_up_m269(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t12  L_67 = Vector3_op_UnaryNegation_m266(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		Ray__ctor_m311((&V_4), L_65, L_67, /*hidden argument*/NULL);
		Initobj (RaycastHit_t73_il2cpp_TypeInfo_var, (&V_5));
		Ray_t72  L_68 = V_4;
		bool L_69 = Physics_Raycast_m312(NULL /*static, unused*/, L_68, (&V_5), /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_02c8;
		}
	}
	{
		float L_70 = RaycastHit_get_distance_m313((&V_5), /*hidden argument*/NULL);
		float L_71 = (__this->___useCurvesHeight_5);
		if ((!(((float)L_70) > ((float)L_71))))
		{
			goto IL_02c2;
		}
	}
	{
		CapsuleCollider_t61 * L_72 = (__this->___col_10);
		float L_73 = (__this->___orgColHight_13);
		float L_74 = V_2;
		NullCheck(L_72);
		CapsuleCollider_set_height_m314(L_72, ((float)((float)L_73-(float)L_74)), /*hidden argument*/NULL);
		Vector3_t12 * L_75 = &(__this->___orgVectColCenter_14);
		float L_76 = (L_75->___y_2);
		float L_77 = V_2;
		V_6 = ((float)((float)L_76+(float)L_77));
		CapsuleCollider_t61 * L_78 = (__this->___col_10);
		float L_79 = V_6;
		Vector3_t12  L_80 = {0};
		Vector3__ctor_m148(&L_80, (0.0f), L_79, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_78);
		CapsuleCollider_set_center_m315(L_78, L_80, /*hidden argument*/NULL);
		goto IL_02c8;
	}

IL_02c2:
	{
		UnityChanControlScriptWithRgidBody_resetCollider_m236(__this, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		Animator_t49 * L_81 = (__this->___anim_15);
		NullCheck(L_81);
		Animator_SetBool_m279(L_81, _stringLiteral10, 0, /*hidden argument*/NULL);
	}

IL_02d9:
	{
		goto IL_0360;
	}

IL_02de:
	{
		AnimatorStateInfo_t57 * L_82 = &(__this->___currentBaseState_16);
		int32_t L_83 = AnimatorStateInfo_get_nameHash_m285(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var);
		int32_t L_84 = ((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___idleState_18;
		if ((!(((uint32_t)L_83) == ((uint32_t)L_84))))
		{
			goto IL_0329;
		}
	}
	{
		bool L_85 = (__this->___useCurves_4);
		if (!L_85)
		{
			goto IL_0304;
		}
	}
	{
		UnityChanControlScriptWithRgidBody_resetCollider_m236(__this, /*hidden argument*/NULL);
	}

IL_0304:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t42_il2cpp_TypeInfo_var);
		bool L_86 = Input_GetButtonDown_m162(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0324;
		}
	}
	{
		Animator_t49 * L_87 = (__this->___anim_15);
		NullCheck(L_87);
		Animator_SetBool_m279(L_87, _stringLiteral45, 1, /*hidden argument*/NULL);
	}

IL_0324:
	{
		goto IL_0360;
	}

IL_0329:
	{
		AnimatorStateInfo_t57 * L_88 = &(__this->___currentBaseState_16);
		int32_t L_89 = AnimatorStateInfo_get_nameHash_m285(L_88, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var);
		int32_t L_90 = ((UnityChanControlScriptWithRgidBody_t60_StaticFields*)UnityChanControlScriptWithRgidBody_t60_il2cpp_TypeInfo_var->static_fields)->___restState_21;
		if ((!(((uint32_t)L_89) == ((uint32_t)L_90))))
		{
			goto IL_0360;
		}
	}
	{
		Animator_t49 * L_91 = (__this->___anim_15);
		NullCheck(L_91);
		bool L_92 = Animator_IsInTransition_m304(L_91, 0, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_0360;
		}
	}
	{
		Animator_t49 * L_93 = (__this->___anim_15);
		NullCheck(L_93);
		Animator_SetBool_m279(L_93, _stringLiteral45, 0, /*hidden argument*/NULL);
	}

IL_0360:
	{
		return;
	}
}
// System.Void UnityChanControlScriptWithRgidBody::OnGUI()
extern TypeInfo* GUI_t67_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void UnityChanControlScriptWithRgidBody_OnGUI_m235 (UnityChanControlScriptWithRgidBody_t60 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_1 = {0};
		Rect__ctor_m259(&L_1, (((float)((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)260)))))), (10.0f), (250.0f), (150.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t67_il2cpp_TypeInfo_var);
		GUI_Box_m260(NULL /*static, unused*/, L_1, _stringLiteral46, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_3 = {0};
		Rect__ctor_m259(&L_3, (((float)((float)((int32_t)((int32_t)L_2-(int32_t)((int32_t)245)))))), (30.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_3, _stringLiteral47, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_5 = {0};
		Rect__ctor_m259(&L_5, (((float)((float)((int32_t)((int32_t)L_4-(int32_t)((int32_t)245)))))), (50.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_5, _stringLiteral48, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_7 = {0};
		Rect__ctor_m259(&L_7, (((float)((float)((int32_t)((int32_t)L_6-(int32_t)((int32_t)245)))))), (70.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_7, _stringLiteral49, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_9 = {0};
		Rect__ctor_m259(&L_9, (((float)((float)((int32_t)((int32_t)L_8-(int32_t)((int32_t)245)))))), (90.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_9, _stringLiteral50, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_11 = {0};
		Rect__ctor_m259(&L_11, (((float)((float)((int32_t)((int32_t)L_10-(int32_t)((int32_t)245)))))), (110.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_11, _stringLiteral51, /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m169(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t66  L_13 = {0};
		Rect__ctor_m259(&L_13, (((float)((float)((int32_t)((int32_t)L_12-(int32_t)((int32_t)245)))))), (130.0f), (250.0f), (30.0f), /*hidden argument*/NULL);
		GUI_Label_m261(NULL /*static, unused*/, L_13, _stringLiteral52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChanControlScriptWithRgidBody::resetCollider()
extern "C" void UnityChanControlScriptWithRgidBody_resetCollider_m236 (UnityChanControlScriptWithRgidBody_t60 * __this, const MethodInfo* method)
{
	{
		CapsuleCollider_t61 * L_0 = (__this->___col_10);
		float L_1 = (__this->___orgColHight_13);
		NullCheck(L_0);
		CapsuleCollider_set_height_m314(L_0, L_1, /*hidden argument*/NULL);
		CapsuleCollider_t61 * L_2 = (__this->___col_10);
		Vector3_t12  L_3 = (__this->___orgVectColCenter_14);
		NullCheck(L_2);
		CapsuleCollider_set_center_m315(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void prefabscript::.ctor()
extern "C" void prefabscript__ctor_m237 (prefabscript_t63 * __this, const MethodInfo* method)
{
	{
		__this->___f_Time_3 = (10.0f);
		MonoBehaviour__ctor_m131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void prefabscript::Start()
extern Il2CppCodeGenString* _stringLiteral53;
extern "C" void prefabscript_Start_m238 (prefabscript_t63 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t31 * L_0 = Resources_Load_m316(NULL /*static, unused*/, _stringLiteral53, /*hidden argument*/NULL);
		Vector3_t12  L_1 = {0};
		Vector3__ctor_m148(&L_1, (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_t65  L_2 = Quaternion_get_identity_m270(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_m254(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void prefabscript::Update()
extern "C" void prefabscript_Update_m239 (prefabscript_t63 * __this, const MethodInfo* method)
{
	{
		float L_0 = Random_Range_m278(NULL /*static, unused*/, (-50.0f), (50.0f), /*hidden argument*/NULL);
		float L_1 = Random_Range_m278(NULL /*static, unused*/, (-50.0f), (50.0f), /*hidden argument*/NULL);
		Vector3_t12  L_2 = {0};
		Vector3__ctor_m148(&L_2, L_0, (0.0f), L_1, /*hidden argument*/NULL);
		__this->___V3_Random_5 = L_2;
		float L_3 = (__this->___f_Time_3);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		float L_4 = (__this->___f_Time_3);
		float L_5 = Time_get_deltaTime_m137(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___f_Time_3 = ((float)((float)L_4-(float)L_5));
		goto IL_0077;
	}

IL_0055:
	{
		GameObject_t36 * L_6 = (__this->___Obj_Creat_2);
		Vector3_t12  L_7 = (__this->___V3_Random_5);
		Quaternion_t65  L_8 = Quaternion_get_identity_m270(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_m254(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___f_Time_3 = (10.0f);
	}

IL_0077:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
