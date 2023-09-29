//static member function , static function , static data member & static variable

#include <iostream>
using namespace std;

static void display2(); //static function
static int age = 9; //static variable

class Box {
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
        display2(); // call global static function which is not a member function of the class
        cout <<"age = " << age << endl; //call global static variable which is not a data member of the class 
        
    }

private:
    double length;
    double breadth;
    double height;
};

int Box::objectCount = 0;

int main(void) {

    Box Box1(3.3, 1.2, 1.5);   
    Box Box2(8.5, 6.0, 2.0);

    cout << "objectCount = " << Box::objectCount << endl;

    Box::dispaly1();

    return 0;
}
static void display2()
{
    cout << "I am display2()" << endl;
}
