#include <stdio.h>     // Standard I/O library for printf, scanf, etc.
#include <stdbool.h>   // Boolean type and values
#include "../include/temperature_control.h" // Header file for temperature control functions
#include "../include/config.h" // Include header
#include "../include/cross_platform_sleep.h" // Include cross-platform sleep header

float currentTemperature = 55;
bool AC_State = OFF;


void setRoomTemperature(float temperatureset){
    currentTemperature = temperatureset;
}

void adjustRoomTemperature(){

    while ((int)currentTemperature != OPTIMAL_TEMPERATURE)
    {
    if (currentTemperature < OPTIMAL_TEMPERATURE)
    {
        AC_State = ON;
        currentTemperature += TEMPERATURE_INCREMENTER;
        cross_platform_sleep(100);
    }
    else if (currentTemperature > OPTIMAL_TEMPERATURE)
    {
        AC_State = ON;
        currentTemperature -= TEMPERATURE_INCREMENTER;
        cross_platform_sleep(100);
    }else
    {
        /* Nothing to do */
    }
    printf("\t\t\tThe current temperature is %.2f and the AC is ON \n",currentTemperature);
    }
}
// Function to display the current temperature
void displayTemperature(void){
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