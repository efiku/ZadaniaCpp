#ifndef _U_
#define _U_
class uczen : public Czlowiek {
		int klasa;
		
		public:
		void zapisz_klase ( int k ) { this->klasa = k; }
		int wypisz_klase () { return this->klasa; }
	

};
#endif
