// C++ program to demonstrate constructor overloading

#include <iostream>
using namespace std;

class Person 
{
   private:
		int age;

   public:
    	// 1. Constructor with no arguments
   		Person()
		{
       		age = 20;
		}

  		// 2. Constructor with an argument
    	Person(int a)
		{
       		age = a;
    	}
    	// 2. Constructor with two argument
    	Person (int a, int b)
    	{
    		age = a + b;
		}

    	int getAge()
		{
       		return age;
   		}
};

int main()
{
    Person person1, person2(23), person3(22,13);

    cout << "Person1 Age = " << person1.getAge() << endl;
    cout << "Person2 Age = " << person2.getAge() << endl;
    cout << "Person3 Age = " << person3.getAge() << endl;

    return 0;
}
/*Output:
Person1 Age = 20
Person2 Age = 23
Person3 Age = 35
*/
