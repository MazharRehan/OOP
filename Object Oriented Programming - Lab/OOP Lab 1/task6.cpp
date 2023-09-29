/* Task 6:
		Program that takes input from user and adds them up. When a user enters
a negative number it displays the result by adding positive numbers.
*/
#include <iostream>

using namespace std;

int main() {

	float num = 0.0, sum = 0.0;
	
	do
	{
		sum += num;
		cout << "Enter a number: ";
		cin >> num;
	}while(num>=0);
	

	cout << "\nThe sum is: " << sum << endl;

	return 0;
}
