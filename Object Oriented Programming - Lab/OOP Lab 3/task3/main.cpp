/* task3:
		Write a GradeBook class which takes name of course from user and checks 
  if string length is 25 or fewer then display name else if greater then 25 
  then cut it off to first 25 characters.
a.	Separate interface from implementation. 
b.	Constructor to initialize object.
c.	Input subject names.
d.	Use getter setter functions.
Hint:use  substr(0,25) to display the first 25 characters of string. 
*/
#include<iostream>
#include "grade.h"
#include<string>
using namespace std;

int main()
{
	GradeBook b1;

	b1.display();

	return 0;
}
