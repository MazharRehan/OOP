// Structure:

#include<iostream>
using namespace std;
int main()
{
	struct {
		int id = 0;
		int marks = 0;
	}ali, ahmad, hamza, kashif;

	ali.id = 1;
	ali.marks = 78;
	cout << ali.id << endl << ali.marks << endl;

	ahmad.id = 2;
	ahmad.marks = 90;
	cout << ahmad.id << endl << ahmad.marks << endl;

	hamza.id = 3;
	hamza.marks = 66;
	cout << hamza.id << endl << hamza.marks << endl;

	/*kashif.id = 4;
	kashif.marks = 87;
	cout << kashif.id << endl << kashif.marks << endl;*/

	return 0;
}