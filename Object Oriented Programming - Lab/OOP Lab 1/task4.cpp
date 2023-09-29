/* Task 4:
		Create a Calculator using the switch Statement that has the following characteristics: 
1.	Input two numbers from the user.
2.  Have 4 operators addition, subtraction, multiplication, division.

*/
#include <iostream>
using namespace std;

int main() 
{
	float n1 = 0, n2 = 0;
	char input = '\0';
	
	cout << "Enter two numbers: " << endl;
	cin >> n1 >> n2;
	
	cout << "Enter an opetator( + , - , * , / ): ";
	cin >> input;

	switch (input)
	{
	case'-':
		cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
		break;
	case'+':
		cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
		break;
	case'*':
		cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
		break;
	case'/':
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
		break;
	default:
		cout << "Wrong Input! Please enter the given opetators" << endl;
	}

	system("pause");
	return 0;
}
