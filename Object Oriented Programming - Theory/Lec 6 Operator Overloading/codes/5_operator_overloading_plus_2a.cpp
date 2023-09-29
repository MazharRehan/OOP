//Overloading Plus Operator

#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(int r, int i) 
	{
		real = r; 
		imag = i;
	}
	
	// This function is automatically called when '+' is used between double and Complex object
	friend Complex operator + (const double& b, const Complex& obj1);
	void print() 
	{ 
		cout << real;
	 	if (imag>=0)
	 		cout<<"+" << imag << "i" << endl;
	 	else
	  		cout << imag << "i" << endl;
	}
};
Complex operator + (const double& b, const Complex& obj1) {
	Complex res;
	res.real = b + obj1.real;
	res.imag = obj1.imag;
	return res;
}
int main()
{
	Complex c1(10, 5);
	Complex c3 = 23.5 + c1;
	c3.print();
	
	return 0;
}

