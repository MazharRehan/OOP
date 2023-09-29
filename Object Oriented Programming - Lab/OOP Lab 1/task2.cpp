/* Task 2:
		Displaying following pattern.
*  *  *
*  *  *
*  *  *
*  *  *
*  *  *

*/

#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 5; i++) // for rows
	{
		for (int j = 0; j < 3; j++) // for columns
		{
			cout << "*  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
