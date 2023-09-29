#include "Employee.h"
#pragma once
class Payment
{
	int id;
	int cardNumber;
	double amount;
public:
	Payment();
	Payment(int, int, double);
	Payment(const Payment&);

	void setPaymentId(int);
	void setPCardNumber(int);
	void setPaymentAmount(double);

	int getPaymentId()const;
	int getPCardNumber()const;
	double getPaymentAmount()const;

	void checkPaymentStatus(int);
	void displayPaymentDetails()const;

	~Payment();
};

