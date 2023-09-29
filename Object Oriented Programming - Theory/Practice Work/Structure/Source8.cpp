#include<iostream>
#include<string>
using namespace std;

struct studentType
{
	string firstName;
	string lastName;
	char courseGrade = '\0';
	int testScore = 0;
	int programmingScore = 0;
	double GPA = 0.0;
};

int main()
{
	studentType newStudent, student;

	newStudent.GPA = 3.9;
	newStudent.firstName = "John";
	newStudent.lastName = "Brown";
	newStudent.courseGrade = 'A';
	newStudent.testScore = 95;
	newStudent.programmingScore = 98;

	cout << newStudent.GPA << " " << newStudent.firstName << " " << newStudent.lastName << " " << newStudent.courseGrade
		<< " " << newStudent.testScore << " " << newStudent.programmingScore << endl;

	student = newStudent;  // copy the contents of newStudent into student

	cout << student.GPA << " " << student.firstName << " " << student.lastName << " " << student.courseGrade
		<< " " << student.testScore << " " << student.programmingScore << endl;

	return 0;
}
/* Output:
3.9 John Brown A 95 98
3.9 John Brown A 95 98
*/