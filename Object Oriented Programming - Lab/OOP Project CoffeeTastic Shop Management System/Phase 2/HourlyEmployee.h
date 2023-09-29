#include "Waiter.h"
#pragma once
class HourlyEmployee:public Waiter
{

	int hoursWorked;
public:
	HourlyEmployee();
	HourlyEmployee(int, int, int, MyString, MyString, Date);
	void setHour(int);
	int getHour();
	void display();
	void showHourlyEmployee();
	~HourlyEmployee();
};

