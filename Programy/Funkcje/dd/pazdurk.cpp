/*
1.	Napisz program wykonuj¹cy 4 dzia³ania arytmetyczne na zmiennych a i b.
 Dzia³ania na tych zmiennych wykonaj za pomoc¹ minimalnej liczby  wskaŸników. (Program bez funkcji)
2.	Napisz program tworz¹cy losow¹ tablicê n-elementow¹ (n wczytywane z klawiatury)
 oraz przepisuj¹cy kwadraty zawartoœci komórek do tablicy wynikowej.
*/



#include<iostream>

using namespace std;


int main()
{
    srand(time(NULL));
    
   int liczba,liczbab;
   cout<<"podaj liczbe A: ";
   cin>>liczba;
   cout<<"podaj liczbe B: " ;
   cin>>liczbab;
   int *Ptr_liczba;
   int *Ptr_liczbab;
   Ptr_liczba=&liczba;
   Ptr_liczbab=&liczbab;
   
   cout << endl;
   cout << "ZADANIE 1" << endl << endl;   
   cout << endl;
   cout << "DODAWANIE" << endl;
   cout << *Ptr_liczba << " + " << *Ptr_liczbab << " = " << *Ptr_liczba + *Ptr_liczbab;  
   cout << endl;
   
   cout << endl;
   cout << "ODEJMOWANIE" << endl;
   cout << *Ptr_liczba << " - " << *Ptr_liczbab << " = " << *Ptr_liczba - *Ptr_liczbab;
   cout << endl;
   
   cout << endl;
   cout << "MNOZENIE" << endl;
   cout << *Ptr_liczba << " * " << *Ptr_liczbab << " = " << *Ptr_liczba * *Ptr_liczbab;
   cout << endl;
   
   cout << endl;
   cout << "DZIELENIE" << endl;
   cout << *Ptr_liczba << " / " << *Ptr_liczbab << " = " << *Ptr_liczba / *Ptr_liczbab;
   cout << endl;
   
   system("pause");
   system("cls");
   
   cout << "ZADANIE 2" << endl << endl;
   
   int n;
   cout << " PODAJ N : ";
   cin >> n;
   int tablica[ n ] ;
   int tablica_wynik[ n ] ;
   
   int* Ptr_tablica            = &tablica[0];
   int* Ptr_tablica_wynik      = &tablica_wynik[0];
   
   
   for( int i=0; i < n ; i++)
   {
       //tablica[i] = rand() % 5 + 1; 
       //tablica_wynik[i] = 0;
       
       *Ptr_tablica = rand() % 15 + 1;
       *Ptr_tablica_wynik = 0;
       
       Ptr_tablica_wynik++;
       Ptr_tablica++;
   }


   Ptr_tablica            = &tablica[0];
   Ptr_tablica_wynik      = &tablica_wynik[0];
  


   
   for( int i = 0; i < n ; i++)
   {
      *Ptr_tablica_wynik = (*Ptr_tablica)*(*Ptr_tablica);
      
       Ptr_tablica_wynik++;
       Ptr_tablica++;
       
       
     // tablica_wynik[i] = tablica[i]*tablica[i];       
   }

   Ptr_tablica            = &tablica[0];
   Ptr_tablica_wynik      = &tablica_wynik[0];
  
  
   for( int i = 0; i < n ; i++)
   {
      cout << " TABLICA_1 \t[ " << i << " ] = " << *Ptr_tablica << endl;
      cout << " TABLICA_WYNIK  [ " << i << " ] = " << *Ptr_tablica_wynik << endl;
      cout<< endl;

       Ptr_tablica_wynik++;
       Ptr_tablica++;
   }   
   cout << endl << endl;
   
   system("pause");
    
    
}

