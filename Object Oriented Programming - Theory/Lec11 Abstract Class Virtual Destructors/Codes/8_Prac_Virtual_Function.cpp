#include<iostream>
using namespace std;

class A
{
public:
	void f1()
	{
		cout << "f1 in A" << endl;
	}

};
class B : public A
{
public:
	virtual void f1()
	{
		cout << "f1 of B" << endl;
	}
};
int main()
{
	A* a;
	B b;
	a = &b;

	a->f1(); // call A::f1()

	return 0;
}
