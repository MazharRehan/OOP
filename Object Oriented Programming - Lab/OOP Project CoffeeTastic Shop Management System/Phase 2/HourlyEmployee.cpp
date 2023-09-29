#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee()
{
	hoursWorked = 0;
}

HourlyEmployee::HourlyEmployee(int hours, int salesItem, int id, MyString name, MyString phone, Date date) :Waiter(salesItem, id, name, phone, date)
{
	setHour(hours);
}
void HourlyEmployee::setHour(int h)
{
	this->hoursWorked = h;
}
int HourlyEmployee::getHour()
{
	return hoursWorked;
}
void HourlyEmployee::showHourlyEmployee()
{
	cout << "Hours Worked: " << getHour(); cout << endl;
}
void HourlyEmployee::display()
{
	displayEmployee();
	showHourlyEmployee();
}
HourlyEmployee::~HourlyEmployee()
{
}