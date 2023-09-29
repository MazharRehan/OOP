//Constant object and constant member function

#include<iostream>
using namespace std;

class Test 
{
	int value;
public:
	Test()
	{
		value = 10;
	}
	int getValue() const
	{
		return value;
	}
};

int main() 
{
	const Test t;  // Constant objact
	cout << t.getValue();
	
	return 0;
}

