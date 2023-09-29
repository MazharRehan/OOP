#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	int c;
public:
	void setab(int x)
	{
		a = x;
	}
	virtual void f1()  // virtual pointer will be made which will point to virtual table 
	{					// Size of virtual pointer is 8 Bytes
		cout << "hello f1" << endl;
	}
};

int main()
{
	A obj;
	cout << sizeof(obj); // 24

	return 0;
}
/*
size_of_Obj(24) = virtualPointer(8) + a(4) + b(4) + c(4) + wastedMemory(4)
*/
