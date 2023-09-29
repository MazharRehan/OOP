// C++ program to sort an array

#include <algorithm> // header file
#include <iostream>
using namespace std;

void show(int a[], int array_size)
{
	for (int i = 0; i < array_size; i++)
		cout << a[i] << " ";
}

// Driver code
int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

	// size of the array
	//int asize = sizeof(a) / sizeof(a[0]);
	//cout<<asize;
	
	cout << "The array before sorting is : \n";

	// print the array
	show(a, 10);

	// sort the array // buildin function
	sort(a, a + 10);  // (array_first_index_address , one_step_up_of_array's_last_index_address)

	cout << "\n\nThe array after sorting is :\n";

	// print the array after sorting
	show(a, 10);

	return 0;
}

