#include<iostream>
using namespace std;

class Vehicle
{
public:
	virtual void display() = 0;
	virtual ~Vehicle() { }
};
class Car : public Vehicle
{
public:
	void display()
	{
		cout << "Car\n";
	}
};
class Bike : public Vehicle
{
public:
	void display()
	{
		cout << "Bike\n";
	}
};
void FactoryMethod(int choice)
{
	Vehicle* vptr;
	if (choice == 1)
	{
		Car c;
		vptr = &c;
		vptr->display();
	}
	else if (choice == 2)
	{
		Bike b;
		vptr = &b;
		vptr->display();

	}
	else
	{
		cout << "Not a valid choice";
	}
}

int main()
{
	FactoryMethod(2);

	return 0;
}