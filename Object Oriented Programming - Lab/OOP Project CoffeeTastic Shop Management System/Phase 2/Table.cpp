#include "Table.h"


Table::Table()
{
	tableNumber = 0;
	seats = 0;
}
Table::Table(int seats, int tableNumber,int OrderId,int quantity,Customer cust) :DineIn(OrderId,quantity,cust)
{ 
	setTableNumber(tableNumber); 
	setTableSeats(seats); 
}
Table::Table(const Table&o){ setTableNumber(o.tableNumber); setTableSeats(o.seats); }
void Table::setTableNumber(int tableNumber){ this->tableNumber = tableNumber; }
void Table::setTableSeats(int seats){ this->seats = seats; }
int Table::getTableNumber()const{ return tableNumber; }
int Table::getTableSeats()const{ return seats; }
void Table::viewTable()const
{
	cout << "Table# " << getTableNumber() << endl; 
	cout << "Total Seats:" << getTableSeats() << endl; 
}
void Table::displayOrder()const
{
	cout << "\t\t__________________________________________\n";
	cout << "\t\tOrder Type --->DineIn\n";
	cout << "Order Id: " << getOrderId() << endl<<endl;
	viewTable();
	cout << "\t\t__________________________________________\n";
}

Table::~Table()
{
}
ostream& operator<<(ostream&out, const Table&o)
{
	out<<"Table Number:" << o.tableNumber << endl;
	out <<"Seats:"<< o.seats << endl;
	return out;
}