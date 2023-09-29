// Task1:

#include<iostream>
#include<string>
using namespace std;

class Patient;

class Doctor
{
	string dr_id, dr_name;
public:
	Doctor()
	{
		dr_id = "";
		dr_name = "";
	}
	Doctor(string id, string name)
	{
		dr_id = id;
		dr_name = name;
	}

	string getName()
	{
		return dr_name;
	}
	string getId()
	{
		return dr_id;
	}
	void setDoctor()
	{
		cout << "Enter dr. id: ";
		getline(cin, dr_id);
		cout << "Enter dr. Name: ";
		getline(cin, dr_name);
	}

};

class Patient
{
	string p_id, p_name;
	Doctor *doc;
public:
	Patient()
	{
		p_id = "";
		p_name = "";
		doc = NULL;
	}
	Patient(string id, string name)
	{
		p_id = id;
		p_name = name;
	}
	string getName()
	{
		return p_name;
	}
	string getId()
	{
		return p_id;
	}
	void setPatient(Doctor &d)
	{
		doc = &d;

		doc->setDoctor();
		cout << "Enter patient id: ";
		getline(cin, p_id);
		cout << "Enter patient Name: ";
		getline(cin, p_name);
	}

	void display()
	{
		cout << "\n" << doc->getName() << " is seeing patient " << p_name << endl;
	}

};

int main()
{
	Patient pati;
	Doctor dr;
	pati.setPatient(dr);

	pati.display();

	return 0;
}
