
#include"Menu.h"

Menu::Menu()
{
	MId = 0;
}
Menu::Menu(int MId, FoodItem* it, MyString Descriprtion)
{
	set_Mid(MId);
	set_FoodItem(it);
	set_Descriprtion(Descriprtion);
}
Menu::Menu(const Menu &m)
{
	set_Mid(m.MId);
	set_FoodItem(m.it);
	set_Descriprtion(m.Descriprtion);
}
void Menu::set_Mid(int MId)
{
	this->MId = MId;
}
void Menu::set_FoodItem(FoodItem *it)
{
	this->it = it;
}
void Menu::set_Descriprtion(MyString Descriprtion)
{
	this->Descriprtion = Descriprtion;
}
int Menu::get_Mid()
{
	return MId;

}
FoodItem* Menu::get_FoodItem()
{
	return it;
}
MyString Menu::get_Descriprtion()
{
	return Descriprtion;
}
void Menu::display()
{
//	cout << "MId: " << get_Mid() << endl;
	it->dispaly();
	cout << "\t\t";
	Descriprtion.displayString();
	cout << endl ;
}
Menu::~Menu()
{

}