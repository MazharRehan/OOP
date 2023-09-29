#include "Chef.h"


Chef::Chef()
{
	salary = 0.0f;

}
Chef::Chef(float salary, MyString Speciality, int id, MyString empName, MyString phone, Date dateHired) :Employee(id,empName,phone,dateHired)
{
	setsalary(salary);
	setSpeciality(Speciality);
}
void Chef::setsalary(float salary)
{
	this->salary = salary;
}
void Chef::setSpeciality(MyString Speciality)
{
	this->Speciality = Speciality;
}
MyString Chef::getSpeciality()
{
	return Speciality;
}
int Chef::getsalary()
{
	return salary;
}

void Chef::displayChef()
{
	displayEmployee();
	cout << "Salary of Chef: " << getsalary() << endl;
	cout << "Specialityof Chef: "; 	Speciality.displayString();
}
Chef::~Chef()
{
	cout << "Destructor of Chef is Called: " << endl;
}