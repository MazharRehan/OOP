#include "Menu.h"
#pragma once
class Order
{
protected:
	int OrderId;
	Customer cust;
	
	int quantity;
public:
	//Constructors
	Order();
	Order(int, int, Customer);
	Order(const Order&);
	//setters
	void setOrderId(int);
	void setOrderQuantity(int);
	void setOrderCustomer(Customer);
	

	//getters
	int getOrderId()const;
	int getOrderQuantity()const;
	Customer getOrderCustomer()const;
	
	
	//Abstract Class &polymorphism
	virtual void displayOrder()const=0;


	~Order();
};

