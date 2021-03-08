#pragma once

#ifdef YK_PLATFORM_WINDOWS
	#ifdef YK_BUILD_DLL
		#define YOKE_API __declspec(dllexport)
	#else
		#define YOKE_API __declspec(dllimport)
	#endif
#else
	#error Yoke only supports Windows!
#endif