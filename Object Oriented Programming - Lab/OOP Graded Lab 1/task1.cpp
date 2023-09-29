/* Task 1:
		Write a program in C++ in which user can withdrawal and deposit their amount. Create 
2 functions deposit and withdrawal which will add and deduct the amount from your current 
account and tell the final amount: user will enter 1 to deposit the amount and press 2 
for withdrawal the amount if withdrawal amount is greater than amount in bank a message 
will appear that "you balance is insufficient for this transection".
a.	There should be a constructor that initializes value.
b.	Data members and local variables of the member function must have the same name.
*/

#include<iostream>
using namespace std;


class Account
{
	static double amount;
	int x;
	double depositAmount;
	double withdAmout;
public:
	Account()
	{
		x = 0;
		depositAmount = 0.0;
		withdAmout = 0.0;
	}
	void input();
	void deposit();
	void withdrawal();
	void chack();
};
void Account::input()
{
	cout << "Please select from the manue:\n1		Deposit\n2	Withdrawl" << endl;
	cin >> x;
}
void Account::deposit()
{
	cout << "Enter amount to deposit: ";
	cin >> depositAmount;
}
void Account::withdrawal()
{
	cout << "Enter the amount to withdrawal: ";
	cin >> withdAmout;
}
void Account::chack()
{
	if (x == 1)
	{
		deposit();
		amount = amount + depositAmount;
	}
	else
	{
		withdrawal();
		if (withdAmout <= amount)
			amount = amount - withdAmout;
		else
			cout << "you balance is insufficient for this transection" << endl;
	}
	cout << "New Balance is: " << amount << endl;
}
double Account::amount = 5000;
int main()
{
	char ch;
	int size = 10;
	Account* a = new Account[size];

	for (int i = 0; i < size; i++)
	{
		a[i].input();
		a[i].chack();
		cout << "Do you want to perform more operations (y/n): ";
		cin >> ch;
		if (ch != 'y')
			break;
	}

	delete[]a;
	a = NULL;

	return 0;
}
