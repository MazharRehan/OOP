/*
						OOP Assignment 2
	Submit by:
		Muhammad Mazhar Rehan - L1F21BSSE0183
		Syed Mansoor Ali      - L1F20BSSE0527
	Submit to:
		Sir Muhammad Naeem Akhtak
	Section: 
		O4
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Set
{
private:
	int size;
	char operation;
	int* setA;
	int* setB;

	void sort(int*);
	void generateRandomNum(int*);
	int randrange(int, int);
	void display1(int*) const;

public:

	Set();	// default constructor
	Set(int);	// parameterized constructor
	~Set();	// destructor

	void inputOperation();
	char getOpetation();	// Getter
	void menu() const;
	void findUnion();
	void findIntersection();
	void displaySet() const;
	void assignRandomNumber();
	bool checkEquality();
	void membershipTest();
	void findCardinality();

};
Set::Set()
{
	size = 0;
	operation = '\0';
	setA = NULL;
	setB = NULL;
}
Set::Set(int size)
{
	this->size = size;
	
	setA = new int[size];
	setB = new int[size];
	
}
Set::~Set()
{
	delete[] setA;
	setA = NULL;
	delete[]setB;
	setB = NULL;
}
void Set::assignRandomNumber()
{
	generateRandomNum(setA);
	generateRandomNum(setB);
}
void Set::generateRandomNum(int* num)
{
	int i, j;
	bool check;

	for (i = 0; i < size; i++)
	{
		int k = 0;
		do
		{
			check = 0;
			num[i] = randrange(1, 100);

			for (j = 0; j < i; j++)
			{
				if (num[i] == num[j])    // checks whether number already exists in  the array
					check = 1;
			}
		} while (check == 1);
	}

	sort(num); // sort the numbers in a set

}
int Set::randrange(int first, int last)   // generates a random number within given range
{
	return rand() % (last + first) + first + 1;
}
void Set::sort(int* set)
{
	int temp = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (set[i] > set[j])
			{
				temp = set[i];
				set[i] = set[j];
				set[j] = temp;
			}
		}
	}
}
void Set::displaySet() const
{
	cout << "\nCreated sets are:\nA = ";
	display1(setA);
	cout << "B = ";
	display1(setB);

}
void Set::display1(int* arr) const
{
	cout << "{ ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
	}
	cout << " }" << endl;
}

void Set::findIntersection()
{
	cout << "Result of Intersection Operation." << endl;
	cout << "I = {";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (setA[i] == setB[j])
				cout << setA[i] << ", ";
		}
	}

	cout << " }\n" << endl;
}
void Set::findUnion()
{
	cout << "Result of Union Operation" << endl;
	cout << "U = {";

	int count = 0;
	for (int i = 0; i < size; i++)
	{
		cout << setA[i] << ", ";
		count = 0;
		for (int j = 0; j < size; j++)
		{
			if (setB[i] == setA[j])
				count++;
		}
		if (count == 0)
			cout << setB[i] << ", ";
	}

	cout << " }\n" << endl;
}


void Set::menu() const
{
	cout << "\n_.-._._._._._._._._._._._._.MENU._._._._._._._._._._._._.-._\n\n"
		<< "Press \"U\" to Find Union\n"
		<< "Press \"I\" to Find Intersection\n"
		<< "Press \"E\" to Check Equality of Sets\n"
		<< "Press \"M\" to Perform Membership Test\n"
		<< "Press \"C\"  to Check Number of Members in the Set(Cardinality)\n"
		<< "Press \"X\" to Exit\n\n"
		<< "_.-._._._._._._._._._._._._.-._._._._._._._._._._._._.-._\n\n\n";
}
void Set::inputOperation()
{
	cout << "Please Select the Operation you want to perform on these sets: ";
	cin >> operation;

	cout << "\n\n\n";
}
char Set::getOpetation()
{
	return operation;
}
bool Set::checkEquality()
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{	
		if (setA[i] == setB[i])
		{
			count++;
		}
	}

	if (count==size)
		return 1;
	else
		return 0;
}
void Set::membershipTest()
{
	int num = 0;

	cout << "Input a number to perform membership test: ";
	cin >> num;

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (num == setA[i])
		{
			cout << "\n" << num << " is a member of set A" << endl;
			count++;
		}

		if (num == setB[i])
		{
			cout << num << " is a member of set B" << endl;
			count++;
		}

	}

	if (!count)
	{
		cout << num << " is not a member of both sets A and B" << endl;
	}

}
void Set::findCardinality()
{
	int s = 0;
	for (int i = 0; i < size; i++)
		s++;

	cout << "Cardinality of set A and B is " << s << endl << endl;
}

int main()
{
	int size = -99;
	char oper = '\0';
	
	do
	{
		if(size!=-99)
		{
			cout << "\nPlease enter size within the range (1 to 20)\nAgain ";
		}
		cout << "Enter the Size of both Sets: ";
		cin >> size;
		
	}while(size < 1 || size > 20);
	
	Set s1(size);

	s1.assignRandomNumber();
	s1.displaySet();

	for (int i = 0; i < 2; i++)
	{
		s1.menu();
		s1.inputOperation();

		oper = s1.getOpetation();

		switch (oper)
		{
		case 'M':
			s1.membershipTest();
			break;
		case 'I':
			s1.findIntersection();
			break;
		case 'C':
			s1.findCardinality();
			break;
		case 'E':
			if (s1.checkEquality())
				cout << "Sets A and B are equal" << endl;
			else
				cout << "Sets A and B are not equal" << endl;
			break;
		case 'U':
			s1.findUnion();
			break;
		default:
			cout << "Exit" << endl;
		}
	}
	

	return 0;
}
