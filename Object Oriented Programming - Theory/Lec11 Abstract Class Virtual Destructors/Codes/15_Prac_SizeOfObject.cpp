#include<iostream>
using namespace std;
class A
{
	int a;
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
	cout << sizeof(obj); // 16

	return 0;
}
/*
size_of_Obj = virtualPointer(8) + a(4) + wastedMemory(4) = 16
Compilor takes the highest size of the variable i.e., 8
so size will be multiple of 8

*/
