// Task2:

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Employee
{
	string name;
	int age;
	int id;
	ofstream fout;
public:
	Employee()
	{
		name = "";
		age = 0;
		id = 0;
		input();
		(calculate() ? display() : exit(0));

	}
	void input()
	{
		cout << "Enter 4 Digit ID Number: ";
		cin >> id;
		cout << "Enter Name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter your Age: ";
		cin >> age;
	}

	bool calculate()
	{
		if (age <= 25) 
		{
			cout << "Error! Please Enter Valid Age: ";
			return 0;
		}
		else
		{
			int count = 1;

			for (int i = id; i > 0; i--)
			{
				i = i / 10;
				count++;
			}
			
			if (count != 4)
			{
				cout << "Please Enter Valid Id" << endl;
				return 0;
			}
		}

		return 1;
	}
	void display()
	{
		fout.open("Employee.txt", ios::app);

		fout << id << "\t" << name << "\t" << age << endl;

		fout.close();
	}
};

int main()
{
	Employee obj;

	return 0;
}
