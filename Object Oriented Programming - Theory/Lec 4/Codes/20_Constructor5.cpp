// Example

#include<iostream>
#include<string.h> // OR #include<cstring>
using namespace std;

class student
{
	int rno;
	char name[50];
	double fee;

public:
	student(int,const char [], double);
	void display();
	
};

student::student(int no, const char arr[],double f)
{
	rno = no;
	strcpy(name, arr); // string copy
	fee = f;
}

void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee << endl;
}
	
int main()
{
	student s(1001,"Ali",10000); //	[Warning] deprecated conversion from string constant to 'char*' [-Wwrite-strings]
	s.display();
	
	return 0;
}

