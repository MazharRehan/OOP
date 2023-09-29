// CPP program to implement Binary Search in
// Standard Template Library (STL)

#include <algorithm>
#include <iostream>
using namespace std;

void show(int a[], int arraysize)
{
	for (int i = 0; i < arraysize; ++i)
		cout << a[i] << ", ";
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	//int asize = sizeof(a) / sizeof(a[0]);

	cout << "\nThe array is : " << endl;
	show(a, 10);

	cout << "\n\nLet's say we want to search for "
		<< "\n2 in the array So, we first sort the array" << endl;

	sort(a, a + 10);

	cout << "\nThe array after sorting is :" << endl;
	show(a, 10);

	cout << "\nNow, we do the binary search" << endl;

	if (binary_search(a, a + 10, 2))  // binary_search(...) function returns 1 if found other then 0
		cout << "Element found in the array" << endl;
	else
		cout << "Element not found in the array" << endl;

	cout << "\nNow, say we want to search for 10" << endl;

	if (binary_search(a, a + 10, 10))
		cout << "Element found in the array" << endl;
	else
		cout << "Element not found in the array" << endl;


	cout << ((binary_search(a, a + 10, 5)) ? "5 found\n" : "5 not found\n") << endl;

	return 0;
}

