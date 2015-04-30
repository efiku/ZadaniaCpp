/*
  Napisz funkcje wyœwietlaj¹c¹ temperaturê w jedenj z trzech skali.
  *C *F *K
  0  2   1
  - 1 parametr temperatura w stopniach *C
  - 2 parametr liczba 0 1 lub 2
*/

#include <iostream> 
#include <math.h>
using namespace std;

void temperatura( int = 0, unsigned = 0 )   ;  

int main()
{
    unsigned typ;
    int stopnie;
    cout << " ----- Pomiar temperatury ------ \n\n";
    cout << "\tPodaj temperature (*C):\t"; cin >> stopnie; cout << endl;
    cout << " ------------------------------- \n\n";
    cout << " ----- Pomiar temperatury ------ \n";
    cout << " 0 - Stopnie Celcjusza \n";
    cout << " 1 - Stopnie Kelvina \n";
    cout << " 2 - Stopnie Fahrenheita\n";
    cout << " \tWybierz:\t"; cin>> typ; cout << endl;    
    system("cls");
    
    
    cout << "Test parametrow domniemanych i podanych!! \n\n\n";
    cout << "Parametry domniemane: temperatura(0,0);\n";
    cout << "------------------------------------\n\n";    
    temperatura();
    
    
    cout << "\n\nParametry domniemane: temperatura(stopnie,1); stopnie= "<< stopnie << "\n";
    cout << "------------------------------------\n\n";    
void temperatura(int a, unsigned b= 1);
    temperatura(stopnie);
  
  
    cout << "\n\nParametry domniemane: temperatura(stopnie,2); stopnie= "<< stopnie << "\n";
    cout << "------------------------------------\n\n";    
    temperatura(stopnie, 2);
    
    cout << "\n\n";
    cout << "Parametry podane: temperatura(stopnie,typ); stopnie= "<< stopnie << ", typ="<< typ << "\n";    
    cout << "------------------------------------\n\n";    
    temperatura(stopnie,typ);
    system("pause");
    return 0;   
}

void temperatura( int stopnie, unsigned tryb_pomiaru )
{
     switch (tryb_pomiaru)
     {
            case 0: cout << stopnie << " stopni Celcjusza\n";
                    break;
                    
            case 2: cout << static_cast<double>((stopnie * 1.8) + 32) << " stopni Fahrenheita\n";
                    break;
                    
            case 1: cout << (stopnie + 273.15) << " stopni Kelvina\n";
                    break;
                    
            default: cout << "Podano zly drugi parametr";
     }         
                         
}
