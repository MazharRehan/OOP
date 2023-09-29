/* Task1:
		Create a circle class with: 
a.	A constructor in which the user is asked to enter the value of radious.
b.	Have two functions "area" and "display" (to calculate area of circle and print final answer) defined outside of class.
c.	A destructor to destroy object. 
*/
#include<iostream>
using namespace std;

class Circle
{
private:
	double radius;
	double area;
public:
	Circle()
	{
		cout << "Enter the value of radius: ";
		cin >> radius;
	}
	void calculateArea();
	double getArea();
	void display();
	~Circle()
	{
		cout << "Class distructor called." << endl;
	}
};
void Circle::calculateArea()
{
	area = 3.14*radius*radius;
}
double Circle::getArea()
{
	return area;
}
void Circle::display()
{
	cout << "Area of circle is: " << getArea() << endl;
}

int main()
{
	Circle c1;

	c1.calculateArea();
	c1.display();

	system("pause");
	return 0;
}
