#include <stdio.h> // Include standard I/O library for printf and scanf functions
#include <stdbool.h> // Boolean type and values
#include "../include/light_control.h" // Include header for light control functions
#include "../include/temperature_control.h" // Header file for temperature control functions
#include "../include/security_control.h" // Include header for security control functions
#include "../include/user_interface.h" // Include header for user interface functions
#include "../include/config.h" // Include configuration header
#include "../include/cross_platform_sleep.h" // Include cross-platform sleep header

void runHomeAutomationSystem() {
    int choice; // Variable to store the user's menu choice
    float currentTemperature = 55; // Initialize current temperature
    bool AC_State = OFF; // Initialize AC state

    while (1) {
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
        if (scanf("%d", &choice) != 1) {
            // If scanf fails, clear the input buffer and print an error message
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid input. Please enter a number between 1 and 9.\n");
            continue;
        }

        // Validate the input
        if (choice < 1 || choice > 9) {
            printf("Your choice is not valid. Please enter a number between 1 and 9.\n");
            continue;
        }

        // Execute the appropriate action based on user's choice
        switch (choice) {
            case 1:
                turnOnLight(); // Turn on the light
                displayLightState(); // Display the current state of the light
                break;
            case 2:
                turnOffLight(); // Turn off the light
                displayLightState(); // Display the current state of the light
                break;
            case 3:
                setRoomTemperature(&currentTemperature, 18.5); // Set room temperature
                break;
            case 4:
                adjustRoomTemperature(&currentTemperature, &AC_State); // Adjust room temperature based on current conditions
                break;
            case 5:
                armSystem(); // Activate security system
                break;
            case 6:
                disarmSystem(); // Deactivate security system
                break;
            case 7:
                // Display the current state of the security system
                printf("The Security system is %s\n", checkSystemStatus() ? "active" : "inactive");
                break;
            case 8:
                displayTemperature(currentTemperature); // Display the current temperature
                break;
            case 9:
                printf("Exiting the system...\n");
                return; // Exit the loop and the function, returning control to main(), which then returns 0.
            default:
                printf("Your choice is not valid\n");
                break; // Default case if no valid choice is entered
        }
        cross_platform_sleep(2000); // Sleep for 2 second to reduce CPU usage
    }
}

#ifdef TESTING
int main() {
    // Main loop to keep the program running
    while (1) {
        runHomeAutomationSystem(); // Run the home automation system
    }
    return 0; // Return 0 to indicate successful execution
}
#endif
