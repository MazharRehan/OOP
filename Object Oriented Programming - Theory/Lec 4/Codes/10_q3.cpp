#include<iostream>
using namespace std;

class Test
{
	int a;
	int b;
public:

	Test() { 	} //Default constructor
	~Test() {	}

	// Test (int i, int j) : a(i), b(j)
	// Test (int i, int j) : b(j), a(i)
	// Test (int i, int j) : a(i), b(i + j)
	// Test (int i, int j) : a(i), b(2 * j)
	// Test (int i, int j) : a(i), b(a + j)

	// Error! This will create problems because 'a' will be initialized first as it is diclare first
	// Test (int i, int j) : b(j), a(i + b) 
	// Test (int i, int j) : b(i), a(b+j) 

	//Test(int i, int j) : a(i + b), b(j)  ---> Error! When 'a' is initializing, 'b' is not initilized
	
	Test(int i, int j) : a(i), b(j)
	{
		cout << "Value of a = " << a << endl;
		cout << "Value of b = " << b << endl;
	}

};

int main()
{
	Test t1(5, 3);

	return 0;
}