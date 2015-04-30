/*
  Klasy:
        Osoba i samochod!
        Rozmieszczone w 4 plikach

*/
#include <cstdlib>
#include <iostream>
#include <string.h>
#include "osoba.h"
#include "samochod.h"

using namespace std;

int main(int argc, char *argv[])
{
    Osoba Osoba_1;
    Osoba *wsk_Osoba_1;
    wsk_Osoba_1 = &Osoba_1;
    
    samochod Car_01;
    

    /*
      Dodajê osobê !
       OSOBA!
    
    */
    {
        string Imie, Nazwisko;
        unsigned Klasa;
        
        cout<< "Podaj imie: "; cin>> Imie; cout<< endl;
        cout<< "Podaj nazwisko: "; cin>> Nazwisko; cout<< endl;
        cout<< "Podaj klase: "; cin>> Klasa; cout<< "\r\n";
        
        wsk_Osoba_1->zapamietaj(Imie, Nazwisko, Klasa);
        

    
    }
    
    /*
      Dodajê auto !
       AUTO!
    
    */
    {
             string nr_rej;
             string model;
             string marka;
             long cena;
             string stan;
        cout<< "Podaj NR rejestracyjny: "; 
        getline( cin, nr_rej ); 
        
        
        cout<< "Podaj model auta: "; 
        getline( cin, model ); 
        cout<< "Podaj marke auta: "; 
        getline( cin, marka );
        
        
        cout<< "Podaj cene auta: "; cin>> cena;           cout<< endl;
        cout<< "Podaj stan auta: "; cin>> stan;           cout<< endl;
   
       Car_01.zapisz(nr_rej, model, marka, cena, stan );
    } 
    
    
    
    
    
    
    
    wsk_Osoba_1->wypisz();
    Car_01.wyswietl();
    cout << "---------------------------\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
