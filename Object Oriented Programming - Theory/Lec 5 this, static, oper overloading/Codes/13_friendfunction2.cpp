// Prog: Demonstrates how friend functions work as a bridge between the classes
// find max of two numbers from two classes

#include<iostream>
using namespace std;

class ABC;// forward declaration

class XYZ
{
	int x;
	
public:
	void set_data(int a)
	{
		x=a;
	}
	
	friend void max(const XYZ&, const ABC&);
};


class ABC
{
	int y;
public:
	void set_data(int a)
	{
		y=a;
	}	
		
	friend void max(const XYZ&, const ABC&);
};

void max(const XYZ&t1, const ABC&t2)
{
	if(t1.x>t2.y)
		cout<<t1.x;
	else
		cout<<t2.y;
}

int main()
{
	ABC _abc;
	XYZ _xyz;
	_xyz.set_data(20);
	_abc.set_data(35);
	
	max(_xyz,_abc); //calling friend function
	
	return 0;
}
