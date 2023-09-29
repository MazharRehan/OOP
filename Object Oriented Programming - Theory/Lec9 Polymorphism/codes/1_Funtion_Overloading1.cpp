// C++ program to demonstrate function overloading or Compile-time Polymorphism
#include <bits/stdc++.h>
using namespace std;

class SampleClass 
{
public:
	// Function with 1 int parameter
	void myfunction(int x)
	{
		cout << "value of x is " << x << endl;
	}

	// myfunctiontion with same name but 1 double parameter
	void myfunction(double x)
	{
		cout << "value of x is " <<	x << endl;
	}

	// myfunctiontion with same name and 2 int parameters
	void myfunction(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y << endl;
	}
};

// Driver code
int main()
{
	SampleClass obj1;

	// myfunctiontion being called depends on the parameters passed
	// myfunction() is called with int value
	obj1.myfunction(7);

	// myfunction() is called with double value
	obj1.myfunction(9.132);

	// myfunction() is called with 2 int values
	obj1.myfunction(85, 64);
	
	return 0;
}

