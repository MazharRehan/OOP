/* task2:
		Write a Employee class that:
a.	Takes employee first name, last name.
b.	Employee CNIC number having 10 digits if not the program should end up with an error message.
c.	Take employee salary and deduce income tax from it and display the final salary.
d.	All data members must be private.
e.	Have a default constructor which outputs text like "no name entered".
f.	Constructor that initializes values of attributes.
g.	Use getter and setter functions to access private attributes.

If salary is greater then 30,000 then there will 20 percent tax deduction.
If salary is greater then 20,000 then tax will be 10 percent .
*/
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	string firstName;
	string lastName;
	string cnic;
	double salary;
	double finalSalary;
	double incomeTax;
	char chack;
	void endProgram();
public:
	Employee()
	{
	 	firstName = "\0";
		lastName = "\0";
		cnic = "\0";
		salary = 0.0;
	 	finalSalary = 0.0;
		incomeTax = 0.0;
 		chack = '\0';
		cout << "no name entered" << endl;
	}
	Employee(string fname, string lname, string x)
	{
		firstName = fname;
		lastName = lname;
		cnic = x;
		salary = 0.0, finalSalary = 0.0, incomeTax = 0.0, chack = '\0';
 		endProgram();
	}
	void inputSalary();
	void calFinalSalary();
	void display();
	
	double getSalary();
	double getIncomeTax();
	double getNetSalary();
	
	~Employee()	{	}
};

void Employee::inputSalary()
{
	cout << "Enter employee salary: ";
	cin >> salary;
}
double Employee::getSalary()
{
	return salary;
}
void Employee::endProgram()
{
	int count = 0;
	for (int i = 0; cnic[i] != '\0'; i++)
	{
		count++;
	}
	if (count != 10)
	{
		cout << "Error! Incorrect CNIC" << endl;
		exit(0); // program will terminate
	}
}
void Employee::calFinalSalary()
{
	if (getSalary() > 30000)
		incomeTax = getSalary() * 0.20;

	else if (getSalary() > 20000)
		incomeTax = getSalary() * 0.10;

	else
		incomeTax = 0;

	finalSalary = salary - incomeTax;
}
double Employee::getIncomeTax()
{
	return incomeTax;
}
double Employee::getNetSalary()
{
	return finalSalary;
}
void Employee::display()
{
	if (getIncomeTax() > 6000)
		cout << "Your income tax @ 20% : "; 
	else if (getIncomeTax() > 2000)
		cout << "Your income tax @ 10% : ";
	else
		cout << "Your income tax @ 0% : ";

	cout << getIncomeTax() << endl;
	cout << "Your net salary is: " << getNetSalary() << endl;
}

int main()
{
	string firstName, lastName, cnic;
	
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	cout << "Enter your CNIC: ";
	getline(cin, cnic);
	cout << endl;

	Employee emp(firstName, lastName, cnic);
	
	emp.inputSalary();
	emp.calFinalSalary();
	emp.display();

	system("pause");
	return 0;
}
