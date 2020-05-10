#include<iostream>
#include<string>
using namespace std;

class Account {
	string name;
	string id;
	double balance;

public:
	Account() {
		name = "";
		balance = 0;
	}

	Account(string _name, string _id) {
		name = _name;
		id = _id;
		balance = 0;
	}

	Account(string _name, string _id, int _balance) {
		name = _name;
		id = _id;
		if (_balance < 0)
			balance = 0;
		else
			balance = _balance;
	}

	void deposit(double _amt) { balance += _amt;  }
	bool withdraw(double _amt) {
		if (balance - _amt < 0)
			return false;
		balance -= _amt;
		return true;
	}

	void print() {
		cout << name << ", " << id << ", " << balance << endl;
	}

};

int main() {
	Account ac1("배성호", "1002", 5000);
	Account ac2;
	ac2.print();
	ac1.print();

	int depo;
	cout << "예금할 금액을 입력하세요: ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print();

	int wdrw;
	cout << "출금할 금액을 입력하세요: ";
	cin >> wdrw;

	if (!ac1.withdraw(wdrw))
		cout << "잔액이 부족합니다." << endl;

	ac1.print();
	return 0;
}