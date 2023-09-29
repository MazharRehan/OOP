// pointer object

#include<iostream>
using namespace std;

class Expression
{
private:
	int x;

public:
	void setX(int a); 
	int getX();
	void print();

};
void Expression::setX(int a)
{
	x = a;
}
int Expression::getX()
{
	return x;
}
void Expression::print()
{
	cout << "x = " << x << endl;
}

int main()
{
	int num;
	Expression a;
	Expression* objPtr;
	objPtr = &a;

	cout << "Enter a number: ";
	cin >> num;


	/*
	//using object

	a.setX(num);
	a.print();
	
	// OR

	//Pointer
	// Using dot and dereference operator

	(*objPtr).setX(num);
	(*objPtr).print();
	*/

	objPtr->setX(num);
	objPtr->print();



	return 0;
}
