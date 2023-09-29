// Graded Lab 4: 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Programmming
{
	string text, newText, capitalText;
	ofstream fout;
	ifstream fin;
public:
	Programmming()
	{
		text = newText  = capitalText = "";
	}
	void input()
	{
		cout << "Enter Text:: ";
		getline(cin, text);

	}

	void write()
	{
		// 1.	Write only lower case alphabets on file.
		fout.open("File.txt");

		for (int i = 0; text[i] != NULL; i++)
		{
			if (text[i] >= 97 && text[i] <= 122)
			{
				if (text[i] == ' ')
					fout << ' ';
				else
					fout << text[i];

			}
		}
	
		fout.close();
	}

	void convert()
	{
		// 2.	Convert those lower case letters into upper case and display them on the console.

		fin.open("File.txt");

		if (fin.is_open())
		{
			getline(fin, newText);

			for (int i = 0; newText[i] != NULL; i++)
			{
				string temp = "";
				temp = (newText[i] - 32);
				capitalText = capitalText + temp;
			}

		}
		else
			cout << "File Not Found" << endl;

		fin.close();

	}
	void display()
	{
		cout << "Text is:: " << capitalText << endl;
	}

};

int main()
{
	Programmming obj;
	obj.input();
	obj.write();
	obj.convert();
	obj.display();

	return 0;
}