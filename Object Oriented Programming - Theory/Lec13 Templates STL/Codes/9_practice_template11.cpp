#include<iostream>
using namespace std;

template <typename T>
T mymax(T x, T y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	cout << mymax<int>(3, 4) << endl;
	cout << mymax<char>('g', 'h');

	return 0;
}
