/*
	Funkcja zwraca z dużą dokładnością liczbę X podniesioną do potęgi Y
*/


double xy( double x, double y )
{
  if (y>0)
    return (x*xy(x,--y));  
  else
    return (1); 
}
