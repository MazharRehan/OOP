#include<iostream>
using namespace std;

class Test
{
private:
	int x;
	
public:
	int setX (int x) // local variable of member function is same as the name of data member
	{
		// The 'this' pointer is used to retrieve the object's x
		// hidden by the local variable 'x'
		(*this).x = x; // this->x = x; 
		return x; //20 return local variable of the function
	}
	void print() 
	{
		cout << "x = " << x << endl;
	}
};

int main()
{
	Test obj;
	int x = 20;
	cout << obj.setX(x) << endl;//20
	
	obj.print(); //20
	
	return 0;
}

