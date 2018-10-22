#ifndef _moves_h
#define _moves_h

extern volatile uint16_t anody[4];
extern volatile uint32_t pomoc_32[4];

void wypelnienie_trojkat(uint8_t do_mnie, uint8_t do_gory);
void szachownica();
void przewracanie_do_mnie();
void przewracanie_do_boku();
void maly_duzy();
void wir();
void dwa_szesciany();


#endif
