#include <iostream>
#include <string.h>
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

int main() {
    
    
      /*
         Sposob nr 1
      */
      
      samochod auto_01,auto_02,auto_03,auto_04,auto_05;
      auto_01.zapisz("KLI 23ABC", "Q4", "Audi", 254999, "Dobry");
      auto_02.zapisz("KLI 1DABC", "Q1", "Audi2", 150, "Zly");
      auto_03.zapisz("KLI 2FFCC", "A4", "Maluh", 2400, "Zly");
      auto_04.zapisz("KLI XDAAD", "F4", "Demo", 50000, "Zly");
      auto_05.zapisz("KLI FECAS", "B4", "Trolo", 92000, "Dobry");
      
      auto_01.wyswietl();
      auto_02.wyswietl();
      auto_03.wyswietl();
      auto_04.wyswietl();
      auto_05.wyswietl();
      
      system("pause"); 
      return 0;
}
