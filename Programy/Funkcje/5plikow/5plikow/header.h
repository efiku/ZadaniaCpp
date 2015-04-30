/*
	
	Zawiera nag³ówki funkcji
	i zmienne globalne.


*/

// Zmienne globalne!
extern int rozmiar_tablicy_uczniow = 1;
extern double silnia_l = 1;

/***************** drugi_wymiar.cpp **************************/
void Generuj(int **, int); // generuj liczby w tablicy.
void Srednia( int ** , double [], int ); // oblicz srednia
void Znak( int **, char [], int ); // Zdal czy nie zdal? Oto jest pytanie.
/*************************************************************/


/***************** fionacz.cpp *******************************/
double fib(double);
/*************************************************************/

/***************** silnia.cpp ********************************/
long silnia( long );
/*************************************************************/


/***************** xy.cpp ************************************/
double xy( double, double );
/*************************************************************/


/***************** lotto.cpp *********************************/
void Lotto( unsigned, unsigned); // max, ile losowac
/*************************************************************/

// MAKRA:
#define CZYSC_EKRAN_PO_POZIOMACH

//#undef CZYSC_EKRAN_PO_POZIOMACH
