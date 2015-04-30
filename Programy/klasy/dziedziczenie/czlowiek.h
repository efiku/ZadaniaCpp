#ifndef __CZ_
#define __CZ_
#include <string>
#include <iostream>
using namespace std;
class Czlowiek
{
	protected:
	string imie;
	string nazwisko;
	
	
	public: 
		void zapisz_imie ( string );
		void zapisz_nazwisko ( string );
	
		string wypisz_imie ( ) ;
		string wypisz_nazwisko ( );
		
};
#endif
