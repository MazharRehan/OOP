//Task1

#include<iostream>
using namespace std;

class Employee
{
	int id, accountNo;
	double salary;
	char name[30];
public:
	Employee()
	{
		id = 0, accountNo = 0;
		salary = 0;
		name[0] = NULL;
	}
	void input()
	{
		cout << "Id: ";
		cin >> id;
		cout << "Name: ";
		cin.ignore();
		cin.getline(name, 29);
		cout << "Account Number: ";
		cin >> accountNo;
		fflush;
		cout << "Salary: ";
		cin >> salary;
	}
	void display()
	{
		cout << "\n\nId: " << id << "\tName: " << name 
			<< "\tAccount Number: " << accountNo << "\t";
	}
	double getSalary()
	{
		return salary;
	}
	virtual void calSalary() = 0;
};

class Faculty :public Employee
{
	double finalSalary;
public:
	Faculty()
	{
		finalSalary = 0.0;
	}
	void calSalary()
	{
		finalSalary = getSalary();
		//finalSalary = finalSalary + (finalSalary*20)/100;
		finalSalary = finalSalary * (1 + 0.2);
	}
	void display1()
	{
		cout << "Designation: Facuty\tSalary: " << finalSalary << endl;
	}
};
class Staff : public Employee
{
	double finalSalary;
public:
	Staff()
	{
		finalSalary = 0.0;
	}
	void calSalary()
	{
		finalSalary = getSalary();
		finalSalary = finalSalary * (1 + 0.1);
	}
	void display1()
	{
		cout << "Designation: Staff\tSalary: " << finalSalary << endl;
	}
};

int main()
{
	char des = '\0';

	cout << "Input the following information::" << endl;
	cout << "F -  Faculty\t S - Staff" << endl;
	cout << "Enter Designation: ";
	cin >> des;

	Employee* emp = NULL;
	Faculty fal;
	Staff stf;

	if (des == 'F')
	{
		emp = &fal;
	}
	else
	{
		emp = &stf;
	}

	emp->input();
	emp->calSalary();
	emp->display();

	(des == 'F' ? fal.display1() : stf.display1());
	

	return 0;
}