#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
public:
	void setab(int x, int y)
	{
		a = x;
		b = y;
	}
	virtual void f1()    // virtual pointer will be made which will point to virtual table 
	{					// Size of virtual pointer is 8 Bytes
		cout << "hello f1" << endl;
	}
};

int main()
{
	A abc;
	cout << sizeof(abc); // 16

	int x;
	cout << endl;
	cout << sizeof(x); // 4

	return 0;
}
/*
size_of_Obj(16) = virtualPointer(8) + a(4) + b(4) + wastedMemory(0)
*/
