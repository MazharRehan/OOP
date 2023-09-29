//static member function , static function , static data member & global variable

#include <iostream>
using namespace std;

void factory(); //global function
int age = 9; //global variable

class Box 
{
public:
    static int objectCount; //static data member

    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        length = l;
        breadth = b;
        height = h;

        // Increase every time object is created
        objectCount++;
    }
    double Volume() {
        return length * breadth * height;
    }
    static void dispaly1() // static member function
    {
        cout << "I am display1() " << endl;
        cout << "age = " << age << endl; //call global variable which is not a data member of the class 

    }

private:
    double length;
    double breadth;
    double height;
};

int Box::objectCount = 0;

int main(void) 
{
    factory();
    
    return 0;
}
void factory()
{
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    cout << "objectCount = " << Box::objectCount << endl;

    Box::dispaly1();
    age = 100;

}