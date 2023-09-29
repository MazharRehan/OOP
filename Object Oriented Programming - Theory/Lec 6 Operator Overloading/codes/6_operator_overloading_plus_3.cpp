#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(int r, int i)
	{
		real = r;
		imag = i;
	}

	// This is automatically called when '+' is used between two Complex objects
	Complex operator + (Complex const& obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	// This is automatically called when '+' is used between Complex object and integer
	Complex operator + (const int& dreal) {
		Complex res;
		res.real = real + dreal;
		res.imag = imag;
		return res;
	}
	void print()
	{
		cout << real;
		if (imag >= 0)
			cout << "+" << imag << "i" << endl;
		else
			cout << imag << "i" << endl;
	}
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
	//constant number instead of c2
	Complex c4 = c1 + 12;
	c4.print();

	return 0;
}

