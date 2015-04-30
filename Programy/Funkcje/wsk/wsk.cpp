/*
    Zdefiniuj 3 wskaüniki:
              ptr na int;
              ptr na double;
              ptr na char;
              ptr na bool;
    i zaprezentuj dzia≥ania na nich: 
                  wyúwietlanie adresu i wartoúci 
                  

*/

#include <iostream>

using namespace std;


int main()
{

    int* wsk_1 ;
    double* wsk_2;
    char* wsk_3 = "T";
    bool* wsk_4 = false;
    
    int *a,*b,*c;
    
    cout << " Wskaznik wsk_1 typu int o adresie: [ " << wsk_1 << " ] ma wartosc: " << *wsk_1 << "\n";   
    cout << " Wskaznik wsk_2 typu doubsle o adresie: [ " << wsk_2 << " ] ma wartosc: " << *wsk_2 << "\n";   
    cout << " Wskaznik wsk_3 typu char o adresie: [ " << &wsk_3 << " ] ma wartosc: " << wsk_3 << "\n";   
    cout << " Wskaznik wsk_4 typu bool o adresie: [ " << &wsk_4 << " ] ma wartosc: " << wsk_4<< "\n";   
  
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;

    cin.get();
}
