#include "ItemType.h"

int ItemType::GetId()
{
	return m_Id;
}
string ItemType::GetName()
{
	return m_sName;
}
string ItemType::GetAddress()
{
	return m_sAddress;
}
void ItemType::SetId(int inid)
{
	m_Id = inid;
}
void ItemType::SetName(string inName)
{
	m_sName = inName;
}
void ItemType::SetAddress(string inAddress)
{
	m_sAddress = inAddress;
}
void ItemType::SetRecord(int inId, string inName, string inAddress)
{
	m_Id = inId;
	m_sName = inName;
	m_sAddress = inAddress;
}
void ItemType::DisplayIdOnScreen()
{
	cout << "학생 id: " << m_Id << endl;
}
void ItemType::DisplayNameOnScreen()
{
	cout << "학생 이름: " << m_sName << endl;
}
void ItemType::DisplayAddressOnScreen()
{
	cout << "학생 주소: " << m_sAddress << endl;
}
void ItemType::DisplayRecordOnScreen()
{
	cout << "학생 id: " << m_Id << "학생 이름: " << m_sName << "학생 주소: " << m_sAddress << endl;
}
void ItemType::SetIdFromKB()
{
	cout << "학생id를 입력해주세요: ";
	cin >> m_Id;
}
void ItemType::SetNameFromKB()
{
	cout << "학생이름을 입력해주세요: ";
	cin >> m_sName;
}
void ItemType::SetAddressFromKB()
{
	cout << "학생 주소를 입력해주세요: ";
	cin >> m_sAddress;
}
void ItemType::SetRecordFromKB()
{
	SetIdFromKB();
	SetNameFromKB();
	SetAddressFromKB();

}
int ItemType::ReadDataFromFile(ifstream& fin)
{
	fin >> m_Id;
	fin >> m_sName;
	fin >> m_sAddress;

	fin.close();

	return 1;
}
int ItemType::WriteDataToFile(ofstream& fout)
{
	fout << m_Id << " " << m_sName << " " << m_sAddress << endl;
	return 1;
}
RelationType ItemType::CompareByID(const ItemType &data)
{
	if (data.m_Id > m_Id)
		return LESS;

	else if (data.m_Id < m_Id)
		return GREATER;
	else
		return EQUAL;

}