#include<iostream>
using namespace std;

class A
{
	public:
	A()
	{
		cout<<"A";
	}
};
class B: public A
{
	public:
	B()
	{
		cout<<"B";
	}
};
int main()
{
	A a;
	B b;
	A a1;
	
	return 0;
}
