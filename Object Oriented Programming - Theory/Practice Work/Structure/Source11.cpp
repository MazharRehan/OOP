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
void printStudent(studentType);

int main()
{
	studentType student;

	readIn(student);
	printStudent(student);

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
void printStudent(studentType student)
{
	cout << student.firstName << " "
		<< student.lastName << " "
		<< student.testScore << " "
		<< student.programmingScore << " "
		<< student.GPA << " "
		<< student.courseGrade << endl;
}