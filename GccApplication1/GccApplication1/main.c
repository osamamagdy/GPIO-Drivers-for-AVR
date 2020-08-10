/*
 * GccApplication1.c
 *
 * Created: 7/9/2020 9:40:50 AM
 * Author : Osama Magdy
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	// Initialize 
	
	DDRA = 0x00;
	DDRB = 0x00;
	DDRD = 0xFF;
	
	
    /* Replace with your application code */
    while (1) 
    {
		PORTD = PINA + PINB ;
		_delay_ms(500);
    }
}

