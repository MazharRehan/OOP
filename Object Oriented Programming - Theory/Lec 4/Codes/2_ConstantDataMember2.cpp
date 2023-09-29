#include<iostream>
using namespace std;

class Student
{
private:
	const int id;
	int age;
public:
	Student(): id{10} // [Warning] extended initializer lists only available with -std=c++11 or -std=gnu++11
	{
		age=100;
	}		
	void Display()
	{
		cout<<"id="<<id<<endl;	
	}			
};
int main()
{
	Student s1;
	s1.Display();
	
	return 0;
}
