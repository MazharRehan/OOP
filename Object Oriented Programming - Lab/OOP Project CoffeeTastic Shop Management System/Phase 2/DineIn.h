#include "TakeAway.h"
#pragma once
class DineIn :public Order
{
public:
	DineIn();
	DineIn(int ,int ,Customer);
	 void viewTable() ;
	
	~DineIn();
};

