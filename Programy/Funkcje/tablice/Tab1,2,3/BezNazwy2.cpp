/*
  Program generuje dwie tablice losowe i przepisuje do trzeciej pierwiastek z sumy kwadratów komórek
*/

#include<iostream>
#include<math.h>
#include <iomanip> 
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;
    system("cls");
    
    int tab1[n],tab2[n];
    double tab3[n];
    
    for (int i=0; i<n; i++)
    {
        tab1[i]=rand()%10+1;
        tab2[i]=rand()%10+1;
        tab3[i]= sqrt((tab1[i]*tab1[i])+(tab2[i]*tab2[i]));
    }
    
    cout << "TAB1" << endl << endl;
    for (int i=0; i<n; i++)
    {
        cout << "tab1[" << i << "] = " << tab1[i] << endl;
    }
    cout << endl << endl;
    
    cout << "TAB2" << endl << endl;
    for (int i=0; i<n; i++)
    {
        cout << "tab2[" << i << "] = " << tab2[i] << endl;
    }
    cout << endl << endl;
    
    cout << "TAB3" << endl << endl;
    for (int i=0; i<n; i++)
    {
        cout << "tab3[" << i << "] = " << setprecision(3) << tab3[i] << endl;
    }
    cout << endl << endl;
    
    system("pause");
    return 0;
}
