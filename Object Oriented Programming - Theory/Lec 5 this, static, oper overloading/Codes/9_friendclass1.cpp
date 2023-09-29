// Example: Friend Class

#include<iostream>
using namespace std;

class A
{
	int x;
public:
	A()
	{
		x = 10;
	}
	friend class B; //friend class
};

class B
{
public:
	void display(const A& t)
	{
		cout << "The value of x=" << t.x << endl; // access private data member of class A
	}
};

int main()
{
	A a;
	B b;
	b.display(a);

	return 0;
}

