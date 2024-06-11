#include "cross_platform_sleep.h"

void cross_platform_sleep(unsigned int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000); // usleep takes microseconds
#endif
}
