// Example:

#include<iostream>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"Constructor executed"<<endl;
		}
		
		~Test()
		{
			cout<<"Destructor executed"<<endl;
		}
};

main()
{
	Test t,t1,t2,t3;
	
	return 0;
}
/*Output:
Constructor executed
Constructor executed
Constructor executed
Constructor executed
Destructor executed
Destructor executed
Destructor executed
Destructor executed
*/

