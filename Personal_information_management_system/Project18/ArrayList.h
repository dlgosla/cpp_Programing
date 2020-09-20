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
	bool isEmpty();
	int Get(ItemType& data);
	int Delete(ItemType data);
	int Replace(ItemType data);
	void MakeEmpty();
	int GetLength();
	bool isFull();
	int Add(ItemType data);
	void ResetList();
	int GetNextItem(ItemType& data);
};

