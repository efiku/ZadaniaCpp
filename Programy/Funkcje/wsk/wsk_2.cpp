/*
  Napisz 4 wersje funkcji obliczaj¹cej 
  œredni¹ arytmetyczn¹ n liczb.
*/
#include <iostream>
#include <iomanip> 
using namespace std;

void srednia( int , int , int );
void srednia( double, double, double);
void srednia( int * t, int ); // tablica - zliczyæ tablice i podzielic przez srednia!
void srednia( int, double);

int main()
{
    srand(time(NULL));
    int z_a = 10;
    int z_b = 3;
    int z_c = 2;
    
    double d_a = 4.3;
    double d_b = 2.7;
    double d_c = 3.5;
    
    int rozmiar_t = 50;
    
    int *tablica = new int[rozmiar_t]; // tablica dynamiczna
    
    
     for( int i = 0 ; i < rozmiar_t ; i++)
     {
          tablica[i] = rand() % 15 + 1 ;
      }
    
    cout << " Funkcja nr 1: \n";
    srednia(z_a,z_b,z_c);
    cout << endl;
    
    
    cout << " Funkcja nr 2: \n";
    srednia(d_a,d_b,d_c);
    cout << endl;
    
    
    cout << " Funkcja nr 3: \n";
    srednia(tablica, rozmiar_t);
    cout << endl;
    
    
    cout << " Funkcja nr 4: \n";
    srednia(z_a, d_c);
    cout << endl;    
    cin.get();
    delete [] tablica; // koniecznie 
    return 0;    
}

void srednia( int a, int b, int c )
{
    cout<< "Srednia: " << ((a+b+c)/3) << endl;
}
void srednia( double a, double b, double c )
{
    cout<< "Srednia: " << ((a+b+c)/3) << endl;
}
void srednia( int a, double b)
{
    cout << "Srednia: "<< ((a+b)/2) ;     
}
void srednia( int *t , int rozmiar)
{
     double srednia = 0;
     cout << "\n Tablica  = ";
    for( int i=0; i < rozmiar; i++)
    {
         cout << t[i] << ",";
         srednia += t[i];    
    } 
    srednia = srednia / rozmiar;   
    
    cout << "\nSrednia: " << setprecision(3) << srednia  << endl; 
}
