#include "pch.h"
#include "AZSystem.h"

namespace AZ
{
	TCHAR AZSystem::ms_sLogBuffer[LOG_BUFFER_SIZE];
	DWORD AZSystem::ms_dwMainThreadID = 0;
}