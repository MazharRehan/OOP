// Example: Destructor

#include<iostream>
using namespace std;

class Test
{
	public:
		Test()
		{
			cout << "Constructor executed" << endl;
		}

		~Test()
		{
			cout << "Destructor executed" << endl;
		}
};
int main()
{
	Test t;
	
	return 0;
}
/*
Constructor executed
Destructor executed
*/

