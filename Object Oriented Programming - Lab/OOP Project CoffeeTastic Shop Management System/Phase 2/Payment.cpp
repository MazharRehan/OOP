#include "Payment.h"


Payment::Payment()
{
}



Payment::Payment(int id, int cardNumber, double amount){ setPaymentAmount(amount); setPaymentId(id); setPCardNumber(cardNumber); }

Payment::Payment(const Payment&o){ setPaymentAmount(o.amount); setPaymentId(o.id); setPCardNumber(o.cardNumber); }

void Payment::setPaymentId(int id){ this->id = id; }
void Payment::setPCardNumber(int cardNumber){ this->cardNumber = cardNumber; }
void Payment::setPaymentAmount(double amount){ this->amount = amount; }

int Payment::getPaymentId()const{ return id; }
int Payment::getPCardNumber()const{ return cardNumber; }
double Payment::getPaymentAmount()const{ return amount; }
void Payment::checkPaymentStatus(int amountToPay)
{
	if (amount == amountToPay)
	{
		cout << "Transaction successful\n";
	}
	else
	{
		cout << "Status not clear!\n";
	}

}
void Payment::displayPaymentDetails()const
{
	cout << "\t\tPaymnent Id:"<<getPaymentId() << endl;
	cout << "\t\tCard Number:" << getPCardNumber() << endl;
	cout << "\t\tPayment Amount: " << getPaymentAmount() << endl;

}
Payment::~Payment()
{
}
