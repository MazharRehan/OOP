// Static member fuction and static data member

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Its scope is within the class

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
	{
		// static member function don't have access to non-static data members & non-static member functions
        // cout<<id; // throws an error //[Error] invalid use of member 'Employee::id' in static member function
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0 // initialize count to zero

int main()
{
    Employee e1, e2, e3;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    e1.setData();
    e1.getData();
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}
