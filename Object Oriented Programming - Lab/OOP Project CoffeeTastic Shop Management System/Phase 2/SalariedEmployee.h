#include "HourlyEmployee.h"
#pragma once
class SalariedEmployee:public Waiter
{
	float salary;
public:
	SalariedEmployee();
	SalariedEmployee(float,int, int,MyString,MyString,Date);
	void setsalary(float);
	float getsalary();
	void showSalariedEmployee();
	void display();
	~SalariedEmployee();
};

