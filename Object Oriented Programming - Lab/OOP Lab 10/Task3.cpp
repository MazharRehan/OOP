// Task 3: 

#include<iostream>
using namespace std;

class Account
{
protected:
	char name[50];
	int accNo;
public:
	Account()
	{
		name[0] = NULL;
		accNo = 0;
	}
	virtual void getAccountDetails() = 0;
	virtual void displayDetails() = 0;
};

class CurrentAccount : public Account
{
	float balance, amount, wamount;
public:
	CurrentAccount()
	{
		balance = 500;
		amount = wamount = 0;
	}
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
			<< "\nAccount number: " << accNo
			<< "\nBalance: " << balance << endl;
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
		if (balance > 1000 && amount <= balance)
		{
			balance -= wamount;
		}
		else
			cout << "Your Balance is insufficient" << endl;
	}
};
class SavingAccount :public Account
{
	float balance, amount, wamount, interest;
public:
	SavingAccount()
	{
		balance = 500;
		amount = wamount = interest = 0;
	}
	void getAccountDetails()
	{
		cout << "Enter Customer Name: ";
		cin.ignore();
		cin.getline(name, 50);
		cout << "Enter Account Number: ";
		cin >> accNo;
	}
	void displayDetails()
	{
		cout << "Name: " << name
			<< "\nAccount number: " << accNo
			<< "\nBalance: "<< balance << endl;
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
		if (balance > 1000 && amount <= balance)
		{
			balance -= wamount;
		}
		else
			cout << "Your Balance is insufficient" << endl;
	}

};

void input(int&);
void currentAction(CurrentAccount&, int);
void savingAction(SavingAccount&, int);

int main()
{
	CurrentAccount currentObj;
	SavingAccount savingObj;

	Account* accountPtrCur = &currentObj;
	Account* accountPtrSav = &savingObj;

	int accType = 0, action = 0;

	cout << "Select Account Type::\n"
		<< "1 _ Current\n"
		<< "2 _ Saving\n__";
	cin >> accType;
	cout << "\n\n";

	if (accType == 1) {
		accountPtrCur->getAccountDetails();
		input(action);
		while (action > 0 && action < 5)
		{
			currentAction(currentObj, action);
			input(action);
		}
	}
	else if (accType == 2) {
		accountPtrSav->getAccountDetails();
		input(action);
		while (action > 0 && action < 5)
		{
			savingAction(savingObj, action);
			input(action);
		}
	}

	return 0;
}
void input(int& action)
{
	cout << "\n\nChoose Your Choice::"
		<< "\n1 - Deposit"
		<< "\n2 - Withdraw"
		<< "\n3 - Display Balance"
		<< "\n4 - Display with full Details"
		<< "\n5 - Exit"
		<< "\nEnter Your Choice: ";
	cin >> action;
	cout << "\n";
}
void currentAction(CurrentAccount& currentObj, int action)
{
	switch (action)
	{
	case 1:
		currentObj.deposit();
		break;
	case 2:
		currentObj.display();
		currentObj.withdraw();
		cout << "After Withdraw ";
		currentObj.display();
		break;
	case 3:
		currentObj.display();
		break;
	case 4:
		currentObj.displayDetails();
		break;
	case 5:
		cout << "Program Exited" << endl;
		break;
	default:
		cout << "Wrong Input" << endl;
		break;
	}
}
void savingAction(SavingAccount& savingObj, int action)
{
	switch (action)
	{
	case 1:
		savingObj.deposit();
		break;
	case 2:
		savingObj.display();
		savingObj.withdraw();
		cout << "After Withdraw ";
		savingObj.display();
		break;
	case 3:
		savingObj.display();
		break;
	case 4:
		savingObj.displayDetails();
		break;
	case 5:
		cout << "Program Exited" << endl;
		break;
	default:
		cout << "Wrong Input" << endl;
		break;
	}
}