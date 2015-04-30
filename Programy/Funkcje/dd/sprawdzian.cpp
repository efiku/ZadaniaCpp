    // ZAGADNIENIA:
/*   
    1. Definicje wskaźników pokazujących na różne typy danych (liczbhowe, logiczne, znakowe)
    2. Przypisywanie wskaźnikom adresów obiektów (ustawianie wskaźników)
    3. Wywietlanie wskaźników i wartości pzez nie wskazywanych
    4. Zastosowanie wskaźników wobec tablic (operacje na komórkach tablic z zastosowaniem wskaźników zamiast indexowania)
    5. Zastosowanie w argumentach funkcji (przykłądy funkcji, których argumenty są wskaźnikami do różnego typu danych)
   
   KOMPILACJA:
    cd wskazniki
    g++ sprawdzian.cpp -o sprawdzian
    ./sprawdzian
    
    Opracowanie przygotowane przez grupę pierwszą <3
*/

#include <iostream>
#include <math.h>
#include <iomanip> // setprecision
#include <cstdlib> // rand i srand

using namespace std;

int main()
{
    
    /*
        // Rozwiązanie do polecenia pierwszego:
    */
    int*    ptr_INT     = 0;
    char*   ptr_CHAR    = 0;
    bool*   ptr_BOOL    = 0;
    float*  ptr_FLOAT   = 0;
    double* ptr_DOUBLE  = 0;
    // koniec : polecenie 1
    
    /*
        // Rozwiązanie do polecenia drugiego:
    */
     int Liczba = 125;
     int* ptr_Liczba = &Liczba;
    // koniec : polecenie 2  
    
    
    /*
        // Rozwiązanie do polecenia trzeciego:
    */   
    cout << "Zmienna Liczba ma wartosc: " << *ptr_Liczba << " a jej adres to: " << ptr_Liczba << endl ;
    
    // koniec : polecenie 3 
    
    
    /*
        // Rozwiązanie do polecenia czwartego.:
    */   
    int rozmiar_tablicy = 10;
    
    int tablica[rozmiar_tablicy];
        
    int* index = &tablica[0];
    
    for (int i=0; i<rozmiar_tablicy; i++)
    {
         cout << "adres:" << index << " Wartosc: "<< *index << endl;
         index++;
    }
    
    // koniec : polecenie 4
    system("pause");
    return 0;   
}
