//Task3

#include<iostream>
using namespace std;

class Worker
{
	char emp_Name[30];
	int salary, emp_Number, grossSales;
public:
	Worker():emp_Name{NULL}
	{
		salary = 200;
		emp_Number = 0;
		grossSales = 0;
	}
	void inputInfo()
	{
		cout << "Enter the following Info::" << endl;
		cout << "Name: ";
		cin.getline(emp_Name, 29);
		cout << "Employee Number: ";
		cin >> emp_Number;
		cout << "Salary: ";
		cin >> salary;
		cout << "Gross Salary: ";
		cin >> grossSales;

	}
	int getSalary()
	{
		return salary;
	}
	int getGrossSales()
	{
		return grossSales;
	}
	void display()
	{
		cout << "\n\n--------- Output -----------" << endl;
		cout << " Name: " << emp_Name
			<< "\n Employee Number: " << emp_Number
			<< "\n Salary: " << salary
			<< "\n Gross Sales: " << grossSales << endl;
	}
	virtual ~Worker() { }

};

class CommissionCalculator: public Worker
{
	int commission;
public:
	CommissionCalculator()
	{
		commission = 0;
	}

	void calculateCommission()
	{
		commission = getGrossSales() * 0.09;
	}
	void dispalyCommission()
	{
		cout << " Commission: " << commission << endl;
	}
	int getCommission()
	{
		return commission;
	}
	~CommissionCalculator() { }


};

int main()
{
	Worker* wrk = NULL;
	CommissionCalculator* comCal = new CommissionCalculator;

	wrk = comCal;

	wrk->inputInfo();
	comCal->calculateCommission();

	wrk->display();
	comCal->dispalyCommission();

	cout << " Total Salary = " << (wrk->getSalary()) + (comCal->getCommission()) << endl;


	delete wrk;
	wrk = NULL;
	comCal = NULL;

	return 0;
}
