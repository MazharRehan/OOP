/*task1:
	Write a program with a class that takes an integer array
	from the user and display it using pointers.
*/
#include<iostream>
using namespace std;

class Class1
{
	int size;
	int* arr;

public:
	Class1()
	{
		size = 4;
		arr = new int[size];
	}
	void input();
	void setter(int, int);
	int getter(int)const;
	void display()const;

	~Class1()
	{
		delete[]arr;
		arr = NULL;
	}

};
void Class1::setter(int value, int index)
{
	arr[index] = value;
}
void Class1::input()
{
	int value = 0;
	cout << "Enter values in array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " value: ";
		cin >> value;
		setter(value, i);
	}

	cout << endl;
}
int Class1::getter(int index) const
{
	return arr[index];
}
void Class1::display() const
{
	cout << "Array Elements are: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " array element is: " << getter(i) << endl;
	}
}

int main()
{
	Class1 c1;

	c1.input();
	c1.display();


	return 0;
}
