#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string msg;
	ifstream in("myfile.txt");
	
	getline(in, msg);
	getline(in,msg);
	cout<<msg;
	
		//out<<"class";
	
	
	return 0;
	
}
