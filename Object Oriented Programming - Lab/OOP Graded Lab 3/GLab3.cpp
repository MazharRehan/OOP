//gLab3
#include<iostream>
using namespace std;

class Number
{
	int num;
public:
	void input()
	{
		cout << "Enter a Four Digit Number: ";
		cin >> num;
	}
	int getNum()
	{
		return num;
	}

};
class Encryption
{
	Number n;
	int temp;
	int newNum;
	int num1, num2, num3, num4;
public:
	Encryption()
	{
		newNum = 0;
		num1 = num2 = num3 = num4 = 0;
		n.input();
		temp = n.getNum();
	}
	void Encrypt()
	{
		num1 = temp / 1000;
		num1 += 4; 
		num1 = num1 % 10;

		num2 = temp / 100;
		num2 = num2 % 10; 
		num2 += 4; 
		num2 = num2 % 10; 

		num3 = temp / 10;
		num3 = num3 % 10;
		num3 += 4;
		num3 = num3 % 10; 

		num4 = temp % 10; 
		num4 += 4;
		num4 = num4 % 10; 

		swap(num1, num3);
		swap(num2, num4);

		newNum = num1 * 10;
		newNum += num2;
		newNum *= 10;
		newNum += num3;
		newNum *= 10;
		newNum += num4;
	}
	void display()
	{
		cout << newNum << endl;
	}
};

int main()
{
	Encryption encrp;

	encrp.Encrypt();
	encrp.display();

	return 0;
}
