#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>      // std::setprecision
#include <math.h>
/*
  suma srednia min max z pliku dane.txt
  zapis na ekran i do pliku wyniki.txt
*/
using namespace std;

long int suma = 0;
float    srednia = 0.0;
long int minimalna = 1;
long int maxymalna = 0;


void wykonajOperacje( int zmienna ) 
{
     suma += zmienna;
     if(  zmienna <= minimalna ) { minimalna = zmienna ; }
     if ( zmienna >= maxymalna  ) { maxymalna = zmienna; }
}
bool wczytajPLIK( void )
{
    ifstream plik;
    plik.open( "dane.txt" );  
    if( !plik.good() )
         return false;
    
    while( true ) 
    {
        int zmienna_plikowa;
        plik >> zmienna_plikowa;
        if( plik.good() )
             wykonajOperacje( zmienna_plikowa );
        else
             break; // gdy end of file
        
    } //while
    return true;     
     
}
int main(int argc, char *argv[])
{
    wczytajPLIK();
    cout << "Suma: " <<  suma << endl;
    cout << "Minimalna: " << minimalna << endl;
    cout << "Maxymalna: " << maxymalna << endl;
    cout << "Srednia: " << setprecision(3) << ( suma / 1000)    <<  endl;      
    
    
    ofstream wynik;
             wynik.open("wynik.txt");
                            wynik << "Suma: " <<  suma << endl;
                            wynik << "Minimalna: " << minimalna << endl;
                            wynik << "Maxymalna: " << maxymalna << endl;
                            wynik << "Srednia: " << setprecision(3) << ( suma / 1000) <<  endl;                             
             wynik.close();
             
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
