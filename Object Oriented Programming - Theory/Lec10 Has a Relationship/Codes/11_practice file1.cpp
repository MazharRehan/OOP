#include<iostream>
using namespace std;

class A
{
	int a;
public:
	A()
	{
		a = 20;
	}
	~A() {		}
	void seta(int x)
	{
		a = x;
	}
	int geta()
	{
		return a;
	}
};
class B
{
	int b;
public:
	B()
	{
		b = 10;
	}
	~B() {		}
	void setb(int y)
	{
		b = y;
	}
	int getb()
	{
		return b;
	}
};
class Sum
{
	int sum;
	A obja;
	B objb;

public:
	Sum()
	{
		sum = 0;
	}
	~Sum() {		}

	int getsum()
	{
		return sum;
	}
	void calsum()
	{
		obja.seta(23);
		objb.setb(45);
		sum = obja.geta() + objb.getb();
	}
	void display()
	{
		cout << "Sum = " << sum << endl;
	}
};
int main()
{
	Sum s;

	s.calsum();
	s.display();

	return 0;
}
