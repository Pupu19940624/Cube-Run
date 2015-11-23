#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t36;
// UnityEngine.Transform
struct Transform_t34;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// prefabscript
struct  prefabscript_t63  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject prefabscript::Obj_Creat
	GameObject_t36 * ___Obj_Creat_2;
	// System.Single prefabscript::f_Time
	float ___f_Time_3;
	// UnityEngine.Transform prefabscript::Tran_CreatPoint
	Transform_t34 * ___Tran_CreatPoint_4;
	// UnityEngine.Vector3 prefabscript::V3_Random
	Vector3_t12  ___V3_Random_5;
};
