/* task2
	Create a class MobilePhone having:
 attribute: mobile name, company name, mobile price, and mobile color
 functions: call, message, on/off, alarm.

a.	Create UML diagram using StarUML software.
b.	write C++ code for the above scenario. you are only required to create 
class definitions that shall contain data members and member function 
prototypes only. Member function definitions not required here.

*/
#include<iostream>
#include<string>
using namespace std;

class MobilePhone
{
	string mobileName, companyName, mobilePrice, mobileColor;
public:

	void call();
	void message();
	void on_OFF();
	void alarm();

};
