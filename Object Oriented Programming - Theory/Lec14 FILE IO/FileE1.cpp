#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("myfile.txt");
	string msg="Hello world ";
	out<<msg;
	out<<"class";
	
	out.close();
	
	return 0;
	
}
