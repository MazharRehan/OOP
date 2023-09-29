#include "Customer.h"
#pragma once


class FoodItem
{
private:
	int food_id;
	MyString name;
	float price;
	
public:
	FoodItem();
	FoodItem(int, MyString, float);
	FoodItem(const FoodItem &F);
	void set_Food_id(int);
	void set_Name(MyString);
	void set_Price(float);

	int get_Food_id();
	MyString get_Name();
	float get_Price();

	void dispaly();

	~FoodItem();
};