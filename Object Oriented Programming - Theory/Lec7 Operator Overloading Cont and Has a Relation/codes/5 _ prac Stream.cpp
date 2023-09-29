//Task#03:
//     Write a C++ program that inputs and displays complex number 
// using stream operator overloading.

#include <iostream>
using namespace std;

class Complex
{
    
public:
    float real, img;
    Complex()
    {
        real = 0.0;
        img = 0.0;
    }
    friend void operator >> (istream&, Complex&);
    friend void operator << (ostream&, const Complex&);

};
void operator >> (istream& input, Complex& comp)
{
    cout << "Enter Real Part: ";
    input >> comp.real;
    cout << "Enter Imaginary Part: ";
    input >> comp.img;

}
void operator << (ostream& output, const Complex& comp)
{
    cout << "The complex object is " << comp.real << " + " << comp.img << "i" << endl;
}
int main()
{
    Complex compx;

    cin >> compx; // input
    cout << compx; //display


    return 0;
}