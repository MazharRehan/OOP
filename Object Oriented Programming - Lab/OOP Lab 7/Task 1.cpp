/* 	Task1:
		Write a C++ program  that compares 2 input strings from 2 different objects using operator overloading.
a.	Check if two strings are the same or not.
b.	If strings are not the same then find the length of each and tell which one is greater(overload >=).
c.	Use a constructor for variable initialization. 
*/
#include<iostream>
#include<string>
using namespace std;

class IString
{
	string str;
	int size;
//	void findLength(string);
public:
	IString()
	{
		str = "";
		size = 0;
	}
	void input();
	string getString();
	bool operator == (const IString&);
	bool operator >= (IString&);

};
void IString::input()
{
	cout << "Input string: ";
	getline(cin, str);
	//cout << "str: " << str << endl;
}
bool IString :: operator == (const IString& t)
{
	if (str == t.str)
		return 1;
	else
		return 0;
}
bool IString :: operator >= (IString& t)
{
	//findLength(str);
	//findLength(t.str);
	
	size = str.length();
	t.size = (t.str).length();

	//cout << "str: " << size << endl;
	//cout << "r.str: " << t.size << endl;

	if (size >= t.size)
	{
		return 1;
	}
	else
		return 0;
		
}
/*
void  IString :: findLength(string str1)
{
	//size = 0;
	for (int i = 0; str[i] !='\0'; i++)
	{
		size++;
	}
	cout << "size: " << size << endl;
}
*/
string IString::getString()
{
	return str;
}

int main()
{
	IString s1, s2;

	s1.input();
	s2.input();
	
	if (s1 == s2)
	{
		cout << "\nStrings are Equal." << endl;
	}
	else if(s1 >= s2)
	{
		cout << "\nStrings are Not Equal." << endl;
		cout << "\"" << s1.getString() << "\" is greater than \"" << s2.getString() << "\"" << endl;
	}
	else
	{
		cout << "\nStrings are Not Equal." << endl;
		cout << "\"" << s2.getString() << "\" is greater than \"" << s1.getString() << "\"" << endl;
	}


	return 0;
}
