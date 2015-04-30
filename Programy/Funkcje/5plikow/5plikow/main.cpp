/*
	Program sk³adaj¹cy siê z wielu plików.
	Iloœæ: 5	

	Funkcje bêd¹ce w programie:
		-> Drugi wymiar, operowanie na tablicach dwuwymiarowych.
		-> silnia 
		-> ciag fibonacziego.
		-> x do y
		-> lotto
*/

#include<iostream>
#include <ctime>
#include <conio.h>
#include <cmath>
#include "header.h"

using namespace std;

int main()
{
		system("title Zadanie z PSIO ");
		srand(time(NULL));		
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
		cout << "Nacisniecie dowolnego klawisza konczy ten fragment programu..";
		_getch();

		for (int i=0; i < rozmiar_tablicy_uczniow; i++)
			 delete[] tablica_uczniow[i];

		delete[] tablica_uczniow;
		delete[] tablica_srednich;
		delete[] tablica_znakow;
		system("cls");




	/************************ KONIEC CZ. 1 ***************************/




/************************************************************************************/

		cout<< " Z ilu chcesz obliczyc silnie?: ";
		cin>> silnia_l;
		cout<< "\n Obliczam, silnia z " << silnia_l << " = " << silnia(silnia_l) << endl;	
		cout << "Nacisniecie dowolnego klawisza konczy ten fragment programu..";
		_getch();
		system("cls");

/************************************************************************************/

		cout<< " Dla ciagu fibonacziego, jakie n? : ";
		unsigned fibo = 1;
		cin>> fibo;
		cout<< "\n Obliczam, fibo n  = " << fibo << " == " << fib(fibo) << endl;	
		cout << "Nacisniecie dowolnego klawisza konczy ten fragment programu..";
		_getch();
		system("cls");

/************************************************************************************/

		cout<< " Testujemy x^y  podaj  X : ";
		unsigned x,y = 1;
		cin>> x; cout << endl;
		cout<< " Testujemy x^y  podaj  Y : ";
		cin>> y; cout << endl;
		cout<< " Obliczam, "<< x << "^" << y << " = "  << xy(x,y) <<  endl;	
		cout << "Nacisniecie dowolnego klawisza konczy ten fragment programu..";
		_getch();
		system("cls");		


/************************************************************************************/

		cout<< " Testujemy losowanie LOTTO! \n";
		cout<< " Podaj maksymalna liczbe do wylosowania: "; 
		unsigned liczba_maks = 1;
		cin>> liczba_maks;
		cout<< "\n Ile liczb wyswietlic? ";
		unsigned ile_wyswietl = 6;
		cin>> ile_wyswietl;
		Lotto(liczba_maks,ile_wyswietl);

		cout << "\nNacisniecie dowolnego klawisza konczy programu..";
		_getch();
		system("cls");		



	return EXIT_SUCCESS;
}