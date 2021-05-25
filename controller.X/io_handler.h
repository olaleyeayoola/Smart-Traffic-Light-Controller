#include "io_mapping.h"
void state_A()
{
//    turn on red light for traffic light A and B
    RED_LIGHT_A = 1;
    RED_LIGHT_B = 1;
    GREEN_LIGHT_C = 1;
    GREEN_LIGHT_D = 1;
    
//    delay time
    __delay_ms(LIGHT_TIME);
    
    //    turn on red light for traffic light A and B
    RED_LIGHT_A = 0;
    RED_LIGHT_B = 0;
    GREEN_LIGHT_C = 0;
    GREEN_LIGHT_D = 0;
}

void state_B()
{
//    turn on yellow light for all traffic light
    YELLOW_LIGHT_A = 1;
    YELLOW_LIGHT_B = 1;
    YELLOW_LIGHT_C = 1;
    YELLOW_LIGHT_D = 1;
    
//    delay time
    __delay_ms(YELLOW_LIGHT_TIME);
    
//    turn off yellow light for all traffic light
    YELLOW_LIGHT_A = 0;
    YELLOW_LIGHT_B = 0;
    YELLOW_LIGHT_C = 0;
    YELLOW_LIGHT_D = 0;
}

void state_C()
{
//    turn on red light for traffic light C and D and green for A and B 
    RED_LIGHT_C = 1;
    RED_LIGHT_D = 1;
    GREEN_LIGHT_A = 1;
    GREEN_LIGHT_B = 1;
    
//    delay time
    __delay_ms(LIGHT_TIME);
    
//    turn off red light for traffic light C and D and green for A and B
    RED_LIGHT_C = 0;
    RED_LIGHT_D = 0;
    GREEN_LIGHT_A = 0;
    GREEN_LIGHT_B = 0;
}