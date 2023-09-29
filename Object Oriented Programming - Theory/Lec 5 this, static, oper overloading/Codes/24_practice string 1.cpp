#include <iostream>
using namespace std;

int main()
{
	int a(10), b(5);	//OR
	//int a = 10, b = 5;

	cout << "a: " << a << endl
		<< "b: " << b << endl
		<< "a>b : " << (a > b) << endl // 1
		<< "a<b : " << (a < b) << endl // 0
		<< "a>b : " << ((a > b) ? "1" : "0") << endl // 1
		<< "a>b : " << (a > b ? "0" : "1") << endl // 0
		<< "a>b : " << (a > b ? "true" : "false") << endl // true
		<< "a>b : " << (a > b ? "t" : "f") << endl;  // t

	/*Remark:
	cout << (a > b ? "t" : "f");
	 * if the statement is true then it will return value written in double
	 codes before colon
	 * if the statement is false then it will return value written in double
	 codes after colon


	 cout << (a > b) << endl;
	 * if the statement is true then it return 1
	 * if the statement is false then it return 0

	*/
	return 0;
}
/*OUTPUT:
a: 10
b: 5
a>b : 1
a<b : 0
a>b : 1
a>b : 0
a>b : true
a>b : t
*/
