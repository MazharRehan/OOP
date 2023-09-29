#include "Customer.h"


Customer::Customer()
{
	Id = 0;
}

Customer::Customer(int Id, MyString name, MyString phone, Payment pay)
{
	setCustomerId(Id);
	setCustomerName(name);
	setCustomerPayment(pay);
	seCustomerPhone(phone);

}
Customer::Customer(const Customer&o)
{
	setCustomerId(o.Id);
	setCustomerName(o.name);
	setCustomerPayment(o.pay);
	seCustomerPhone(o.phone);
}
void Customer::setCustomerId(int Id){ this->Id = Id; }
void Customer::setCustomerName(MyString name){ this->name = name; }
void Customer::seCustomerPhone(MyString phone){ this->phone = phone; }
void Customer::setCustomerPayment(Payment pay){ this->pay = pay; }

int Customer::getCustomerId()const{ return Id; }
Payment Customer::getCustomerPayment()const{ return pay; }
MyString Customer::getCustomerPhone()const{ return phone; }
MyString Customer::getCustomerName()const{ return name; }

Customer::~Customer()
{
}
void Customer::displayCustomer()const
{
	cout << "\t\tCustomer Id:" << getCustomerId() << endl;
	cout << "\t\tName: "; name.displayString();
	cout << "\t\tPhone Number: "; phone.displayString();
	cout << "\t\tPayment Details\n";
	pay.displayPaymentDetails();

}