#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // static data member

public:
    void setData()
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }
};
// Count is the static data member of class Employee
int Employee::count = 0; // Default value is 0

int main()
{
    Employee e1, e2, e3;
   

    e1.setData();
    e1.getData();
    e1.getCount();

    e2.setData();
    e2.getData();
    e2.getCount();

    e3.setData();
    e3.getData();
    e3.getCount();

    return 0;
}
