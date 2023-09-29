#include<iostream>
using namespace std;
int main()
{
	struct
	{
		int myNum;
		string myString;
	}myStructure;

	myStructure.myNum = 1;
	myStructure.myString = "Hello Word";

	cout << myStructure.myNum << "\n";
	cout << myStructure.myString << "\n";

	return 0;
}