// Q:2(b)
									// Code by Mazhar Rehan

#include<iostream>
#include<cstring>
using namespace std;

class Exam
{
private:
	char* ExamName;
	int No_of_paper;
public:
	Exam()
	{
		//ExamName = "Mid term - Spring 2019"; //Error: a value of type "const char *" cannot be assigned to an entity of type "char *"
		ExamName = new char[100];
		strcpy_s(ExamName, 50, "Mid term - Spring 2019");
		No_of_paper = 5;
	}
	void setname(char* name) //change constant function to non constant function
	{
		ExamName = new char[strlen(name) - 1];
		strcpy_s(ExamName, strlen(name) + 1, name);
	}
	void setpaper(int paper) //change constant function to non constant function
	{
		No_of_paper = paper;
	}
	char* getname() const //change non constant function to constant function
	{ 
		return ExamName;
	}
	int getpaper() const //change non constant function to constant function
	{
		return No_of_paper;
	}
	~Exam() {
		delete ExamName;
		ExamName = NULL;
	}

};
int main()
{
	const Exam exam1;
	cout << "Exam = " << exam1.getname() << endl;
	cout << "Number of paper = " << exam1.getpaper() << endl;


	return 0;
}
