/* task7:
Print following pattern.
1
2 3
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;


int main()
{
	int num = 1;
	
	for (int i = 0; i < 4; i++) //rows
	{
		for (int j = 0; j <= i; j++) // column
		{
			cout << num << " ";
			num++;
		}
		cout << endl;
	}

	return 0;
}
