#include <stdio.h>
#include <stdbool.h>
#include "../include/security_control.h" // Include header 

    // * Implement basic security system control functions (e.g., `armSystem`, `disarmSystem`, `checkSystemStatus`).
    // * Implement function to display security system status.
    // * Test security system functionalities.

bool securityState = OFF;

void armSystem(){
    securityState = ON;
    // printf("Security system activated.\n");
}
void disarmSystem(){
    securityState = OFF;
    // printf("Security system deactivated.\n");
}

void checkSystemStatus(){
    if (securityState == ON)
    {
        printf("Security system activate.\n");

    }else
    {
        printf("Security system inactivate.\n");
    }
    
}
// for testing purpose

int main(){
    armSystem();
    checkSystemStatus();
    disarmSystem();
    checkSystemStatus();
}

#endif