// Example: define member function without argument within the class

#include<iostream>
using namespace std;

class Person
{
	int id;
	char name[100];

public:
	void set_p()
	{
		cout << "Enter the Id:";
		cin >> id;
		//fflush(stdin);
		cin.ignore();
		cout << "Enter the Name:";
		cin.get(name, 100);
	}

	void display_p()
	{
		cout << endl << id << "\t" << name << "\t";
	}
};

class Student : private Person // as access specifier is private no one is accessible from Person class
{
	char course[50];
	int fee;

public:
	void set_s()
	{
		//id=10; "Person::id" (declared at line 8) is inaccessible
		set_p();
		cout << "Enter the Course Name:";
		//fflush(stdin);
		cin.ignore();
		cin.getline(course, 50);
		cout << "Enter the Course Fee:";
		cin >> fee;
	}

	void display_s()
	{
		display_p();
		cout << course << "\t" << fee << endl;
	}
};

int main()
{
	Student s;
	//s.set_p(); // 'void Person::set_p()' is inaccessible// 'Person' is not an accessible base of 'Student' 
	s.set_s();
	//s.display_p(); 	// 'void Person::display_p()' is inaccessible
	s.display_s();

	return 0;
}

