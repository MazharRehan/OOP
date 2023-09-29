#include "Supplier.h"
#pragma once


class Menu
{
private:
	int MId;
	FoodItem *it;
	MyString Descriprtion;
public:
	Menu();
	Menu(int, FoodItem *it, MyString Descriprtion);
	Menu(const Menu &m);
	void set_Mid(int MId);
	void set_FoodItem(FoodItem *it);
	void set_Descriprtion(MyString Descriprtion);
	int get_Mid();
	FoodItem* get_FoodItem();
	MyString get_Descriprtion();
	void display();
	~Menu();
};

