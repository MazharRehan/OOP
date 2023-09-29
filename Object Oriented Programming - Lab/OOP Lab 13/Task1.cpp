// Task 1:

/*
Set theory is used in everyday life, from bars to railway timetables.
A set is a well-defined collection of objects. The objects may be numbers,
alphabets etc. You are asked to create a class template named Sets with
function(s) that perform union and intersection on 2 input arrays.
*/
#include <iostream>
using namespace std;

template <typename T> class Sets
{
	int size1, size2;
	T* unions; // because 'union' is a keyboard
	T* intersection;

public:
	Sets()
	{
		size1 = size2 = 0;
		unions = intersection = NULL;
	}
	~Sets()
	{
		delete[] unions;
		unions = NULL;

		delete[] intersection;
		intersection = NULL;

	}

	void input(T*, int);
	void findUnion(T*, int, T*, int);
	void findIntersection(T*, int, T*, int);
	void display(T*, int);
};

template <typename T> void Sets<T>::input(T* arr, int s)
{
	cout << "Input the elements of set:: " << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
}

template <typename T> void Sets<T>::display(T* arr, int s)
{
	cout << " { ";
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}" << endl << endl;
}

template <typename T> void Sets<T>::findUnion(T* arr1, int s1, T* arr2, int s2)
{
	size1 = s1;
	int count = 0;

	// finding size of array of union
	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			size1++;
		}
		count = 0;
	}

	cout << "Union s: " << size1 << endl;

	unions = new T[size1];

	for (int i = 0; i < s1; i++)
	{
		unions[i] = arr1[i];
	}

	int o = s1;
	count = 0;

	for (int i = 0; i < s2; i++)
	{
		for (int j = 0; j < s1; j++)
		{
			if (arr2[i] == arr1[j])
			{
				count++;
			}
		}
		if (count == 0 && o < size1)
		{
			unions[o] = arr2[i];
			o++;
		}
		count = 0;
	}

	cout << "Union = ";
	display(unions, size1);

}


template <typename T> void Sets<T> ::findIntersection(T* arr1, int s1, T* arr2, int s2)
{
	size2 = 0;
	int count = 0;

	// finding size of array for intersection
	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				size2++;
			}
		}
	}

	intersection = new T[size2];

	int o = 0;
	count = 0;

	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				intersection[o] = arr1[i];
				o++;
			}
		}
	}

	cout << "Intersection = ";
	display(intersection, size2);
}

int main()
{
	int arr1[5]; // = { 1, 2, 3, 4, 5 };
	int arr2[5]; // = { 10, 2, 9, 15,5 };

	Sets<int> a;
	a.input(arr1, 5);
	a.input(arr2, 5);
	a.findUnion(arr1, 5, arr2, 5);
	a.findIntersection(arr1, 5, arr2, 5);

	//--------------------------------------//
	cout << endl;
	char chrArr1[5]; // = { 'a','b','x','g','u' };
	char chrArr2[5]; // = { 's','r','u','q','v' };
	
	Sets<char> ch;
	ch.input(chrArr1, 5);
	ch.input(chrArr2, 5);
	ch.findUnion(chrArr1, 5, chrArr2, 5);
	ch.findIntersection(chrArr1, 5, chrArr2, 5);

	//--------------------------------------//
	cout << endl;

	/* // Does not handle by this program
	Sets<char> chString;
	const int rows = 5, columns = 11;
	char chStrA[rows][columns] = { "Tree","Coffee","Cat","Panda","Earth" };
	char chStrB[rows][columns] = { "Nincompoop","Tiger","Galaxy", "Earth","Soil" };

	chString.input(chStrA,rows,columns);
	*/

	return 0;
}