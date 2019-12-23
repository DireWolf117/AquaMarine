#pragma once

#ifdef AQMR_PLATFORM_WINDOWS
	#ifdef AQMR_BUILD_DLL
		#define AQUAMARINE_API _declspec(dllexport)
	#else
		#define AQUAMARINE_API _declspec(dllimport)

	#endif

#endif	