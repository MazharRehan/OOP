//pointer object of a class

#include<iostream>
using namespace std;

class classExample
{
private:
	int x;
public:
	void setX(int a); //Function to set the value of x
	
	//Postcondition: x = a;
	void print();
	//Function to output the value of x

};
void classExample::setX(int a)
{
	x = a;
}
void classExample::print()
{
	cout << "x = " << x << endl;
}
//Consider the following function main:
int main()
{
	classExample *cExpPtr; //Line 1
	classExample cExpObject; //Line 2
	cExpPtr = &cExpObject; //Line 3
	cExpPtr->setX(5); //Line 4
	cExpPtr->print(); //Line 5
	
	return 0;
}
