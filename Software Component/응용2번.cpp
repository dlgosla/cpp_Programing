#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string name;
	string id;
	int balance;
public:

	Account(string _name = "", string _id="", int _balance = 0)
		:name(_name), id(_id), balance(_balance) {}
	string getName() { return name; }
	string getId() { return id; }
	int getBalance() { return balance; }
	Account operator+(Account& Obj) {
		this->balance += Obj.balance;
		return *this;
	//	Account sum(name, id, balance);
	//	sum.balance = this->balance + Obj.balance;
	//	return sum;
	}
	Account operator-(Account& Obj) {
		this->balance -= this->balance;
		return *this;
	//	Account dif(name, id, balance);
	//	dif.balance -= dif.balance;
	//	return dif;
	}

	friend ostream& operator<<(ostream& cout, const Account& obj) {
		cout << "학번: " << obj.id << ", " << "이름: " << obj.name << ", 잔액: " << obj.balance << endl;
		return cout;
	}
};

int main() {
	Account acnt[3] = {
		Account("장윤호" , "2014" , 10000),
		Account("김유민" , "2019" , 0),
		Account("박진배" , "2013" , 5000),
	};
	string give, take;
	bool existingID = false;
	while (true) {
		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> give;
		if (give == "종료") {
			cout << "종료합니다." << endl;
			for (int i = 0; i < 3; i++)
				cout << acnt[i];
			return 0;
		}
		cout << "돈을 받을 학생의 학번을 입력하세요: ";
		cin >> take;
		int giveIdx = -1, takeIdx = -1;
		for (int i = 0; i < 3; i++) {
			if (acnt[i].getId() == give) {
				giveIdx = i;
			}
			else if (acnt[i].getId() == take) {
				takeIdx = i;
			}
		}

		if (give == take) {
			cout << "동일한 학번입니다" << endl;
			continue;
		}
		else if (giveIdx == -1 || takeIdx == -1) {
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
			continue;
		}
		else if (acnt[giveIdx].getBalance() == 0) {
			cout << "보낼 학생의 잔액이 부족합니다." << endl;
			continue;
		}

		acnt[takeIdx] + acnt[giveIdx];
		acnt[giveIdx] - acnt[giveIdx];

		cout << "보낸 학생의 잔액 => " << acnt[giveIdx];
		cout << "받은 학생의 잔액 => " << acnt[takeIdx];

	}
}