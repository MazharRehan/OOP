#include "Delivery.h"
#pragma once
class Table :public DineIn
{
	int seats;
	int tableNumber;
public:
	Table();
	Table(int, int,int,int,Customer);
	Table(const Table&);
	void setTableNumber(int);
	void setTableSeats(int);
	int getTableNumber()const;
	int getTableSeats()const;
	void viewTable()const; 
	void displayOrder()const;
	friend ostream& operator<<(ostream&, const Table&);
	~Table();
};

