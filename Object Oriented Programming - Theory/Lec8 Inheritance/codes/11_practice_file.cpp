// C++ Implementation to show that a derived class doesn’t inherit access to private data members.
// However, it does inherit a full parent object.

#include<iostream>
using namespace std;
class A {
public:
	int x;

protected:
	int y;

private:
	int z;
};

class B : public A {
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A {
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private it is accessislbe from D
	// y is private
	// z is not accessible from D
};
int main()
{
	A a;
	a.x=10;
	cout<<a.x;
	
	return 0;
	
}
