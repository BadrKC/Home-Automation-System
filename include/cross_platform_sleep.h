#ifndef CROSS_PLATFORM_SLEEP_H
#define CROSS_PLATFORM_SLEEP_H

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void cross_platform_sleep(unsigned int milliseconds);

#endif // CROSS_PLATFORM_SLEEP_H
