#include<iostream>
using namespace std;

class tskthree
{
private:
	int feet;
	int inches;
public:
	tskthree operator--()
	{
		//pre decrement
		--feet;
		--inches;
		return *this;
	}

	void set(int a, int b)
	{
		feet = a;
		inches = b;
	}

	void display()
	{
		cout << "FEET & INCHES: " << feet << "," << inches << endl;
	}
};
int main()
{
	tskthree a;

	a.set(8, 9);
	cout<<"Before decrement: "<<endl;
	a.display();
	
	--a;
	cout<<"After pre decrement: "<<endl;
	a.display();

	system("pause");
	return 0;
}
