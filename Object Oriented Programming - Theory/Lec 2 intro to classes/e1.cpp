#include<iostream>
using namespace std;
class Person
{
	char name[20];
	int id;
public:
	Person() : name{ "Ali"} // or name( "Ali" )
	{
		id = 10;
		//name = "Ali";  // error
	}
	void getdetails()
	{
		cout << "Id: " << id << endl;
		cout << "Name: " << name << endl;
	}
};

int main()
{
	Person p1; // p1 is an object
	p1.getdetails();

	return 0;
}
/*OUTPUT:
Id: 10
Name: Ali
*/
