// Q:1(a)
				// Code by Mazhar Rehan

#include<iostream>
using namespace std;

class EFG
{
public:
	int e;
	int f;
	int g;
	EFG() :e(-30), f(++e), g(f++)
	{
		/* 
		e = -30
		f = ++e; // e = -29 , f = -29
		g = f++; // f = -29, g = -29
		//f = -28

		//values are e = -29 , f = -28, g = -29
		*/
		cout << e << " " << f << " " << g << endl;
	}
};

int main()
{
	EFG a;

	cout << a.e << " " << a.f << " " << a.g;


	return 0;
}
