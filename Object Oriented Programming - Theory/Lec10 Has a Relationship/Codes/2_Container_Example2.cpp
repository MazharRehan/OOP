#include <iostream>
using namespace std;

class first {
public:
	first()
	{
		cout << "Hello from first class\n";
	}
};

// Container class
class second {
	// creating object of first
	first f;

public:
	// constructor
	second()
	{
		cout << "Hello from second class\n";
	}
};

int main()
{
	// creating object of second
	second s;
	
	return 0;
}
/*OUTPUT:
Hello from first class
Hello from second class
*/

/*
	In this program we have not inherited class first into class second but as 
we are having an object of class first as a member of class second.
	So when default constructor of class second is called, due to presence of 
object f of first class in second, default constructor of class first is called 
first and then default constructor of class second is called .
*/

