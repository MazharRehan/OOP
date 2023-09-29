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

	//Overload + operator
	Complex operator + (Complex const& obj);
	Complex operator + (const int& rhs_real);
	friend Complex operator + (const double& lhs, const Complex& rhs);
	
	void print()
	{
		cout << real;
		if (imag >= 0)
			cout << "+" << imag << "i" << endl;
		else
			cout << imag << "i" << endl;
	}
};
Complex Complex::operator + (Complex const& obj)
{
	Complex res;
	res.real = real + obj.real;
	res.imag = imag + obj.imag;
	return res;
}
Complex Complex::operator + (const int& rhs_real)
{
	Complex res;
	res.real = real + rhs_real;
	res.imag = imag;
	return res;
}
Complex operator + (const double& lhs, const Complex& rhs)
{
	Complex t;
	t.real = lhs + rhs.real;
	t.imag = rhs.imag;
	return t;

}

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
	//constant number instead of c2
	Complex c4 = c1 + 12;
	c4.print();
	//constant number instead of c1
	Complex c5 = 23.0 + c2;
	c5.print();
	
	return 0;
}

