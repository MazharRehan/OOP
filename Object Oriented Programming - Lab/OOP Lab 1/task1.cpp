/* task 1:
		 C++ program to display 7 days of 3 weeks in the form of asterisks.
I.e. For first day of week only one asterisks, for second day two asterisks.
*/

#include <iostream>
using namespace std;

int main() {

	int count = 1;
	for (int i = 0; i < 3; i++)
	{
		cout << "Week " << i + 1 << endl;

		for (int j = 0; j < 7; j++)
		{
			for (int k = 0; k < count; k++)
			{
				cout << "*";
			}
			cout << endl;
			count++;
		}
		count = 1;
	}

	system("pause");
	return 0;
}
