// task1:

#include<iostream>
using namespace std;

class Shape
{
protected:
	int width, height;

public:
	Shape()
	{
		width = 0;
		height = 0;
	}
	void setWidth();
	void setHeight();

};
void Shape::setWidth()
{
	cout << "Enter Width: ";
	cin >> width;
	fflush(stdin);

}
void Shape::setHeight()
{
	cout << "Enter Height: ";
	cin >> height;
	fflush(stdin);
}

class Rectangle : public Shape
{
public:
	int getArea();
};
int Rectangle::getArea()
{
	return width * height;
}

class Square : public Shape
{
public:
	int getArea();
};
int Square::getArea()
{
	return width * width;

}

int main()
{
	Shape shp;
	shp.setWidth();
	shp.setHeight();

	Rectangle rect;
	cout << "Area of Rectangle: " << rect.getArea() << endl;

	Square sq;
	cout << "Area of Square: " << sq.getArea() << endl;

	return 0;
}