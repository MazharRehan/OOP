//Initialization list
#include<iostream>
using namespace std;

class Student
{
private:
	const int id, cnic;
	int age;
public:
	Student(): id(10), cnic(30)
	{
		age=21;
	}		
	void Display()
	{
		cout<<"id="<<id<<endl;	
		cout<<"cnic="<<cnic<<endl;
	}			
};
int main()
{
	Student s1;
	s1.Display();
	
	return 0;
}
