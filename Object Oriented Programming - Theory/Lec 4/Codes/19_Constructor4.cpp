// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point 
{
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	Point()
	{	
		x = -99;
		y = -97;
	}
	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	// Constructor called
	Point p2, p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl;
	cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;

	return 0;
}

