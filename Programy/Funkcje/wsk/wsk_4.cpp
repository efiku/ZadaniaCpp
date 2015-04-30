/*  
    tab 1 - los
    tab 2 - los
    
    tab 3 = tab1[i] + tab2[i];

*/
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int* T_1 = new int [10];
    int* T_2 = new int [10];   
    long* T_3 = new long [10];
    
    for(int i= 0 ; i < 10 ; i++)
    {
            T_1[i]=0;  
            T_2[i]=0;  
            T_3[i]=0;        
    }
    
    cout << "\nTablica nr1: \n";
    for(int i=0; i < 10; i++)
    {
        T_1[i] = rand()% 10 +1;        
        cout << "T_1 [ " << i << " ] = " << T_1[i]  << endl;
    }
    cout << endl;
    cout << endl;
    cout << "\nTablica nr2: \n"; 
    for(int i=0; i < 10; i++)
    {
        T_2[i] = rand()% 10 +1;        
        cout << "T_2 [ " << i << " ] = " << T_2[i]  << endl;
    }
    
    cout << endl;
    cout << endl;
    cout << "\nTablica nr3: \n";     
    
    for(int i=0; i < 10; i++)
    {
        T_3[i] = ( (T_1[i]*T_1[i]) +  (T_2[i]*T_2[i]));
            
        cout << "T_3 [ " << i << " ] = " << T_3[i]  << "\t ("<< T_1[i] << "*"<< T_1[i] << ") +" << " ("<< T_2[i] << "*"<< T_2[i] << ")" <<  endl;
    }
    delete [] T_1;
    delete [] T_2;    
    delete [] T_3;
    
    cin.get();

}

