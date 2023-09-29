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
		cout << "hi";
	}
	void f1()  // virtual pointer will not be made 
	{
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
size_of_Obj(3) = virtualPointer(0) + a(1) + b(1) + c(1) + wastedMemory(0)
size_of_Obj(12) = virtualPointer(0) + a(4) + b(4) + c(1) + d(1) + wastedMemory(2)
*/