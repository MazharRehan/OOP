#include "Date.h"

#pragma once
class MyString
{
	char* str;
public:
	MyString();
	MyString(char*);
	MyString(const MyString&);
	void setMyString(char*);
	char* getMyString()const;
	void displayString()const;
	int length(char*);
	void copyArr(char*, char*, int);
	friend ostream& operator<<(ostream&, const MyString&);
	~MyString();
};

