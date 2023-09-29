#include "FoodItem.h"
#pragma once




class Supplier
{
private:
	int supplier_id;
	MyString amount;
	MyString name;
	long int phone;
	FoodItem it;
public:
	Supplier();
	Supplier(int, MyString, MyString, long int, FoodItem);
	Supplier(const Supplier &s);
	void set_Supplier_id(int supplier_id);
	void set_Amount(MyString amount);
	void set_Name(MyString name);
	void set_Phone(long int phone);
	void set_FoodItem(FoodItem it);
	int get_supplierid();
	MyString get_Amount();
	MyString get_Name();
	long int get_phone();
	FoodItem get_Fooditem();
	void display();
	~Supplier();
};