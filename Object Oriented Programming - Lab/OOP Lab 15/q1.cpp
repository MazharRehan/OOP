// Task1:

#include<iostream>
#include<fstream>
using namespace std;

class File
{
	int num[5];
public:
	File():num{0}
	{
		
	}
	static void factory();
	void input();
	void calculate(ofstream& f1, ofstream& f2);

};
void File::input()
{
	cout << "Input 5 numbers: ";
	for (int i = 0; i < 5; i++)
		cin >> num[i];
}

void File::calculate(ofstream& f1, ofstream& f2)
{
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)
			f1 << num[i] << ",";
		else
			f2 << num[i] << ",";
	}
}


void File::factory()
{
	ofstream foutE, foutO;

	foutE.open("Even.txt", ios::out);
	foutO.open("Odd.txt", ios::out);

	File obj;

	obj.input();

	obj.calculate(foutE, foutO);

	foutE.close();
	foutO.close();
}

int main()
{
	File::factory();

	return 0;
}
