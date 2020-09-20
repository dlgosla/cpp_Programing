#include "ArrayList.h"

bool ArrayList::isEmpty()
{
	/*
		precondition: m_Array가 정의돼 있어야함
		postcondition: 배열이 비었으면 true, 안비었으면 false를 리턴
	*/
	
	if (m_Length == 0)
		return true; //비었음
	return false; //안비었음
}
int ArrayList::Get(ItemType& data)
{ /* 
	precondition: m_Array에 data가 있어야 함 
	postcondition: data를 찾으면 해당데이터에 값을 복사하고 1, 못찾으면 0을 리턴
  */
	for (int i = 0; i < GetLength(); i++)
	{
		if (m_Array[i].CompareByID(data) == EQUAL)
		{
			data.SetRecord(m_Array[i].GetId(), m_Array[i].GetName(), m_Array[i].GetAddress());
			data.DisplayRecordOnScreen(); 
			return 1;
		}
	}
	return 0;
	
}
int ArrayList::Delete(ItemType data)
{
	/*
		precondition: m_Array에 data가 있어야 한다
		postcondition: m_Array에서 data와 일치하는 것을 찾아 삭제
					   성공하면 1, 실패하면 0을 반환
	*/
	for (int i = 0; i < m_Length ; i++)
	{
		if (m_Array[i].CompareByID(data) == EQUAL)
		{
			m_Array[i] = m_Array[m_Length - 1];
			m_Length--;
			return 1;
		}
	}
	return 0;
}
int ArrayList::Replace(ItemType data)
{
	/*
		precondition: m_Array에 data가 있어야한다.
		postcondition: 입력된 data와 동일한 기록을 찾아 해당 기록을 data로 치환한다
					   성공하면 1, 실패하면 0을 반환
	*/
	for (int i = 0; i < m_Length; i++)
	{
		if (m_Array[i].CompareByID(data) == EQUAL)
		{
			m_Array[i].SetRecord(data.GetId(), data.GetName(), data.GetAddress());
			return 1;
		}
	}
	return 0;
}

void ArrayList::MakeEmpty()
{
	/*
		precondition: m_Array가 정의돼있어야한다
		postcondition: m_Length를 0으로 설정해서 빈리스트로 만든다
	*/
	m_Length = 0; //리스트에 저장된 레코드 수
}


int ArrayList::GetLength()
{
	/*
		precondition: m_Array가 정의돼있어야한다
		postcondition: m_Length를 반환한다
	*/
	return m_Length;
}


bool ArrayList::isFull()
{
	/*
		precondition: m_Array가 정의돼있어야한다
		postcondition: 꽉찼으면 true, 아니면 false를 리턴한다
	*/
	if (m_Length + 1 == MAXSIZE)
		return true;
	return false;
}


int ArrayList::Add(ItemType data)
{
	/*
	precondition: m_Array가 정의돼있어야한다, data가 m_Array에 없어야 한다
	postcondition: 맨 뒤에 data를 추가하고 성공하면 1, 실패하면 0을 반환
	*/
	if (!isFull())
	{
		m_Array[m_Length] = data;
		m_Length++;
		return 1;
	}
	else
		return 0;
}


void ArrayList::ResetList()
{
	/*
		precondition: m_CurPointer가 정의돼있어야 한다
		postcondition: m_CurPointer 를 -1로 설정한다
	*/
	m_CurPointer = -1;
}


int ArrayList::GetNextItem(ItemType & data)
{
	/*
	precondition: m_Array가 정의돼 있어야 한다
	postcondition: data를 m_CurPointer위치에 저장하고 m_CurPointer를 반환, 실패시 -1반환
	*/
	m_CurPointer++;
	if (m_CurPointer == MAXSIZE) {
		return -1;
	}
	data = m_Array[m_CurPointer];
	return m_CurPointer;
}