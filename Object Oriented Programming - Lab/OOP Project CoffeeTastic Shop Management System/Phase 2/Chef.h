#include "Employee.h"
#pragma once
class Chef:public Employee
{
	float salary;
	MyString Speciality;
public:
	Chef();
	Chef(float, MyString, int, MyString, MyString, Date);
	void setsalary(float);
	void setSpeciality(MyString);
	MyString getSpeciality();
	int getsalary();
	void displayChef();
	
	~Chef();
};

