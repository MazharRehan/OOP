#include<iostream>
using namespace std;

class Sampleclass
{
	private:
		int a;
		
	public:
		void setData(int a)
		{
			this->a = a;	//this->a reffers to the data member a
		}	
		void displayData()
		{
			cout << "The value of a is:" << a;
		}
};
int main()
{
	Sampleclass sc;
	sc.setData(4);
	sc.displayData();
	
	return 0;
}
