#include "Employee.h"


Employee::Employee()
{
}
Employee::Employee(int empId, MyString name, MyString phone, Date date)
{
	setEmployeeId(empId);
	setEmployeeName(name);
	setEmployeePhone(phone);
	setEmployeeHireDate(date);
}
Employee::Employee(const Employee&o)
{

	setEmployeeId(o.EmpId);
	setEmployeeName(o.name);
	setEmployeePhone(o.phone);
	setEmployeeHireDate(o.hireDate);
}

//setters
void Employee::setEmployeeId(int id){ this->EmpId = id; }
void Employee::setEmployeeName(MyString name){ this->name = name; }
void Employee::setEmployeePhone(MyString phone){ this->phone = phone; }
void Employee::setEmployeeHireDate(Date date){ this->hireDate = date; }

//getters
int Employee::getEmployeeId()const{ return EmpId; }
MyString Employee::getEmployeeName()const{ return name; }
MyString Employee::getEmployeePhone()const{ return phone; }
Date Employee::getEmployeeHireDate()const{ return hireDate; }

void Employee::displayEmployee()
{
	cout << "Employee ID: " << getEmployeeId() << endl;
	cout << "Employee Name: "; name.displayString();
	cout << "Phone: "; phone.displayString();
	cout << "Hired Date: " << hireDate << endl;

}

Employee::~Employee()
{
}
