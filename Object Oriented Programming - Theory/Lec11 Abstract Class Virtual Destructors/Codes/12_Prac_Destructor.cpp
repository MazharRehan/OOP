// CPP program without virtual destructor

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
	derived* d = new derived;
	base* b = d;

	cin.ignore();

	delete d;
	d = NULL;
	b = NULL;
	
	cin.ignore();

	return 0;
}
/*Output:
Constructing base
Constructing derived

Destructing derived
Destructing base

*/

