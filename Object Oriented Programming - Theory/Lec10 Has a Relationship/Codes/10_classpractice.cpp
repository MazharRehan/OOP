#include<iostream>
using namespace std;

class A
{
	int n;
public:
	A()
	{
		n = 0;
		//cout<<"Constructor of A\n";
	}
	~A()
	{
		//cout<<"destructor of A\n";
	}
	void setn(int var)
	{
		n = var;
	}
	int getn()
	{
		return n;
	}
	void shown()
	{
		cout << "\nValue of n : " << n;
	}
};
class B
{
	A a;
	int m;

public:
	B()
	{
		//cout<<"Constructor of B\n";
	}
	~B()
	{
		//cout<<"Destructor of B\n";
	}
	void setm(int var)
	{
		m = var;
	}
	int getm()
	{
		return m;
	}
	void showm()
	{
		cout << "\nValue of m : " << m;
	}
	void showmn()
	{
		showm();
		a.shown();
	}

};
int main()
{

	B b;
	b.setm(23);
	b.showmn();

	return 0;
}
