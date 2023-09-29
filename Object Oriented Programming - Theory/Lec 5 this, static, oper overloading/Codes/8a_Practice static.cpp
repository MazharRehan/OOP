//static member function , global function , static data member & global variable

#include <iostream>
using namespace std;

void display2(); //global function
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
    double Volume() 
	{
		//display2(); // it is fine
   		//age = 100; // it is fine
        return length * breadth * height;
    }
    static void dispaly1() // static member function
    {
        cout << "I am display1() " << endl;
        display2(); // call global function which is not a member function of the class
        cout << "age = " << age << endl; //call global variable which is not a data member of the class 

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
    

    display2();
    age = 100;

    return 0;
}
void display2()
{
    cout << "I am display2()" << endl;
}
