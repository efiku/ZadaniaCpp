/*
	TOTOLOTEK HEHE

*/
#include <iostream>
using namespace std;
extern int rozmiar_tablicy_uczniow;
void Lotto( unsigned max_l, unsigned ile_wys)
{
	cout << " A liczba uczniow w klasie podana wczesniej wynosi: " << rozmiar_tablicy_uczniow;
	cout << "\n LOTTO NUMERY : ";
	for( unsigned i=0; i < ile_wys; i++)
	{

		cout << (rand() % max_l + 1) << " ";

	}
	
}
