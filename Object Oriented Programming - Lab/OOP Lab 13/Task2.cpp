// Task 2:
/*	Write a function template that finds the number of times each 
element exists in an array of elements.	*/

#include <iostream>
using namespace std;

template <typename Tp> void existanceTime(Tp* arr, int s)
{
	int count;
	for (int i = 0; i < s; i++)
	{
		count = 1;
		for (int k = i - 1; k >= 0; k--)
		{
			if (arr[i] == arr[k])
				count = -99;
		}

		if (count == -99)
			continue;

		for (int j = i + 1; j < s; j++)
		{
			
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		cout << "  " << arr[i] << " exists " << count << " times." << endl;
		
	}
}

template<typename T> void input(T* arr, int s)
{
	cout << "Input elements in array:" << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	const int size = 10;
	int arr[size] = { 0 };

	input<int>(arr, size);
	existanceTime<int>(arr, size);

	char chArr[size] = { '\0' };
	input<char>(chArr, size);
	existanceTime<char>(chArr, size);


	return 0;
}
