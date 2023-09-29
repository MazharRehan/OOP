// Task 4: 

#include<iostream>
using namespace std;

class Account
{
	char name[50];
	int accNo;
public:
	Account()
	{
		name[0] = NULL;
		accNo = 0;
	}
	void inputAccountDetails()
	{
		cout << "Enter your name :: ";
		cin.ignore();
		cin.getline(name, 50);
		cout << "Enter account number: ";
		cin >> accNo;
	}
	virtual void account_balance() = 0;
	virtual void deposit() = 0;
	virtual void withdraw() = 0;
};

class CurrentAccount : public Account
{
	float balance, amount, wamount;
public:
	CurrentAccount()
	{
		balance = 1000;
		amount = wamount = 0.0;
	}

	void account_balance()
	{
		cout << "\nBalance: " << balance << endl;
	}
	void display()
	{
		cout << "Total balance is :: " << balance << endl;
	}
	void deposit()
	{
		cout << "Enter amount to deposit :: ";
		cin >> amount;
		balance += amount;
	}
	void withdraw()
	{
		cout << "Enter amount to withdraw :: ";
		cin >> amount;

		if (amount < balance - 1000)
		{
			balance -= wamount;
		}
		else
			cout << "Insufficient Balance" << endl;
	}
};
class SavingAccount :public Account
{
	float balance, amount, wamount, interest;
public:
	SavingAccount()
	{
		balance = 1000;
		amount = wamount = interest = 0;
	}
	void account_balance()
	{
		cout << "\nCurrent Balance: " << balance << endl;
	}

	void display()
	{
		cout << "Total balance is :: " << balance << endl;
	}
	void deposit()
	{
		cout << "Enter Amount to Deposit :: ";
		cin >> amount;
		interest = (balance * 2) / 100;
		balance += amount + interest;
	}
	void withdraw()
	{
		cout << "Enter amount to withdraw :: ";
		cin >> amount;
		if (amount < balance - 1000)
		{
			balance -= wamount;
		}
		else
			cout << "Insufficient Balance" << endl;
	}

};

void input(int&);

int main()
{
	Account* acnt = NULL;

	int accType = 0, action = 0;

	cout << "Select Account Type::\n"
		<< "1 _ Current\n"
		<< "2 _ Saving\n__";
	cin >> accType;
	cout << "\n\n";

	input(action);

	if (accType == 1) 
	{
		CurrentAccount* current = new CurrentAccount;
		acnt = current;

		acnt->inputAccountDetails();
		
		if(action > 0 && action <= 3)
		{
			switch (action)
			{
			case 1:
				acnt->deposit();
				current->display();
				break;
			case 2:
				acnt->account_balance();
				acnt->withdraw();
				cout << "After Withdraw ";
				current->display();
				break;
			case 3:
				current->display();
				break;
			default:
				cout << "Wrong Input" << endl;
				break;
			}
		}
	}
	else if (accType == 2)
	{
		SavingAccount* saving = new SavingAccount;
		acnt = saving;
		acnt->inputAccountDetails();

		if (action > 0 && action <= 3)
		{
			switch (action)
			{
			case 1:
				acnt->deposit();
				saving->display();
				break;
			case 2:
				acnt->account_balance();
				acnt->withdraw();
				cout << "After Withdraw ";
				saving->display();
				break;
			case 3:
				saving->display();
				break;
			default:
				cout << "Wrong Input" << endl;
				break;
			}
		}
	}
	

	delete acnt;
	acnt = NULL;

	return 0;
}
void input(int& action)
{
	cout << "\n\nChoose Your Choice::"
		<< "\n1 - Deposit"
		<< "\n2 - Withdraw"
		<< "\n3 - Display Balance"
		<< "\n4 - Display with full Details"
		<< "\nEnter Your Choice: ";
	cin >> action;
	cout << "\n";
}
