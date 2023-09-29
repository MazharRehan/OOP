#include "Chef.h"
#pragma once
class Waiter:public Employee
{
protected:
	int totalsalesitem;
public:
	Waiter();
	Waiter(int,int,MyString,MyString,Date);
	void settotalsalesitem(int);
	int gettotalsalesitem();
	void CheckItemSold();
	virtual void display()=0;
	friend ostream& operator<<(ostream&, const Waiter&);
	~Waiter();
};

