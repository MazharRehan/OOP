#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
	if (x > y)
		return x;
	return y;
}

int main()
{
	cout << "Maximum of 3 and 7 is: " << myMax<int>(3, 7) << endl; // Call myMax for int

	cout << "Maximum of 3.6 and 9.9 is: " << myMax<double>(3.6, 9.9) << endl; // call myMax for double

	cout << "Maximum of 'g' and 'e' is: " << myMax<char>('g', 'e') << endl; // call myMax for char

	return 0;
}

