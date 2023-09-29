#include "StoreInfo.h"


StoreInfo::StoreInfo()
{
	storeId = 0;
	revenue = 0.0;
}
StoreInfo::StoreInfo(int storeId, MyString location, float revenue, MyString storeName)
{
	set_StoreId(storeId);
	set_Location(location);
	set_Revenue(revenue);
	set_storeName(storeName);
}
StoreInfo::StoreInfo(const StoreInfo &S)
{
	set_StoreId(S.storeId);
	set_Location(S.location);
	set_Revenue(S.revenue);
	set_storeName(S.storeName);
}
void StoreInfo::set_StoreId(int storeId)
{
	this->storeId = storeId;
}
void StoreInfo::set_Location(MyString location)
{
	this->location = location;
}
void StoreInfo::set_Revenue(float revenue)
{
	this->revenue = revenue;
}
void StoreInfo::set_storeName(MyString storeName)
{
	this->storeName = storeName;
}
int StoreInfo::get_StoreId()
{
	return storeId;
}
MyString StoreInfo::get_Location()
{
	return location;
}

float StoreInfo::get_Revenue()
{
	return revenue;
}
MyString StoreInfo::get_storeName()
{
	return storeName;
}
void StoreInfo::display()
{
	cout << "StoreId: " << get_StoreId() << endl;
	cout << "Location: "; location.displayString();
	cout << "Revenue: " << get_Revenue() << endl;
	cout << "Store Name: ";  storeName.displayString(); ;
}
StoreInfo::~StoreInfo()
{

}
