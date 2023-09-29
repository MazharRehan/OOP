
#include"FoodItem.h"

FoodItem::FoodItem()
{
	 food_id=0;
	 price = 0;
}

FoodItem::FoodItem(int food_id, MyString name, float price)
{
	set_Food_id(food_id);
	set_Name(name);
	set_Price(price);
	
}
FoodItem::FoodItem(const FoodItem &F)
{
	set_Food_id(F.food_id);
	set_Name(F.name);
	set_Price(F.price);
	
}
void FoodItem::set_Food_id(int food_id)
{
	this->food_id = food_id;
}
void FoodItem::set_Name(MyString name)
{
	this->name = name;

}
void FoodItem::set_Price(float price)
{
	this->price = price;
}

int FoodItem::get_Food_id()
{
	return food_id;
}
MyString FoodItem::get_Name()
{
	return name;
}
float FoodItem::get_Price()
{
	return price;
}
 
void FoodItem::dispaly()
{
	cout << "Press " << food_id<<" for: " << endl;
	//name.s
	cout << "\t\t";
	name.displayString();
	cout << "\t\tRs. " << get_Price() << endl;
	
}
FoodItem::~FoodItem()
{

}