#include<iostream>
using namespace std;

//각 자료형이 사용하는 메모리 크기를 byte로 표현해줌
int main() {
		unsigned short siX; //헝가리안 표기법
		unsigned iX;
		long liX;
		long long lliX;

		cout << "sizeof(siX): " << sizeof(siX) << endl;
		cout << "sizeof(iX): "<< sizeof(iX) << endl;
		cout << "sizeof(liX): " << sizeof(liX) << endl;
		cout << "sizeof(lliX):" << sizeof(lliX) << endl;

}