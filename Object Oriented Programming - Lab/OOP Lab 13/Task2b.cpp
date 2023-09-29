// Task 2b:
/*	Write a function template that finds the number of times each
element exists in an array of elements.	*/

#include <iostream>
using namespace std;

template <typename Tp> void existanceTime(Tp* arr, int s)
{
	int count;
	int size2D = 0;

	for (int i = 0; i < s; i++)
	{
		count = 0;
		for (int k = i - 1; k >= 0; k--)
		{
			if (arr[i] == arr[k])
				count = -99;
		}

		if (count != -99)
			size2D++;

	}


	int m = 0;

	//dynamic 2D array
	Tp** arr2D = new Tp*[size2D];

	for (int i = 0; i < size2D; i++)
	{
		arr2D[i] = new Tp[2];
	}

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

		if (m < size2D)
		{
			arr2D[m][0] = arr[i];
			arr2D[m][1] = count;
			m++;
		}
	}


	for (int i = 0; i < size2D; i++)
	{
		cout << " " << arr2D[i][0] << " exists " << arr2D[i][1] << " times." << endl;
	}


	for (int i = 0; i < size2D; i++)
	{
		delete[]arr2D[i];
		arr2D[i] = NULL;
	}

	delete[] arr2D;
	arr2D = NULL;
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

	input(arr, size);
	existanceTime(arr, size);

	/* Can't handle
	char chArr[size] = { '\0' };
	input(chArr, size);
	existanceTime(chArr, size);
	*/

	return 0;
}