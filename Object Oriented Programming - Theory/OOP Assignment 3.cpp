/*
						OOP Assignment 3:

		SYED MANSOOR ALI		-	 L1F20BSSE0527
		MUHAMMAD MAZHAR REHAN	-	 L1F21BSSE0183

*/



#include<iostream>
#include<string>
using namespace std;



static int count_employees = 1;

static char check_emp = NULL;

class EMPLOYEE  // ABSTRACT CLASS
{
public:
	string emp_name;
	string emp_gender;
	string emp_id;

	int emp_salary;
	int emp_age;
	int emp_specification_input;
	int emp_dept;
	int emp_selled_projects;

	virtual void set_employee() = 0;                             // sets data by taking input
	virtual void print_employee_data() = 0;
	virtual void employee_salary_calculation() = 0;
};


class SALARY_EMP : public EMPLOYEE
{
public:
	SALARY_EMP()
	{
		emp_id = "";
		emp_name = "";
		emp_salary = 0;
		emp_age = 0;
		emp_dept = 0;
		emp_selled_projects = 0;
		emp_specification_input = 0;
	}

	void set_employee()
	{
		cout << endl << endl << " ------ SALARIED EMPLOYEES ARE WARMLY WELCOMED ------  " << endl << endl;
		cout << endl << endl << " ENTER THE DETAILS BELOW :- " << endl << endl;
		cout << " ENTER YOUR EMPLOYEE ID : ";
		cin.ignore();
		getline(cin, emp_id);

		cout << " ENTER YOUR NAME : ";
		//cin.ignore();
		getline(cin, emp_name);

		cout << " ENTER YOUR AGE : ";
		cin.ignore();
		cin >> emp_age;

		cout << " ENTER FEMALE/female OR  MALE/male " << endl;
		cout << " ENTER GENDER =  ";
		cin.ignore();
		getline(cin, emp_gender);


		if (emp_gender != "FEMALE" && emp_gender != "female" && emp_gender != "MALE" && emp_gender != "male")
		{
			while (emp_gender != "FEMALE" && emp_gender != "female" && emp_gender != "MALE" && emp_gender != "male")
			{
				cout << " INVALID INPUT " << endl;
				cout << " RE - ENTER YOUR GENDER TYPE : ";
				cin.ignore();
				getline(cin, emp_gender);

				if (emp_gender != "FEMALE" || emp_gender != "female" || emp_gender != "MALE" || emp_gender != "male")
				{
					break;
				}
			}
		}

		cout << endl << endl << " ***** DEPARTMENT SELECTION --------" << endl << endl;
		cout << "  1 TO SELECT [ DESIGN DEPARTMENT ] " << endl;
		cout << "  2 TO SELECT [ DEVELOPMENT DEPARTMENT ] " << endl;
		cout << "  3 TO SELECT [ TESTING DEPARTMENT ] " << endl;
		cout << "  4 TO SELECT [ MAINTENANCE DEPARTMENT ] " << endl;

		cout << " ENTER YOUR DEPARTMENT OPTION =   ";
		cin >> emp_dept;

		while (emp_dept != 1 && emp_dept != 2 && emp_dept != 3 && emp_dept != 4)
		{
			cout << " INCORRECT DEPARTMENT OPTION SELECTED  " << endl;
			cout << " ENTER AGAIN =  ";
			cin >> emp_dept;
		}

		if (emp_dept == 1 || emp_dept == 2 || emp_dept == 3 || emp_dept == 4)
		{
			cout << endl << endl << " KINDLY " << emp_name << " *** SELECT YOUR SPECIFICATION TYPE *** " << endl << endl;
			cout << " 0 TO SELECT BEGINNER ( 1ST / 2ND MONTH ) " << endl;
			cout << " 1 TO SELECT INTERNEE ( 2 - 4 MONTHS ) EXPERIENCE " << endl;
			cout << " 2 TO SELECT FRESHER  ( 5 MONTHS -  1 YEAR ) EXPERIENCE " << endl;
			cout << " 3 TO SELECT AMATEUR EMPLOYEE  ( 1  - 2 YEARS ) EXPERIENCE " << endl;
			cout << " 4 TO SELECT PROFESSIONAL EMPLOYEE  ( 2 YEARS + ) EXPERIENCE " << endl << endl;

			cout << " CHOOSE YOUR OPTION : ";
			cin >> emp_specification_input;

			while (emp_specification_input != 0 && emp_specification_input != 1 && emp_specification_input != 2 && emp_specification_input != 3 && emp_specification_input != 4)
			{
				cout << " INVALID OPTION SELECTED " << endl;
				cout << " RE - ENTER SPECIFICATION TYPE OPTION :  ";
				cin >> emp_specification_input;
			}
		}
	}

	void employee_salary_calculation()
	{
		if (emp_dept == 1)
		{
			if (emp_specification_input == 0)
				emp_salary = 25000;

			else if (emp_specification_input == 1)
				emp_salary = 35000;

			else if (emp_specification_input == 2)
				emp_salary = 45000;

			else if (emp_specification_input == 3)
				emp_salary = 65000;

			else if (emp_specification_input == 4)
				emp_salary = 85000;
		}

		else if (emp_dept == 2)
		{
			if (emp_specification_input == 0)
				emp_salary = 35000;

			else if (emp_specification_input == 1)
				emp_salary = 45000;

			else if (emp_specification_input == 2)
				emp_salary = 55000;

			else if (emp_specification_input == 3)
				emp_salary = 65000;

			else if (emp_specification_input == 4)
				emp_salary = 95000;
		}

		else if (emp_dept == 3)
		{
			if (emp_specification_input == 0)
				emp_salary = 35000;

			else if (emp_dept == 3 && emp_specification_input == 1)
				emp_salary = 45000;

			else if (emp_dept == 3 && emp_specification_input == 2)
				emp_salary = 55000;

			else if (emp_dept == 3 && emp_specification_input == 3)
				emp_salary = 65000;

			else if (emp_dept == 3 && emp_specification_input == 4)
				emp_salary = 95000;

		}

		else if (emp_dept == 4)
		{
			if (emp_specification_input == 0)
				emp_salary = 15000;

			else if (emp_specification_input == 1)
				emp_salary = 25000;

			else if (emp_specification_input == 2)
				emp_salary = 35000;

			else if (emp_specification_input == 3)
				emp_salary = 45000;

			else if (emp_specification_input == 4)
				emp_salary = 65000;
		}
		cout << " FIXED MONTHLY SALARY  : " << emp_salary << " RUPEES " << endl;
	}

	void print_employee_data()
	{
		cout << endl << endl << " REPORT GENERATED SALARIED EMPLOYEE  = " << emp_name << " ARE BELOW." << endl << endl;
		cout << " EMPLOYEE ID : " << emp_id << endl;
		cout << " EMPLOYEE NAME : " << emp_name << endl;

		if (emp_gender == "MALE" || emp_gender == "male")
			cout << " GENDER OF THE EMPLOYEE IS : MALE " << endl;
		
		if (emp_gender == "FEMALE" || emp_gender == "female")
			cout << " GENDER OF THE EMPLOYEE IS : FEMALE " << endl;
		
		cout << " EMPLOYEE AGE : " << emp_age << endl;
		if (emp_dept == 1)
			cout << " EMPLOYEE DEPARTMENT : [ DESIGN DEPARTMENT ] " << endl;
		
		if (emp_dept == 2)
			cout << " EMPLOYEE DEPARTMENT : [ DEVELOPMENT DEPARTMENT ] " << endl;
		
		if (emp_dept == 3)
			cout << " EMPLOYEE DEPARTMENT : [ TESTING DEPARTMENT ] " << endl;
		
		if (emp_dept == 4)
			cout << " EMPLOYEE DEPARTMENT : [ MAINTENANCE DEPARTMENT ] " << endl;
		
		if (emp_specification_input == 0)
			cout << " EMPLOYEE SPECIFICATION : BEGINNER " << endl;

		if (emp_specification_input == 1)
			cout << " EMPLOYEE SPECIFICATION : INTERNEE " << endl;

		if (emp_specification_input == 2)
			cout << " EMPLOYEE SPECIFICATION : FRESHER " << endl;

		if (emp_specification_input == 3)
			cout << " EMPLOYEE SPECIFICATION : AMATEUR " << endl;

		if (emp_specification_input == 4)
			cout << " EMPLOYEE SPECIFICATION : PROFESSIONAL " << endl;
	}
};

class HOURLY_EMP : public EMPLOYEE
{
	int emp_working_hours;
	int emp_work_type;

public:
	HOURLY_EMP()
	{
		emp_id = "";
		emp_name = "";
		emp_gender = "";

		emp_salary = 0;
		emp_age = 0;
		emp_working_hours = 0;
		emp_dept = 0;
		emp_selled_projects = 0;
		emp_specification_input = 0;
		emp_work_type = 0;
	}

	void set_employee()
	{
		cout << endl << endl << " ------ HOURLY EMPLOYEES ARE WARMLY WELCOMED ------  " << endl << endl;
		cout << endl << endl << " ENTER THE DETAILS BELOW :- " << endl << endl;
		cout << " ENTER YOUR EMPLOYEE ID : ";
		cin.ignore();
		getline(cin, emp_id);

		cout << " ENTER YOUR NAME : ";
		//cin.ignore();
		getline(cin, emp_name);

		cout << " ENTER YOUR AGE : ";
		cin.ignore();
		cin >> emp_age;

		cout << " ENTER FEMALE/female OR  MALE/male " << endl;
		cout << " ENTER GENDER =  ";
		cin.ignore();
		getline(cin, emp_gender);

		if (emp_gender != "FEMALE" && emp_gender != "female" && emp_gender != "MALE" && emp_gender != "male")
		{
			while (emp_gender != "FEMALE" && emp_gender != "female" && emp_gender != "MALE" && emp_gender != "male")
			{
				cout << " INVALID INPUT " << endl;
				cout << " RE - ENTER YOUR GENDER TYPE : ";
				cin.ignore();
				getline(cin, emp_gender);

				if (emp_gender != "FEMALE" || emp_gender != "female" || emp_gender != "MALE" || emp_gender != "male")
					break;
			}
		}

		cout << endl << endl << " ***** DEPARTMENT SELECTION --------" << endl << endl;
		cout << "  1 TO SELECT [ DESIGN DEPARTMENT ] " << endl;
		cout << "  2 TO SELECT [ DEVELOPMENT DEPARTMENT ] " << endl;
		cout << "  3 TO SELECT [ TESTING DEPARTMENT ] " << endl;
		cout << "  4 TO SELECT [ MAINTENANCE DEPARTMENT ] " << endl;
		cout << " ENTER YOUR DEPARTMENT OPTION =   ";
		cin >> emp_dept;

		while (emp_dept != 1 && emp_dept != 2 && emp_dept != 3 && emp_dept != 4)
		{
			cout << " INCORRECT DEPARTMENT OPTION SELECTED  " << endl;
			cout << " ENTER AGAIN =  ";
			cin >> emp_dept;
		}

		if (emp_dept == 1 || emp_dept == 2 || emp_dept == 3 || emp_dept == 4)
		{
			cout << endl << endl << " KINDLY " << emp_name << " *** SELECT YOUR SPECIFICATION TYPE *** " << endl << endl;
			cout << " 0 TO SELECT BEGINNER ( 1ST / 2ND MONTH ) " << endl;
			cout << " 1 TO SELECT INTERNEE ( 2 - 4 MONTHS ) EXPERIENCE " << endl;
			cout << " 2 TO SELECT FRESHER  ( 5 MONTHS -  1 YEAR ) EXPERIENCE " << endl;
			cout << " 3 TO SELECT AMATEUR EMPLOYEE  ( 1  - 2 YEARS ) EXPERIENCE " << endl;
			cout << " 4 TO SELECT PROFESSIONAL EMPLOYEE  ( 2 YEARS + ) EXPERIENCE " << endl << endl;
			cout << " CHOOSE YOUR OPTION : ";
			cin >> emp_specification_input;

			while (emp_specification_input != 0 && emp_specification_input != 1 && emp_specification_input != 2 && emp_specification_input != 3 && emp_specification_input != 4)
			{
				cout << " INVALID OPTION SELECTED " << endl;
				cout << " RE - ENTER SPECIFICATION TYPE OPTION :  ";
				cin >> emp_specification_input;
			}
		}
	}

	void employee_salary_calculation()
	{
		cout << "HOW MANY HOURS YOU WORK A DAY : ";
		cin >> emp_working_hours;

		while (emp_working_hours > 12 || emp_working_hours < 6)
		{
			cout << " NOT POSSIBLE " << endl;
			cout << " RE - ENTER YOUR PER DAY WORKING HOURS  : ";
			cin >> emp_working_hours;
		}

		cout << endl << endl << " ***** CHOOSE YOUR WORK TYPE FROM GIVEN OPTIONS *****" << endl << endl;
		cout << " 1)   [ PART - TIME ] ( 6 / 8 hours ) " << endl;
		cout << " 2)   [ FULL - TIME ] ( 10 hours ) " << endl;
		cout << " 3)   [ OVER - TIME ] ( 12 hours ) " << endl << endl;
		cout << " ENTER YOUR OPTION :  ";
		cin >> emp_work_type;

		while (emp_work_type != 1 && emp_work_type != 2 && emp_work_type != 3)
		{
			cout << " INVALID OPTION ENTERED ! " << endl << endl;
			cout << " RE - ENTER WORK TYPE OPTION : ";
			cin >> emp_work_type;
		}

		if (emp_specification_input == 0)
		{
			cout << " EMPLOYEE TYPE IS BEGINNER  AND LEARNER " << endl;
			cout << " BASIC STIPEND = 5000 " << endl;
		}

		if (emp_dept == 1 && emp_specification_input > 0 && emp_specification_input <= 2)
		{
			if (emp_work_type == 1)
			{
				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;
				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;
				emp_salary = emp_working_hours * 5 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;
				emp_salary = emp_working_hours * 15 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;
			}

			if (emp_work_type == 2)
			{
				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;
				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;
				emp_salary = emp_working_hours * 5 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;
				emp_salary = emp_working_hours * 15 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;
			}


			if (emp_work_type == 3)
			{
				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;
				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;
				emp_salary = emp_working_hours * 5 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 4 * 100;
				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;
			}
		}

		if (emp_dept == 1 && emp_specification_input > 2 && emp_specification_input <= 4)
		{
			if (emp_work_type == 1)
			{
				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;

				emp_salary = emp_working_hours * 1 * 4 * 100;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;
				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;
				emp_salary = emp_working_hours * 15 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;
			}

			if (emp_work_type == 2)
			{
				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;
				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;
				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;
				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;
			}

			if (emp_work_type == 3)
			{
				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;
				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 6 * 100;
				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 6 * 100;
				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 6 * 100;
				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;
			}
		}


		/////////////////////////////   for dep 2

		if (emp_dept == 2 && emp_specification_input > 0 && emp_specification_input <= 2)
		{
			if (emp_work_type == 1)
			{
				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;
				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 3 * 100;
				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 2)
			{


				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 4 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 3)
			{


				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}



		}




		/////////////////////////

		if (emp_dept == 2 && emp_specification_input > 2 && emp_specification_input <= 4)

		{

			if (emp_work_type == 1)
			{


				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 2)
			{


				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 3)
			{


				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}



		}


		/////////////////////////////   for dep 3



		if (emp_dept == 3 && emp_specification_input > 0 && emp_specification_input <= 2)

		{

			if (emp_work_type == 1)
			{


				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 2)
			{


				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 3)
			{


				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}



		}




		/////////////////////////

		if (emp_dept == 3 && emp_specification_input > 2 && emp_specification_input <= 4)

		{

			if (emp_work_type == 1)
			{


				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 2)
			{


				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 3)
			{


				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}



		}




		//////////////// for dept 4



		if (emp_dept == 4 && emp_specification_input > 0 && emp_specification_input <= 2)

		{

			if (emp_work_type == 1)
			{


				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 2 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 2)
			{


				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 3 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 3)
			{


				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}



		}




		/////////////////////////

		if (emp_dept == 4 && emp_specification_input > 2 && emp_specification_input <= 4)

		{

			if (emp_work_type == 1)
			{


				cout << " EMPLOYEE WORK TYPE : [ PART TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 5 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 2)
			{


				cout << " EMPLOYEE WORK TYPE : [ FULL - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 6 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}


			if (emp_work_type == 3)
			{


				cout << " EMPLOYEE WORK TYPE : [ OVER - TIME ] " << endl;

				cout << " EMPLOYEE WORKING HOURS : " << emp_working_hours << endl;

				emp_salary = emp_working_hours * 1 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A DAY : " << emp_salary << " HUNDRED RUPEES" << endl;

				emp_salary = emp_working_hours * 5 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A WEEK : " << emp_salary << " THOUSAND RUPEES" << endl;

				emp_salary = emp_working_hours * 15 * 7 * 100;

				cout << " EMPLOYEE HOURLY SALARY OF A MONTH : " << emp_salary << "  RUPEES " << endl;

			}



		}







	}



	void print_employee_data()

	{

		cout << endl << endl << " REPORT GENERATED OF HOURLY EMPLOYEE  = " << emp_name << " ARE BELOW." << endl << endl;

		cout << " EMPLOYEE ID : " << emp_id << endl;

		cout << " EMPLOYEE NAME : " << emp_name << endl;



		if (emp_gender == "MALE" || emp_gender == "male")
		{
			cout << " GENDER OF THE EMPLOYEE IS : MALE " << endl;

		}

		if (emp_gender == "FEMALE" || emp_gender == "female")
		{
			cout << " GENDER OF THE EMPLOYEE IS : FEMALE " << endl;

		}


		cout << " EMPLOYEE AGE : " << emp_age << endl;

		if (emp_dept == 1)
		{

			cout << " EMPLOYEE DEPARTMENT : [ DESIGN DEPARTMENT ] " << endl;

		}


		if (emp_dept == 2)
		{

			cout << " EMPLOYEE DEPARTMENT : [ DEVELOPMENT DEPARTMENT ] " << endl;

		}

		if (emp_dept == 3)
		{

			cout << " EMPLOYEE DEPARTMENT : [ TESTING DEPARTMENT ] " << endl;

		}

		if (emp_dept == 4)
		{

			cout << " EMPLOYEE DEPARTMENT : [ MAINTENANCE DEPARTMENT ] " << endl;

		}


		if (emp_specification_input == 0)
		{

			cout << " EMPLOYEE SPECIFICATION : BEGINNER " << endl;

		}


		if (emp_specification_input == 1)
		{

			cout << " EMPLOYEE SPECIFICATION : INTERNEE " << endl;

		}


		if (emp_specification_input == 2)
		{

			cout << " EMPLOYEE SPECIFICATION : FRESHER " << endl;

		}

		if (emp_specification_input == 3)
		{

			cout << " EMPLOYEE SPECIFICATION : AMATEUR " << endl;

		}

		if (emp_specification_input == 4)
		{

			cout << " EMPLOYEE SPECIFICATION : PROFESSIONAL " << endl;

		}













	}


};


class COMISSIONED_EMP : public EMPLOYEE
{
	int business_proj;
	int educational_proj;
	int personalized_proj;
	int numofsales;
	int emp_comission;

public:


	COMISSIONED_EMP()
	{

		emp_id = "";
		emp_name = "";
		emp_gender = "";

		emp_salary = 0;
		emp_age = 0;

		emp_dept = 0;
		emp_selled_projects = 0;

		emp_specification_input = 0;



		business_proj = 11000;
		educational_proj = 9000;
		personalized_proj = 15000;
		emp_comission = 0;
	}


	void set_employee()
	{


		cout << endl << endl << " ------ COMISSIONED EMPLOYEES ARE WARMLY WELCOMED ------  " << endl << endl;

		cout << endl << endl << " ENTER THE DETAILS BELOW :- " << endl << endl;


		cout << " ENTER YOUR EMPLOYEE ID : ";

		cin.ignore();


		getline(cin, emp_id);


		cout << " ENTER YOUR NAME : ";

		//cin.ignore();


		getline(cin, emp_name);


		cout << " ENTER YOUR AGE : ";
		cin.ignore();
		cin >> emp_age;

		cout << " ENTER FEMALE/female OR  MALE/male " << endl;

		cout << " ENTER GENDER =  ";

		cin.ignore();

		getline(cin, emp_gender);




		if (emp_gender != "FEMALE" && emp_gender != "female" && emp_gender != "MALE" && emp_gender != "male")
		{

			while (emp_gender != "FEMALE" && emp_gender != "female" && emp_gender != "MALE" && emp_gender != "male")
			{



				cout << " INVALID INPUT " << endl;


				cout << " RE - ENTER YOUR GENDER TYPE : ";

				cin.ignore();


				getline(cin, emp_gender);


				if (emp_gender != "FEMALE" || emp_gender != "female" || emp_gender != "MALE" || emp_gender != "male")
				{
					break;
				}

			}
		}

		cout << endl << endl << " ***** SALES DEPARTMENT SELECTION --------" << endl << endl;
		cout << " SELECT TYPE OF PROJECT YOU SALED " << endl;

		cout << "  1 TO SELECT [ BUSINESS BASE PROJECT ] " << endl;
		cout << "  2 TO SELECT [ EDUCATION BASE PROJECT ] " << endl;
		cout << "  3 TO SELECT [ PERSONALIZED PROJECT ] " << endl;


		cout << " ENTER YOUR OPTION =   ";
		cin >> emp_dept;


		while (emp_dept != 1 && emp_dept != 2 && emp_dept != 3)
		{
			cout << " INCORRECT DEPARTMENT OPTION SELECTED  " << endl;

			cout << " ENTER AGAIN =  ";

			cin >> emp_dept;

		}

		if (emp_dept == 1 || emp_dept == 2 || emp_dept == 3)
		{

			cout << endl << endl << " *** NUMBER OF SALES  OF *** " << emp_name << " *** COMISSIONED EMPLOYEE " << endl << endl;

			cout << " KINDLY ENTER YOUR NUMBER OF SALES : ";

			cin >> numofsales;


			while (numofsales <= 0)
			{

				cout << " INVALID INPUT " << endl;

				cout << " ENTER YOUR SALES AGAIN : ";
				cin >> numofsales;
			}

		}

	}






	void employee_salary_calculation()

	{

		if (emp_dept == 1 && numofsales > 0)
		{

			emp_salary = numofsales * business_proj;


			cout << "  BUSINESS PROJECT SALED PRICE : " << emp_salary << endl;

			emp_comission = 40 * emp_salary / 100;

			emp_salary = emp_salary - emp_comission;

			cout << "  40 PERCENT COMISSIONED  EMPLOYEE SALARY : " << emp_comission << endl;

		}


		if (emp_dept == 2 && numofsales > 0)
		{

			emp_salary = numofsales * educational_proj;

			cout << "  EDUCATIONAL PROJECT SALED PRICE : " << emp_salary << endl;

			emp_comission = 30 * emp_salary / 100;

			emp_salary = emp_salary - emp_comission;

			cout << "  30 PERCENT COMISSIONED  EMPLOYEE SALARY : " << emp_comission << endl;


		}

		if (emp_dept == 3 && numofsales > 0)
		{

			emp_salary = numofsales * personalized_proj;

			cout << " PERSONALIZED PROJECT SALED PRICE : " << emp_salary << endl;

			emp_comission = 45 * emp_salary / 100;

			//emp_salary = emp_salary - emp_comission;

			cout << "  45 PERCENT COMISSIONED  EMPLOYEE SALARY : " << emp_comission << endl;

		}



	}




	void print_employee_data()

	{


		cout << endl << endl << " REPORT GENERATED COMISSIONED EMPLOYEE  = " << emp_name << " ARE BELOW." << endl << endl;

		cout << " EMPLOYEE ID : " << emp_id << endl;

		cout << " EMPLOYEE NAME : " << emp_name << endl;



		if (emp_gender == "MALE" || emp_gender == "male")
		{
			cout << " GENDER OF THE EMPLOYEE IS : MALE " << endl;

		}

		if (emp_gender == "FEMALE" || emp_gender == "female")
		{
			cout << " GENDER OF THE EMPLOYEE IS : FEMALE " << endl;

		}


		cout << " EMPLOYEE AGE : " << emp_age << endl;

		if (emp_dept == 1)
		{


			cout << " EMPLOYEE PROJECT SALES DEPARTMENT : [ BUSINESS BASE PROJECT ] " << endl;
			cout << " NUMBER OF BUSINESS PERSONALIZED PROJECTS SALED : " << numofsales << endl;

		}


		if (emp_dept == 2)
		{

			cout << " EMPLOYEE PROJECT SALES DEPARTMENT : [ EDUCATION BASE PROJECT ] " << endl;
			cout << " NUMBER OF EDUCATION PROJECTS SALED : " << numofsales << endl;

		}

		if (emp_dept == 3)
		{

			cout << " EMPLOYEE PROJECT SALES DEPARTMENT : [ PERSONALIZED PROJECT ] " << endl;
			cout << " NUMBER OF PERSONALIZED PROJECTS SALED : " << numofsales << endl;

		}









	}


};




int main()
{

	cout << endl << " **************  [ ALL ABOUT EMPLOYEES$ ] PAYMENT ROLL APPLICATION  **************  " << endl << endl;


	while (check_emp != 'E' || check_emp != 'e')

	{

		cout << endl << endl << " SELECT YOUR EMPLOYEE TYPE " << endl;

		cout << "  S/s FOR SALARIED EMPLOYEE " << endl;
		cout << "  H/h FOR HOURLY EMPLOYEE " << endl;
		cout << "  C/c FOR COMISSIONED EMPLOYEE " << endl;
		cout << "  E/e FOR EXIT APPLICATION" << endl;

		cin.ignore();

		cout << " ENTER YOUR OPTION : ";




		cin.get(check_emp);






		if (check_emp != 'E' && check_emp != 'e' && check_emp != 's' && check_emp != 'S' && check_emp != 'H' && check_emp != 'h' && check_emp != 'c' && check_emp != 'C')
		{

			do
			{

				//cin.ignore();

				cout << "** INVALID INPUT ** " << endl;

				cout << " RE - ENTER YOUR OPTION : ";


				cin.get(check_emp);

				cin.ignore();


			} while (check_emp != 'E' && check_emp != 'e' && check_emp != 's' && check_emp != 'S' && check_emp != 'H' && check_emp != 'h' && check_emp != 'c' && check_emp != 'C');

		}
		else if (check_emp == 'S' || check_emp == 's')
		{

			class EMPLOYEE* ptr[1];

			class SALARY_EMP s;

			ptr[0] = &s;


			ptr[0]->set_employee();
			cout << " EMPLOYEE NUMBER : " << count_employees << endl;
			ptr[0]->print_employee_data();

			ptr[0]->employee_salary_calculation();

			count_employees = count_employees + 1;
			ptr[0] = NULL;
			//delete p[1];
		}

		else if (check_emp == 'H' || check_emp == 'h')
		{
			class EMPLOYEE* pt[1];

			class HOURLY_EMP h;

			pt[0] = &h;


			pt[0]->set_employee();

			cout << " EMPLOYEE NUMBER : " << count_employees << endl;
			pt[0]->print_employee_data();

			pt[0]->employee_salary_calculation();

			count_employees = count_employees + 1;

			pt[0] = NULL;
			//delete p[1];

		}


		else if (check_emp == 'C' || check_emp == 'c')
		{


			class EMPLOYEE* p[1];

			class COMISSIONED_EMP C;

			p[0] = &C;


			p[0]->set_employee();
			cout << " EMPLOYEE NUMBER : " << count_employees << endl;
			p[0]->print_employee_data();

			p[0]->employee_salary_calculation();

			count_employees = count_employees + 1;

			p[0] = NULL;
			//delete p[1];


		}


		else if (check_emp == 'E' || check_emp == 'e')
		{

			cout << " WE WISH TO SEE YOU AGAIN " << endl;
			break;
		}
	}


	system("pause");
	return 0;
}

