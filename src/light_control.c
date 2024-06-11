#include <stdio.h> // Include the standard I/O library for printf function
#include <stdbool.h>          // Include standard library for boolean type
#include "../include/light_control.h" // Include header for light control functions
#include "../include/config.h" // Include header

static bool lights = false;

void turnOnLight(){
    lights = true;
}

void turnOffLight(){
    lights = false;
}

void toggleLight(){
    lights = !lights;
}

void displayLightState(){
    if (lights == false) {
        printf("Light is: OFF\n"); // Print message indicating that the lights are off
    } else {
        printf("Light is: ON\n"); // Print message indicating that the lights are on
    }
}

#ifdef TESTING
// For testing purpose
int main(){
    turnOnLight();
    displayLightState();
    turnOffLight();
    displayLightState();
    toggleLight();
    displayLightState();
    return 0;
}
#endif