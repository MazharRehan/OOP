 /* Task 7:
		Write a C++ program to implement a game in which you have to guess a 
	number randomly generated by computer. It must have following properties:

1.	User enters a number and the game tells if the number is too high or low.
2.	Appericates players if guessed correctly.
3.	You can only make 3 attempts.

#include<cstdlib>
#include<ctime>

srand(time(0));
Num=rand()%100+1; 

*/
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

	int n = 0;
	float Num = 0.0;
	cout << "Guess my number game" << endl;

	srand(time(0));  // put the starting value to zero
	Num = rand() % 100 + 1; // taking ( % 100 ) because we want 2 digit number
							// if 3 digit number is required then take mod 1000 of the number generated
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a guess number between 1 and 100: ";
		cin >> n;

		if (n>100 || n < 0)
		{
			cout << "Please enter number within the range\n" << endl;
			i = i - 1;
		}
		else
		{
			if (Num == n)
			{
				cout << "You Won" << endl;
				break;
			}
			else if (Num > n)
				cout << "Too Low" << endl;
			else if (Num < n)
				cout << "Too High" << endl;
		}
	}

	cout << "\nThe random number was " << Num << endl;

	system("pause");
	return 0;
}
