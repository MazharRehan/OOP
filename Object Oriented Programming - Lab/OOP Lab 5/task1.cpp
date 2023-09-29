/* task 1:
	Write a class with a function that finds all roots of a quadratic equation. 
a.	There should be a constructor that initializes values of all variables.
b.	Data members and the local variables of the member function must have the same name.
c.	Draw class diagram for above program.
Hint: use this pointer.
*/
#include <iostream>
#include<cmath>
using namespace std;

class Quadratic
{
private:
	float a, b, c, root1, root2, determinant;

public:
	Quadratic()
	{
		a = 4;
		b = 5;
		c = 1;
		determinant = 0.0;
		root1 = 0.0;
		root2 = 0.0;
	}

	void findRoots();
	void findImagRoots();
	void findDeterminant();
	float getRoot1();
	float getRoot2();
	float getDeterminant();
};
void Quadratic::findRoots()
{
	root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

}
void Quadratic::findImagRoots()
{
	root1 = -b / (2 * a);
	root2 = sqrt(-(b * b - 4 * a * c)) / (2 * a);
}
void Quadratic::findDeterminant()
{
	determinant = b * b - 4 * a * c;
}
float Quadratic::getRoot1()
{
	return root1;
}
float Quadratic::getRoot2()
{
	return root2;
}
float Quadratic::getDeterminant()
{
	return determinant;
}

int main()
{
	Quadratic q1;
	q1.findDeterminant();

	if (q1.getDeterminant() >= 0)
	{
		q1.findRoots();
		cout << "First Root = " << q1.getRoot1() << endl;
		cout << "Second Root = " << q1.getRoot2() << endl;
	}
	else if (q1.getDeterminant() < 0)
	{
		q1.findImagRoots();
		cout << "First Root = " << q1.getRoot1() << " + i( " << q1.getRoot2() << ")" << endl;
		cout << "Second Root = " << q1.getRoot1() << " - i( " << q1.getRoot2() << ")" << endl;
	}

	return 0;
}

