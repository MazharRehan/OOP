#include <iostream>
using namespace std;

class Test
{
public:
	const Test()
	{
		cout << "hi" << endl;
	}
	~Test()
	{

	}
};

int main()
{
	Test a;
	
	return 0;
}
