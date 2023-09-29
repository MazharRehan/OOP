// Graded Lab 2:
// Muhammad Mazhar Rehan - L1F21BSSE0183

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Multiplication
{
	int num, x;
public:
	Multiplication()
	{
		num = 0;
		x = 0;
	}
	~Multiplication() { }
	void generateNumber(Multiplication&);
	void display(const Multiplication&);
	void input();
	bool operator * (const Multiplication& );

};
void Multiplication::generateNumber(Multiplication&t1)
{
	srand(time(0));
	this->num = rand() % 10 + 1;
	t1.num = rand() % 10 + 1;
}
void Multiplication::display(const Multiplication& t)
{
	cout << num << " times " << t.num << " = ?";
}
void  Multiplication::input()
{
	cin >> x;
}
bool  Multiplication::operator * (const Multiplication&t)
{
	if (num * t.num == x)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	Multiplication m1, m2;

	m1.generateNumber(m2);

	int j = 0;
	do
	{
		m1.display(m2);
		m1.input();

		j = m1 * m2; //Operator overload
		
		if (j == 0)
			cout << "\nNo. Please try again" << endl;

	} while (j == 0);

	cout << "Very Good" << endl;

	return 0;
}
