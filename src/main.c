#include <stdio.h>
#include "../include/user_interface.h" // Include header for user interface functions
#include "../include/cross_platform_sleep.h" // Include cross-platform sleep header

int main() {
    // Main loop to keep the program running indefinitely
    while (1) {
        runHomeAutomationSystem(); // Call the function to run the home automation system tasks
        cross_platform_sleep(1000); // Sleep for 1 second to reduce CPU usage
    }

    return 0; // Return 0 to indicate successful execution
}
