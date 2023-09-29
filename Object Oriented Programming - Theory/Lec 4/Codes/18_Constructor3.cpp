#include <iostream>
using namespace std;

class Line 
{
public:
	void setLength( double len );
	double getLength( void );
	Line( double len ); //This is the constructor
	Line()
	{
		length = 11;
	}

private:
	double length;
};

//Member function definition including constructor
Line::Line( double len ) 
{
	length = len;
	cout << "Object is being created , length =" << len << endl;
}
void Line::setLength( double len ) 
{
	length = len;
}
double Line::getLength() 
{
	return length;
}

//Main function for the program
int main()
{
	Line line1, line2(20);
	
	//get initially set length
	cout<<"Length of line :" << line1.getLength() << endl;
	cout<<"Length of line :" << line2.getLength() << endl;
	
	//set line length again
	line1.setLength(6.0);
	cout<<"Length of line :" << line1.getLength() << endl;

	return 0;
}

	

	


