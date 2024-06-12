#include <stdio.h> // Include the standard I/O library for printf function
#include <stdbool.h> // Include the standard library for boolean type
#include "../include/security_control.h" // Include header for security control functions
#include "../include/config.h" // Include configuration header

// Static variable to keep track of the security state
static bool securityState = OFF;

/**
 * Function to arm the security system.
 */
void armSystem() {
    securityState = ON;
}

/**
 * Function to disarm the security system.
 */
void disarmSystem() {
    securityState = OFF;
}

/**
 * Function to check the status of the security system.
 * @return true if the security system is armed, false otherwise.
 */
bool checkSystemStatus() {
    return (securityState == ON);
}

#ifdef TESTING
// Main function for testing purposes
int main() {
    armSystem(); // Arm the security system
    checkSystemStatus(); // Check and return the status of the security system
    disarmSystem(); // Disarm the security system
    checkSystemStatus(); // Check and return the status of the security system
    return 0;
}
#endif
