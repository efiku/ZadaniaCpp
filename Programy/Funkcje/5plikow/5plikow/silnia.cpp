/*
  silnia.cpp
  

*/
  
  long silnia( long n )
  {
       return ( (n <2 ) ? n : ( silnia(n-1) * n ) );
  }