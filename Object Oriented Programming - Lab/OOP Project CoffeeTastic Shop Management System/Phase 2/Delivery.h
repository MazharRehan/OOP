#include "DineIn.h"
#pragma once
class Delivery:public Order
{
	MyString address;
	//active phone number in case other phone number is not responding
	MyString phoneNumber;
public:
	Delivery();
	Delivery(MyString, MyString,int,Customer, int);
	Delivery(const Delivery&);
	void setDeliveryAddress(MyString);
	void setDeliveryPhoneNumber(MyString);

	void displayOrder()const;
	MyString getDeliveryAddress() const;
	MyString getDeliveryPhone() const;
	~Delivery();
};

