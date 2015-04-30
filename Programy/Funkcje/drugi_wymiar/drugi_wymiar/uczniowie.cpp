/*Napisz program obliczaj¹cy œrednie oceny uczniów w oparciu o dane wejœciowe
Dane wejœciowe umieszczono w tablicy dwuwymiarowej i zawieraj¹ po 6 ocen dla ka¿dego ucznia, uczniów ma byæ n
Wynikiem ma byæ tablica z obliczonymi œrednimi ocenami oraz druga tablica z wartoœciami znakowymi: Z,N,W(Zda³, Nie Zda³, Warunkowy)
*/
#include<iostream>
#include <ctime>
#include <conio.h>
#include <cmath>

using namespace std;

#define CZYSC_EKRAN_PO_POZIOMACH
//#undef CZYSC_EKRAN_PO_POZIOMACH


void Generuj(int **, int); // generuj liczby w tablicy.
void Srednia( int ** , double [], int ); // oblicz srednia
void Znak( int **, char [], int ); // Zdal czy nie zdal? Oto jest pytanie.

int main()
{
	srand(time(NULL));
		int rozmiar_tablicy_uczniow = 1;
		
		cout<< "Ilu uczniow wygenerowac? :";
		cin>> rozmiar_tablicy_uczniow;
		cout << endl;
		// Proces przydzielania tablicy.

			// Tablica: G³ówna z ocenami.
			int **tablica_uczniow = new int * [rozmiar_tablicy_uczniow];
			for ( int licznik = 0; licznik < rozmiar_tablicy_uczniow ; licznik ++)
			{
				tablica_uczniow[licznik] = new int [6]; // poniewaz mamy miec po 6 ocen.
			}

			// Tablica: Srednie wyliczone z g³ównej tablicy.
			double *tablica_srednich = new double[rozmiar_tablicy_uczniow];
				memset( tablica_srednich,0 , (rozmiar_tablicy_uczniow*sizeof(double))); // czyszczenie tablicy

			// Tablica: Promocja wyliczona z g³ównej tablicy.
			char *tablica_znakow = new char[rozmiar_tablicy_uczniow]; 
			memset( tablica_znakow , 'N', rozmiar_tablicy_uczniow*sizeof(char));
			// koniec przydzielania 

/************************************************************************************************************/
			Generuj(tablica_uczniow , rozmiar_tablicy_uczniow);

		// Wyswietlanie tablicy uczniow.

			for( int i = 0 ; i < rozmiar_tablicy_uczniow ; i++)
			{
				cout << (i+1) << ". ";
				for (int j = 0; j < 6; j++ )
				{
					cout << tablica_uczniow[i][j] << " ";
				}
				cout << endl;
			}


/*****************************************************************************/

		cout << endl << "[ Poziom:: 2 ] : Obliczanie sredniej." << endl ;
		_getch();

		#ifdef CZYSC_EKRAN_PO_POZIOMACH
				system("cls");
		#endif

		Srednia( tablica_uczniow, tablica_srednich, rozmiar_tablicy_uczniow );

		for( int i = 0 ; i < rozmiar_tablicy_uczniow ; i++)
			{
				cout << (i+1) << ". ";
				cout << tablica_srednich[i];
				cout << endl;
			}
			
			
/*****************************************************************************/
		cout << endl << "[ Poziom:: 3 ] : Promocja." << endl ;
		_getch();

		#ifdef CZYSC_EKRAN_PO_POZIOMACH
				system("cls");
		#endif

		Znak( tablica_uczniow, tablica_znakow, rozmiar_tablicy_uczniow );

		for( int i = 0 ; i < rozmiar_tablicy_uczniow ; i++)
			{
				cout << (i+1) << ". ";
				cout << tablica_znakow[i];
				cout << endl;
			}
		

/************************************************************************************/
		cout << "Nacisniecie dowolnego klawisza konczy program..";
		_getch();

		for (int i=0; i < rozmiar_tablicy_uczniow; i++)
			 delete[] tablica_uczniow[i];

		delete[] tablica_uczniow;
		delete[] tablica_srednich;
		delete[] tablica_znakow;
	return EXIT_SUCCESS;
}


// Generuje Losowe liczby w tablicy
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