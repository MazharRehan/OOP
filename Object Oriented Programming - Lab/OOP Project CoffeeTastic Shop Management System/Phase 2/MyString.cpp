#include "MyString.h"


MyString::MyString()
{
}
MyString::MyString(char*ptr){ setMyString(ptr); }
MyString::MyString(const MyString&o){ setMyString(o.str); }
void MyString::setMyString(char* ptr)
{
	int size = length(ptr) + 1;
	this->str = new char[size];
	copyArr(this->str, ptr, size);
}
char* MyString::getMyString()const{ return str; }
void MyString::displayString()const{ cout << getMyString() << endl; }
int MyString::length(char*p)
{
	int i = 0; 
	while (p[i] != '\0')
	{
		i++;
	}
	return i;
}
void MyString::copyArr(char*OriginalPtr, char* copyPtr, int size)
{
	int i;
	for (i = 0; i <= size; i++)
	{
		OriginalPtr[i] = copyPtr[i];
	}
}

MyString::~MyString()
{

}
 ostream& operator<<(ostream&out, const MyString&o)
{
	 out << o.str << endl; return out;
}