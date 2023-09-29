/* task 3:
		Write a class which takes first name and last name from user and display it. 
After displaying entered values again ask user if he wants to continue if he 
types "y" then again asks to enter first name and last name. You have to 
calculate and show number of objects created.

Note: use static data member and function.
*/
#include <iostream>
#include<string>
using namespace std;

static int noOfObj = 0;

class Data
{
	string firstName, lastName;
	static char x;
public:
	Data()
	{
		
	}
	~Data(){ }
	void input();
	void display();
	void check();
	static char getCheck();
};
void Data::input()
{
	cout << "Enter First Name :: ";
	getline(cin, firstName);
	cout << "Enter Last Name :: ";
	getline(cin, lastName);
}
void Data::display()
{
	cout << "\n\n------------ Entered Data Is ------------------\n" << endl;
	cout << "    First Name is :: " << firstName << endl;
	cout << "    Last Name is :: " << lastName << endl;
	cout << "\n-----------------------------------------------\n\n";
}
void Data::check()
{
	cout << "Do you want to continue (y/n) :: ";
	cin >> x;
	cin.ignore();
	cout<<endl;
}
char Data :: getCheck()
{
	return x;
}
char Data::x = 'y';
int main()
{
	Data d[10];
	
	for (int i = 0; Data::getCheck() == 'y'; i++)
	{
		d[i].input();
		d[i].display();
		d[i].check();
		noOfObj++;
	}

	cout << "No of objects = " << noOfObj << endl;
	return 0;
}

