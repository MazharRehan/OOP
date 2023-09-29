/* task5:
Write a program with function that produces sum of the series:
( 1 / 1) +( 1 / 2) +( 1 / 3) +( 1 / 4) +( 1 / 5)
1.	User enters upon what number he wants sum of series. 
*/
#include<iostream>
using namespace std;

float series(int);
int main()
{
	float num = 0;
	cout << "Enter number upon which you want sum of series: ";
	cin >> num;

	float sum = series(num);

	cout << " = " << sum << endl;

	return 0;
}

float series(int x)
{
	float sum = 0.0;
	for (float i = 1; i <= x; i++)
	{
		sum += (1 / i);
		
		cout << "(1/" << i << ")";

		if (i != x)
			cout << " + ";
	}	
}
