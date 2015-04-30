//***************************************************
// Program z paragrafu  5.12 (str 170)
//***************************************************

// Sprawdzony na Linuksie, kompilator: GNU gcc version 3.3.3 (SuSE Linux)
// Sprawdzony na Windows XP,  kompilator: Microsoft Visual C++ 6.0


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// Ten plik powinienes rozbic na trzy poni¿sze i dopiero
// te trzy poddac kompilacji.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//##############################################
// Oto tresc pliku afryka.cpp :
//##############################################

#include <iostream>
using namespace std ;

#include "nagl.h"
int ile_murzynow = 9 ;
int main()
{
     cout << "Poczatek programu\n" ;
     funkcja_francuska();
     funkcja_niemiecka();
     cout << "Koniec programu \n" ;
}
/******************************************************/
void funkcja_egipska()
{
     cout << "Jestem w Kairze !-------- \n" ;
     cout << "Na swiecie jest " << ile_murzynow
          << " murzynow, oraz " << ile_europejczykow
          << " europejczykow \n" ;
}
/******************************************************/
void funkcja_kenijska()
 {
     cout << "Jestem w Nairobi ! --------\n" ;
     cout << "Na swiecie jest " << ile_murzynow
          << " murzynow, oraz " << ile_europejczykow
          << " europejczyk¢w \n" ;
}
/******************************************************/

//##############################################
//----------- A oto plik europa.cpp :
//##############################################

#include <iostream>
using namespace std ;

#include "nagl.h"
int ile_europejczykow = 8 ;
/******************************************************/
void funkcja_francuska()
{
     cout << "Jestem w Paryzu ! *********************\n" ;

     cout << "Na swiecie jest "<< ile_murzynow
          << " murzynow, oraz "
          << ile_europejczykow << " europejczykow \n" ;

     funkcja_egipska() ;
}
/******************************************************/
void funkcja_niemiecka(void)
{
     cout << "Jestem w Berlinie ! *******************\n" ;

     cout << "Na swiecie jest " << ile_murzynow
          << " murzynow, oraz "
          << ile_europejczykow  << " europejczykow \n" ;

     funkcja_kenijska();
}
/******************************************************/

//##############################################
//-------------- A tak wyglada zawartosc pliku nagl.h
//##############################################

extern int ile_murzynow  ;
extern int ile_europejczykow  ;

void funkcja_egipska() ;
void funkcja_kenijska() ;
void funkcja_francuska() ;
void funkcja_niemiecka() ;






/************************************************************

************************************************************/
