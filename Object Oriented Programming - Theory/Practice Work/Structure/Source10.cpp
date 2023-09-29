//struct Variables and Functuions

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
void readIn(studentType&);
int main()
{
	studentType newStudent, student;

	student.GPA = 0.0;
	student.firstName = "John";
	student.lastName = "Brown";
	student.courseGrade = 'A';
	student.testScore = 95;
	student.programmingScore = 98;

	readIn(newStudent);

	cout << newStudent.GPA << " " << newStudent.firstName << " " << newStudent.lastName << " " << newStudent.courseGrade
		<< " " << newStudent.testScore << " " << newStudent.programmingScore << endl;

	cout << student.GPA << " " << student.firstName << " " << student.lastName << " " << student.courseGrade
		<< " " << student.testScore << " " << student.programmingScore << endl;

	return 0;
}
void readIn(studentType& student)
{
	cout << "First Name: ";
	getline(cin, student.firstName);
	cout << "Last Name : ";
	getline(cin, student.lastName);

	cout << "Test Score: ";
	cin >> student.testScore;
	cout << "Programming Score : ";
	cin >> student.programmingScore;

	cout << "GPA" << endl;
	cin >> student.GPA;

	int score = 0;
	score = (student.testScore + student.programmingScore) / 2;

	if (score >= 90)
		student.courseGrade = 'A';
	else if (score >= 80)
		student.courseGrade = 'B';
	else if (score >= 70)
		student.courseGrade = 'C';
	else if (score >= 60)
		student.courseGrade = 'D';
	else
		student.courseGrade = 'F';
}