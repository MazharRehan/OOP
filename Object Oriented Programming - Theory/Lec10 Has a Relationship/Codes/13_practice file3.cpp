#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			a = 0;
			//cout<<"hello A\n";
		}
		~A(){	}
		
		void seta(int var1)
		{
			a = var1;
		}
		void showa()
		{
			cout << "a is : " << a << endl;
		}
		
};
class B
{
	int b;
	A *aptr;
	
	public:
		B()
		{
			b = 0;
			aptr = NULL;
			//cout<<"Hello B";
		}
		~B(){
		
		}
		void setb(int var2)
		{
			b = var2;
		}
		void showb()
		{
			cout << "b is : " << b << endl;
		}
		void showab(A &_a)
		{
			aptr = &_a;
			aptr->seta(34);
			aptr->showa();
			setb(23);
			showb();
		}
		
};
int main()
{
	B objb;
	A _a;
	
	_a.seta(34);
	objb.showab(_a);
	
	return 0;
}
