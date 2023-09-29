#include "Waiter.h"




Waiter::Waiter()
{
	
	totalsalesitem = 0;
}

Waiter::Waiter(int totalsalesitem, int id, MyString name, MyString phone, Date hireDate) :Employee(id,name,phone ,hireDate)
{
	settotalsalesitem(totalsalesitem);
}
void Waiter::settotalsalesitem(int totalsalesitem)
{
	this->totalsalesitem = totalsalesitem;
}
int Waiter::gettotalsalesitem()
{
	return totalsalesitem;
}
void Waiter::CheckItemSold()
{
	cout << "CheckItemSold: " << gettotalsalesitem() << endl;
}
ostream& operator<<(ostream&out, const Waiter&o)
{
	out << "Total Sale Items:" << o.totalsalesitem << endl; return out;
}
Waiter::~Waiter()
{

}

