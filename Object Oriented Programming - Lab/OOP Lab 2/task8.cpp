/* task8:
		Sample code of class that output course name.
*/
#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
public:
	void displayMessage(string courseName)
	{
		cout << endl << "Welcome to gradebook for " << courseName << "." << endl;
	}
};

int main()
{
	GradeBook myGradeBook;
	string nameOfCourse;
	int marks;

	cout << "Please enter the course name: ";
	getline(cin, nameOfCourse);

	myGradeBook.displayMessage(nameOfCourse);

	return 0;
}
