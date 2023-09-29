// Structures and arrays

#include<iostream>
#include<string>
using namespace std;

struct nameType
{
	string first, middle, last;
};
struct addressType
{
	string address1, address2, city, state, zip;
};
struct dateType
{
	int month = 0, day = 0, year = 0;
};
struct contactType
{
	string cellPhone, email;
};
struct employeeType
{
	nameType name;
	string empID;
	addressType address;
	dateType hireDate, quiteDate;
	contactType contact;
	string deptID;
	double salary = 0.0;
};


int main()
{
	employeeType newEmployee;

	newEmployee.name.first = "Marry";
	newEmployee.name.middle = "Beth";
	newEmployee.name.last = "Simmons";

	newEmployee.empID = 54658;

	newEmployee.address.address1 = "1600";
	newEmployee.address.address2 = "Pennsylvania Avenue NW";
	newEmployee.address.city = "Washington";
	newEmployee.address.state = "DC 20500";
	newEmployee.address.zip = "USA";

	newEmployee.hireDate.day = 10;
	newEmployee.hireDate.month = 5;
	newEmployee.hireDate.year = 2017;

	newEmployee.quiteDate.day = 30;
	newEmployee.quiteDate.month = 10;
	newEmployee.quiteDate.year = 2022;

	newEmployee.contact.cellPhone = "+1443-509-7450";
	newEmployee.contact.email = "ibrahim910@hotmail.com";

	return 0;
}