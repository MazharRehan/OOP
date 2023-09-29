// Example: define member function without argument within the class
/*
In the above program, the ‘Child’ class is publicly inherited from the ‘Parent’ class so the public data members of the class ‘Parent’ will also be inherited by the class ‘Child’.
Modes of Inheritance: There are 3 modes of inheritance.

Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
Note: The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed. For example, Classes B, C, and D all contain the variables x, y, and z in the below example. 
It is just a question of access.  
*/

#include<iostream>
using namespace std;

class Person
{
	int id;
	char name[100];

	public:
		void set_p()
		{
			cout<<"Enter the Id:";
			cin>>id;
			fflush(stdin);
			cout<<"Enter the Name:";
			cin.get(name,100);
		}

		void display_p()
		{
			cout<<endl<<id<<"\t"<<name<<"\t";
		}
};

class Student: public Person
{
	char course[50];
	int fee;
	////////////////////////////////////
	public:
	void set_s()
		{
		//	set_p();
			cout<<"Enter the Course Name:";
			fflush(stdin);
			cin.getline(course,50);
			cout<<"Enter the Course Fee:";
			cin>>fee;
		}
		
		void display_s()
		{
		//	display_p();
			cout<<course<<"\t"<<fee<<endl;
		}
};

main()
{
	Student s;
	s.set_p();
	s.set_s();
	s.display_p();
	s.display_s();
	return 0;
}

