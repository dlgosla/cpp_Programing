#define MAXSIZE 5
#include "ItemType.h"
#include<iostream>
using namespace std;


class ArrayList{
private:
	ItemType m_Array[MAXSIZE];
	int m_Length;
	int m_CurPointer;

public:
	void MakeEmpty();
	int GetLength();
	bool isFull();
	int Add(ItemType data);
	void ReseList();
	int GetNextItem(ItemType& data);
};

