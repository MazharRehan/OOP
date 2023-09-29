/* task4:
Write a program with a function that find multiple(s) of number in a range given by user i.e. 
a.	 Takes input about form 1 to what number he wants to find multiples.
b.	 Takes the number of whom he wants to search multiple(s).
*/
#include<iostream>
using namespace std;

int main()
{
	int range = 0, num = 0;
	cout << "Enter range: ";
	cin >> range;

	cout << "Enter nth number: ";
	cin >> num;

	cout << "Multiples of " << num << " are: ";
	for (int i = 1; i <= range; i++)
	{
		if (i % num == 0)
			cout << i << " ";
	}

	return 0;
}
