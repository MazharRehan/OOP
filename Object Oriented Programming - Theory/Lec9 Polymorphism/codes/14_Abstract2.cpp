#include<iostream>
using namespace std;

class Base
{
public:
	virtual void show() = 0;
};

class Derived : public Base { }; // this wil become puew virtual class

int main(void)
{
	// Derived d;
	
	// [Error] cannot declare variable 'd' to be of abstract type 'Derived'
	//	[Note] because the following virtual functions are pure within 'Derived':
	// 	[Note] virtual void Base::show()
	
	return 0;
}

