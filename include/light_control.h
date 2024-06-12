#ifndef LIGHT_CONTROL_H
#define LIGHT_CONTROL_H

// Function Declarations

/**
 * @brief Turns on the light.
 */
void turnOnLight();

/**
 * @brief Turns off the light.
 */
void turnOffLight();

/**
 * @brief Toggles the light state.
 * If the light is on, it will be turned off.
 * If the light is off, it will be turned on.
 */
void toggleLight();

/**
 * @brief Displays the current state of the light.
 * Prints whether the light is ON or OFF.
 */
void displayLightState();

#endif // LIGHT_CONTROL_H
