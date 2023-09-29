// CPP program without virtual destructor causing undefined behavior
#include <iostream>

using namespace std;

class base
{
public:
	base()
	{
		cout << "Constructing base\n";
	}
	~base()
	{
		cout << "Destructing base\n";
	}
};

class derived : public base
{
public:
	derived()
	{
		cout << "Constructing derived\n";
	}
	~derived()
	{
		cout << "Destructing derived\n";
	}
};

int main()
{
	derived* d = new derived[2];
	base* b = d;

	cin.ignore();

	delete[] d;
	d = NULL;
	b = NULL;

	cin.ignore();

	return 0;
}
/*OUTPUT:
Constructing base
Constructing derived
Constructing base
Constructing derived

Destructing derived
Destructing base
Destructing derived
Destructing base

*/
