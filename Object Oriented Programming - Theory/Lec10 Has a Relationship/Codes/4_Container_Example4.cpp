#include<iostream>
using namespace std;

class cDate
{
	int mDay, mMonth, mYear;
	
public:
	cDate()
	{
		mDay = 10;
		mMonth = 11;
		mYear = 1999;
	}
	cDate(int d, int m ,int y)
	{
		mDay = d;
		mMonth = m;
		mYear = y;
	}
	void display()
	{
		cout << "Day :   " << mDay << endl;
		cout << "Month : " << mMonth << endl;
		cout << "Year :  " << mYear << endl;
	}
};
// Container class
class cEmployee		
{
protected:
	int mId;
	int mBasicSal;
	// Contained Object
	cDate mBdate;	
public:
	cEmployee()
	{
		mId = 1;
		mBasicSal = 10000;
		mBdate = cDate(); // call default constructor of class cDate
	}
	cEmployee(int, int, int, int, int);
	void display();
};

cEmployee :: cEmployee(int i, int sal, int d, int m, int y)
{
	mId = i;
	mBasicSal = sal;
	mBdate = cDate(d,m,y);
}
void cEmployee::display()
{
	cout << "Id : " << mId << endl;
	cout << "Salary: " <<mBasicSal << endl;
	mBdate.display();
}


int main()
{
	// Default constructor call
	cEmployee e1;		
	e1.display();
	
	cout<<endl;
	
	// Parameterized constructor called
	cEmployee e2(2,20000,11,11,1999);
	e2.display();
	
	return 0;
}

