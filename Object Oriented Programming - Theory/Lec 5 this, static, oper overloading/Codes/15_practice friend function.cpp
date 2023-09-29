// Example: Find the largest of two numbers using Friend Function

#include<iostream>
using namespace std;

class Largest
{
private:
	int a, b, m;
	friend void find_max(Largest& ); // private friend function
public:
	void set_data();
	
};

void Largest::set_data()
{
	cout << "Enter the First No:";
	cin >> a;
	cout << "Enter the Second No:";
	cin >> b;
}

void find_max(Largest& t) //object is passing by reference because we are manuplating the value of 'm'
{
	if (t.a > t.b)
		t.m = t.a;
	else
		t.m = t.b;

	cout << "Maximum Number is\t" << t.m;
}

int main()
{
	Largest l;
	l.set_data();
	find_max(l);

	return 0;
}
