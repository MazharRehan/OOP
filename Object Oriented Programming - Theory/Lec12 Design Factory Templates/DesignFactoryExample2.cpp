#include<iostream>
using namespace std;

class Vehicle
{
public:
	virtual void display() = 0;
	virtual ~Vehicle()  { }
	static void FactoryMethod();
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
void Vehicle::FactoryMethod()
{
	int choice;
	cout << "Please select the vehicle type::" << endl;
	cout << "1  -  Car\n2 -  Bike" << endl;
	cout << "Enter: ";
	cin >> choice;

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
	Vehicle::FactoryMethod();

	return 0;
}