#include "List.h"

template<class T>
void List<T>::MakeEmpty()
{
	m_Length = 0; //리스트에 저장된 레코드 수
}

template<class T>
int List<T>::GetLength()
{
	return m_Length;
}

template<class T>
bool List<T>::isFull()
{
	if (m_Length + 1 == MAXSIZE)
		return true;
	return false;
}

template<class T>
int List<T>::Add(T data)
{
	if (!isFull())
	{
		m_Array[m_Length] = data;
		m_Length++;
	}
	else
		return 0;
}

template<class T>
void List<T>::ReseList()
{
	m_CurPointer = -1;
}

template<class T>
int List<T>::GetNextItem(T& data)
{
	m_CurPointer++;
	if (curPointer == MAXSIZE) {
		return -1
	}
	data = m_Array[m_CurPointer];
	return m_CurPointer;
}