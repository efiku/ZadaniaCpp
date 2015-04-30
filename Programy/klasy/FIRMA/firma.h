/*
  PLIK NAGLOWKOWY

*/
#ifndef _osoba_h_                 				
#define _osoba_h_
#include <iostream>
using namespace std;
//////////////////   definicja klasy  /////////////////////////
class firma 
{
public:    
     char imie[80]; 
     char nazwisko[80]; 
     char stanowisko[80];                             
     int zarobki;
     
                                           
     void zapamietaj(const char * ,const char * ,const char * , int zarobki);	
     //------------
     void wypisz();
};
/////////////////// koniec definicji klasy ///////////////////
#endif
 
