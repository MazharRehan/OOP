/* Task1:
		Write a program that:
a.	Takes input from the user about array size.
b.	Fill array using user inputs.
c.	Output values in array.
d.	Sum all elements in that array.
Hint: use pointers for memory allocation.

*/
#include<iostream>
using namespace std;

void input(int*,int);
void output(int*, int);
int sum(int*, int);

int main()
{
	int size = 0;
	int* arr;
	cout << "Enter number of elements you want to display: ";
	cin >> size;

	arr = new int[size];

	input(arr, size);
	output(arr, size);
	cout << "Sum of array elements: " << sum(arr, size) << endl;

	delete[]arr;
	arr = NULL;
	
	return 0;
}
void input(int*arr, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}
}
void output(int*arr, int s)
{
	cout << "Items you have earned are:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << i + 1 << " Item is " << arr[i] << endl;
	}
	cout << endl;
}
int sum(int*arr, int s)
{
	int sum = 0;
	for (int i = 0; i < s; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
