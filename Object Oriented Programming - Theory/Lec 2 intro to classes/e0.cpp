#include <iostream>
using namespace std;
class Student
{
	private:
		int age;
	public:
		Student()
		{
			age=10;
		}
		Student (int a)
		{
			age=a;
		}
		void displayage()
		{
			
			cout<<"Age is:"<<age<<endl;
		}
};
int main()
{
	Student st1, st2(15);
	st1.displayage();
	st2.displayage();
	
	return 0;
}
/*Output:
Age is:10
Age is:15
*/
