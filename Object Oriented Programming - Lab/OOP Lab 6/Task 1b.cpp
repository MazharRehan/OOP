/* Task::1:
Write a C++ class that has 2 private variables that are used to store
inputs from the user. Define a function outside of class that accesses
these 2 private variables and swap them without using a third variable.
*/
// Second Method:

#include<iostream>
using namespace std;

class Number
{
	float num1, num2;
public:
	Number() {
		num1 = 0;
		num2 = 0;
	}
	~Number() { }
	void input();
	friend void swap(Number&);
	void diplay();
};
void Number::input()
{
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
}
void swap(Number& t)
{
	// swap without using third variable
	t.num1 = t.num1 + t.num2;
	t.num2 = t.num1 - t.num2;
	t.num1 = t.num1 - t.num2;
}
void Number::diplay()
{
	cout << "\nAfter swapping, Numberrs are: " << endl;
	cout << "a = " << num1 << " b = " << num2 << endl;
}
int main()
{
	Number obj;

	obj.input();
	swap(obj);
	obj.diplay();

	return 0;
}