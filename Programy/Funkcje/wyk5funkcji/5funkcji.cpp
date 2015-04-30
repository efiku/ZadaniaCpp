#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

      // ZASTOSOWANE FUNKCJE
      // ---math.h-----
      // round();
      // floor();
      // --------------
      // ---stdlib.h---
      // rand();
      // atol();
      // memset();
      // --------------
      
int main()
{
    double liczba_zm = 3.989803;
    cout << "Liczba :" << liczba_zm << " poddana funkcja round() i floor()\n";
    cout << "round() = " << round(liczba_zm) << "\n";
    cout << "floor() = " << floor(liczba_zm) << "\n";
    
   _getch();
    system("cls");
    

    char liczba[255];
    long int liczba_pk = 0;
    cout << " Podaj lancuch znakow do konwersji: ";
    cin >> liczba;
    cout << "\nLancuch znakow ("<< liczba <<")poddany konwersji funkcja atol() \n";
    cout << " int liczba_pk = " << liczba_pk << " (przed konwersja) \n";    
    liczba_pk = atol(liczba);
    cout << " int liczba_pk = " << liczba_pk << " (po konwersji) \n";   
    
    
        cout << "\n Nacisnij enter aby kontynuowac..\n\n";
        _getch();
    system("cls");
         
         srand(time(NULL));
         for( int i=0 ; i < 10 ; i++)
         {
              cout << "Liczba("<<(i+1) << ") = "<< rand() % 20 + 1 << endl;
         }         
    
        cout << "\n Nacisnij enter aby kontynuowac..\n\n";
        _getch();
    system("cls");
    
    int *tablica = new int[20];
        
        cout<< " Przed zerowaniem tablicy dynamicznej:\n";
        for(int i=0; i< 20; i++)
        {
           cout << "tablica["<< (i+1) <<"] = " << tablica[i] << endl; 
        }
        
        memset(tablica,0, sizeof(int) * 20);
        cout << "\n Nacisnij enter aby kontynuowac..\n\n";
        _getch();
 
         cout<< "Po zerowaniu tablicy dynamicznej:\n";
        for(int i=0; i< 20; i++)
        {
           cout << "tablica["<< (i+1) <<"] = " << tablica[i] << endl; 
        }
              
       delete[] tablica; 
        cout << "\n Nacisnij enter aby kontynuowac..\n\n";
        _getch();

    
}
