#include "config.h"
#include <xc.h>
#include "io_mapping.h"
#include "io_handler.h"

void main(void) {
    TRISB = 0x00;
    PORTB = 0x00;
    TRISD = 0x00;
    PORTD = 0x00;
    TRISC = 0x00;
    PORTC = 0x00;
    TRISA = 0xFF;
    PORTA = 0xFF;
    
    while(1)
    {
        state_A();
        state_B();
        state_C();
        state_B();
    }
    return;
}
