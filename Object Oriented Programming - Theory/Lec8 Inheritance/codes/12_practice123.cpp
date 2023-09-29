#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			cout<<"Contructor of A class\n";
		}
};

int main()
{
	A a1;
	//a1.a=10; // [Error] 'int A::a' is private
	return 0;
}
