#include<iostream>
#include<string>
#include<fstream>
using namespace std;

enum RelationType { LESS, GREATER, EQUAL };
class ItemType {

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