// Template Class

#include <iostream>
using namespace std;

template <typename T> class Array
{
private:
	T* ptr;
	int size;

public:
	Array()
	{
		ptr = NULL;
		size = 0;
	}
	Array(T arr[], int s);
	~Array() 
	{
		delete[]ptr;
		ptr = NULL;
	}
	void print();
};

template <typename T> Array<T>::Array(T arr[], int s)  // constructor
{
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T> 
void Array<T>::print()
{
	for (int i = 0; i < size; i++)
		cout << " " << *(ptr + i);

	cout << endl;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	Array<int> a(arr, 5); // create object

	a.print();

	return 0;
}

