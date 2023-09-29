#include <iostream>
using  namespace std;
class Date
{
public:
	Date(int =0, int=0 , int=0 );
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void Display();
	friend ostream& operator<<(ostream&, const Date&);
private:
	int Day;
	int Month;
	int Year;
};