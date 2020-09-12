#include<iostream>
using namespace std;

enum RelationType{LESS, GREATER, EQUAL};
class ItemType{

public:
	int GetId();
	string GetName();
	string GetAddress();
	void SetId(int inid);
	void SetName(string inName);
	void SetAddress(string inAddress);
	void SetRecord(int inId, string inName, string inAddress);
	void DisplayIdOnScreen();
	void DisplayNameOnScreen();
	void DisplayAddressOnScreen();
	void DisplayRecordOnScreen();
	void SetIdFromKB();// 키보드로학생ID입력함수
	void SetNameFromKB();// 키보드로학생이름입력함수
	void SetAddressFromKB();// 키보드로학생주소입력함수
	void SetRecordFromKB();// 키보드로학생정보입력함수
	int ReadDataFromFile(ifstream& fin);// 학생정보를파일에서읽는함수
	int WriteDataToFile(ofstream& fout);// 학생정보를파일로출력하는함수
	RelationType CompareByID(const ItemType &data);// primary key (ID)를기준으로학생정보를비교하는함수

private:
	int m_Id;
	string m_sName;
	string m_sAddress;

};

int ItemType::GetId()
{

}
string ItemType::GetName()
{

}
string ItemType::GetAddress()
{

}
void ItemType::SetId(int inid)
{

}
void ItemType::SetName(string inName)
{

}
void ItemType::SetAddress(string inAddress)
{

}
void ItemType::SetRecord(int inId, string inName, string inAddress)
{

}
void ItemType::DisplayIdOnScreen()
{

}
void ItemType::DisplayNameOnScreen()
{

}
void ItemType::DisplayAddressOnScreen()
{

}
void ItemType::DisplayRecordOnScreen()
{

}
void ItemType::SetIdFromKB()
{

}
void ItemType::SetNameFromKB()
{

}
void ItemType::SetAddressFromKB()
{

}
void ItemType::SetRecordFromKB()
{

}
int ItemType::ReadDataFromFile(ifstream& fin)
{

}
int ItemType::WriteDataToFile(ofstream& fout)
{

}
RelationType ItemType::CompareByID(const ItemType &data)
{

}