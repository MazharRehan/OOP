#include <iostream>
using namespace std;

class Base
{
public:
	void fun1()
	{
		cout << "A::fun1" << endl;
	}
	virtual void fun2()
	{
		cout << "A::fun2" << endl;
	}
	virtual void fun3()
	{
		cout << "A::fun3" << endl;
	}
	virtual void fun4()
	{
		cout << "A::fun4" << endl;
	}

};


class Derived: public Base
{
public:
	void fun1()
	{
		cout << "B::fun1" << endl;
	}
	void fun2()
	{
		cout << "B::fun2" << endl;
	}
	void fun3()
	{
		cout << "B::fun3" << endl;
	}
	void fun4(int a)
	{
		cout << "B::fun4" << endl;
	}

};


int main()
{
	Base* b;
	Derived d;
	b = &d; // "b" can call only Base functions or othore funtions that are override in derived class
			// it can call only member funtions of its class
			// it can't call those funtions that are not its member

	b->fun1(); // A::fun1
	b->fun2(); // B::fun2
	b->fun3(); // B::fun3
	b->fun4(); // A::fun4


	return 0;
}
