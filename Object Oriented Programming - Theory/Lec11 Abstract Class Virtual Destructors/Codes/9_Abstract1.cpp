#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Constructor of Person" << endl;
	}
	virtual void fun() = 0;

	void f1()
	{
		cout << "Hello I am f1" << endl;
	}
};
class Student : public Person
{
public:
	Student()
	{
		cout << "Constructor of Student" << endl;
	}
	void fun()
	{
		cout << "Hello I am fun in Student" << endl;
	}
};
int main()
{
	Student s;
	Person* p;
	p = &s;

	p->f1(); // Person::f1()
	p->fun(); // Student::fun()

	//p -> Person::fun(); // Error because of the pure virtual function

	return 0;
}
