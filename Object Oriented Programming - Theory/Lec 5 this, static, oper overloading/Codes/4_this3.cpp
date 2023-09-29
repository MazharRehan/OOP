// chain function

#include<iostream>
using namespace std;

class Test
{
	private:
		int x;
		int y;
	public:
		Test(int x = 0, int y = 0) 
		{
			this->x = x;
			this->y = y; 
		}
		Test & setX(int a) 
		{
			x = a; 
			// cout << " this = " << this << endl; // 0x6ffe10 // 'this' pointer has address of the object
			return *this; 
		}
		Test & setY(int b) 
		{
			y = b; 
			return *this; 
		}
		void print() 
		{ 
			cout << "x = " << x << " y = " << y << endl; 
		}
};

int main()
{
	Test obj1(5, 5);
	obj1.print();
	 
	// cout << " &obj = " << &obj1 << endl; // 0x6ffe10
	 
	// Chained function calls. All calls modify the same object
	// as the same object is returned by reference
	obj1.setX(10).setY(20);
	obj1.print();
	
	//OR
	//	obj1.setX(10).setY(20).print();
	
return 0;
}

