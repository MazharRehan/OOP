
#include<iostream>
using namespace std;
class X
{
	public:
		X()
		{
			cout<<"X constructor here\n";
		}
		~X()
		{
			cout<<"X destructor here\n";
		}
};
class Y
{
	X xobj;
	
	public:
		Y()
		{
			cout<<"Y constructor here\n";
		}
		~Y()
		{
			cout<<"Y destructor here\n";
		}
};
int main()
{
	Y yobj;
	
	return 0;
}
/* OUTPUT:
X constructor here
Y constructor here
Y destructor here
X destructor here
*/

