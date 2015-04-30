/*
  PLIK 

*/


#include "firma.h"   						
#include <cstring>
//*************************************************************
void firma::zapamietaj(const char * IMIE , const char * NAZWISKO, const char * STANOWISKO, int ZAROBKI)
{
     strcpy(imie, (IMIE ? IMIE : "BRAK"));
     strcpy(nazwisko, (NAZWISKO ? NAZWISKO : "BRAK"));
     strcpy(stanowisko, (STANOWISKO ? STANOWISKO : "Pracownik"));
     zarobki = ZAROBKI;
}
void firma::wypisz()
{
  cout << imie  << "\t" << nazwisko << "\t\t"<< stanowisko << "\t\t" << zarobki << " PLN" << endl;
}

