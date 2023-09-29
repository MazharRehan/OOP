// Example:

#include<iostream>
using namespace std;
int count = 0; // global variable

class Test
{
	public:
		Test()
		{
			count++;
			cout<<"No. of Object created:\t"<<count<<endl;
		}
		~Test()
		{
			cout<<"No. of Object destroyed:\t"<<count<<endl;
			--count;
		}
};

int main()
{
	Test t,t1,t2,t3;
	
	return 0;
}
/*Output:
No. of Object created:  1
No. of Object created:  2
No. of Object created:  3
No. of Object created:  4
No. of Object destroyed:   4
No. of Object destroyed:   3
No. of Object destroyed:   2
No. of Object destroyed:   1
*/
