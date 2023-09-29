/* task2:
Write a C++ program that creates a class called student.Data members of class are 
rno(int),name(string),fee(int). You have to initialize an object using another object of the same class.
*/
#include<iostream>
#include<string>
using namespace std;

class Student
{
	int rolNo;
	int fee;
	string name;
public:
	Student();
	~Student(){}
	Student(Student&); //copy constuctor
	void display() const;

};
Student::Student()
{
	cout << "Enter student roll number: ";
	cin >> rolNo;
	cin.ignore();
	cout << "Enter Student name: ";
	getline(cin, name);
	cout << "Enter student fee: ";
	cin >> fee;
}
Student::Student(Student& s)
{
	rolNo = s.rolNo;
	name = s.name;
	fee = s.fee;
}
void Student::display() const
{
	cout << rolNo << " " << name << " " << fee << endl;
}

int main()
{
	Student s1;
	Student s2(s1);

	s1.display();
	s2.display();

	return 0;
}
