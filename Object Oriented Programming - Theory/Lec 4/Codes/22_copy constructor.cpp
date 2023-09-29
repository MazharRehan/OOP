// Implicit copy constructor with explicit default constructor

#include<iostream>
using namespace std;

class Sample
{
	int id;
public:
	Sample()
	{
		id = 0;
	}
	void init(int x)
	{
		id = x;
	}
	void display()
	{
		cout << endl << "ID=" << id;
	}
};

int main()
{
	Sample obj1;
	obj1.init(10);
	obj1.display();

	//Sample obj2(obj1);	// Copy obj1 to obj2

	// or 

	Sample obj2 = obj1;  // Copy obj1 to obj2
	obj2.display();

	return 0;
}
