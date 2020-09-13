#include "ArrayList.h"


void ArrayList::MakeEmpty()
{
	m_Length = 0; //리스트에 저장된 레코드 수
}


int ArrayList::GetLength()
{
	return m_Length;
}


bool ArrayList::isFull()
{
	if (m_Length + 1 == MAXSIZE)
		return true;
	return false;
}


int ArrayList::Add(ItemType data)
{
	if (!isFull())
	{
		m_Array[m_Length] = data;
		m_Length++;
	}
	else
		return 0;
}


void ArrayList::ReseList()
{
	m_CurPointer = -1;
}


int ArrayList::GetNextItem(ItemType & data)
{
	m_CurPointer++;
	if (m_CurPointer == MAXSIZE) {
		return -1;
	}
	data = m_Array[m_CurPointer];
	return m_CurPointer;
}