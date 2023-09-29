/* Task 3:
		Program that Prints only even days of week for 3 week.
Week: 1
     Day: 2
     Day: 4
     Day: 6

Week: 2
     Day: 2
     Day: 4
     Day: 6

Week: 3
     Day: 2
     Day: 4
     Day: 6
*/
#include <iostream>
using namespace std;

int main() 
{
	for (int i = 1; i <= 3; i++) // for number of weeks
	{
		cout << "Week: " << i << endl;

		for (int j = 1; j <= 7; j++) // for days
		{
			if (j % 2 == 0) // for even days
			{
				cout << "     Day: " << j << endl;
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
