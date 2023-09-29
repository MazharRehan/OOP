//Task#03:
//     Write a C++ program that inputs and displays complex number 
// using stream operator overloading.

#include <iostream>
using namespace std;

class Complex
{
    float real, img;
public:
    Complex()
    {
        real = 0.0;
        img = 0.0;
    }
    	

    friend istream& operator >> (istream&, Complex&);
    friend ostream& operator << (ostream&, const Complex&);

};
istream& operator >> (istream& input, Complex& comp)
{
    cout << "Enter Real Part: ";
    input >> comp.real;
    cout << "Enter Imaginary Part: ";
    input >> comp.img;
    
    return input;
}
ostream& operator << (ostream& output, const Complex& comp)
{
    cout << "The complex object is " << comp.real << " + " << comp.img << "i" << endl;
    return output;
}
int main() 
{
    Complex compx;

    cin >> compx; // input
    cout << compx; //display

    return 0;
}
