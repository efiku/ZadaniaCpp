#include <iostream>
using namespace std;

int funkcja(int &);

int main()
{
    int x=12;
    cout<<"Przed wywo�aniem x="<<x<<endl;
    cout<<funkcja(x)<<endl;
    cout<<"Po wywo�aniu x="<<x<<endl;
    system("pause");
}

int funkcja (int &a)
{
    a+=100;
}
