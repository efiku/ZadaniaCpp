#include <iostream>
using namespace std;

int funkcja(int &);

int main()
{
    int x=12;
    cout<<"Przed wywołaniem x="<<x<<endl;
    cout<<funkcja(x)<<endl;
    cout<<"Po wywołaniu x="<<x<<endl;
    system("pause");
}

int funkcja (int &a)
{
    a+=100;
}
