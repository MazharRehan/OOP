#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string msg;
	ifstream in("myfile.txt");
	
	if(in.is_open())
	{
		in>>msg;
		cout<<msg;
		//out<<"class";
	}
	else
		cout << "File not found." << endl;
	
	in.close();
	
	return 0;
	
}
