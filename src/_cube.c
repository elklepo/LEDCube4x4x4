#include <avr/io.h>
#include <avr/interrupt.h>
#include <util\delay.h>
#include "_cube.h"

volatile uint16_t anody[4];
volatile uint32_t pomoc_32[4];


void _init()
{
	LED_DDR |= (1<<DATA)|(1<<CLOCK)|(1<<LATCH);
	LED_PORT &=~ ((1<<DATA)|(1<<CLOCK)|(1<<LATCH));
	TCCR0A |= (1<<WGM01);
	TCCR0B |= (1<<CS02) | (1<<CS00);
	OCR0A = 76;
	TIMSK |= (1<<OCIE0A);
}

ISR(TIMER0_COMPA_vect)
{
	static uint8_t licznik = 0;
	static uint8_t katody = 8;

	for(uint8_t i=0;i<8;++i)
	{
		if((katody>>i) & 0x01)
			LED_PORT |= (1<<DATA);
		else
			LED_PORT &= ~(1<<DATA);

		LED_PORT |= (1<<CLOCK);
		LED_PORT &= ~(1<<CLOCK);

	}
	for(uint8_t i=0;i<16;++i)
	{
		if((anody[licznik]>>(i+8)%16) & 0x0001)
			LED_PORT &= ~(1<<DATA);
		else
			LED_PORT |= (1<<DATA);

		LED_PORT |= (1<<CLOCK);
		LED_PORT &= ~(1<<CLOCK);
	}

	LED_PORT |= (1<<LATCH);
	LED_PORT &= ~(1<<LATCH);

	katody <<= 1;
	licznik++;
	if(licznik == 4)
	{
		licznik = 0;
		katody = 1;
	}
}

