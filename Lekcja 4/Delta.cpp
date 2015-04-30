#include "Delta.h"

efik::CDelta::~CDelta(void)
{
}


efik::CDelta::CDelta(double a, double b, double c): a(a), b(b), c(c), delta(Delta())
{

}

short efik::CDelta::IleRozwiazan(void)
{
	if ( this->delta > 0 )
	{
		return 2;
	}
	else if ( this->delta == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return -1;
}


double efik::CDelta::Delta(void)
{
	return ( b*b -4*a*c)< 0 ?  ( b*b -4*a*c) : sqrt( b*b -4*a*c) ;
}


double efik::CDelta::X0(void)
{
	return -b/2*a;
}


double efik::CDelta::X1(void)
{
	return (-b-sqrt(this->Delta()))/(2*a);;
}


double efik::CDelta::X2(void)
{
	return (-b+sqrt(this->Delta()))/(2*a);;
}
        
std::string efik::CDelta::PodajWynik(void)
{


        std::string Dane;
	switch (this->IleRozwiazan())
	{
	case 1:
		Dane =  "Jedno Rozwiazanie X0 = " + efik::to_string(X0());
		return  Dane ;
		break;
	case 2:
		return "Dwa Rozwiazania: X1 = " + efik::to_string(X1()) + " , X2 = " + efik::to_string(X2());
		break;
	case 0:
		return "Brak!";
		break;
	case -1:
		return "Cos poszlo nie tak";
	default:
		break;
	}
	return "Brak delty do liczenia";
}

