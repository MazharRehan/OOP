#include <iostream>
using namespace std;

class A {
private:
	int a;

public:
	A() { a = 0; }
	friend class B; // Friend Class
};

class B {
private:
	int b;

public:
	void showA(const A& x)
	{
		// Since B is friend of A, it can access
		// private members of A
		cout << "A::a=" << x.a << endl;
	}
	B()
	{
		b = 1;
	}
	void showB()
	{
		cout << "B::b=" << b;
	}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	b.showB();

	return 0;
}

