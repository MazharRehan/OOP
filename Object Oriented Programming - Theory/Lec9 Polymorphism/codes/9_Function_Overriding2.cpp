// C++ Program to demonstrate the Virtual Function
#include <iostream>
using namespace std;

// Declaring a Base class
class MyBaseClass {

public:
	// virtual function
	virtual void display()
	{
		cout << "Called virtual Base Class function" <<	"\n\n";
	}

	void print()
	{
		cout << "Called MyBaseClass print function" <<	"\n\n";
	}
};

// Declaring a Child Class
class MyChildClass : public MyBaseClass 
{

public:
	void display()
	{
		cout << "Called MyChildClass Display Function" << "\n\n";
	}

	void print()
	{
		cout << "Called MyChildClass print Function" <<	"\n\n";
	}
};

// Driver code
int main()
{
	// Create a reference of class base
	MyBaseClass* base;

	MyChildClass child;

	base = &child;

	// This will call the virtual function
	base->MyBaseClass::display();

	// this will call the non-virtual function
	base->print(); //MyBaseClass::print()
	child.print();
	
	return 0;
}

