#include "Date.h"



Date::Date(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}
void Date::setDay(int Day)
{
	this->Day = Day;
}
void Date::setMonth(int Month)
{
	this->Month = Month;
}
void Date::setYear(int Year)
{
	this->Year = Year;
}
int Date::getDay()
{
	return Day;
}
int Date::getMonth()
{
	return Month;
}
int Date::getYear()
{
	return Year;
}
void Date::Display()
{
	cout << Month << "/" << Day << "/" << Year << endl;
}
ostream& operator<<(ostream&out,const Date&o)
{
	out << o.Month << "/" << o.Day << "/" << o.Year << endl;
	return out;
}