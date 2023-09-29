#include "Table.h"
#pragma once



class StoreInfo
{
private:

	int storeId;
	MyString location;
	float revenue;
	MyString storeName;
public:
	StoreInfo();
	StoreInfo(int, MyString, float, MyString);
	StoreInfo(const StoreInfo &S);
	void set_StoreId(int);
	void set_Location(MyString);
	void set_Revenue(float);
	void set_storeName(MyString);
	int get_StoreId();
	MyString get_Location();
	float get_Revenue();
	MyString get_storeName();
	void display();
	~StoreInfo();
};

