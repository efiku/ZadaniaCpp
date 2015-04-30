#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
#include "czlowiek.h"
#include "uczen.h"



int main(int argc, char *argv[])
{

	uczen pracownik;
	
	pracownik.zapisz_imie( argv[1] );
	pracownik.zapisz_nazwisko( argv[2] );
	pracownik.zapisz_klase(3);
	
	cout<< "Obiekt klasy Czlowiek \n";
	cout << "Imie: " << pracownik.wypisz_imie() << endl;
	cout << "Nazwisko: "<< pracownik.wypisz_nazwisko() << "\n\n";
	
	cout << " Obiekt klasy uczen pochodzacej od Czlowieka \n";
	
	cout << "Imie: " << pracownik.wypisz_imie() << endl;
	cout << "Nazwisko: "<< pracownik.wypisz_nazwisko() << endl;
	cout << "Klasa: "<< pracownik.wypisz_klase() << "\n\n";

	
    system("PAUSE");
    return EXIT_SUCCESS;
}
