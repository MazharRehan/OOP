/* task2:
Program that takes character array from user and output number of vowels using pointers.
1.	Use while loop.
*/

#include<iostream>
using namespace std;


int main()
{
	char* arr = new char[100];

	cout << "Enter string: ";
	cin.getline(arr, 99);

	int arrLen = 0;
	while (arr[arrLen] != '\0')
		arrLen++;
	
	
	int j = 0;
	int vowel = 0, consonent = 0;
	
	while (j < arrLen)
	{
		if (arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u' || arr[j] == 'A' ||
			arr[j] == 'E' || arr[j] == 'I' || arr[j] == 'O' || arr[j] == 'U')
			vowel++;

		else if ((arr[j] >= 97 && arr[j] <= 122) || (arr[j] >= 65 && arr[j] <= 90))
			consonent++;

		j++;
	}

	cout << "Length of string = " << arrLen << endl;
	cout << "Vowels count in this string = " << vowel << endl;
	cout << "Consonents count in the string = " << consonent << endl;

	delete[]arr;
	arr = NULL;

	return 0;
}
