// Example: of Constant member function

#include<iostream>
using namespace std;

class Demo
{
	int x;

public:

	void set_data(int a)
	{
		x = a;
	}

	int get_data(int l) const		 //constant member function
	{
		//++x;				 
		// Error while attempting to modify the data member
		//	[Error] increment of member 'Demo::x' in read-only object
		
		int k;  // local variable is declare
		k = 12; // local variable is initialized
		k = l;

		return x;
	}

};
/*
void Test() const // Error:	a type qualifier is not allowed on a nonmember function	
{

}
*/

int main()
{
	Demo d;
	d.set_data(10);
	cout << endl << d.get_data(30);

	return 0;
}

