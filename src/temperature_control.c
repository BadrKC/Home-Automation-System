#include <stdio.h>     // Standard I/O library for printf, scanf, etc.
#include <stdbool.h>   // Boolean type and values
#include "../include/user_interface.h" // Include header
#include "../include/temperature_control.h" // Header file for temperature control functions
#include "../include/config.h" // Include header
#include "../include/cross_platform_sleep.h" // Include cross-platform sleep header
#include <math.h>



void setRoomTemperature(float* currentTemperature,float temperatureset){
    *currentTemperature = temperatureset;
}

void adjustRoomTemperature(float* currentTemperature, bool* AC_State){
    const float tolerance = 0.1;

    while (fabs(*currentTemperature - OPTIMAL_TEMPERATURE) > tolerance)
    {
    if (*currentTemperature < OPTIMAL_TEMPERATURE)
    {
        *AC_State = ON;
        *currentTemperature += TEMPERATURE_INCREMENTER;
        cross_platform_sleep(10);
    }
    else if (*currentTemperature > OPTIMAL_TEMPERATURE)
    {
        *AC_State = ON;
        *currentTemperature -= TEMPERATURE_INCREMENTER;
        cross_platform_sleep(10);
    }
    printf("\t\t\tThe current temperature is %.2f and the AC is ON \n",*currentTemperature);
    }
    // Final adjustment to ensure the temperature is exactly optimal
    if (fabs(*currentTemperature - OPTIMAL_TEMPERATURE) <= tolerance) {
        *currentTemperature = OPTIMAL_TEMPERATURE;
        printf("\t\t\tThe current temperature is exactly %.2f and the AC is ON \n", *currentTemperature);
    }
}

// Function to display the current temperature
void displayTemperature(float currentTemperature){
    printf("The ambient temperature is %.2f\n", currentTemperature);
}

#ifdef TESTING
// Test core functionalities
int main(){
displayTemperature();
setRoomTemperature(45.75);
displayTemperature();
adjustRoomTemperature();
displayTemperature();
}
#endif