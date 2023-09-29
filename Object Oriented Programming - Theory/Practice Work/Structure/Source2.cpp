// Structure:

#include<iostream>
using namespace std;
int main()
{
	struct {
		int myNum = 0;
		string myString;
	}myStructure;

	myStructure.myNum = 1;
	myStructure.myString = "Hello Word";
	
	cout << myStructure.myNum << endl;
	cout << myStructure.myString << endl;

	return 0;
}