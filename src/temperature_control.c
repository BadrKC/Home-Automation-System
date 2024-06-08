#include <stdio.h>     // Standard I/O library for printf, scanf, etc.
#include <stdbool.h>   // Boolean type and values
#include <windows.h>
#include "../include/temperature_control.h" // Header file for temperature control functions

float currentTemperature = 55;
bool AC_State = OFF;


void setRoomTemperature(float temperatureset){
    currentTemperature = temperatureset;
}

void adjustRoomTemperature(){

    while (currentTemperature != OPTIMAL_TEMPERATURE)
    {
    if (currentTemperature < OPTIMAL_TEMPERATURE)
    {
        AC_State = ON;
        currentTemperature += TEMPERATURE_INCREMENTER;
        Sleep(100);
        printf("\t\t\tThe current temperature is %.2f and the AC is ON \n",currentTemperature);
    }
    else if (currentTemperature > OPTIMAL_TEMPERATURE)
    {
        AC_State = ON;
        currentTemperature -= TEMPERATURE_INCREMENTER;
        Sleep(100);
        printf("\t\t\tThe current temperature is %.2f and the AC is ON \n",currentTemperature);        
    }else
    {
        /* Nothing to do */
    }
    }
}
// Function to display the current temperature
void displayTemperature(void){
    printf("The ambiant temperature is %.2f\n", currentTemperature);
}

// Test core functionalities
int main(){
displayTemperature();
setRoomTemperature(45.75);
displayTemperature();
adjustRoomTemperature();
displayTemperature();

}