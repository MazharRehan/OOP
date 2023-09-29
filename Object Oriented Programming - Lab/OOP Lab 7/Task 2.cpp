/* Task 2:
		Write a C++ program that takes distance in feet and inches from two objects:
a.	Subtraction distances using operator overloading.
b.	Find which distance has more displacement(keep in mind the difference of both feet and inches).
*/
#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;
public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    void input();
    void display();
    Distance operator - (const Distance&);
    bool operator > (const Distance&);
    bool operator == (const Distance&);
};
void Distance::input()
{
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter Inch: ";
    cin >> inch;
}
Distance Distance::operator - (const Distance& t)
{
    Distance d;
    d.feet = feet - t.feet;
    d.inch = inch - t.inch;
    return d;
}
bool Distance::operator > (const Distance& t)
{
    if (feet > t.feet)
        return true;
    
    if ((feet == t.feet) && (inch > t.inch))
        return true;
    
    return false;
}
bool Distance::operator == (const Distance& t)
{
    if (feet == t.feet && inch == t.inch)
        return true;
    
    return false;
}
void Distance::display()
{
    cout << feet << "F   " << inch << "I" << endl;
}

int main() 
{
    Distance d1, d2;

    d1.input();
    d2.input();

    Distance d3 = d1 - d2;

    cout << "Result of subtraction of d2 from d1 is :: ";
    d3.display();

    if (d1 > d2)
        cout << "d1 is greater than d2" << endl;
    else if (d1 == d2)
        cout << "d1 is equal to d2" << endl;
    else 
        cout << "d1 is less than d2" << endl;
    

    return 0;
}
