#ifndef STACKTEMPLATE_H
#define STACKTEMPLATE_H

template <typename T>
class Stack {
protected:
	T* stackPtr;
	int topIndex;
	int size;
public:
	Stack(int s);
	~Stack();
	void push(T c);
	T pop();
	int getTopIndex();
};
template <typename T>
Stack<T>::Stack(int s) {
	size = s;
	stackPtr = new T[size];
	topIndex = -1;
}
template <typename T>
Stack<T>::~Stack() {
	delete[] stackPtr;
	stackPtr = NULL;
}
template <typename T>
void Stack<T>::push(T c) {
	stackPtr[++topIndex] = c;
}
template <typename T>
T Stack<T>::pop() {
	return stackPtr[topIndex--];
}
template <typename T>
int Stack<T>::getTopIndex() {
	return topIndex;
}
#endif