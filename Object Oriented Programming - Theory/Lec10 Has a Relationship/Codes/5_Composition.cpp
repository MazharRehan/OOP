#include<iostream>
#include<string.h>
using namespace std;

class Location
{
	int x, y;
public:
	Location()
	{
		x = 0;
		y = 0;
	}
	void setX(int val1)
	{
		x = val1;
	}
	void setY(int val2)
	{
		y = val2;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};
class Person
{
	int id;
	string name;
	Location loc;

public:
	Person()
	{
		id = 0;
	}
	Person(int i, string n, Location l)
	{
		id = i;
		name = n;
		loc = l;
	}
	void setId(int i)
	{
		id = i;
	}
	void setName(string n)
	{
		name = n;
	}
	void setLocation(int x1, int y1)
	{
		loc.setX(x1);
		loc.setY(y1);
	}
	int getId()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
	Location getLocation()
	{
		return loc;
	}
	void display()
	{
		cout << "ID: " << id << endl;
		cout << "Name:" << name << endl;
		cout << "Location: " << "(" << loc.getX() << "," << loc.getY() << ")" << endl;
	}
};


int main()
{
	Person p;
	p.setId(1);
	p.setName("MNA");
	p.setLocation(5, 9);
	//cout<<p.getId();
	p.display();

	return 0;
}
