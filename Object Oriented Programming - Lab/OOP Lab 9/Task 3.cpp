//task 3: 

#include<iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number()
	{
		num = 0;
	}
	~Number(){ }
	void getNumber();
	int returnNumber();
};
void Number::getNumber()
{
	cout << "Enter Number: ";
	cin >> num;
}
int Number::returnNumber()
{
	return num;
}

class Square : public Number
{
public:
	int getSquare();
};
int Square::getSquare()
{
	return  (returnNumber() * returnNumber());
}

class Cube
{
public:
	int getCube(Square& t);

};
int Cube::getCube(Square& t)
{
	return (t.returnNumber() * t.returnNumber() * t.returnNumber());
}

int main()
{
	Square sq;
	sq.getNumber();
	cout << " Square of " << sq.returnNumber() << " is " << sq.getSquare() << endl;

	Cube cb;
	cout << " Cube   of " << sq.returnNumber() << " is " << cb.getCube(sq) << endl;


	return 0;
}