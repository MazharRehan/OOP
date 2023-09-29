//Overload overload < and ==

#include<iostream>
using namespace std;

class Test
{
private:
	int x;
public:
	Test();
	Test(int a)
	{
		x = a;
	}
	bool operator < (const Test& t3)
	{
		if (x < t3.x)
		{
			return true;
		}
		else
			return false;
	}
	bool operator == (const Test& t4)
	{
		if (x == t4.x)
		{
			return true;
		}
		else
			return false;
	}
};
int main()
{
	Test t1(4), t2(4);
	if (t1 < t2)
	{
		cout << "t1 is less than t2";
	}
	else if (t1 == t2)
	{
		cout << "Equal";
	}
	else
	{
		cout << "t1 is larger than t2";
	}

	return 0;

}
