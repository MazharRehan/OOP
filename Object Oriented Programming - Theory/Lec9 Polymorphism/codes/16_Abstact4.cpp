#include<iostream>
using namespace std;

// An abstract class with constructor
class Base
{
protected:
	int x;
public:
	virtual void fun() = 0;
	Base() { x = 9; }
	Base(int i)
	{
		x = i;
		cout << "Constructor of base called\n";
	}
};

class Derived : public Base
{
	int y;
public:
	Derived(int i, int j)
	{
		y = j;
	}
	void fun()
	{
		cout << "x = " << x << ", y = " << y << '\n';
	}
};

int main(void)
{
	Derived d(4, 5);

	Base* ptr = &d;
	ptr->fun();

	return 0;
}