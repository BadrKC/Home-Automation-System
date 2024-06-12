#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H

// Define the value by which the temperature is adjusted
#define TEMPERATURE_INCREMENTER 0.1

// Define the optimal temperature setting
#define OPTIMAL_TEMPERATURE 20

// Define constants to represent the ON and OFF states
#define ON 1
#define OFF 0

// Function Declarations

/**
 * Sets the room temperature to the specified value.
 * @param currentTemperature Pointer to the current temperature variable.
 * @param temperatureset The desired temperature to set.
 */
void setRoomTemperature(float* currentTemperature, float temperatureset);

/**
 * Adjusts the room temperature based on the current state of the AC.
 * @param currentTemperature Pointer to the current temperature variable.
 * @param AC_State Pointer to the AC state variable (ON or OFF).
 */
void adjustRoomTemperature(float* currentTemperature, bool* AC_State);

/**
 * Displays the current room temperature.
 * @param currentTemperature The current temperature to display.
 */
void displayTemperature(float currentTemperature);

#endif // TEMPERATURE_CONTROL_H