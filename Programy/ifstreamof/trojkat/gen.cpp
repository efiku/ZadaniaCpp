#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>      // std::setprecision
#include <math.h>
#include <time.h>
/*
	Program ma generować a i b dla progamu obliczającego do pliku.
	struktura:
		[1] - n liczba wierszy
		[2..n] - a i b
*/
using namespace std;
int main(int argc, char *argv[])
{
	 srand(time(NULL));
	 
	int n = atoi(argv[1]); // ascii na integer ;-)
	std::cout << "Generuje : " << n << " wierszy z danymi. \n";
	
	ofstream plik;
	int a,b;
	plik.open("generator.dat");
		plik << n << endl ;
		for( int i = 1; i <= n ; i++)
		{
			a =( rand() % 100 + 1)	;
			b =(rand() % 100 + 1)	;
			cout << a << " " << b << endl; 		
			plik << a << " " << b << endl;			
		}
	plik.close();
	
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
