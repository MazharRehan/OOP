#include<iostream>
using namespace std;

class A 
{
	public:
		A()
		{
			cout<<"Constuctor of A"<<endl;
		}
		~A()
		{
			cout << "Destructor of A" << endl;
		}
};

class B
{
	A *a;
	
	public:
		B()
		{
			cout<<"Constuctor of B"<<endl;
		}
		~B()
		{
			cout << "Destructor of B" << endl;
		}
};

int main()
{
	B b;
	
	return 0;
}
/*
Constuctor of B
Destructor of B
*/

