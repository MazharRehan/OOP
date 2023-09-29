// Task 2: 

#include<iostream>
#include<string>
using namespace std;

class Reverse
{
	int input, num;
	char str[50];
public:
	Reverse()
	{
		input = 0, num = 0;
		cout << "Enter what you want to reverse ::\n1) Number\n2)String\n";
		cin >> input;
		if (input == 1)
			Number();
		else if (input == 2)
			inputString();
	}
	void Number()
	{
		cout << "Enter value :: ";
		cin >> num;
		reverseNum();
	}
	void reverseNum()
	{
		int revNum = 0;
		for (int i = 0; num!=0; i++)
		{
			revNum *= 10;
			revNum += (num % 10);
			num /= 10;
		}
		cout << "Reverse of Number is :: " << revNum << endl;
	}
	void inputString()
	{
		cout << "Input String :: ";
		cin.ignore();
		cin.getline(str, 50);
		calString();
	}
	void calString()
	{
		char revStr[50];
		int len = 0;
		for (int i = 0; str[i] != NULL; i++)
		{
			len++;
		}
		int j = 0;
		for (int i = len-1; i >= 0; i--,j++)
		{
			revStr[j] = str[i];
		}
		revStr[len] = NULL;
		cout << "Reverse of String is :: " << revStr << endl;
	}
};

int main()
{
	Reverse rev;

	return 0;
}
