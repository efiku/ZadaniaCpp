//**********************************************************
// Plik: osoba.cpp                                      ****
//**********************************************************
#include "osoba.h"   						
#include <cstring>
//*************************************************************
osoba::osoba(const char * napis, int lata)          
{
     strcpy(nazwisko, (napis ? napis : "Anonim"));
     wiek = lata;
}
void osoba::wypisz()
{
  cout << "\t" << nazwisko << ", lat: "
       << wiek << endl;
}
void prezentacja(osoba ktos) 							 //  
{ 
	cout << "Mam zaszczyt przedstawic panstwu, \n"
				"Oto we wlasnej osobie: "; 
	ktos.wypisz(); 										 //  
}
