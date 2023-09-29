/* task6:
Write a program that prints following pattern:
5 4 3 2 1
- 5 4 3 2
- - 5 4 3
- - - 5 4
- - - - 5
*/
#include<iostream>
using namespace std;


int main()
{
	int num = 1;

	for (int i = 1; i <= 5; i++) // For Number of rows
	{
		for (int k = 1; k < i; k++) // print underscore
			cout << "_" << " ";

		for (int j = 5; j >= i; j--) // print number
			cout << j << " ";

		cout << endl;
	}

	return 0;
}
