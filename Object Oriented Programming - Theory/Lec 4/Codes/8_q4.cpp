//constant member function
#include <iostream>
using namespace std;

class Test 
{
	int value;
public:
	Test(int v = 0) 
	{
		value = v;
	}

	int getValue() const;
};
int Test::getValue() const
{
	return value; 
}

int main()
{
	Test t(20);
	cout << t.getValue();
	
	return 0;
}

