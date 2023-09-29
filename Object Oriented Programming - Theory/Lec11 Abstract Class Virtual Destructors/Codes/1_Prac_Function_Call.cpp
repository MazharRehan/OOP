#include<iostream>
using namespace std;

class A
{
public:
	void fun()
	{
		cout << "fun of A" << endl;
	}

};
class B : public A
{
public:
	void fun()
	{
		cout << "fun of B" << endl;
	}
};
int main()
{
	A a;
	B b;

	a.fun(); // call A::fun()
	b.fun(); // call B::fun()
	b.A::fun(); // call A::fun()

	//a.B::fun(); //	[Error] 'B' is not a base of 'A'

	return 0;
}
