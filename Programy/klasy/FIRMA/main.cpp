/*
  Projekt z PSIO
  Autor: Krzysztof Pazdur <pazdurk@gmail.com>
  Data: 25-03-2014 8:00
  
  Opis::
  Projekt przechowuj¹cy informacje o 
  
  - imionach
  - stanowiskach
  - placach
  w  firmie
  Rozmieszczonych w 3 plikach
  z przekazywaniem obiektów do funkcji wyœwietlaj¹cej wyniki
  
  
  projekt z MENU ! 
  -------------------
  1. Wprowadzanie
  2. Przegladanie
  3. Kasowanie danych
  -------------------
  
  Dane nalezy przechowywac w tablicy obiektow.
  


*/
#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;
#include "firma.h"	

firma  tablica[20];
int wsk = 0;  // Czy ja bêdê tego potrzebowaæ? 



/*


  PREZENTACJA DANYCH 
  ------------------


*/
void prezentacja(firma [], int) ;	



// Do menu
void dodaj();
void przegladaj(bool p = false);
void edytuj();




// Program glowny.
int main(int argc, char *argv[])
{
    
    for(;;)
    {
       int wybor;
       cout<< " MENU \n";
       cout<< "1. Wprowadzanie\n";
       cout<< "2. Przegladanie\n";
       cout<< "3. Edycja danych\n"; 
       cout<< "4. KONIEC\n"; 
       
       cout<< "Podaj numer:";
       cin >> wybor;
       cout<< endl;       
       switch(wybor)
       {
          case 1 : dodaj(); break;
          case 2 : przegladaj(); break;
          case 3 : edytuj(); break;
          case 4 : exit(0);
          default:
             cout<< "Poza zakresem!! \n";
             getch();
             system("cls");
       
                     
       }
          
    };
}





// Prezentacja danych

void prezentacja(firma t[], int ile, bool id = false) 						
{ 
	cout << "IMIE" << "\t" << "NAZWISKO" << "\t" << "STANOWISKO" << "\t" << "ZAROBKI" << endl ;
	if ( ile != 0 )
	{
        
    	for( int i=0; i < ile ; i++)
    	{
           if( id ) {
            cout << "-----------------------------------------------------------------------------\n";
             cout<<( i+1 ) << " ";
             t[i].wypisz();
           }
           else
           {
            cout << "-----------------------------------------------------------------------------\n";
                t[i].wypisz(); 
           } 
         
          
        }
    }
    else
    {
      cout << "Brak danych..\n";    
    }
   
     										 //  
}


void dodaj()
{
     system("CLS");
     if( wsk == 20)
     {
       cout << "\n Blad! Brak miejsca!\n";  
     }
     else
     {
     int P_PLN;
     char P_IMIE[80], P_NAZ[80], P_STA[80];
     
     cout<< "Modul dodawania pracownika \n";
     cout<< endl;
     cout<< "Podaj imie: "; cin >> P_IMIE; cout << endl;
     cout<< "Podaj Nazwisko: "; cin >> P_NAZ; cout << endl;
     cout<< "Podaj Stanowisko: "; cin >> P_STA; cout << endl;
     cout<< "Podaj place: "; cin >> P_PLN; cout << endl;
     
     cout<< endl << "\t Dodawanie pracownika...";
     tablica[wsk]. zapamietaj(P_IMIE,P_NAZ,P_STA,P_PLN);
     ++wsk;
     }
      getch();
      system("CLS");
          
}

void przegladaj(bool p)
{
     system("cls");
     prezentacja(tablica, wsk, p); 
     if(!p)
     {
         getch();
         system("cls");	
     }
}

void edytuj()
{
     system("cls");
     przegladaj(true);
     
     if(wsk != 0 )
     {
            cout<< " Wybierz ktory wpis chcesz edytowac? :";
            unsigned wpis;
            
            cin>> wpis;
            cout<< "\n Wybrano wpis: " << wpis << "\n";
            wpis = wpis-1;
            tablica[wpis].wypisz();
           
            cout<< "\nok, a teraz wybierz co chcesz edytowac :";
            int dane;
            
            
            
            /* MENU  */ 
            cout << endl << endl;
             cout << "1 - Imie" << endl; 
             cout << "2 - Nazwisko" << endl;
             cout << "3 - Stanowisko" << endl;
             cout << "4 - Placa" << endl;
             cout << "5 - Powrot" << endl;
             cout << "Ktore dane chcesz edytowac: ";
             cin >> dane;
     
     
     
     if( dane  >= 1 && dane < 6 ) // Przedzia³ od 1 do 5
     {
         cout << endl << endl;
         char E_I[80];
         int E_P;
         
         if (dane==4)
         {
             cout << "Podaj place: ";
             cin >> E_P;
         }
         else
         {
             cout << "Podaj dane: ";
             cin >> E_I;
         }
         
         char S_IMIE[80];
         char S_NAZWISKO[80];
         char S_STANOWISKO[80];
         int S_PLACA;
         
         strcpy(S_IMIE, tablica[wpis].imie);
         strcpy(S_NAZWISKO, tablica[wpis].nazwisko);
         strcpy(S_STANOWISKO, tablica[wpis].stanowisko);
         S_PLACA=tablica[wpis].zarobki;
         
             switch (dane)
             {
                    case 1: tablica[wpis].zapamietaj(E_I,S_NAZWISKO,S_STANOWISKO,S_PLACA);
                            break;
                    
                    case 2: tablica[wpis].zapamietaj(S_IMIE,E_I,S_STANOWISKO,S_PLACA);
                            break;
                    
                    case 3: tablica[wpis].zapamietaj(S_IMIE,S_NAZWISKO,E_I,S_PLACA);;
                            break;
                    
                    case 4: tablica[wpis].zapamietaj(S_IMIE,S_NAZWISKO,S_STANOWISKO,E_P);
                            break;
             }     
       } //end dane if
       else
       { 
           cout << "Poza zakresem wyboru " << endl;
       }
     }
     else
     {
         cout<< " Tutaj jest pusto! " ;
     }
    
     getch();
     system("cls");
}
