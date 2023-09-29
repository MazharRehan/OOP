// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
	int a;
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	a=0;
	cout<<"The value of a is:"<<a;
	}
};

// sub class derived from a single base classes
class Car : private Vehicle {

};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}

