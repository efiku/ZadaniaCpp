/*
  Napisz funkcje 
  zamieniajaca miejscami wartosci argumentow
*/
#include <iostream>
using namespace std;
void zamien( int & , int & );
/*  zamienia a z b */ 

int main()
{
    int x = 10;
    int y = 70;
    zamien(x,y); // Zamienia X z Y
    cout << "x =" << x << endl ;   
    cout << "y =" << y << endl ;   
    system("pause");
}

void zamien ( int &a , int &b ) 
{
int   c = a;
      a = b; b = c;               
}
