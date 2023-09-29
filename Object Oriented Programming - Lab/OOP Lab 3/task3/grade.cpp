#include "grade.h"
#include<string>
#include<iostream>
using namespace std;

GradeBook::GradeBook()
{
	cout << "~~~~~~~~~~~~~~~~~~~Values Initialized By Constructor~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	setName();
}
GradeBook::~GradeBook()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
void GradeBook::setName()
{
	cout << "Enter name of gradebook: ";
	getline(cin, courseName);

	if (checkNameSize(courseName) > 25)
		cout << "Gradebook name ' " << courseName << " '"
		<< " exceeds mamximum length 25 so limiting to first 25 characters." << endl;

}
string GradeBook::getName()
{
	if (checkNameSize(courseName) > 25)
		return courseName.substr(0, 25);
	else
		return courseName;
}
int GradeBook::checkNameSize(string courseName)
{
	int count = 0;
	for (int i = 0; courseName[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
void GradeBook::display()
{
	cout << "Welcome to gradebook for " << getName() << "!\n" << endl;
}
