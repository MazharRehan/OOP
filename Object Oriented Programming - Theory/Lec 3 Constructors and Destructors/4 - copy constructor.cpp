// C++ program to demonstrate the working of a default COPY CONSTRUCTOR

#include <iostream>
using namespace std;

class Point 
{
	private:
		int x, y;

	public:
		Point()
		{
			x=10;
			y=15;
		}
		int getX() 
		{ 
			return x; 
		}
		
		int getY()
		{ 
			return y; 
		}
};

int main()
{
	Point p1; // Normal constructor is called here
	Point p2 = p1; //Default Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
		
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY();
		
	return 0;
}
/*Output:
p1.x = 10, p1.y = 15
p2.x = 10, p2.y = 15
*/

