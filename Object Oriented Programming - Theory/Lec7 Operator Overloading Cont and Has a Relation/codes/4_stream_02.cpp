//overload insertion ( >> , << ) operators

#include<iostream>
using namespace std;

class TestClass
{
private:
	int x;
public:
	TestClass()
	{
		x = 0;
	}
	friend istream& operator >> (istream& input, TestClass& obj1);
	friend ostream& operator << (ostream& output, const TestClass& obj2);
};
istream& operator >> (istream& input, TestClass& obj1)
{
	input >> obj1.x;
	return input;
}
ostream& operator << (ostream& output, const TestClass& obj2)
{
	output << obj2.x;
	return output;
}
int main()
{
	TestClass tc;
	cin >> tc;
	cout << tc;

	return 0;
}
