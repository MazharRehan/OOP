#include "TakeAway.h"


TakeAway::TakeAway()
{
	time = 0;
}


TakeAway::TakeAway(int time, MyString activePhone, int o_id, Customer cus, int quantity) :Order(o_id,quantity,cus)
{
	
	setTime(time); 
	setActivePhoneNumber(activePhone);
}
TakeAway::TakeAway(const TakeAway&o){ setTime(o.time); }

void TakeAway::setTime(int time){ this->time = time; }
void TakeAway::setActivePhoneNumber(MyString activePhone){ this->ActivephoneNum = activePhone; }
int TakeAway::getTime()const{ return time; }
MyString TakeAway::getActivePhoneNumber()const{
	return ActivephoneNum;
}
void TakeAway::displayOrder()const
{

	cout << "Order Type --->TakeAway\n";
	cout << "Order Id: " << getOrderId() << endl;
	cout << "Time: " << getTime()<<" minutes\n";
	cout << "Active Phone Number: "; ActivephoneNum.displayString();
}
TakeAway::~TakeAway()
{
}
ostream& operator<<(ostream&out, const TakeAway&o)
{
	out << "Order Type --->TakeAway\n";
	out << "Order Id: " << o.getOrderId() << endl;
	out << "Time: " << o.getTime() << " minutes\n";
	out << "Active Phone Number: "; o.ActivephoneNum.displayString(); return out;
}
