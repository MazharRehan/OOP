// Structures and arrays

#include<iostream>
#include<string>
using namespace std;

struct car {
	string brand;
	string model;
	int year = 0;
};

int main()
{
	const int  size = 3;
	car myCar[size];

	myCar[0].brand = "BMW";
	myCar[0].model = "X5";
	myCar[0].year = 1999;

	myCar[1].brand = "Honda";
	myCar[1].model = "Civic";
	myCar[1].year = 2017;

	myCar[2].brand = "Toyota";
	myCar[2].model = "Corolla XLI";
	myCar[2].year = 2022;

	for (int i = 0; i < 3; i++)
		cout << myCar[i].brand << " " << myCar[i].model << " " << myCar[i].year << endl;
	

	return 0;
}
/*OUPTPUT:
BMW X5 1999
Honda Civic 2017
Toyota Corolla XLI 2022
*/