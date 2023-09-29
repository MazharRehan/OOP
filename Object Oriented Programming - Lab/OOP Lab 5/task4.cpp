/* task 4:
		Write a program with a class having a function fact to calculate the factorial of a number.
a.	Takes number input form user.
b.	Pass object as argument.
c.	 Return object as argument.

*/
#include <iostream>
using namespace std;

class Factorial
{
private:
	int num;
	int facto;
public:
	
	Factorial()
	{
		num = 0;
		facto = 1.0;
	}

	void input();
	int getNum();
	int getFacto();
	Factorial& fact(Factorial& );
	
};
Factorial& Factorial::fact(Factorial& temp)
{
	for (int i = num; i > 0; i--)
	{
		facto *= i;
	}
	return temp;
}
int Factorial::getNum()
{
	return num;
}
int Factorial::getFacto()
{
	return facto;
}
void Factorial::input()
{
	cout << "Enter an integer number: ";
	cin >> num;
}
int main()
{
	Factorial f1;

	f1.input();
	f1 = f1.fact(f1);

	cout << "Factorial of " << f1.getNum() << " is: " << f1.getFacto() << endl;

	return 0;
}

