/*
  Program ma obliczyæ wartosæ n ci¹gu fibonacziego.
*/
#include <iostream>

using namespace std;

double fib(double);

int main()
{
    int n;

    cout << "Podaj numer wyrazu ciagu fibonacciego do obliczenia:";
    cin >> n;
    cout<< endl;
    cout << fib(n) << endl;

    system("PAUSE");
    return(0);
}

double fib(double n)
{
       if(n<2) return n;
        return (fib(n-2)+fib(n-1));
}
