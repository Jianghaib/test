#pragma once
#include<tchar.h>
#include <minwindef.h>

#include "AZPlatform.h"
#include <processthreadsapi.h>
namespace AZ
{

#define LOG_BUFFER_SIZE 65536	 
	class AZSystem
	{
	public:
		static TCHAR ms_sLogBuffer[LOG_BUFFER_SIZE];
		static DWORD ms_dwMainThreadID;
	};

	inline void AZInitSystem()
	{
#ifdef WINDOWS_PLATFORM
		AZSystem::ms_dwMainThreadID = GetCurrentThreadId();
#else
		static_assert(0, "Implement!");
		return;
#endif
	}

	inline unsigned int AZGetCpuNum()
	{
#ifdef WINDOWS_PLATFORM
		SYSTEM_INFO SystemInfo;
#if _WIN64
		GetNativeSystemInfo(&SystemInfo);
#else
		GetSystemInfo(&SystemInfo);
#endif
		return SystemInfo.dwNumberOfProcessors;
#else
		static_assert(0, "No Implement!");
		return 1
#endif
	}
}



