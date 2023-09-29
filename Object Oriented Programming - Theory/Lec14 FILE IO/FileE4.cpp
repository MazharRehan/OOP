#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream out;
	out.open("file2.txt");
	out<<"This is file2\n";
	out<<"It contains some data\n";
	out.close();
	
	ifstream in;
	string s1,s2;
	in.open("file2.txt");
	//in>>s1>>s2;
	//cout<<s1<<s2;
	
	while(in.eof()==0)
	{
		getline(in, s1);
		cout<<s1<<endl;
	}
	
	return 0;
	
}
