#include "czlowiek.h"
#include <iostream>
#include <string>

	void Czlowiek::zapisz_imie ( string imie ) {
			this->imie = imie;
	}
	
	void Czlowiek::zapisz_nazwisko ( string nazwisko){
			this->nazwisko = nazwisko;
	}
	
	string Czlowiek::wypisz_imie ( ) {
		return ( this->imie ) ;
	}
	
	
	string Czlowiek::wypisz_nazwisko ( ){
		return ( this->nazwisko ) ;
	}
	