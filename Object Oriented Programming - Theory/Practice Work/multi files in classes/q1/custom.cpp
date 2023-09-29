#include "custom.h"
#include<iostream>
using namespace std;

void NewClass::input()
{
	cout<<"Enter two values: ";
	cin>>n1>>n2;
}
int NewClass::sum()
{
	return n1+n2;
}
