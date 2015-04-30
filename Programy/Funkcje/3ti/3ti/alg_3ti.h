/*
	Nazwa pliku: 
			alg_3ti.h
	Opis: 
			Biblioteka zawieraj¹ca wszystkie obowi¹zkowe algorytmy.
	Autorzy:
			Utworzona wspólnymi si³ami przez uczniów klasy 3TI '95


******************************************************************************************************
	OBOWI¥ZKOWE ALGORYTMY:

	#1.		Obliczanie d³ugoœci przeciwprostok¹tnej w trójk¹cie prostok¹tnym za pomoc¹ twierdzenia Pitagorasa.
	#2.		Sprawdzanie czy podana liczba jest mniejsza od zera, jest zerem lub jest wiêksza od zera.
	#3.		Obliczanie wartoœci bezwzglêdnej (modu³u) z danej liczby.
	#4.		Obliczanie odwrotnoœci z danej liczby.
	#5.		Rozwi¹zywanie uk³adu równañ metod¹ wyznaczników.
	#6.		Obliczanie miejsc zerowych funkcji kwadratowej.
	#7.		Sprawdzanie czy podana liczba jest parzysta / nieparzysta.
	#8.		Sprawdzanie czy podana liczba x jest podzielna przez liczbê y.
	#9.		Sprawdzenie czy podana liczba jest liczb¹ pierwsz¹.
	#10.	Obliczanie sumy liczb od 1 do n.
	#11.	Obliczanie silni (n!) z liczby n.
	#12.	Obliczanie sumy liczb od n1 do n2 (n1 < n2).
	#13.	Obliczanie n-tej potêgi liczby 2 (2n).
	#14.	Obliczanie xy.
	#15.	Obliczanie najwiêkszego wspólnego dzielnika dwóch liczb - NWD za pomoc¹ algorytmu Euklidesa.
	#16.	Skracanie u³amków zwyk³ych z zastosowaniem algorytmu Euklidesa.

******************************************************************************************************
*/
#include <iostream>
#include <math.h>
namespace alg_3ti
{
	// #1: Zwraca przeciwprostok¹tn¹.
	double dpp( long A, long B ) { return std::sqrt( ( (A*A) + (B*B) ) ); };

	// #2: Zwraca: ROWNA, MNIEJSZA, WIEKSZA
	void  mwr( long L ){ if( L < 0 ) std::cout << "MNIEJSZA"; else if ( L == 0 ) std::cout<< "ROWNA"; else std::cout<< "WIEKSZA"; }

	// #3: Zwraca: modu³ z liczby.
	long mod( long X ) { return std::abs(X); };

	// #4: Zwraca odwrotnoœæ z danej liczby
	double odw( long X) { return ( X != 0) ? 1/X : 0; } ;

	// #5: Rozwi¹zuje równania.
	void wyznaczniki(){
		using namespace std;
		{
		  float a,b,c;
		  float d,e,f;
		  float W,Wx,Wy;
		  float x,y;
  
  
       
		  cout << "\nWczytywanie pierwszego rownania  ax+by=c" << endl;
		  cout << "a = ";  
		  cin >> a;
		  cout << "\tb = ";  
		  cin >> b;
		  cout << "\tc = ";  
		  cin >> c;
  
		  cout << "\nWczytywanie drugiego rownania  dx+ey=f" << endl;
		  cout << "d = ";  
		  cin >> d;
		  cout << "\te = ";  
		  cin >> e;
		  cout << "\tf = ";  
		  cin >> f;
		 cout << endl;
  
  
		  W  = a*e-d*b;
		  Wx = c*e-b*f;
		  Wy = a*f-c*d;
 
		  if (W==0)
			{
			  if ((Wx==0) && (Wy==0))      
				  cout << "\nUklad jest nieoznaczony.\n";        
			  else
				  cout << "\nUk1ad jest sprzeczny.\n";                
			}
		  else
			{
			  x=Wx/W;
			  y=Wy/W;      
      
			  cout << "Rozwiazaniem ukladu sa liczby:\n"
				   << "  x = " << x 
				   << "  y = " << y            
				   << endl << endl;
			}  


		} //namespace std;
	}


		// #6: Rozwiazuje rownanie kwadratowe
		void kwadrat()
		{
			using namespace std;
			{
					   float a,b,c,x0,x1,x2,pierwiastek_delta,delta;
				   int ster;
				   cout<<"Podaj wspolczynnik a:= ";
				   cin>>a;
				   if (a != 0)
				   {   
						 cout<<"Podaj wspolczynnik b:= ";
						 cin>>b;
						 cout<<"Podaj wspolczynnik c:= ";
						 cin>>c;
						 delta = ((b*b)-(4*a*c));
						 pierwiastek_delta = sqrt (delta);
						 x1=((b-pierwiastek_delta)/2*a);
						 x2=((b+pierwiastek_delta)/2*a);
				   if (delta>0) ster=1;
				   else if (delta==0) {ster=2;}
				   else if (delta<0) {ster=3;}
				}   
				switch(ster)
				{
					  case 1:
							cout<<"Wyniki to \n x1="<<x1<<"\n x2="<<x2<<"\n";
						 break;
					  case 2:
							x0=(-b/(2*a));
							cout<<"\n Wynik to \n x0="<<x0<<"\n";
						 break;
					  case 3:
							cout<<"\n Nie posiada mniejsc zerowych \n";
						 break;

				}		

			} // namespace: std;

		}


		// #7: bool: true- dla parzystej, false - dla nieparzystej.
		bool liczba_p ( long X) { return ( X % 2 == 0) ? true : false; };

		// #8: bool: true- dla podzielnej, fale - dla nie podzielnej
		bool XprzezY ( long X, long Y) { return ( (Y != 0) ? (  ( X % Y == 0) ? true : false)  : false ); };

		// #9: TRUE - pierwsza , FALSE - z³o¿ona
		bool czy_pierwsza(int n)
			{
				 bool zmienna=true;
				 if (n>3)
				 {
						 for (int a=2; a<n-1; a++)
						 {
							 if ((n%a)==0) zmienna=false;
						 }
				 }
				 return zmienna;     
			};
		// #10: zwraca sume od n1 do n2. 
		long sum_1n ( long n)
		{
			long suma = 0;
			  for (long i = 1; i <= n; i++)
				  {
					   suma = suma + i;
				  }
			  return suma;
		};

		// #11: zwraca !n
		long silnia( long X) { return (X < 2) ?  1 : silnia(X-1)*X; };


		// #12: suma n1 do n2 ( n1 < n2 )
		long sum_1n2n ( long N1, long N2) { long suma = 0;  for (long i = N1; i <= N2; i++) suma = suma + i ; return suma; };

		// #13: zwraca wynik 2^Y
		long DwaDoN ( long N ) { return (N < 1) ? 1 : DwaDoN(N-1)*2; };

		// #14: zwraca wynikX^Y
		long XY( long X, long Y) { long w=1; for (long i=0;i<Y;i++){w=w*X;} return w; };

		// #15: zwraca NWD
		long NWD (long &A, long B ) { long c; while( B != 0 ) { c = A % B; A = B; B = c; } return A;};

		// #16: wyœwietla skrócony u³amek.
		void  skr_ul( long A , long B ) {
			long A_,B_;
				do
				{
					if (A_ > B_) B_=A_-B_;  else B_ = B_ - A_; 
				}
				while (A_ != B_);

			using namespace std;
			{
				cout << A << "/" << B << " = " << A/A_ << "/" << B/B_; 
			}
		};

	} // namespace: alg_3ti
