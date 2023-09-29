//Task2

/*Write a C++ program with a class teacher that stores name and id of teacher
and a class Courses that stores names of courses allotted to that teacher.
Then delete a derived class object using a pointer of base class type.*/

#include<iostream>
#include<string>
using namespace std;

class Teacher
{
	string name, id;
protected:
	string getId()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
public:
	Teacher()
	{
		name = id = "\0";
	}
	void input()
	{
		cout << "Enter Teacher's Name: ";
		getline(cin, name);
		cout << "Enter Teacher's ID: ";
		getline(cin, id);
	}
	
	virtual ~Teacher()
	{
		cout << "Teacher Destructor" << endl;
	}

};

class Courses: public Teacher
{
	string cName[5]; // 2D String
public:
	Courses() : cName{"\0"}
	{	}

	void inputCourses()
	{
		cout << "Enter name of courses allocated to teacher " << getName() << "::" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Course " << i+1 << ": ";
			getline(cin, cName[i]);
		}
		
	}
	void display()
	{
		cout << "\n\nTeacher Info::" << endl;
		cout << "	Name: " << getName()
			<< "\n	ID: " << getId()
			<< "\nName of Courses allocated to " << getName() << "::";
		for (int i = 0; i < 5; i++)
		{
			cout << "\n	" << cName[i];
		}
		cout << endl;
	}
	~Courses()
	{
		cout << "Courses Destructor" << endl;
	}
	
};

int main()
{
	Courses* corse = new Courses[1];
	Teacher* tchr = corse;


	tchr->input();
	corse->inputCourses();
	corse->display();

	delete[] tchr;
	tchr = NULL;
	corse = NULL;

	return 0;
}
