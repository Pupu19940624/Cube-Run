﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t571;

#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t429  : public UserProfile_t570
{
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t571* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;
};
