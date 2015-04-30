/*
	Zestaw funkcji dla operacji na tablicach.

*/
// Generuje Losowe liczby w tablicy
#include <iostream>
using namespace std;


void Generuj( int **tablica, int rozmiar_tablicy)
{
	for( int i = 0; i < rozmiar_tablicy ; i++)
	{
		 for( int j = 0; j < 6; j++ )
		 {
			 tablica[i][j] = rand() % 6 + 1;
		 }

	}
}


//  Oblicza srednia: Wej: Tablica z liczbami, Wyj: Tablica z srednia, rozmiar tablicy.
void Srednia( int **tablica_wej, double tablica_wyj[], int rozmiar_tablicy)
{
	double srednia = 0.0;
	for( int i = 0; i < rozmiar_tablicy ; i++)
	{
		for(int j = 0 ; j < 6; j++ )
		{
			srednia += tablica_wej[i][j];
		}
		tablica_wyj[i] = ( srednia / 6 );
		srednia = 0.0;
	}
}


// Sprawdza ilosc jedynek w ocenach uczniow.
void Znak(int **tablica_wej, char tablica_wyj[], int rozmiar_tablicy)
{
	int licznik_jedynek = 0;
	for( int i = 0; i < rozmiar_tablicy ; i++)
	{
		for(int j = 0 ; j < 6; j++ )
		{
			if(tablica_wej[i][j] == 1) licznik_jedynek++;
		}
		if(licznik_jedynek == 0)
		{
			tablica_wyj[i] = 'Z';
		}
		else if( licznik_jedynek == 1)
		{
			tablica_wyj[i] = 'W';
		}
		else
		{
			tablica_wyj[i] = 'N';
		}
		licznik_jedynek = 0;
	}
}