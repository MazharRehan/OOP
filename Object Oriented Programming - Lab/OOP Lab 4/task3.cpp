/*task3:
	Write a C++ program that finds the number of days, months and years 
	in the given day's time. Make sure that object is non modifiable.
*/
#include<iostream>
#include<string>
using namespace std;

class Sample
{
	int tDays, day, month, year;
public:
	Sample();
	~Sample() {}
	void input();
	void findDays();
	void findMonths();
	void findYears();

	void display() const;
};
Sample::Sample()
{
	input();
	findYears();
	findMonths();
	findDays();
}
void Sample::input()
{
	cout << "Enter number of days: ";
	cin >> tDays;
}

void Sample::findYears()
{
	year = tDays / 365;
	
}
void Sample::findMonths()
{
	month = (tDays % 365) / 30.416667 ;

}
void Sample::findDays()
{
	//day = (tDays % 365) % 30; // OR
	day = tDays - (year * 365) - (month * 30.416667);
}
void Sample::display() const
{
	cout << "Years: " << year << endl;
	cout << "Month: " << month << endl;
	cout << "Day: " << day << endl;
}
int main()
{
	const Sample s1;
	
	s1.display();


	return 0;
}
