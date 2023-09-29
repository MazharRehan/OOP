#include "Order.h"


Order::Order()
{
}

Order::Order(int orderId, int quantity, Customer cust)
{
	setOrderCustomer(cust);
	setOrderQuantity(quantity);
	setOrderId(orderId);
}
Order::Order(const Order&o)
{

	setOrderCustomer(o.cust);
	setOrderQuantity(o.quantity);
	setOrderId(o.OrderId);
}
//setters
void Order::setOrderId(int id){ this->OrderId = id; }
void Order::setOrderQuantity(int quantity){ this->quantity = quantity; }
void Order::setOrderCustomer(Customer cust){ this->cust = cust; }

//getters
int Order::getOrderId()const{ return OrderId; }
int Order::getOrderQuantity()const{ return quantity; }
Customer Order::getOrderCustomer()const{ return cust; }


Order::~Order()
{
}
