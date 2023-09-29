// Task3:

#include<iostream>
#include<string>
using namespace std;


class ATM
{
	string id, address, city, country;
public:
	ATM()
	{
		id = address = city = country = "";
	}
	ATM(string id, string add, string city, string coun)
	{
		this->id = id;
		address = add;
		this->city = city;
		country = coun;
	}
	string getId()
	{
		return id;
	}
	string getAddress()
	{
		return address;
	}
	string getCity()
	{
		return city;
	}
	string getCountry()
	{
		return country;
	}
	void setATM()
	{
		cout << "Enter ATM Id: ";
		getline(cin, id);
		cout << "Enter ATM Address: ";
		getline(cin, address);
		cout << "Enter ATM City: ";
		getline(cin, city);
		cout << "Enter ATM Country: ";
		getline(cin, country);
	}
	void display()
	{
		cout << "ATM::\n Id: " << id << "\tAddress: " << address << "\tCity: " << city << "\tCountry: " << country << endl;
	}


};

class Bank
{
	string b_type, b_name;
	ATM atmObj; // bank has atm
public:
	Bank()
	{
		b_type = "";
		b_name = "";
	}
	Bank(string tp, string name)
	{
		b_type = tp;
		b_name = name;
	}

	string getName()
	{
		return b_name;
	}
	string getType()
	{
		return b_type;
	}
	void setBank()
	{
		cout << "Enter Bank Type: ";
		getline(cin, b_type);
		cout << "Enter Bank Name: ";
		getline(cin, b_name);
		atmObj.setATM();
	}

	void display()
	{
		cout << "Bank::\n Name: " << b_name << "\tType: " << b_type << endl;
		atmObj.display();
	}

};


int main()
{
	Bank b;
	
	b.setBank();
	b.display();

	return 0;
}
