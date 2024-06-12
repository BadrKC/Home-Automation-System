#ifndef SECURITY_SYSTEM_H
#define SECURITY_SYSTEM_H

// Define constants for the security system states
#define ON 1
#define OFF 0

// Function Declarations

/**
 * @brief Arms the security system.
 */
void armSystem();

/**
 * @brief Disarms the security system.
 */
void disarmSystem();

/**
 * @brief Checks the current status of the security system.
 * @return true if the security system is armed (ON), false if it is disarmed (OFF).
 */
bool checkSystemStatus();

#endif // SECURITY_SYSTEM_H
