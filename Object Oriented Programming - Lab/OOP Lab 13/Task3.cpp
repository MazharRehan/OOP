//Task 3:

/*	Computers don’t understand words or numbers the way humans do. 
Modern software allows the end user to ignore this, but at the 
lowest levels of your computer, everything is represented by a 
binary electrical signal that registers in one of two states: 
“0” or “1”. To make sense of complicated data, your computer has 
to encode it in binary. Create a C++ template class that converts 
input decimal numbers into binary.
Display number of objects created. 
*/

#include<iostream>
#include<string>
using namespace std;

template <typename T> class Computer
{
	T decimal, remainder;
	long long int binary, product; // up to 20 digits can be stored means 1.844674407 x 10^19
public:
	Computer()
	{
		remainder = 0;
		binary = 0;
		product = 1;
		cout << "Input a decimal number: " << endl;
		cin >> decimal;
	}

	void converter()
	{
		cout << "Decimal number " << decimal;
		while(decimal > 0)
		{
			remainder = decimal % 2;
			decimal /=  2;
			binary = binary + (remainder * product);
			product *= 10;
		}
		
		cout << " in binary form is " << binary << endl;
	
	}


};



int main()
{
	Computer<int> comp;

	comp.converter();

	return 0;
}
