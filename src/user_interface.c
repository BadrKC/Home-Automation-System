#include <stdio.h> // Include standard I/O library for printf and scanf functions
#include "../include/light_control.h" // Include header for light control functions
#include "../include/temperature_control.h" // Header file for temperature control functions
#include "../include/security_control.h" // Include header
#include "../include/user_interface.h" // Include header
#include "../include/config.h" // Include header

    // * Integrate functions to display current temperature, AC state, light status, and security system status.
    // * Ensure real-time updates in the main program.

void runHomeAutomationSystem(){
    int choice; // Variable to store the user's menu choice

    // Display the main menu
    printf("\nHome Automation System\n");
    printf(" 1. Turn on Light\n");
    printf(" 2. Turn off Light\n");
    printf(" 3. Set Temperature\n");
    printf(" 4. Adjust Room Temperature\n");
    printf(" 5. Activate Security\n");
    printf(" 6. Deactivate Security\n");
    printf(" 7. Display Security State\n");
    printf(" 8. Display Temperature\n");
    printf(" 9. Exit\n");
    printf(" Enter your choice please:\n");

    // Read user input
    scanf("%d", &choice);

    // Execute the appropriate action based on user's choice
    switch (choice) {
        case 1:
            turnOnLight();
            displayLightState();
            break;
        case 2:
            turnOffLight();
            displayLightState();
            break;
        case 3:
            setRoomTemperature(40.5);
            break;
        case 4:
            adjustRoomTemperature();
            break;
        case 5:
            armSystem(); 
            break;
        case 6:
            disarmSystem(); 
            break;
        case 7:
            checkSystemStatus(); 
            break;
        case 8:
            displayTemperature(); 
            break;
        default:
            printf("Your choice is not valid\n");
            break; // Default case if no valid choice is entered
    }
}

#ifdef TESTING
int main() {
    // Main loop to keep the program running
    while (1) {
        runHomeAutomationSystem();
    }
    return 0;
}
#endif
