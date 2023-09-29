// Structure:

#include<iostream>
#include<string>
using namespace std;
int main()
{
	//2nd method
	struct car{
		string brand;
		string model;
		int year = 0;
	};

	car myCar1;
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1999;

	car myCar2;
	myCar2.brand = "Honda";
	myCar2.model = "Civic";
	myCar2.year = 2017;

	car myCar3;
	myCar3.brand = "Toyota";
	myCar3.model = "Corolla XLI";
	myCar3.year = 2022;

	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
	cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << endl;

	return 0;
}