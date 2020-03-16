#include<iostream>
#include "Account.h"
using namespace std;
const int MAX_NAME = 50;

void printMenu() {
	cout << "----------NENU---------" << endl;
	cout << "1.계좌계설" << endl;
	cout << "2(입금)" << endl;
	cout << "3(출급)" << endl;
	cout << "4(전체조회)" << endl;
	cout << "5(종료)" << endl;
	cout << "-----------------------" << endl;
}

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };// 메이크가 1 다음 2345~~

void MakeAct(ACT*DyArr, int &index, int size);
void Deposit(ACT*DyArr, int index);
void Withdraw();
void Inquire(ACT*DyArr, int index);
void Exit();

void MakeAct(ACT*DyArr, int &index, int size) {
	//cout << "계좌개설" << endl;
	//if (index < size) {
	//	cout << "아이디 입력" << endl;
	//	cin >> DyArr[index].id;
	//	cout << "이름 입력" << endl;
	//	cin >> DyArr[index].name;
	//	cout << "잔액 입력" << endl;
	//	cin >> DyArr[index].balance;
	//	index++;
	//}

	//else {
	//	cout << "계좌개설 불가" << endl;

	//}


	int id, balance;
	char name[MAX_NAME];

	if (index < size) {
		cout << "계좌개설을 위한 입력(id 잔액 이름)" << endl;
		cin >> id >> balance >> name;
		(DyArr + index)->id = id;
		DyArr[index].balance = balance;
		strcpy_s(DyArr[index].name, strlen(name) + 1, name);

	}
	else {
		cout << "못함" << endl;

	}



	//사용자에게 받을 정보,아이디,잔액,이름 받기전에 인덱스와 사이즈를 비교\
		//INDEX위치의 요소에 ID 잔액 이름을 세팅한다 
//인덱스를 증가시킨다 
//아니면 계좌개설을 할 수 없음을 알린다

}
void Deposit(ACT*DyArr, int index) {//계좌 id와 입금액을 묻는다.
	int input, id;
	cout << "입금" << endl; //21장 책내용이 좋다
	cout << "계좌 id , 입금액 입력" << endl;
	cin >> id >> input;
	bool found = false;

	for (int i = 0; i < index; i++) {
		if (id == DyArr[i].id) {
			DyArr[i].inmoney(input);
		}

		else
			cout << "id 없음" << endl;
	}
}


void Withdraw() {
	cout << "출금" << endl;
}
void Inquire(ACT*DyArr, int index) {

	for (int i = 0; i < index; i++)
		DyArr[i].showAllData();

}

void Exit() {
	cout << "종료" << endl;
}

int main() {

	cout << "계좌몇개?" << endl;
	int size;
	cin >> size;
	//동적 ACT객체배열 만들기
	ACT *DyArr = new ACT[size];
	int index = 0;
	int choice = 0;

	while (true) {
		printMenu();
		cout << "선택:";
		cin >> choice;

		switch (choice) {
		case MAKE:
			MakeAct(DyArr, index, size);
			break;

		case DEPOSIT:
			Deposit(DyArr, index);
			break;
		case WITHDRAW:
			Withdraw();
			break;
		case INQUIRE:
			Inquire(DyArr, index);//여기가서 index 안변해서 콜바이 밸류
			break;

		case EXIT:
			Exit();
			return 0;
		default:
			cout << "선택이 틀렸음" << endl;
			break;
		}
	}


	//ACT a1("홍기현", 1, 10000);
	//a1.showAllData();
	//
	//a1.inmoney(5000);
	//a1.outmoney(20000);
	//a1.showAllData();

}