// Task2:

#include<iostream>
#include<string>
using namespace std;


class Employee
{
	string e_id, e_name;
public:
	Employee()
	{
		e_id = "";
		e_name = "";
	}
	Employee(string id, string name)
	{
		e_id = id;
		e_name = name;
	}

	string getName()
	{
		return e_name;
	}
	string getId()
	{
		return e_id;
	}
	void setEmployee()
	{
		cout << "Enter Employee id: ";
		getline(cin, e_id);
		cout << "Enter Employee Name: ";
		getline(cin, e_name);
	}

};

class Company
{
	string c_id, c_name;
	Employee* empy;
public:
	Company()
	{
		c_id = "";
		c_name = "";
		empy = NULL;
	}
	Company(string id, string name, Employee& em)
	{
		c_id = id;
		c_name = name;
		empy = &em;
	}
	string getName()
	{
		return c_name;
	}
	string getId()
	{
		return c_id;
	}
	void setCompany(Employee& ep)
	{
		empy = &ep;
		empy->setEmployee();

		cout << "Enter Company Id: ";
		getline(cin, c_id);
		cout << "Enter Company Name: ";
		getline(cin, c_name);
	}

	void display()
	{
		cout << "\n" << c_name << " company has empoyee " << empy->getName() << endl;
	}

};

int main()
{
	Employee emp;
	Company comp;

	comp.setCompany(emp);
	comp.display();

	return 0;
}