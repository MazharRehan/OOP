//task 2: 

#include<iostream>
using namespace std;

class BasicInfo
{
protected:
	char name[50], gender[10];
	int empId;
public:
	void getBasicInfo();
};
void BasicInfo::getBasicInfo()
{
	cout << "Enter the following info" << endl;
	cout << "Name: ";
	cin.getline(name, 49);
	fflush(stdin);
	cout << "Employee ID: ";
	cin >> empId;
	cout << "Gender: ";
	cin.ignore();
	cin.getline(gender, 9);
	fflush(stdin);

}

class DepartmentInfo
{
protected:
	char deptName[100], assignedWork[100];
	int time2complete;
public:
	void getDeptInfo();
};
void DepartmentInfo::getDeptInfo()
{
	cout << "Deparmnet Name: ";
	cin.getline(deptName, 99);
	fflush(stdin);
	cout << "Assigned Work: ";
	cin.getline(assignedWork, 99);
}

class Employee : public BasicInfo, public DepartmentInfo
{
public:
	void getEmployeeInfo();
	void printEmployeeInfo();
};
void Employee :: getEmployeeInfo()
{
	getBasicInfo();
	getDeptInfo();
}
void Employee::printEmployeeInfo()
{
	cout << "\n--------< Display >-------" << endl
	 << "Name: " << name
		<< "\nEmployee ID: " << empId
		<< "\nGender: " << gender
		<< "\nDeparmnet Name: " << deptName
		<< "\nAssigned Work: " << assignedWork << endl;
}

int main()
{
	Employee emp;

	emp.getEmployeeInfo();
	emp.printEmployeeInfo();

	return 0;
}