#include <avr/io.h>
#include <avr/interrupt.h>
#include <util\delay.h>
#include "_moves.h"

volatile uint16_t anody[4];
volatile uint32_t pomoc_32[4];

void dwa_szesciany()
{
	uint8_t delay = 150;
	uint8_t licznik = 0;

	for (licznik = 0 ; licznik < 4 ; licznik++)
	{
		anody[0]=0x0033;
		anody[1]=0x0033;
		anody[2]=0xCC00;
		anody[3]=0xCC00;
		_delay_ms(delay);
		anody[0]=0x0000;
		anody[1]=0xCC33;
		anody[2]=0xCC33;
		anody[3]=0x0000;
		_delay_ms(delay);
		anody[0]=0xCC00;
		anody[1]=0xCC00;
		anody[2]=0x0033;
		anody[3]=0x0033;
		_delay_ms(delay);
		anody[0]=0x6600;
		anody[1]=0x6600;
		anody[2]=0x0066;
		anody[3]=0x0066;
		_delay_ms(delay);
		anody[0]=0x3300;
		anody[1]=0x3300;
		anody[2]=0x00CC;
		anody[3]=0x00CC;
		_delay_ms(delay);
		anody[0]=0x0330;
		anody[1]=0x0330;
		anody[2]=0x0CC0;
		anody[3]=0x0CC0;
		_delay_ms(delay);
	}
}

void wir()
{
	uint8_t delay = 100;
	uint8_t licznik = 0;
	for (licznik = 0 ; licznik < 3 ; licznik++)
	{
		anody[0]=0x0F00;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x00F0;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x000F;
		anody[2]=0x0;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x0;
		anody[2]=0x000F;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0x00F0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0x0F00;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x0;
		anody[2]=0xF000;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0xF000;
		anody[2]=0x0;
		anody[3]=0x0;
		_delay_ms(delay);
	}
	anody[0]=0x0F00;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x00F0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x0FF0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0xF00F;
	anody[3]=0x0FF0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0xF00F;
	anody[2]=0xF00F;
	anody[3]=0x0FF0;
	_delay_ms(2*delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0xF00F;
	anody[3]=0x0FF0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x0FF0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x00F0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x000F;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0FF0;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0F00;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);


}

void maly_duzy()
{
	uint8_t delay = 100;
	uint8_t licznik = 0;
	for (licznik = 0 ; licznik < 3 ; licznik++)
	{
		anody[0]=0x1111;
		anody[1]=0x1881;
		anody[2]=0x1881;
		anody[3]=0x1111;
		_delay_ms(delay);
		anody[0]=0x2222;
		anody[1]=0x2442;
		anody[2]=0x2442;
		anody[3]=0x2222;
		_delay_ms(delay);
		anody[0]=0x4444;
		anody[1]=0x4224;
		anody[2]=0x4224;
		anody[3]=0x4444;
		_delay_ms(delay);
		anody[0]=0x8888;
		anody[1]=0x8118;
		anody[2]=0x8118;
		anody[3]=0x8888;
		_delay_ms(2*delay);
		anody[0]=0x4444;
		anody[1]=0x4224;
		anody[2]=0x4224;
		anody[3]=0x4444;
		_delay_ms(delay);
		anody[0]=0x2222;
		anody[1]=0x2442;
		anody[2]=0x2442;
		anody[3]=0x2222;
		_delay_ms(delay);
		anody[0]=0x1111;
		anody[1]=0x1881;
		anody[2]=0x1881;
		anody[3]=0x1111;
		_delay_ms(delay);
	}
	for (licznik = 0 ; licznik < 3 ; licznik++)
	{
		anody[0]=0x0660;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0xF99F;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x0660;
		anody[2]=0xF99F;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0xF99F;
		anody[2]=0x0660;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0xF99F;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0x0660;
		_delay_ms(2*delay);
		anody[0]=0x0;
		anody[1]=0xF99F;
		anody[2]=0x0660;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0x0660;
		anody[2]=0xF99F;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0660;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0xF99F;
		_delay_ms(delay);
	}
}

void przewracanie_do_mnie()
{
	uint8_t delay = 100;

	anody[0]=0xFFFF;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x00FF;
	anody[1]=0xFF00;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x000F;
	anody[1]=0x00F0;
	anody[2]=0x0F00;
	anody[3]=0xF000;
	_delay_ms(delay);
	anody[0]=0x000F;
	anody[1]=0x000F;
	anody[2]=0x00F0;
	anody[3]=0x00F0;
	_delay_ms(delay);
	anody[0]=0x000F;
	anody[1]=0x000F;
	anody[2]=0x000F;
	anody[3]=0x000F;
	_delay_ms(2*delay);

	anody[0]=0x00F0;
	anody[1]=0x00F0;
	anody[2]=0x000F;
	anody[3]=0x000F;
	_delay_ms(delay);
	anody[0]=0xF000;
	anody[1]=0x0F00;
	anody[2]=0x00F0;
	anody[3]=0x000F;
	_delay_ms(delay);
	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0xFF00;
	anody[3]=0x00FF;
	_delay_ms(delay);
	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0x00;
	anody[3]=0xFFFF;
	_delay_ms(2*delay);
	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0x00FF;
	anody[3]=0xFF00;
	_delay_ms(delay);
	anody[0]=0x000F;
	anody[1]=0x00F0;
	anody[2]=0x0F00;
	anody[3]=0xF000;
	_delay_ms(delay);
	anody[0]=0x0F00;
	anody[1]=0x0F00;
	anody[2]=0xF000;
	anody[3]=0xF000;
	_delay_ms(delay);
	anody[0]=0xF000;
	anody[1]=0xF000;
	anody[2]=0xF000;
	anody[3]=0xF000;
	_delay_ms(2*delay);

	anody[0]=0xF000;
	anody[1]=0xF000;
	anody[2]=0x0F00;
	anody[3]=0x0F00;
	_delay_ms(delay);
	anody[0]=0xF000;
	anody[1]=0x0F00;
	anody[2]=0x00F0;
	anody[3]=0x000F;
	_delay_ms(delay);
	anody[0]=0xFF00;
	anody[1]=0x00FF;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0xFFFF;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
}

void przewracanie_do_boku()
{
	uint8_t delay = 100;

	anody[0]=0xFFFF;
	anody[1]=0x0;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0xCCCC;
	anody[1]=0x3333;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0x8888;
	anody[1]=0x4444;
	anody[2]=0x2222;
	anody[3]=0x1111;
	_delay_ms(delay);
	anody[0]=0x8888;
	anody[1]=0x8888;
	anody[2]=0x4444;
	anody[3]=0x4444;
	_delay_ms(delay);
	anody[0]=0x8888;
	anody[1]=0x8888;
	anody[2]=0x8888;
	anody[3]=0x8888;
	_delay_ms(2*delay);

	anody[0]=0x4444;
	anody[1]=0x4444;
	anody[2]=0x8888;
	anody[3]=0x8888;
	_delay_ms(delay);
	anody[0]=0x1111;
	anody[1]=0x2222;
	anody[2]=0x4444;
	anody[3]=0x8888;
	_delay_ms(delay);
	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0x3333;
	anody[3]=0xCCCC;
	_delay_ms(delay);
	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0x00;
	anody[3]=0xFFFF;
	_delay_ms(2*delay);

	anody[0]=0x0;
	anody[1]=0x0;
	anody[2]=0xCCCC;
	anody[3]=0x3333;
	_delay_ms(delay);
	anody[0]=0x8888;
	anody[1]=0x4444;
	anody[2]=0x2222;
	anody[3]=0x1111;
	_delay_ms(delay);
	anody[0]=0x2222;
	anody[1]=0x2222;
	anody[2]=0x1111;
	anody[3]=0x1111;
	_delay_ms(delay);
	anody[0]=0x1111;
	anody[1]=0x1111;
	anody[2]=0x1111;
	anody[3]=0x1111;
	_delay_ms(2*delay);

	anody[0]=0x1111;
	anody[1]=0x1111;
	anody[2]=0x2222;
	anody[3]=0x2222;
	_delay_ms(delay);
	anody[0]=0x1111;
	anody[1]=0x2222;
	anody[2]=0x4444;
	anody[3]=0x8888;
	_delay_ms(delay);
	anody[0]=0x3333;
	anody[1]=0xCCCC;
	anody[2]=0x0;
	anody[3]=0x0;
	_delay_ms(delay);
	anody[0]=0xFFFF;
		anody[1]=0x0;
		anody[2]=0x0;
		anody[3]=0x0;
		_delay_ms(delay);
}
void szachownica()
{
	uint8_t delay = 200;
	uint8_t licznik = 0;
	for (licznik = 0 ; licznik < 3 ; licznik++)
	{
		anody[0]=0xFFFF;
		anody[1]=0x0;
		anody[2]=0xFFFF;
		anody[3]=0x0;
		_delay_ms(delay);
		anody[0]=0x0;
		anody[1]=0xFFFF;
		anody[2]=0x0;
		anody[3]=0xFFFF;
		_delay_ms(delay);
	}
	for (licznik = 0 ; licznik < 3 ; licznik++)
	{
		anody[0]=0xCC33;
		anody[1]=0x33CC;
		anody[2]=0xCC33;
		anody[3]=0x33CC;
		_delay_ms(delay);
		anody[0]=0x33CC;
		anody[1]=0xCC33;
		anody[2]=0x33CC;
		anody[3]=0xCC33;
		_delay_ms(delay);
	}
	for (licznik = 0 ; licznik < 3 ; licznik++)
	{
		anody[0]=0xA5A5;
		anody[1]=0x5A5A;
		anody[2]=0xA5A5;
		anody[3]=0x5A5A;
		_delay_ms(delay);
		anody[0]=0x5A5A;
		anody[1]=0xA5A5;
		anody[2]=0x5A5A;
		anody[3]=0xA5A5;
		_delay_ms(delay);
	}
}

void wypelnienie_trojkat(uint8_t do_mnie, uint8_t do_gory )
{
	uint8_t delay = 100;
	if(do_mnie == 0 && do_gory == 1)
	{
		pomoc_32[0]=0xFFFF0000;
		pomoc_32[1]=0xFFF00000;
		pomoc_32[2]=0xFF000000;
		pomoc_32[3]=0xF0000000;
	}
	else if(do_mnie == 0 && do_gory == 0)
	{
		pomoc_32[0]=0xF0000000;
		pomoc_32[1]=0xFF000000;
		pomoc_32[2]=0xFFF00000;
		pomoc_32[3]=0xFFFF0000;
	}
	else if(do_mnie == 1 && do_gory == 0)
	{
		pomoc_32[0]=0xFFFFFFFF;
		pomoc_32[1]=0xFFFFFFF0;
		pomoc_32[2]=0xFFFFFF00;
		pomoc_32[3]=0xFFFFF000;
	}
	else if(do_mnie == 1 && do_gory == 1)
	{
		pomoc_32[0]=0xFFFFF000;
		pomoc_32[1]=0xFFFFFF00;
		pomoc_32[2]=0xFFFFFFF0;
		pomoc_32[3]=0xFFFFFFFF;
	}
	for	(uint8_t i = 0; i < 7 ; i++)
	{
		for	(uint8_t j = 0; j < 4 ; j++)
		{
			if(do_mnie == 0)
			{
				pomoc_32[j]=(pomoc_32[j]>>4) + 0xF0000000;
				anody[j] = pomoc_32[j];
			}
			else
			{
				pomoc_32[j]<<=4;
				anody[j] = pomoc_32[j]>>16;
			}
		}
		_delay_ms(delay);
	}
}
