// Task 4: 

#include<iostream>
#include<string>
using namespace std;

class Developer
{
protected:
	string name, address, designation;
	double phNo, currentSalary, increment = 0;
public:
	void inputInformation();
	virtual void caltculateSalary();
	void displayInformation();
};
void Developer::inputInformation()
{
	cout << "\n\nEnter the following details of employee::" << endl;
	cout << "Name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Address: ";
	cin.ignore();
	getline(cin, address);
	cout << "Designation: ";
	cin.ignore();
	getline(cin, designation);
	cout << "Current Salary: ";
	cin >> currentSalary;
	cout << "Phone Number: ";
	cin >> phNo;
}
void Developer::caltculateSalary()
{
	if (designation == "fresh")
		increment = 0;

	else if (designation == "junior developer")
		increment = currentSalary * 0.20;

	else if (designation == "senior developer")
		increment = currentSalary * 0.35;

	currentSalary += increment;
}
void Developer::displayInformation()
{
	cout << "\n\n ----- Display Information ------" << endl;
	cout << "Name: " << name
		<< "\nAddress: " << address
		<< "\nPhone Number: " << phNo
		<< "\nCurrent Salary: " << currentSalary
		<< endl;
}
class Fresh : public Developer
{
public:
	void caltculateSalary();
};
void Fresh::caltculateSalary()
{
	increment = 0;
	currentSalary += increment;
}
class JuniorDeveloper : public Developer
{
public:
	void caltculateSalary();
}; 
void JuniorDeveloper::caltculateSalary()
{
	increment = currentSalary * 0.20;
	currentSalary += increment;
}
class SeniorDeveloper : public Developer
{
public:
	void caltculateSalary();
};
void SeniorDeveloper::caltculateSalary()
{
	increment = currentSalary * 0.35;
	currentSalary += increment;
}

int main()
{
	Fresh freshObj;
	JuniorDeveloper j_d_obj;
	SeniorDeveloper s_obj;

	Developer* devlpPtrFresh = &freshObj;
	Developer* devlpPtrJD = &j_d_obj;
	Developer* devlpPtrSD = &s_obj;


	string designation;
	cout << "Enter Designation: ";
	getline(cin, designation);

	if (designation == "fresh") {
		devlpPtrFresh->inputInformation();
		devlpPtrFresh->caltculateSalary();
		devlpPtrFresh->displayInformation();
	}

	else if (designation == "junior developer") {
		devlpPtrJD->inputInformation();
		devlpPtrJD->caltculateSalary();
		devlpPtrJD->displayInformation();
	}

	else if (designation == "senior developer") {
		devlpPtrSD->inputInformation();
		devlpPtrSD->caltculateSalary();
		devlpPtrSD->displayInformation();
	}

	return 0;
}