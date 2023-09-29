#include <iostream>
using namespace std;

class Address
{
    public:
        string AddressLine, City, State;
        
        Address (string addressLine, string city, string state)
        {
            this->AddressLine = addressLine;
            this->City = city;
            this->State = state;
        }
};
class Employee
{
    private:
        Address* add; //Employee HAS-A Address  
		int Id;
        string Name; 
        
    public:
    	Employee()
    	{
    		add = NULL;
    		Id = 0;
    		Name = "";
		}
        Employee (int id, string name, Address* a)
        {
            this->Id = id;
            this->Name = name;
            this->add = a;
        }
        ~Employee(){	}
        
        void Display()
        {
            cout << Id << " " << Name << " " << add->AddressLine << " " << add->City << " " << add->State << endl;
        }
};

int main ()
{
    Address address = Address("F block Model Town", "Lahore", "Punjab");
    Employee employee = Employee(1011, "Ahmad", &address);
    employee.Display();
    
    return 0;
}
