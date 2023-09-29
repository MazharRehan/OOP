#include<iostream>
#include<cstring>
using namespace std;

class student
{
	int rno;
	char name[50];
	double fee;
	
public:
	student(int no, char* n, double f)
	{
		rno = no;
		strcpy(name, n); // use 'strcpy_s(name, n)' in Visual Studio
		fee = f;
	}
	student(const student& t)	 //copy constructor
	{
		rno = t.rno;
		strcpy(name, t.name); // // use strcpy_s(name, t.name) in Visual Studio
		fee = t.fee;
	}
	void display();

};
void student::display()
{
	cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
	char a[] = "Umar";
	student s(234, a, 1000.01);

	s.display();

	student s1(s); //copy constructor called
	s1.display();

	return 0;
}
