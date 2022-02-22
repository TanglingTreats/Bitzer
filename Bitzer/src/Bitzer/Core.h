#pragma once

#ifdef BZ_PLATFORM_WINDOWS
	#ifdef BZ_BUILD_DLL
		#define	BITZER_API __declspec(dllexport) 
	#else
		#define  BITZER_API __declspec(dllimport)
	#endif
#else
	#error Bitzer only supports Windows!

#endif
