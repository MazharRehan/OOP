// CPP program to demonstrate [] operator

#include <iostream>
using namespace std;
int main()
{
	char name[] = "Muhammad";

	// Both of the statement prints same thing
	cout << name[2] << endl;
	//cout << 2 [name] << endl;

	cout<<name[20];

	return 0;
}

