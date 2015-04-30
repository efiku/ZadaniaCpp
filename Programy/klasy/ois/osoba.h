/*

  Klasa osoba 
  Nag³ówek!


*/
#include <iostream>
#include <string.h>
#ifndef _osoba
using namespace std;
#define _osoba

        class Osoba
        {
         public:
         	void zapamietaj(string im, string nazw, unsigned kl);
        	void wypisz() ;
        	
         private:
              string imie;      
              string nazwisko;
              unsigned  klasa;
        };


#endif
