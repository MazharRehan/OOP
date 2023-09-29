/*Task#03
	Write a C++ program that takes size in feet and inches. 
Perform decrement of 1 in inputs and display result. 
Do it using unary operator overloading. 
*/
#include<iostream>
using namespace std;

class Example
{
	int feet;
	float inch;
public:
	Example()
	{
		feet = 8;
		inch = 9;
	}
	~Example(){ }
	Example operator -- (int);
	void display();
};
Example Example::operator --(int)
{
	Example temp = *this;
	//post decrement
	feet--;
	inch--;
	return temp;
}
void Example::display()
{
	cout << "Feet & Inches :: " << feet << "'" << inch << endl;
}
int main()
{
	Example exp1;
	cout<<"Before decrement: "<<endl;
	exp1.display();
	
	Example exp2 = exp1--;
	
	cout<<"Before decrement: "<<endl;
	cout<<"exp1: ";
	exp1.display();
	
	cout<<"exp2: ";
	exp2.display();
	
	return 0;
}
