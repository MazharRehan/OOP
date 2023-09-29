#include<iostream>
using namespace std;

class A
{
public:
	virtual void fun()
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


	return 0;
}
