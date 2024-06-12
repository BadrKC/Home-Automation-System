#include <stdio.h> // Include the standard I/O library for printf function
#include <stdbool.h> // Include standard library for boolean type
#include "../include/light_control.h" // Include header for light control functions
#include "../include/config.h" // Include configuration header

// Static variable to keep track of the light state
static bool lights = false;

/**
 * Function to turn on the light.
 */
void turnOnLight() {
    lights = true;
}

/**
 * Function to turn off the light.
 */
void turnOffLight() {
    lights = false;
}

/**
 * Function to toggle the light state.
 */
void toggleLight() {
    lights = !lights;
}

/**
 * Function to display the current light state.
 */
void displayLightState() {
    if (lights == false) {
        printf("Light is: OFF\n"); // Print message indicating that the light is off
    } else {
        printf("Light is: ON\n"); // Print message indicating that the light is on
    }
}

#ifdef TESTING
// Main function for testing purposes
int main() {
    turnOnLight(); // Turn on the light
    displayLightState(); // Display the current light state
    turnOffLight(); // Turn off the light
    displayLightState(); // Display the current light state
    toggleLight(); // Toggle the light state
    displayLightState(); // Display the current light state
    return 0;
}
#endif
