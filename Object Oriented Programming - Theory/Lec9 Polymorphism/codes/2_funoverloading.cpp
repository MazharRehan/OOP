#include<iostream>
using namespace std;

void add(int a, int b)
{
	cout << a + b << endl;
}
/*
int add(int a, int b) // Error: cannot overload functions distinguished by return type alone
{
	cout << a + b;
	return a + b;
}
*/
int main()
{
	add(3, 4);
	add(3, 5);


	return 0;

}
