
#include"Supplier.h"

Supplier::Supplier()
{

}
Supplier::Supplier(int supplier_id, MyString amount, MyString name, long int phone, FoodItem it)
{
	set_Supplier_id(supplier_id);
	set_Amount(amount);
	set_Name(name);
	set_Phone(phone);
	set_FoodItem(it);
}
Supplier::Supplier(const Supplier &s)
{
	set_Supplier_id(s.supplier_id);
	set_Amount(s.amount);
	set_Name(s.name);
	set_Phone(s.phone);
	set_FoodItem(s.it);
}
void Supplier::set_Supplier_id(int supplier_id)
{
	this->supplier_id = supplier_id;
}
void Supplier::set_Amount(MyString amount)
{
	this->amount = amount;
}
void Supplier::set_Name(MyString name)
{
	this->name = name;
}
void Supplier::set_Phone(long int phone)
{
	this->phone = phone;
}
void Supplier::set_FoodItem(FoodItem it)
{
	this->it = it;
}
int Supplier::get_supplierid()
{
	return supplier_id;
}
MyString Supplier::get_Amount()
{
	return amount;
}
MyString Supplier::get_Name()
{
	return name;
}
long int Supplier::get_phone()
{
	return phone;
}
FoodItem Supplier::get_Fooditem()
{
	return it;
}
void Supplier::display()
{
	cout << "Supplier ID: " << get_supplierid() << endl;
	cout << "Amount: " << endl;
	amount.displayString();
	cout << "Name: " << endl;
	name.displayString();
	cout << "Phone: " << phone << endl;
	cout << "Food Item: " << endl;
	it.dispaly();
}
Supplier::~Supplier()
{

}