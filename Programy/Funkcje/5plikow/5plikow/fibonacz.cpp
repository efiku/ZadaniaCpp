/*
	Rekurencyjna funkcja ciagu fibonacziego

*/
double fib(double n)
{
       if(n<2) return n;
        return (fib(n-2)+fib(n-1));
}