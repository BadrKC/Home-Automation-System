#include <stdio.h>
#include <stdbool.h>
#include "../include/security_control.h" // Include header 
#include "../include/config.h" // Include header

static bool securityState = OFF;

void armSystem(){
    securityState = ON;
}

void disarmSystem(){
    securityState = OFF;
}

void checkSystemStatus(){
    if (securityState == ON)
    {
        printf("Security system activated.\n");
    }else
    {
        printf("Security system inactive.\n");
    }
}

#ifdef TESTING
// for testing purpose
int main(){
    armSystem();
    checkSystemStatus();
    disarmSystem();
    checkSystemStatus();
    return 0;
}
#endif