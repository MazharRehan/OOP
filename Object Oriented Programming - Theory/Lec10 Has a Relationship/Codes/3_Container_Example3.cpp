#include <iostream>
using namespace std;

class first {
private:
	int num;

public:
	first()
	{
		num = 20;
	}
	void showf()
	{
		cout << "Hello from first class\n";
		cout << "num = " << num << endl;
	}


	int getnum()
	{
		return num;
	}
};

// Container class
class second 
{
	// creating object of first
	first f;

public:
	// constructor
	second()
	{
		f.getnum();
		f.showf();
	}
};

int main()
{
	// creating object of second
	second s;
	
	return 0;
}

