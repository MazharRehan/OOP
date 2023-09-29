//pointers
#include <iostream>
using namespace std;

int main()
{
	int num;
	int *p;
	
	cout << &num << endl; // 0x6ffe14
	cout << &p << endl; // 0x6ffe10
	
	num = 78;
	p = &num;
	
	cout << p << endl; // 0x6ffe14
	cout << &p << endl; // 0x6ffe10
	cout << *p << endl;//78
	
	*p = 90;
	cout << num; //90
	
	return 0;
	
}
