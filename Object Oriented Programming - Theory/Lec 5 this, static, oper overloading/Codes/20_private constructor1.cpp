//Access private constructor using pointer and static member function and create object using new operator

#include<iostream>
using namespace std;

class Student
{
private:
	int rollno;

	Student()
	{
		rollno = 20;
	}
public:
	static Student* getobject()
	{
		Student* ptrSt = new Student;
		return ptrSt; // OR 	return (ptrSt); // return pointer object
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
	//Student::getobject();
	//Student st1;  // error
	//st1.showRollno();
	Student* myptr;

	myptr = Student::getobject();

	myptr->showRollno();


	delete myptr;
	myptr = NULL;

	return 0;
}
