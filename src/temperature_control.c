#include <stdio.h>     // Standard I/O library for printf, scanf, etc.
#include <stdbool.h>   // Boolean type and values
#include "../include/user_interface.h" // Include header for user interface functions
#include "../include/temperature_control.h" // Header file for temperature control functions
#include "../include/config.h" // Include configuration header
#include "../include/cross_platform_sleep.h" // Include cross-platform sleep header
#include <math.h> // Standard math library for mathematical functions

/**
 * Function to set the room temperature to a specified value.
 * @param currentTemperature Pointer to the current temperature variable.
 * @param temperatureset The desired temperature to set.
 */
void setRoomTemperature(float* currentTemperature, float temperatureset) {
    *currentTemperature = temperatureset;
}

/**
 * Function to adjust the room temperature to the optimal value.
 * @param currentTemperature Pointer to the current temperature variable.
 * @param AC_State Pointer to the air conditioning state variable.
 */
void adjustRoomTemperature(float* currentTemperature, bool* AC_State) {
    const float tolerance = 0.1; // Tolerance level for temperature adjustment

    // Adjust the temperature until it is within the tolerance of the optimal temperature
    while (fabs(*currentTemperature - OPTIMAL_TEMPERATURE) > tolerance) {
        if (*currentTemperature < OPTIMAL_TEMPERATURE) {
            *AC_State = ON;
            *currentTemperature += TEMPERATURE_INCREMENTER; // Increment temperature
            cross_platform_sleep(10); // Sleep for 10 milliseconds
        } else if (*currentTemperature > OPTIMAL_TEMPERATURE) {
            *AC_State = ON;
            *currentTemperature -= TEMPERATURE_INCREMENTER; // Decrement temperature
            cross_platform_sleep(10); // Sleep for 10 milliseconds
        }
        printf("\t\t\tThe current temperature is %.2f and the AC is ON \n", *currentTemperature);
    }

    // Final adjustment to ensure the temperature is exactly optimal
    if (fabs(*currentTemperature - OPTIMAL_TEMPERATURE) <= tolerance) {
        *currentTemperature = OPTIMAL_TEMPERATURE;
        printf("\t\t\tThe current temperature is exactly %.2f and the AC is ON \n", *currentTemperature);
    }
}

/**
 * Function to display the current temperature.
 * @param currentTemperature The current temperature value.
 */
void displayTemperature(float currentTemperature) {
    printf("The ambient temperature is %.2f\n", currentTemperature);
}

#ifdef TESTING
// Main function for testing core functionalities
int main() {
    float temperature = 22.0; // Example temperature
    bool AC_State = OFF; // Example AC state

    displayTemperature(temperature); // Display initial temperature
    setRoomTemperature(&temperature, 45.75); // Set room temperature
    displayTemperature(temperature); // Display updated temperature
    adjustRoomTemperature(&temperature, &AC_State); // Adjust room temperature
    displayTemperature(temperature); // Display final temperature

    return 0;
}
#endif
