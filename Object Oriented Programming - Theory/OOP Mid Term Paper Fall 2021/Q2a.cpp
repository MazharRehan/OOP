// Q:2(a)
				// Code by Mazhar Rehan

#include<iostream>
using namespace std;

class SELF
{
private:
	SELF* me;
public:
	SELF()
	{
		//this = me; //ERROR:	assignment to 'this' (anachronism) //	'=': left operand must be l - value	
		me = this; // Right, no error
	}
};

int main()
{
	SELF s;

	return 0;
}
