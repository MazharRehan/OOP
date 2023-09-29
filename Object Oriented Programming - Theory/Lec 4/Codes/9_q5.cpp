// Initialization list
#include<iostream>
using namespace std;

class Test
{
	int b;
	int a;

public:
	Test(){ 	} //Default constructor
	// Test (int i, int j) : a(i), b(j)
	// Test (int i, int j) : b(j), a(i)
	// Test (int i, int j) : a(i), b(i + j)
	// Test (int i, int j) : a(i), b(2 * j)
	// Test (int i, int j) :  b(a + j), a(i) // It gives wrong output
	// Test (int i, int j) : b(j), a(i + b) 
	// Test (int i, int j) : b(i), a(b+j)  
	Test (int i, int j) : a(i+b), b(j) // 'b' will be initialized first as it is diclare first
	{
		cout<<"Value of a = "<<a<<endl;
		cout<<"Value of b = "<<b<<endl;
	}
	
	~Test(){	}
	
};

int main()
{
	Test t1(5,3);
	
	return 0;
}
