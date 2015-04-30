/*
  Napisz program który zaprezentuje dzia³anie f statycznej
  funkcja ma liczyæ
  pionki na planszy
  i zwracaæ wynik: 
            < 5 - "m"
            < 10 - "s"
            > 10 - "d"
            

*/


#include <cstdlib>
#include <iostream>
#include "pionki.h"
using namespace std;

int pionki::policz = 0;

int main(int argc, char *argv[])
{
    pionki A1(1);
    pionki A2(15);
    pionki A3(14);
    pionki A4(13);
    pionki A5(12);
    pionki A6(11);
    pionki A7(10);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
