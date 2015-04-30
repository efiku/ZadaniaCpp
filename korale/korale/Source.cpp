#include <iostream>
#include <string>


using namespace std;
string s;
void Korale( unsigned int n)
{
	if (n == 1)
	{
		s = s + "-C-";
	}
	else if (n % 2 == 0)
	{
		Korale(n / 2);
		s = s + "-B-";
	}
	else if (n % 2 == 1)
	{
		Korale((n - 1) / 2);
		s = s + "-C-";
	}
}

int main()
{
	for (int i = 1; i < 17; i++)
	{
		s = "";
		Korale(i);
		cout << i << ". " << s << endl;
	}

	system("PAUSE");
}