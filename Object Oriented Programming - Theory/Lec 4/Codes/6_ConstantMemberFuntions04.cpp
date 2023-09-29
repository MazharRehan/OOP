// show that constant object can call only const member function

#include<iostream>
using namespace std;

class Demo
{
	int value;
	
public:
	Demo()
	{
		value = 0
	}
	
	Demo(int v = 0)
	{
		value = v;
	}
	void showMessage()
	{
		cout<<"Hello World We are Inside showMessage() Function"<<endl;
	}
	void display()const
	{
		cout<<"Hello world I'm Inside display() Function"<<endl;
	}
};
int main()
{
	//Constant object are initialised at the time of declaration using constructor
	const Demo d1;
	//d1.showMessage();   //Error occurred if uncomment. // Constant Object can not call Non-Constant Function
	d1.display();
	
	Demo d2;
	d2.display(); // Non-Constant Object can call Constant Function
	d2.showMessage(); // Non-Constant Object can call Non-Constant Function
	
	
	return 0;
}

