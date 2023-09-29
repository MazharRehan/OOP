/* task2:
	There is a software house that is looking for a software that calculates increment 
on salaries of their employees on the basis of their experience. Chart below is 
defining increment criteria.
	Write a program that takes name, address, phone number, experience and  current 
salary from the user and displays his new salary.
	You must call all the functions for the present instance at once by just 
returning the reference of the current object (make chained function calls).
	Increment criteria 
Experience 	  :  Increment 
	0 		  :  0% 
01 - 02 	  :  10 % 
02 - 06		  :  20% 
06 to onwards : 40% 

*/
#include<iostream>
#include<string>
using namespace std;

int countEmp = 1;

class Employee
{
	string name, address;
	double phNum;
	int experience;
	float currentSalary, increment, newSalary;

public:

	Employee();
	~Employee() {	}

	void input(), calculateIncrement(), findNewSalary(), display();

};
Employee::Employee()
{
	phNum = 0;
	experience = 0;
	currentSalary = increment = newSalary = 0.0;
	name.clear();
	address.clear();
}
void Employee::input()
{
	cin.ignore();
	cout << "Employee :: " << countEmp << endl;
	cout << "	Name: ";
	getline(cin, name);
	
	cout << "	Address: ";
	getline(cin, address);

	cout << "	Phone Number: ";
	cin >> phNum;

	cout << "	Experience: ";
	cin >> experience;

	cout << "	Current Salary: ";
	cin >> currentSalary;

	cout << "-----------------------------------------------------------------------------\n\n" << endl;

	countEmp++;
}
void Employee::calculateIncrement()
{
	if (experience == 0)
		increment = 0.0;

	else if (experience < 2)
		increment = currentSalary * 0.10;

	else if (experience < 6)
		increment = currentSalary * 0.20;

	else if (experience >= 6)
		increment = currentSalary * 0.40;

}
void Employee::findNewSalary()
{
	newSalary = currentSalary + increment;
}
void Employee::display()
{
	cout << "```````````````````````````````````````````````````````````````````````````\n";

	cout << "Employee :: " << countEmp << endl;

	cout << "	Name : " << name << "\n	Phone Number : " << phNum << "\n	Experience : "
		<< experience << " Years\n	Current Salary: " << currentSalary
		<< "\n	Increment in Salary : " << increment << "\n	Updated Salary : "
		<< newSalary;

	cout << "\n\n```````````````````````````````````````````````````````````````````````````\n\n\n";

	countEmp++;
}


int main()
{
	int numOfEmp = 0;
	cout << "Enter number of employees: ";
	cin >> numOfEmp;

	Employee* emp = new Employee[numOfEmp];

	cout << "--------------------< Input following details of Employees >---------------------\n" << endl;
	//input
	for (int i = 0; i < numOfEmp; i++)
	{
		emp[i].input();
		emp[i].calculateIncrement();
		emp[i].findNewSalary();
	}

	cout << "\n\n\n~~~~~~~~~~~~~~~~~~~~~~Updated Employees Data~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	countEmp = 1;

	//display
	for (int i = 0; i < numOfEmp; i++)
	{
		emp[i].display();
	}

	delete[]emp;
	emp = NULL;

	return 0;
}
