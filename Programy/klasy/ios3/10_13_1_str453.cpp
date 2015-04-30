//***************************************************
// Program z paragrafu   10.13.1 (str 453)
//***************************************************

// Sprawdzony na Windows XP,  kompilator: Microsoft Visual C++ 6.0
 

!!! Ten tekst trzeba podzielic na trzy pliki, nazwane jak ponizej

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
     void wypisz()							

     {
          cout << "\t" << nazwisko << ", lat: "
               << wiek << endl;
     }
};
/////////////////// koniec definicji klasy ///////////////////
#endif
 



//**********************************************************
// Plik: osoba.cpp                                      ****
//**********************************************************
#include "osoba.h"   						
#include <cstring>
//*************************************************************
void osoba::zapamietaj(const char * napis, int lata)          
{
     strcpy(nazwisko, (napis ? napis : "Anonim"));
     wiek = lata;
}




//////////////////////////////////////////////////////////////
// plik progr.cpp 										////
//////////////////////////////////////////////////////////////
#include <iostream>
using namespace std; 

#include "osoba.h"										//  
void prezentacja(osoba); 							//  
/*************************************************************/
int main() 
{ 
	osoba kompozytor, autor; 							 // 
 
	kompozytor.zapamietaj("Fryderyk Chopin", 36); 
	autor.zapamietaj("Marcel Proust", 34); 
 
	// wywo³ujemy funkcje, wysy³aj¹c obiekty 
	prezentacja(kompozytor);							 //  
	prezentacja(autor); 			 					 //  
} 
/*************************************************************/
void prezentacja(osoba ktos) 							 //  
{ 
	cout << "Mam zaszczyt przedstawic panstwu, \n"
				"Oto we wlasnej osobie: "; 
	ktos.wypisz(); 										 //  
}

