// C++ program to demonstrate function declaration outside class
 
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

class Person
{
    public:
    	string name;
    	int id;
     
    	// printname is not defined inside class definition
    	void printname(); // ofline function
     
    	// printid is defined inside class definition
    	void printid() // inline function
    	{
        	cout << "Person ID is: " << id << endl;
    	}
};
 
// Definition of printname using scope resolution operator ::
void Person::printname()
{
    cout << "Person Name is: " << name << endl;
}
int main() 
{     
    Person obj1;
    obj1.name = "xyz";
    obj1.id = 15;
     
    // call printname()
    obj1.printname();
     
    // call printid()
    obj1.printid();
    
    return 0;
}
/* Output:
Person Name is: xyz
Person ID is: 15
*/
