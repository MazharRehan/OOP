#include<iostream>
using namespace std;

template <typename T> T mymax(T a, T b)
{
	if(a > b)
		return a;
	return b;
}
int main()
{
	cout << max<int>(3 , 4) << endl;
	cout << mymax<int>(3, 7) << endl;
	
	return 0;
}
