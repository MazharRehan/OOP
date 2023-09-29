#include<iostream>
using namespace std;

class A
{
	public:
		void f1()
		{
			cout << "f1 in A";
		}
		
};
class B: public A
{
	public:
		void f1()
		{
			cout << "f1 of B";
		}
};
int main()
{
	A *a;
	B b;
	
	a = &b; // this statement will be handle at run time
	
	a -> f1(); // it will call A::f1()
	
	
	return 0;
}
