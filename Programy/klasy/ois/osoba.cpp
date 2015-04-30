#include "osoba.h"

void  Osoba::zapamietaj(string O_imie = "", string O_nazwisko = "", unsigned O_klasa = 0)
{
    this->imie             = (O_imie != "" ? O_imie : "Brak danych") ;
	this->nazwisko         = (O_nazwisko != "" ? O_nazwisko : "Brak danych") ;
    this->klasa            = (O_klasa == 0 ? 0 : O_klasa );
      
}

void Osoba::wypisz() 
{
     cout << "-----------------------\n\n";
     cout << "Imie: " << imie << endl;
     cout << "Nazwisko: " << nazwisko << endl;
     cout << "-----------------------\n\n";

}
