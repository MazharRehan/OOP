// Factory method: 

#include<iostream>
using namespace std;
class Vehicle
{
public:
	virtual void display() = 0;
	virtual ~Vehicle()
	{	}
	static void FactoryMethod(int);
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
void Vehicle::FactoryMethod(int choice)
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
	Vehicle::FactoryMethod(1); //prints car
	Vehicle::FactoryMethod(2); //prints bike

	return 0;
}
