#pragma once

#if _WIN32
#define WINDOWS_PLATFORM 1
#endif


#if WINDOWS_PLATFORM
#if _WIN64
#define SYSTEM_BIT_WIDTH 64
#endif
#endif


