#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H


#define TEMPERATURE_INCREMENTER 0.1
#define OPTIMAL_TEMPERATURE 20
#define ON 1
#define OFF 0


// Function Declarations
void setRoomTemperature(float* currentTemperature,float temperatureset);
void adjustRoomTemperature(float* currentTemperature, bool* AC_State);
void displayTemperature(float currentTemperature);

#endif // TEMPERATURE_CONTROL_H

