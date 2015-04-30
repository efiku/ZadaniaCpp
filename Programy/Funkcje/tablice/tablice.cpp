/*
    Przyklad z pop lekcji + 4 funkcje
    
    generujaca - tablice
    wys - tablice
    zapisujaca dane do tablicy wynikowej - tablice
    s287 - symfonia
*/
/*
  Program generuje dwie tablice losowe i przepisuje do trzeciej pierwiastek z sumy kwadratów komórek
*/

#include<iostream>
#include<math.h>
#include <iomanip> 
using namespace std;


void generuj( int * Ptr_TAB, int rozmiar)
{
    for (int i=0; i<rozmiar; i++)
    {
        *Ptr_TAB ++=rand()%10+1;
       // tab3[i]= sqrt((tab1[i]*tab1[i])+(tab2[i]*tab2[i]));
    }
}
void zapisz(int * Ptr_TABA, int * Ptr_TABB, double * Ptr_TABC, int rozmiar )
{
    for (int i=0; i<rozmiar; i++)
    {
      *Ptr_TABC = sqrt( ( (*Ptr_TABA) * (*Ptr_TABA) ) + ( (*Ptr_TABB) * (*Ptr_TABB)));
      Ptr_TABA++;
      Ptr_TABB++;
      Ptr_TABC++;
    }     
     
}
void wyswietl( int * Ptr_TAB, int rozmiar )
{
   cout << " :::TABLICA::: " << endl << endl;
    for (int i=0; i<rozmiar; i++)
    {
        cout << "tab1[" << i << "] = " << *Ptr_TAB++ << endl;
    }
    cout << endl << endl;
}
void wyswietl( double * Ptr_TAB, int rozmiar )
{
   cout << " :::TABLICA::: " << endl << endl;
    for (int i=0; i<rozmiar; i++)
    {
        cout << "Tablica: [" << i << "] = " << *Ptr_TAB++ << endl;
    }
    cout << endl << endl;
}
int main()
{
    srand(time(NULL));
    int n;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;
    system("cls");
    
    int tab1[n],tab2[n];
    double tab3[n];
    
    generuj(&tab1[0],n);
    generuj(&tab2[0],n);
    
    zapisz(&tab1[0],&tab2[0],&tab3[0],n);
    
    wyswietl(&tab1[0],n);
    wyswietl(&tab2[0],n);
    wyswietl(&tab3[0],n);

    
    system("pause");
    return 0;
}

