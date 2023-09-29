#ifndef GRADE_H
#define GRADE_H

#include<string>
using namespace std;

class GradeBook
{
private:
	string courseName;
	string getName();
	void setName();
	int checkNameSize(string);
public:
	GradeBook(); // Constructor

	void display();
	~GradeBook();
};

#endif
