#include<iostream>
using namespace std;

class A
{
public:
    A()
    {

    }

    A(const A & tmp)
    {
        id = 2*tmp.id;
    }

public:
    int id;
};
int main()
{
    A obj;
    obj.id = 10;

    A obj1(obj);  
    cout << obj1.id;
    return 0;
}
