// Task4:

#include<iostream>
#include<string>
using namespace std;


class Teacher
{
	string id, name, designation;
	int serviceYears;
public:
	Teacher()
	{
		id = name =  designation = "";
		serviceYears = 0;
	}
	Teacher(string id, string name, int years, string designation)
	{
		this->id = id;
		this->name = name;
		serviceYears = years;
		this->designation = designation;
	}
	string getId()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
	int getYearsService()
	{
		return serviceYears;
	}
	string getDesignation()
	{
		return designation;
	}
	void setTeacher()
	{
		cout << "\nInput following Details of Teacher::" << endl;
		cout << "Id: ";
		getline(cin, id);
		cout << "Name: ";
		getline(cin, name);
		cout << "Years of Service: ";
		cin >> serviceYears;
		cout << "Designation: ";
		cin.ignore();
		getline(cin, designation);
	}
	void display()
	{
		cout << "\n\n\n~~~~--/\/\/\/\/\/\~~~ Teacher ~~~~/\/\/\/\/\/\~~~~~~\n\n"
			<< "\n Id: " << id << "\tName: " << name << "\tYears of Service:: "
			<< serviceYears << "\tDesignation: " << designation << endl;
	}


};

class Department
{
	string d_name, d_venue;
	Teacher* tch;
public:
	Department()
	{
		d_venue = "";
		d_name = "";
	}
	Department(string name, string venue, Teacher& t)
	{
		d_venue = venue;
		d_name = name;
		tch = &t;
	}

	string getName()
	{
		return d_name;
	}
	string getVenue()
	{
		return d_venue;
	}
	void setDepartment(Teacher& t)
	{
		cout << "Enter  Department Venue: ";
		getline(cin,d_venue);
		cout << "Enter  Department Name: ";
		getline(cin, d_name);
		tch = &t;
		tch->setTeacher();

	}

	void display()
	{
		cout << "\n\n\n````````````Department````````````````\n\n"
			<< "\n Name: " << d_name << "\tVenue: " << d_venue << endl;
		tch->display();
	}

};


int main()
{
	Teacher t;
	Department d;

	d.setDepartment(t);
	d.display();

	return 0;
}