#include "MyString.h"
#pragma once
class Employee
{
protected:
	int EmpId;
	MyString name;
	MyString phone;
	Date hireDate;
public:
	Employee();
	Employee(int,MyString,MyString,Date);
	Employee(const Employee&);
	
	//setters
	void setEmployeeId(int);
	void setEmployeeName(MyString);
	void setEmployeePhone(MyString);
	void setEmployeeHireDate(Date);

	//getters
	int getEmployeeId()const;
	MyString getEmployeeName()const;
	MyString getEmployeePhone()const;
	Date getEmployeeHireDate()const;

	 void displayEmployee() ;

	~Employee();
};

