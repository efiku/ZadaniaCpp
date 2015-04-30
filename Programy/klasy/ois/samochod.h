/*


*/
#include <iostream>
#include <string.h>

#ifndef _samochod_h
#define _samochod_h
using namespace std;
class samochod  
{
      private:
             string nr_rej;
             string model;
             string marka;
             long cena;
             string stan;
      
      
      /*
         Zapisz dane do klasy
      */
      public:
      void zapisz (  
                     string numer_rejestr,
                     string model_auta,
                     string marka_auta,
                     long cena_auta,
                     string stan_auta 
                   );
                   
      /*
         Wyœwietl dane z klasy
      */             
      void wyswietl();     
      
};

#endif
