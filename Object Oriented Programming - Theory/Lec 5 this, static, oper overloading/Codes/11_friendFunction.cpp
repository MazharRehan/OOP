//Friend (member)Function between two classes

#include<iostream>
using namespace std;

class B; // error without declaration

class A 
{
public:
	void showB(B&);
};

class B 
{
private:
	int b;

public:
	B() { b = 0; }
	friend void A::showB(B&); // Friend function must have an object as an argument to access data members of that class
};

void A::showB(B& x)
{
	// Since showB() is friend of B, it can
	// access private members of B
	cout << "B::b = " << x.b;
}

int main()
{
	A a;
	B x;
	a.showB(x);
	
	return 0;
}

