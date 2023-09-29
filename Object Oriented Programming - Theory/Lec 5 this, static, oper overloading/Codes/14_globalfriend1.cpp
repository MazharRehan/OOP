#include <iostream>
using namespace std;

class A 
{
	int a;

public:
	A() { a = 10; }

	// global friend function
	friend void showA(const A&);
};

void showA(const A & x)
{
	// Since showA() is a friend, it can access
	// private members of A
	cout << "A::a=" << x.a;
}

int main()
{
	A a;
	showA(a);
	
	return 0;
}

