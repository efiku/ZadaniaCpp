//**************************************
// Plik: osoba.h
//**************************************
#ifndef _osoba_h_                 				
#define _osoba_h_
#include <iostream>
using namespace std;
//////////////////   definicja klasy  /////////////////////////
class osoba 
{
     char nazwisko[80];                               
     int wiek;
public:                                               
     void zapamietaj(const char * napis, int lata);	
     //------------
     void wypisz();
};
/////////////////// koniec definicji klasy ///////////////////
#endif
 
