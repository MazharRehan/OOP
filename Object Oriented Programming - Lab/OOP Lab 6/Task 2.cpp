/* Task 2::
Write a C++ program that performs addition, subtraction, multiplication and division on two objects using operator overloading.
a.	Perform calculations on 2 different object inputs.
b.	Define constructors for variable initializations.
c.	Return object to overloaded functions.
*/

#include<iostream>
using namespace std;

class Calculation
{
	float num;
public:
	Calculation()
	{
		num = 0;
	}
	Calculation(float a)
	{
		num = a;
	}
	~Calculation(){ }
	float operator * (const Calculation&);
	float operator / (const Calculation&);
	float operator - (const Calculation&);
	float operator + (const Calculation&);

};
float Calculation::operator + (const Calculation& a)
{
	return (this->num + a.num);
}
float Calculation::operator - (const Calculation& a)
{
	return num - a.num;
}
float Calculation::operator * (const Calculation& a)
{
	return num * a.num;
}
float Calculation::operator / (const Calculation& a)
{
	return num / a.num;
}
int main()
{
	Calculation x(20), y(10);

	cout << "Numbers are: " << 20 << " , " << 10
		<< "\n\nAddition :: " << x + y
		<< "\nSubtaction :: " << x - y
		<< "\nMultiplication :: " << x * y
		<< "\nDivision :: " << x / y << endl;

	return 0;
}
