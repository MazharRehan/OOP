#include <iostream>
#include<string>
using namespace std; 

class Car  // The class 
{
private:
	string brand;	// Attribute
	string model;	// Attribute
	int year;		// Attribute

public:
	Car(string x, string y, int z)	// Constructor with parameters 
	{
		setBrandName(x);
		setModel(y);
		setYear(z);
	}
	void setBrandName(string b);
	string getBrandName();
	void setModel(string y);
	string getModel();
	void setYear(int z);
	int getYear();
};

void Car::setBrandName(string b){
	brand = b;
}
string Car::getBrandName() {
	return brand;
}
void Car::setModel(string y) {
	model = y;
}
string Car::getModel(){
	return model;
}
void  Car::setYear(int z) {
	year = z;
}
int Car::getYear() {
	return year;
}

int main()
{
	string brand, model;
	int year;
	// Create Car objects and call the constructor with different values 
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);

	// Print values 
	cout << carObj1.getBrandName() << " " << carObj1.getModel() << " - " << carObj1.getYear() << "\n";
	cout << carObj2.getBrandName() << " " << carObj2.getModel() << " - " << carObj2.getYear() << "\n\n";

	//get values
	cout << "Enter brand: ";
	cin >> brand;

	cout << "Enter model: ";
	cin >> model;

	cout << "Enter year : ";
	cin >> year;

	Car carObj3(brand, model, year);
	cout << carObj3.getBrandName() << " " << carObj3.getModel() << " - " << carObj3.getYear() << "\n";

	return 0;
}