//private constructor

#include<iostream>
using namespace std;
class Student
{
private:
	int rollno;

	Student()
	{
		rollno = 0;
	}

public:
	void showRollno()
	{
		cout << "RollNo is: " << rollno << endl;
	}
};
int main()
{
	//	Student st1; // [Error] 'Student::Student()' is private
	//	st1.showRollno();

	return 0;
}
