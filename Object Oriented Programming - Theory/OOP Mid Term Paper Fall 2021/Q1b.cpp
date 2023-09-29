// Q:1(b)
						// Code by Mazhar Rehan

#include<iostream>
using namespace std;

class Vortex
{
public:
	Vortex()
	{
		cout << "Default" << endl;
	}
	Vortex(const char* _n, double _marks)
	{
		cout << "Parameterized" << endl;
	}
	Vortex(const Vortex& ref)
	{
		cout << "copy" << endl;
	}
};

Vortex& F1(Vortex first, Vortex second)
{
	cout << "Hello from F1" << endl;
	return first;
}
int main()
{
	Vortex v1("VTX", 1.8); // Parameterized
	Vortex v2 = v1; // copy
	Vortex v4(v2); // copy
	v2 = v1; // copy constructor not called // simple copy the objects
	Vortex v5 = F1(v2, v4); // copy , copy , Hello from F1 , copy

	return 0;
}
/* OUTPUT:
Parameterized
copy
copy
copy
copy
Hello from F1
copy
*/
