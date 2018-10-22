#include <avr\io.h>
#include <avr\interrupt.h>
#include <util\delay.h>
#include "_cube.h"
#include "_moves.h"


int main()
{
	cli();
	_init();
	sei();

	while(1)
	{
		wypelnienie_trojkat(0,0);
		wypelnienie_trojkat(1,1);
		wypelnienie_trojkat(0,1);
		wypelnienie_trojkat(1,0);
		szachownica();
		przewracanie_do_mnie();
		przewracanie_do_boku();
		maly_duzy();
		wir();
		dwa_szesciany();
	}
 return 0;
}
