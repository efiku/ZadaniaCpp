#include "samochod.h"
/*
  
  Funkcja zapisuj¹ca

*/

       
void samochod::zapisz( 
                     string numer_rejestr,
                     string model_auta,
                     string marka_auta, 
                     long cena_auta,
                     string stan_auta 
                     )
{
                     
    this->nr_rej = numer_rejestr;
    this->model = model_auta;
    this->marka = marka_auta;
    this->cena = cena_auta;
    this->stan = stan_auta;
   
};


/* 

  Funkcja wyswietlajaca 
  
*/

void samochod::wyswietl()
{
     cout<< "NUMER REJ: " << nr_rej << "\n";
     cout<< "MODEL: " << model << "\n";
     cout<< "MARKA: " << marka << "\n";
     cout<< "CENA: " << cena << " zl \n";
     cout<< "STAN: " << stan << "\n";
     cout<< endl;
};
