#ifndef _cube_h
#define _cube_h

#define LED_DDR DDRB
#define LED_PORT PORTB
#define DATA PB2
#define CLOCK PB1
#define LATCH PB0

extern volatile uint16_t anody[4];
extern volatile uint32_t pomoc_32[4];

void _init(void);

#endif
