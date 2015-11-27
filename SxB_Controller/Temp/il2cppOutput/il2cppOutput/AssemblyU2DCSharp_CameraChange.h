#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CameraChange
struct  CameraChange_t8  : public MonoBehaviour_t2
{
	// UnityEngine.Camera CameraChange::TopCamera
	Camera_t9 * ___TopCamera_2;
	// UnityEngine.Camera CameraChange::MainCamera
	Camera_t9 * ___MainCamera_3;
	// System.Boolean CameraChange::cameraFlg
	bool ___cameraFlg_4;
};
