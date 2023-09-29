#include "Delivery.h"


Delivery::Delivery()
{
}
Delivery::Delivery(MyString phone, MyString address, int OrderId, Customer cust, int quantity) :Order(OrderId, quantity, cust)
{

	setDeliveryAddress(address);
	setDeliveryPhoneNumber(phone);

}
Delivery::Delivery(const Delivery&o){ setDeliveryAddress(o.address); setDeliveryPhoneNumber(o.phoneNumber); }
void Delivery::setDeliveryAddress(MyString address){ this->address = address; }
void Delivery::setDeliveryPhoneNumber(MyString phone){ this->phoneNumber = phone; }

MyString Delivery::getDeliveryAddress() const{ return address; }
MyString Delivery::getDeliveryPhone() const{ return phoneNumber; }
void Delivery::displayOrder()const
{
	cout << "\t\t__________________________________________\n";
	cout << "\t\tOrder Type --->Delivery\n";
	cout << "Order Id: " << getOrderId() << endl;
	cout << "Address: "; address.displayString();
	cout << "Active Phone Number: "; phoneNumber.displayString();
	cout << "\t\t__________________________________________\n";
}
Delivery::~Delivery()
{
}
