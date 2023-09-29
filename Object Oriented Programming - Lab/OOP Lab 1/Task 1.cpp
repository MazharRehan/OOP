/* task 1:
		 C++ program to display 7 days of 3 weeks in the form of asterisks.
I.e. For first day of week only one asterisks, for second day two asterisks.
*/
#include <iostream>
using namespace std;

int main() 
{
	for (int i = 1; i <= 3; i++) //for loop for Weeks
	{
		cout << "\nWeek " << i << endl;

		for (int j = 1; j <= 7; j++) // for loop for Days // rows
		{
			for (int k = 1; k <= j; k++) // to print Asterisks // columns
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}
