#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>      // std::setprecision
#include <math.h>
#include <time.h>
/*
	Program ma obliczac przeciwprostokatne z pliku generator.dat
*/
using namespace std;
int main()
{
	cout << "Pobieram dane z pliku generator.dat \n" << endl;
    ifstream czytaj;
    czytaj.open("generator.dat");
	if(!czytaj.good() ) {
          cout << "Plik: generator.dat - nie moze zostac znaleziony lub jest uszkodzony!  \n";
            system("PAUSE");
            return 1;
     }
     
     string dane;
     czytaj.clear();
     czytaj.seekg(0);
     getline(czytaj,dane); 
	int ilosc = atoi (dane.c_str() );
	czytaj.clear();
	czytaj.seekg(0);
    int tablica[ilosc+1];
    
    for (int i=0; i<(ilosc*2)+1; i++)
    {
        czytaj >> tablica[i];
    }

    czytaj.close();
    cout<< "Wczytano dane.... \n";
      
    ofstream wynik;
    wynik.open("wyniki.txt");
    double c;
    int j=1;
    
    for (int i=0; i<ilosc; i++)
    {
        c = sqrt(( (tablica[j]*tablica[j])+(tablica[j+1]*tablica[j+1])) );
        wynik << tablica[j] << " " << tablica[j+1] << " " << setprecision(4) << c << "\n";
        j += 2;
    }
    
    wynik.close();
    cout<< "Zapisano dane... \n";
    ifstream plik;
    plik.open("wyniki.txt");
    string line;
       while ( getline (plik,line) )
    {
      cout << line << '\n';
    }
    plik.close();
}
