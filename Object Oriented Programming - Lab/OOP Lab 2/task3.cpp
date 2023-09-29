/* task3:
		Write a function that swaps 2 numbers.
a.	Values should be passed by reference using pointers.
*/
#include<iostream>
using namespace std;

void swap(int*, int*);
void display(int, int);
int main()
{
	int n1 = 0, n2 = 0;

	cout << "enter 1st number: ";
	cin >> n1;
	cout << "Enter 2nd number: ";
	cin >> n2;

	cout << "Before Swapping " << endl;
	display(n1,n2);
	
	swap(n1, n2);

	cout << "After Swapping " << endl;
		display(n1,n2);

	return 0;
}
void swap(int* n1, int* n2)
{
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}
void display(int a, int b)
{
	cout << "n1 = " << a << endl;
	cout << "n2 = " << b << endl;
}
