// C++ program to show passing of objects to a function

#include <iostream>
using namespace std;

class Example {
public:
	int a;

	// This function will take object as arguments
	void add(const Example& Ea, const Example& Eb)
	{
		a = Ea.a + Eb.a;
	}
};
int main()
{
	Example E1, E2, E3;

	// Values are initialized for both objects
	E1.a = 50;
	E2.a = 100;
	E3.a = 0;

	cout << "Initial Values \nValue of object 1: " << E1.a
		<< ", \nobject 2: " << E2.a
		<< ", \nobject 3: " << E3.a << "\n";

	// Passing objects as an argument to function add()
	E3.add(E1, E2);

	// Changed values after passing object as an argument
	cout << "New values \nValue of object 1: " << E1.a
		<< ", \nobject 2: " << E2.a
		<< ", \nobject 3: " << E3.a << "\n";

	return 0;
}
