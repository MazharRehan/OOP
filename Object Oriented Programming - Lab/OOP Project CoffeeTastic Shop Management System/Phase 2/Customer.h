#include "Payment.h"
#pragma once
class Customer
{
	int Id;
	MyString name;
	MyString phone;
	Payment pay;
public:
	Customer();
	Customer(int, MyString, MyString, Payment);
	Customer(const Customer&);
	void setCustomerId(int);
	void setCustomerName(MyString);
	void seCustomerPhone(MyString);
	void setCustomerPayment(Payment);

	int getCustomerId()const;
	Payment getCustomerPayment()const;
	MyString getCustomerPhone()const;
	MyString getCustomerName()const;

	void displayCustomer()const;
	~Customer();
};

