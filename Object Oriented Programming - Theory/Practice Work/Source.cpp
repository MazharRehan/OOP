// Input 5 numbers from user and sort it in ascending order

#include<iostream>
using namespace std;

void sort(int[]);
int main()
{
	int num[5] = { 0 };

	for (int i = 0; i < 5; i++)
		cin >> num[i];

	sort(num);

	for (int i = 0; i < 5; i++)
		cout << num[i] << " ";

	return 0;
}
void sort(int num[])
{
	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
}