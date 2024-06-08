#ifndef TEMPERATURE_CONTROL_H
#define TEMPERATURE_CONTROL_H


#define TEMPERATURE_INCREMENTER 1
#define OPTIMAL_TEMPERATURE 20
#define ON 1
#define OFF 0


// Function Declarations
void setRoomTemperature(float temperatureset);
void adjustRoomTemperature();
void displayTemperature(void);

#endif // TEMPERATURE_CONTROL_H

