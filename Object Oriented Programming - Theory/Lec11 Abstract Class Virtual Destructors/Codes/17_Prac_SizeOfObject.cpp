#include<iostream>
using namespace std;

class A
{
	char a;
	char b;
	char c;
public:
	void display()
	{
		cout<<sizeof(a); // 1
		cout << "hi";
	}
	virtual void f1()  // virtual pointer will be made which will point to virtual table 
	{					// Size of virtual pointer is 8 Bytes
		cout << "hello f1" << endl;
	}
};

int main()
{
	A obj;

	cout << sizeof(obj); // 16

	return 0;
}
/*
size_of_Obj(16) = virtualPointer(8) + a(1) + b(1) + c(1) + wastedMemory(5)
size_of_Obj(16) = virtualPointer(8) + a(1) + b(1) + c(1) + d(1) + wastedMemory(4)
*/
