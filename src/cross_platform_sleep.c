#include "cross_platform_sleep.h" // Include cross-platform sleep header

// Function to sleep for a specified number of milliseconds
void cross_platform_sleep(unsigned int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds); // Sleep function for Windows (Sleep takes milliseconds)
#else
    usleep(milliseconds * 1000); // Sleep function for POSIX systems (usleep takes microseconds)
#endif
}
