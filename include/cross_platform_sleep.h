#ifndef CROSS_PLATFORM_SLEEP_H
#define CROSS_PLATFORM_SLEEP_H

#ifdef _WIN32
#include <windows.h> // Include Windows-specific sleep function
#else
#include <unistd.h> // Include POSIX sleep functions for Unix-like systems
#endif

/**
 * Function to sleep for a specified number of milliseconds.
 * This function provides a cross-platform way to pause execution.
 * @param milliseconds The number of milliseconds to sleep.
 */
void cross_platform_sleep(unsigned int milliseconds);

#endif // CROSS_PLATFORM_SLEEP_H
