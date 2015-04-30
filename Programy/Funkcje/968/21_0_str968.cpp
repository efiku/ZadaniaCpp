//***************************************************
// Program z paragrafu   21. (str 968)
//***************************************************

// Sprawdzony na Linuksie, kompilator: GNU gcc version 3.3.3 (SuSE Linux)
// Sprawdzony na Windows XP,  kompilator: Microsoft Visual C++ 6.0


/*--------------------------------------------------
                    plik : instrume.h
----------------------------------------------------*/
#include <iostream>
using namespace std ;

/////////////////////////////////////////////////////////
class instrument {                                        //
     int cena ;
public:
    //virtual 
	 void wydaj_dzwiek()                         //
     {
          cout << "        Nieokreslony brzdek !\n" ;
     }
     // ...
}  ;
/////////////////////////////////////////////////////////
class trabka : public instrument {                      //
public:
     void wydaj_dzwiek()
     {
          cout << "        Tra-ta-ta !\n" ;
     }
     // ...
}  ;
/////////////////////////////////////////////////////////
class beben : public instrument {                      //
public:
     void wydaj_dzwiek()
     {
          cout << "        Bum-bum-bum !\n" ;
     }
     // ...
}  ;
/////////////////////////////////////////////////////////
class fortepian : public instrument {                 //
public:
     void wydaj_dzwiek()
     {
          cout << "        Plim-plim-plim !\n" ;
     }
     // ...
}  ;
/////////////////////////////////////////////////////////



// #include "instrume.h"   <-- dla uproszczenia
// nie robie include, zato wstawilem to
// powyzej w calej rozciaglosci

void muzyk(instrument & powierzony_instrument) ;
/*******************************************************/
int main()
{
instrument jakis_instrument ;                         //
trabka      zlota_trabka ;
fortepian      steinway_giseli ;
beben      moj_werbel ;

     cout << "Zwykle wywolania funkcji skladowych\n"
     "na rzecz obiektow - jak dotad nic szczegolnego\n" ;

     jakis_instrument.wydaj_dzwiek() ;               //
           zlota_trabka.wydaj_dzwiek() ;
      steinway_giseli.wydaj_dzwiek() ;
           moj_werbel.wydaj_dzwiek() ;

     cout << "Wywolanie funkcji na rzecz obiektu \n"
               "pokazywanego wskaznikiem instrumentu\n" ;

     instrument *wskinstr ;                              //

     // ustawienie wskaznika
     wskinstr = & jakis_instrument ;                    //

     wskinstr-> wydaj_dzwiek() ;                     //


     cout << "Rewelacja okazuje sie przy "
               "pokazaniu wskaznikiem\ndo instrumentow"
               " na obiekty klas pochodnych\n"
               " od klasy instrument ! \n" ;

     wskinstr = &zlota_trabka ;                         //
     wskinstr-> wydaj_dzwiek() ;                         //

     wskinstr = &steinway_giseli ;
     wskinstr-> wydaj_dzwiek() ;

     wskinstr = &moj_werbel ;
     wskinstr-> wydaj_dzwiek() ;

     cout << "Podobne zachowanie jest takze \n"
               "w stosunku do referencji \n" ;

     muzyk(jakis_instrument);                            //
     muzyk(zlota_trabka);                              //
     muzyk(steinway_giseli) ;                          //
     muzyk(moj_werbel) ;
     
     system("pause");
}
/*******************************************************/
void muzyk(instrument & powierzony_instrument)        //

{
     powierzony_instrument.wydaj_dzwiek();
}



/************************************************************


************************************************************/


