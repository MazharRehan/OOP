// Write a program to print the table of an input number

#include<iostream>
using namespace std;

void table(int);
int main()
{
	int num = 0;
	cout << "Enter a number" << endl;
	cin >> num;

	table(num);

	return 0;
}
void table(int num)
{
	for (int i = 1; i <= 10; i++)
		cout << num << " x " << i << " = " << num * i << endl;
}
