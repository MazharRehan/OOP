#include "Order.h"
#pragma once
class TakeAway:Order
{
	int time;
	MyString ActivephoneNum;
public:
	TakeAway();
	TakeAway(int,MyString,int,Customer,int);
	TakeAway(const TakeAway&);
	void setActivePhoneNumber(MyString);
	
	void setTime(int);

	int getTime()const;
	MyString getActivePhoneNumber()const;
	void displayOrder()const;
	friend ostream& operator<<(ostream&, const TakeAway&);
	~TakeAway();
};

