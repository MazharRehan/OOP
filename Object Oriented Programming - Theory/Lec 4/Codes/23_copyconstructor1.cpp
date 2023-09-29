// Implicit copy constructor

#include<iostream>
using namespace std;

class Sample
{		
	int id;
public:
	void init(int x)
	{
		id=x;
	}
	void display()
	{
		cout << "ID = " << id << endl;
	}
};

int main()
{
	Sample obj1;
	obj1.init(10);
	obj1.display();
	
	Sample obj2(obj1);  			// Copy obj1 to obj2
	obj2.display();
	
	return 0;
}

