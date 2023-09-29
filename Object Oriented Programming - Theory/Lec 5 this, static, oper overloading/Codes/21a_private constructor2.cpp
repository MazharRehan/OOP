//Access private constructor using pointer and static member function and create object without using new operator

#include<iostream>
using namespace std;

class Student
{
private:
	int rollno;

	Student() // private constructor
	{
		rollno = 20;
	}
public:
	static Student* getobject()
	{
		Student obj; // not properly work on VS 2022
		return &obj; // return address of object
	}
	void showRollno()
	{
		cout << "RollNo is: " << rollno << endl;
	}
	~Student()
	{ 	}
};
int main()
{
	Student* myptr;

	myptr = Student::getobject();

	myptr->showRollno(); // incorrect output in VS 2022


	return 0;
}
