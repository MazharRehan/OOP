//Weak relationship between Employee and University so aggregation will be used
#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	int id;
	string name;

public:
	Employee()
	{
		id = 0;
	}
	Employee(int i, string n)
	{
		id = i;
		name = n;
	}
	void setId(int i)
	{
		id = i;
	}
	void setName(string n)
	{
		name = n;
	}

	int getId()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
	void display()
	{
		cout << "Employee ID: " << id << endl;
		cout << "Employee Name:" << name << endl;
	}
};
class University
{
	int uni_id;
	string uni_name;
	Employee* eptr;

public:
	University()
	{
		uni_id = 0;
		uni_name = "name";
		eptr = NULL;
	}
	University(int i, string n, Employee* e)
	{
		uni_id = i;
		uni_name = n;
		eptr = e;
	}
	void setId(int i)
	{
		uni_id = i;
	}
	void setName(string n)
	{
		uni_name = n;
	}

	int getId()
	{
		return uni_id;
	}
	string getName()
	{
		return uni_name;
	}
	void setEmployee(Employee* p)
	{
		eptr = p;
	}
	Employee* getEmployee()
	{
		return eptr;
	}
	void displayuni()
	{
		cout << "University ID:" << uni_id << endl;
		cout << "University Name:" << uni_name << endl;
		eptr->display();
	}
};
int main()
{
	Employee e(2, "MNA");
	University U(11223344, "ucp", &e);
	U.displayuni();

	cout << endl;
	e.display();

	return 0;
}
