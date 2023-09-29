/* Task#04
	Write a C++ program that creates a class called Employee. This class should 
	first ask about the number of employees and then take their id(int) and 
	name(string) one by one and display them.
*/

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	int id, emp;
	string name;
public:
	Employee() {}
	void input();
	void display();
};

void Employee::input()
{
	cout << "Enter ID: ";
	cin >> id;
	cin.ignore();
	cout << "Enter name: ";
	getline(cin, name);
	cout << endl;

}
void Employee::display()
{
	cout << id << " " << name << endl;
}
int main()
{
	int empNo = 0;
	cout << "Enter number of employees: ";
	cin >> empNo;
	
	Employee* emp = new Employee[empNo];

	for (int i = 0; i < empNo; i++)
	{
		emp[i].input();
	}

	cout << "Employee Data" << endl;
	for (int i = 0; i < empNo; i++)
	{
		emp[i].display();
	}


	delete[]emp;
	emp = NULL;

	return 0;
}
