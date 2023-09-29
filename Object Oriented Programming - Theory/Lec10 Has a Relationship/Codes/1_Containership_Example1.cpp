// C++ program to illustrate the concept of containership
#include <iostream>
using namespace std;

class first {
public:
	void showf()
	{
		cout << "Hello from first class\n";
	}
};

// Container class
class second 
{
	// Create object of the first-class
	first f;

public:
	// Define Constructor
	second()
	{
		// Call function of first-class
		f.showf();
	}
};

// Driver Code
int main()
{
	// Create object of second class
	second s;
	//s.showf();                //not allowed
}
/*
In the class second we have an object of class first. 
This is another type of inheritance we are witnessing. 
This type of inheritance is known as has_a relationship as we say that 
class second has an object of first class first as its member. 
From the object f we call the function of class first.
*/
