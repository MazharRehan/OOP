#include "SalariedEmployee.h"


SalariedEmployee::SalariedEmployee()
{
	salary = 0;
}
SalariedEmployee::SalariedEmployee(float salary,int salesItem, int id,MyString name,MyString phone,Date date ) :Waiter(salesItem,id,name,phone,date)
{
	setsalary(salary);
}
void SalariedEmployee::setsalary(float h)
{
	this->salary = h;
}
float SalariedEmployee::getsalary()
{
	return salary;
}
void SalariedEmployee::showSalariedEmployee()
{
	cout << "Salary: " << getsalary() << endl;
}
void SalariedEmployee::display()
{
	displayEmployee();
	showSalariedEmployee();
}
SalariedEmployee::~SalariedEmployee()
{
}