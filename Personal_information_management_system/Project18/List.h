#define MAXSIZE 5;
#include<iostream>
using namespace std;

template<class T>
class List {
private:
	T m_Array[MAXSIZE];
	int m_Length;
	int m_CurPointer;

public:
	void MakeEmpty();
	int GetLength();
	bool isFull();
	int Add(T data);
	void ReseList();
	int GetNextItem(T& data);
};

