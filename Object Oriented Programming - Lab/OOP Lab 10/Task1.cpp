// Task 1: 

#include<iostream>
using namespace std;

class Shape
{
protected:
	int width, height;
public:
	Shape()
	{
		width = 10;
		height = 20;
	}
	virtual int area()
	{
		return width * height;
	}
};

class Rectangle: public Shape
{
public:
	Rectangle()
	{
		width = 10;
		height = 5;
	}
	int area()
	{
		return width * height;
	}

};
class Triangle : public Shape
{
public:
	Triangle()
	{
		width = 10;
		height = 5;
	}
	int area()
	{
		return (width * height) / 2;
	}

};

int main()
{
	Rectangle rect;
	cout << "Rectangle class area: " << rect.area() << endl;

	Triangle tri;
	cout << "Triangle class area: " <<tri.area() << endl;

	Shape shp;
	cout << "Parent class area: " << shp.area() << endl;

	return 0;
}