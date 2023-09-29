/* task 8:
		Program that takes input from the user about the number of required 
	rows in pyramid and then print numbers in pyramid format.
Enter nummber of rows: 4
1
1 2
1 2 3
1 2 3 4
*/
#include <iostream>
using namespace std;

int main() {

	int rows = 0;
	cout << "Enter nummber of rows: ";
	cin >> rows;
	
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << j << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}
