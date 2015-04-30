/*
  Napisz program za pomoc¹ rekurencji.
  Porównuj¹cy wielokrotnoœci wystêpuj¹ce w informatyce 
  i w fizyce. 
    1 kilo = 2 ^ 10 = 1024
 -  1 kilo = 10 ^ 3 = 1000
    --------
            24
    1 mega = 2 ^   = 
*/
#include <iostream> 
#include <iomanip>      // std::setprecision
using namespace std;

double xy( double , double  );


int main()
{
     double roznica = 0;
     double procent = 0;
     cout << "\n";
     roznica =  xy(2,10) -xy(10,3) ;
     procent =  ( ( xy(2,10)- xy(10,3) ) * 100 ) / xy(10,3) ;
     cout<< "Kilo  2^10 = " << setprecision(10) << xy(2,10) << " 10^3 = " << setprecision(10) <<  xy(10,3) << " " << setprecision(10) << roznica << "  " << setprecision(5) << procent  << "%\n";
     
     roznica =  xy(2,20) -xy(10,6) ;
     procent =  ( ( xy(2,20)- xy(10,6) ) * 100 ) / xy(10,6) ;
     cout<< "Mega  2^20 = " << setprecision(10) << xy(2,20) << " 10^6 = "<< setprecision(10) <<  xy(10,6) << " " << setprecision(10) << roznica << "  " << setprecision(5) << procent  << "%\n";
     
     roznica =  xy(2,30) -xy(10,9) ;
     procent =  ( ( xy(2,30)- xy(10,9) ) * 100 ) / xy(10,9) ;
     
     cout<< "Giga  2^30 = " << setprecision(10) << xy(2,30) << " 10^9 = "<< setprecision(10) <<  xy(10,9) << " " << setprecision(10) << roznica << "  " << setprecision(5) << procent  << "%\n";

     roznica =  xy(2,40) -xy(10,12) ;
     procent =  ( ( xy(2,40)- xy(10,12) ) * 100 ) / xy(10,12) ;
     cout<< "Tera  2^40 = " << setprecision(15) << xy(2,40) << " 10^12 = "<< setprecision(15) <<  xy(10,12) << " " << setprecision(15) << roznica << "  " << setprecision(5) << procent  << "%\n";
     system("pause");
    
}


double xy( double x, double y )
{
  if (y>0)
    return (x*xy(x,--y));  
  else
    return (1); 
}
