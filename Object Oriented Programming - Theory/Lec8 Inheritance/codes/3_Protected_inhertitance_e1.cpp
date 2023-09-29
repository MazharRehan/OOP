// Protected inheritance

#include<iostream>
#include<string>
using namespace std;

class Person
{
	private:
		int id;
		char name[100];
	protected:
		int age;
		string gender;
		
	public:
		void set_p()
		{
			cout<<"Enter the Id:";
			cin>>id;
			fflush(stdin);
			cout<<"Enter the Name:";
			cin.get(name,100);
			cout<<"Enter age:";
			cin>>age;
			cout<<"Enter Gender:";
			cin.ignore();
			getline(cin, gender);
		}

		void display_p()
		{
			cout << "\nID: " << id << "\tName: " << name << "\tAge: " << age << "\tGender: " << gender << "\t";
		}
};

class Student: protected Person
{
	char course[50];
	int fee;
	
	public:
	void set_s()
		{
			set_p(); 	// accessible
			cout<<"Enter the Course Name:";
			fflush(stdin);
			cin.getline(course,50);
			cout<<"Enter the Course Fee:";
			cin>>fee;
		}
		
		void display_s()
		{
			display_p();
			cout << "Course: " << course << "\tFee: " << fee << endl;
		}
};

int main()
{
	Student s;
	//s.set_p();//[Error] 'void Person::set_p()' is inaccessible  // [Error] 'Person' is not an accessible base of 'Student'
	s.set_s();
	//s.display_p(); 	// Error
	s.display_s();
	
	return 0;
}

