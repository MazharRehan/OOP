#include<iostream>
#include<string.h>
using namespace std;

class address
{
    public:
        string city, state, locality;
        address()
        {
        	city = "";
        	state = "";
        	locality = "";
		}
        address(string city_c, string state_c, string locality_c)
        {  
			city =  city_c; 
			state = state_c; 
			locality = locality_c; 
		}
};

class student
{
   	address* adrs;
    	
    public:
        int id; 
        string name;
        student()
        {
        	id = 0;
        	name = "";
        	adrs = NULL;
		}
        student( int i, string nm, address* ad)
        { 
			id = i; 
			name = nm; 
			adrs = ad; 
		}
        void display()
        { 
			cout << id << "  " << name << "  " << adrs->locality << "  " << adrs->city << "  " << adrs->state;
		}
};
int main()
{  
    address a1 = address("F BLOCK","LAHORE","PAKISTAN");    
    student s1 = student(101,"ALI", &a1);    
    
    			// OR
    //address a1("F BLOCK","LAHORE","PAKISTAN");    
    //student s1(101,"ALI", &a1);  
    
    s1.display();    
            
    return 0;
}
