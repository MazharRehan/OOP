// Task 4: 

#include<iostream>
using namespace std;

class Bank
{
	char name[50];
	int accNo;
public:
	Bank()
	{
		name[0] = NULL;
		accNo = 0;
	}
	virtual ~Bank(){}
	void getAccountDetails()
	{
		cout << "Enter your name :: ";
		cin.ignore();
		cin.getline(name, 50);
		cout << "Enter account number: ";
		cin >> accNo;
	}
	void displayDetails()
	{
		cout << "Name: " << name
			<< "\nAccount number: " << accNo << endl;
	}
	static void FactoryMethod();

};
class CurrentAccount : public Bank
{
	float balance, amount, wamount;
public:
	CurrentAccount()
	{
		balance = 1000;
		amount = wamount = 0;
	}
	~CurrentAccount() {}
	void currentAccountBalance()
	{
		cout << "Total balance is :: " << balance << endl;
	}
	void currentAccountDeposit()
	{
		cout << "Enter amount to deposit :: ";
		cin >> amount;
		balance += amount;
	}
	void  currentAccountWithdraw()
	{
		cout << "Enter amount to withdraw :: ";
		cin >> amount;
		if (amount < balance - 1000)
		{
			balance -= wamount;
		}
		else
			cout << "Insufficient" << endl;
	}
};
class SavingAccount :public Bank
{
	float balance, amount, wamount, interest;
public:
	SavingAccount()
	{
		balance = 1000;
		amount = wamount = interest = 0;
	}
	~SavingAccount(){}
	void savingAccountDisplay()
	{
		cout << "Total balance in saving account  is :: " << balance << endl;
	}
	void savingAccountDeposit()
	{
		cout << "Enter Amount to Deposit :: ";
		cin >> amount;
		interest = (balance * 2) / 100;
		balance += amount + interest;
	}
	void savingAccountWithdraw()
	{
		cout << "Enter amount to withdraw :: ";
		cin >> amount;
		if (balance > 1000 && amount <= balance)
		{
			balance -= wamount;
		}
		else
			cout << "Your Balance is insufficient" << endl;
	}

};

void input(int&);

void Bank::FactoryMethod()
{

	Bank* account = NULL;

	int accType = 0, action = 0;

	cout << "Select Account Type::\n"
		<< "1 _ Current\n"
		<< "2 _ Saving\n__";
	cin >> accType;
	cout << "\n\n";



	if (accType == 1)
	{
		CurrentAccount* current = new CurrentAccount;
		account = current;

		account->getAccountDetails();

		input(action);

		if (action > 0 && action <= 4)
		{
			switch (action)
			{
			case 1:
				current->currentAccountDeposit();
				current->currentAccountBalance();
				break;
			case 2:
				current->currentAccountBalance();
				current->currentAccountWithdraw();
				cout << "After Withdraw ";
				current->currentAccountBalance();
				break;
			case 3:
				current->currentAccountBalance();
				break;
			case 4:
				account->displayDetails();
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
		account = saving;
		account->getAccountDetails();
		input(action);

		if (action > 0 && action <= 4)
		{
			switch (action)
			{
			case 1:
				saving->savingAccountDeposit();
				saving->savingAccountDeposit();
				break;
			case 2:
				saving->savingAccountDisplay();
				saving->savingAccountWithdraw();
				cout << "After Withdraw ";
				saving->savingAccountWithdraw();
				break;
			case 3:
				saving->savingAccountDisplay();
				break;
			case 4:
				account->displayDetails();
				break;
			default:
				cout << "Wrong Input" << endl;
				break;
			}
		}
	}


	delete account;
	account = NULL;
}

void input(int& action)
{
	cout << "\n\nChoose Your Choice::"
		<< "\n1 - Deposit"
		<< "\n2 - Withdraw"
		<< "\n3 - Display Balance"
		<< "\n4 - Display full Details"
		<< "\n	Enter Your Choice: ";
	cin >> action;
	cout << "\n";
}


int main()
{
	Bank::FactoryMethod();

	return 0;
}