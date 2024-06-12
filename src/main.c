#include <stdio.h>
#include "../include/user_interface.h" // Include header
#include "../include/cross_platform_sleep.h" // Include cross-platform sleep header

int main() {

    // Main loop to keep the program running
        runHomeAutomationSystem();
        cross_platform_sleep(1000);// Sleep for 1 second to reduce CPU usage
        
    return 0;
}
