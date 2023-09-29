//CoffeeTastic Shop Management System
// Working as customer and employee
//Still Need some improvements in Products and sales class--->object creation

// **********Object Oriented Porgramming Final Project Lab********
//Submitted To: Ma'am Afsah Khan

//Name:	Muhammad Mazhar Rehan - L1F21BSSE0183
//Section :O4


#include "login_register.h"
#include "SalariedEmployee.h"

void input1();
void NewEmployee();
void input2();
void selectOrderType(Customer);
void selectPayment(long long int &cardNum, double &amt,int&);
void pushMenu();
void input3();


void input1()
{
	cout << ":::::::Welcome To CoffeeTastic::::::::" << endl;
	cout << "```````  Life is great Cafe!  ```````\n\n\n";
	int choice=0;
	for (int i = 0; choice != 1 || choice != 2; i++)
	{

		cout << "Press 1 to enter as Employee\n";
		cout << "Press 2 to enter as Customer\n";
		cout << "Press 3 to show CoffeeTastic Menu\n";
		cout << "Press 4 to Enter details for new Employee\n";
		cout << "Please Enter:";
		cin >> choice;
		if (choice >=1 &&choice<=4)
		{
			break;
		}
		else
		{
			cout << "\nWrong Input.Try Again!\n\n";
			
		}
		

	} 
	if (choice == 1)
	{
		input2();
		cout << "Allah is the Greatest\n";
	}
	else if (choice==2)
	{
		input3();
	}
	else if (choice==3)
	{
		pushMenu();
		cout << "Press 1 to order:";
		cin >> choice;
		if (choice == 1)
			input3();
		else
			system("CLS");
			cout << "\t\t\t\tThank You!\n\n\t\t\t  Hope to See you Again!\n";
			return;
	}
	else
	{
		NewEmployee();
	}
}
int main()
{

	
	input1();

	return 0;
}

void pushMenu()
{
	//Menu
	
	
	MyString I1Name("Cappuccino"),I1Desc("Medium");
	FoodItem I1(1,I1Name,475.64);
	Menu m1(1, &I1, I1Desc);
	

	MyString I2Name("Classsic Hot Chocolate"), I2Desc("Regular");
	FoodItem I2(2, I2Name, 550);
	Menu m2(2, &I2, I2Desc);

	MyString I4Name("White Hot Chocolate"), I4Desc("Regular");
	FoodItem I4(4, I4Name, 675);
	Menu m4(4, &I4, I4Desc);

	MyString I3Name("Molten Lava");
	MyString I3Desc("Chocolate Cake with dense moist center and vanilla ice cream");
	FoodItem I3(3, I3Name, 715);
	Menu m3(3, &I3, I1Desc);

	MyString I6Name("Iced Mocha"), I6Desc("Medium");
	FoodItem I6(6, I1Name, 575);
	Menu m6(6, &I6, I6Desc);

	MyString I5Name("Iced Coffee"), I5Desc("Large");
	FoodItem I5(5, I5Name, 425);
	Menu m5(5, &I5, I5Desc);


	MyString I14Name("Iced Latte"), I14Desc("Medium");
	FoodItem I14(14, I14Name, 575);
	Menu m14(14, &I14, I14Desc);


	MyString I7Name("Picco Latte"), I7Desc("Large");
	FoodItem I7(7, I7Name, 425);
	Menu m7(7, &I7, I7Desc);


	MyString I8Name("Macchiato"), I8Desc("Regular");
	FoodItem I8(8, I8Name, 450);
	Menu m8(8, &I8, I8Desc);


	MyString I9Name("Mocha Truffle Latte"), I9Desc("Small");
	FoodItem I9(9, I9Name, 670);
	Menu m9(9, &I9, I9Desc);


	MyString I10Name("Hazelnut Latte"), I10Desc("Medium");
	FoodItem I10(10, I1Name, 550);
	Menu m10(10, &I10, I10Desc);


	MyString I11Name("Green Tea"), I11Desc("Medium");
	FoodItem I11(11, I1Name, 450);
	Menu m11(11, &I11, I1Desc);


	MyString I12Name("Lemonades"), I12Desc("Serves 1");
	FoodItem I12(12, I12Name, 350);
	Menu m12(12, &I12, I12Desc);


	MyString I13Name("Mango Macadamia"), I13Desc("");
	FoodItem I13(13, I13Name, 475.64);
	Menu m13(13, &I13, I13Desc);


	system("CLS");
	cout << "\t----------------------------------------\n";
	cout << "\t\t*******CoffeeTastic*********\n";
	cout << "\t\t   Life is a great Cafe!" << endl;
	cout << "\t----------------------------------------\n";
	cout << "\t\t---------->Menu<----------\n";
	m1.display();
	m2.display();
	m3.display();
	m4.display();
	


	

	//Resources for Menu: FoodPanda & Gloria Jeans
}

void input3()
{
	char name[100], phone[15];
	int id = rand() % 60, choice, ch, ch2;
	long long int cardNum = 0;
	double amt = 0.0f;
	cout << "\nWelcome! Dear Customer,\n"; cin.ignore();
	cout << "\tEnter your name:"; cin.getline(name, 100);
	cout << "\tEnter your Phone Number:"; cin.getline(phone, 12);
	cout << "\t\t-------------------------------------------\n";
	cout << "\t\t*****Press 1 key to open CoffeeTastic Menu******\n";
	cout << "\t\t-------------------------------------------\n";
	cout << "\t\t\tEnter your choice:";
	cin >> choice;
	if (choice == 1){

		pushMenu();
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
					  selectPayment(cardNum, amt, ch); if (ch == 0){ return; }
					  MyString CName(name), CPhone(phone);
					  Payment p(id, cardNum, amt);
					  Customer c(id, CName, CPhone, p);
					  selectOrderType(c);
					  c.displayCustomer(); break;
			}

			case 2:
			{
					  selectPayment(cardNum, amt, ch); if (ch == 0){ return; }
					  MyString CName(name), CPhone(phone);
					  Payment p(id, cardNum, amt);
					  Customer c(id, CName, CPhone, p);
					  selectOrderType(c);
					  c.displayCustomer(); break;
			}

			case 3:
			{

					  selectPayment(cardNum, amt, ch); if (ch == 0){ return; }
					  MyString CName(name), CPhone(phone);
					  Payment p(id, cardNum, amt);
					  Customer c(id, CName, CPhone, p);

					  selectOrderType(c);
					  c.displayCustomer();
					  break;
			}

			case 4:
			{
					  selectPayment(cardNum, amt, ch); if (ch == 0){ return; }
					  MyString CName(name), CPhone(phone);
					  Payment p(id, cardNum, amt);
					  Customer c(id, CName, CPhone, p);

					  selectOrderType(c);
					  c.displayCustomer();
					  break;
			}

			case 5:
			{
					  selectPayment(cardNum, amt, ch); if (ch == 0){ return; }
					  MyString CName(name), CPhone(phone);
					  Payment p(id, cardNum, amt);
					  Customer c(id, CName, CPhone, p);

					  selectOrderType(c);
					  c.displayCustomer();
					  break;
			}

			case 6:
			{
					  selectPayment(cardNum, amt, ch); if (ch == 0){ return; }
					  MyString CName(name), CPhone(phone);
					  Payment p(id, cardNum, amt);
					  Customer c(id, CName, CPhone, p);
					  selectOrderType(c);
					  system("CLS");
					  cout << "---------->Bill Info<-----------\n";
					  c.displayCustomer();
					  break;
			}
			default:
			{
					   system("CLS");
					   cout << "Not Exist in Menu!\n";
					   cout << "Thank You!\n";
					   return;
			}
		}
	}

	else{ cout << "Entered Wrong Input!!\nThank You!\n"; }

}
void selectOrderType(Customer c)
{
	int quantity = 0;
	int ch;
	cout << "Item Selected\n";
	cout << "Press 1 for TakeAway\n";
	cout << "Press 2 for DineIn\n";
	cout << "Press 3 for Delivery\n";
	cout << "Enter Order Type:";
	cin >> ch;
	if (ch == 1)
	{
		int time;
		int o_id;
		
		char phone2[18];
		cout << "\t\t___________________________\n";
		cout << "\t\t Enter TakeAway Details\n";
		cout << "\t\t___________________________\n";
		cout << "\t\tEnter arriving minutes at shop: ";
		cin >> time;
		cin.ignore();
		cout << "\t\tEnter your active Phone Number:"; cin.getline(phone2, 18);
		cout << "\t\tEnter Quantity of Prodcut:"; cin >> quantity;
		if (time > 85)
		{
			cout << "Cannot Process Order more than 60 minutes\n";
			cout << "Thank You!\n";
			return ;
		}
		cout << "\nSaved Successfully\n";
		system("CLS");
		
		cout << "|||||||Order Placed!||||||\n";
		cout << "\n\n\nDisplaying Order...\n";
		MyString acPhone(phone2);
		TakeAway t(time, acPhone, 12, c, quantity);
		system("CLS");
		t.displayOrder();
	}
	else if (ch == 3)
	{
		char arr[100], phone2[18];
		cin.ignore();
		cout << "\t\t___________________________\n";
		cout << "\t\t Enter Delivery Details\n";
		cout << "\t\t___________________________\n";
		cout << "\t\tEnter your address: "; cin.getline(arr, 100);
		cout << "\t\tEnter your active Phone Number:"; cin.getline(phone2, 18);
		cout << "\t\tEnter Quantity of Prodcut:"; cin >> quantity;
		cout << "|||||||Order Placed!||||||\n";
		cout << "\n\n\nDisplaying Order...\n";
		MyString acPhone(phone2);
		Delivery d(acPhone, arr, 12, c, quantity);
		system("CLS");
		d.displayOrder();
	}

	else if (ch == 2)
	{
		int tableNo=rand()%25; 
		int seats;
		cin.ignore();
		cout << "\t\t______________________\n";
		cout << "\t\t Enter DineIn Details\n";
		cout << "\t\t______________________\n";
		cout << "Enter total Persons:"; cin >> seats;
		system("CLS");
		cout << "|||||||Order Placed!||||||\n";
		cout << "\n\n\nDisplaying Order...\n";
		Table t1(tableNo, seats, 12, 2, c);
		
		
		t1.displayOrder();
	}
}

void input2()
{
	int ID,ch=0;
	system("CLS");

	cout << "\t\t_______________________________________________\n";
	cout << "\t\t\tWelcome to CoffeeTastic Employees\n";
	cout << "\t\t_______________________________________________\n";
	cout << "Press Any Key:";
	cin >> ch;

	if (ch == 1)
	{
		mainmenu();
	}




}
void selectPayment(long long int &cardNum, double &amt, int &ch)
{
	system("CLS");
	cout << "\t\t*****Transaction Menu*****\n";
	cout << "\t----> Press 1 to Proceed for Payment\n";
	cout << "\t----> Press 0 to cnacel Order\n";
	cout << "Enter your choice:";
	cin >> ch;
	if (ch == 0){
		cout << "\t\t\t\tThank You!\n\n\t\t\t  Hope to See you Again!\n";
		return;
	}
	else if (ch == 1)
	{
		cout << "*************Welcome to Payment Menu*************\n";
		cout << "\t\tEnter your 16-digit Card Number:";
		cin >> cardNum;
		cout << "\t\tEnter Amount:";
		cin >> amt;
	}
	else
	{
		cout << "Wrong Input\n";
		input1();
	}
}

void NewEmployee()
{
	//using emplyee and chil classes 
	//and  creating objects
	int id,hireDay,hireMonth,hireYear,ch;
	char EmpName[100], EmpPhone[18];
	id = rand() % 50;
	cin.ignore();
	cout << "Enter your name:";
	cin.getline(EmpName,100);
	cout << "Enter your Phone Number:";
	cin.getline(EmpPhone, 18);
	cout << "Enter your Hire Date:\n";
	cout << "\tDay:"; cin >> hireDay;
	cout << "\tMonth:"; cin >> hireMonth;
	cout << "\tYear:"; cin >> hireYear;
	cout << endl << endl;
	cout << "\t Press 1 for Chef\n";
	cout << "\t Press 2 for Waiter\n";
	cout << "Enter:";
	cin >> ch;
	Date d(hireDay, hireMonth, hireYear);
	if (ch == 1)
	{
		char speciality[100];
		float salary;
		cin.ignore();
		cout << "\nEnter your Speciality:";
		cin.getline(speciality, 100);
		cout << "Enter Salary:";
		cin >> salary;
		Chef c(salary,speciality,id,EmpName,EmpPhone,d);
		c.displayChef();
		
	}
	else if (ch == 2)
	{
		int ch2;
		cout << "Press 1 for Hourly Employee\n";
		cout << "Press 2 for Salaried Employee\n";
		cout << "Enter: ";
		cin >> ch2;
		if (ch2 == 1)
		{
			int hours;
			cout << "Enter number of Working Hours:";
			cin >> hours;
			HourlyEmployee h(hours, 0, id, EmpName, EmpPhone, d);
			h.display();
			
		}
		else if (ch2 == 2)
		{
			float salary;
			cout << "Enter Salary:";
			cin >> salary;
			SalariedEmployee s(salary, 0, id, EmpName, EmpPhone, d);
			cout << "Data Processing...\n";
			s.display();
		}
	}
	
	cout << "\n\tSaved!\n";


}
