#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int rno;
	char name[50];
	double fee;

public:

	student(int, char[], double);
	student(const student& t)	 //copy constructor
	{
		rno = t.rno;
		strcpy(name, t.name);
		fee = t.fee;
	}
	void display();

};
student::student(int no, char n[], double f)
{
	rno = no;
	strcpy(name, n);
	fee = f;
}

void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}

int main()
{
	student s(1001, "Umar", 10000);  //Error in visual studio 2022
	//Error (active)	E0289	no instance of constructor "student::student" matches the argument list	
	//Error	C2665	'student::student': no overloaded function could convert all the argument types

	s.display();

	student s1(s); //copy constructor called
	s1.display();

	return 0;
}

