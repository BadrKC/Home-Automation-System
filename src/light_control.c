#include <stdio.h> // Include the standard I/O library for printf function
#include <stdbool.h>          // Include standard library for boolean type
#include "../include/light_control.h" // Include header for light control functions

bool lights = 0;

void turnOnLight(){
    lights = 1;
}

void turnOffLight(){
    lights = 0;
}

void toggleLight(){
    lights = ~lights;
}

void displayLightState(){
    if (lights == 0) {
        printf(" ight is: OFF\n"); // Print message indicating that the lights are off
    } else {
        printf("Light is: ON\n"); // Print message indicating that the lights are on
    }
}

// For testing purpose
// int main(){
//     turnOnLight();
//     displayLightState();
//     turnOffLight();
//     displayLightState();
//     toggleLight();
//     displayLightState();
// }