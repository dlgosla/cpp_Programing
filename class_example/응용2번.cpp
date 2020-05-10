#include<iostream>
#include<string>
using namespace std;

class CStudent {
private:
	int number;
	string name;
	string major;

public:
	CStudent()
		:number(2018000000), name("홍길동"), major("컴퓨터공학과") {}

	CStudent(int _number, string _name, string _major)
		:number(_number), name(_name), major(_major) {}

	int getNumber();
	void setNumber(int _number);

	string getName();
	void setName(string _name);

	string getMajor();
	void setMajor(string _major);

	void Display();
	
};

int CStudent::getNumber() {
	return number;
}
void CStudent::setNumber(int _number) {
	number = _number;
}
string CStudent::getName() {
	return name;
}
void CStudent::setName(string _name) {
	name = _name;
}
string CStudent::getMajor() {
	return major;
}
void CStudent::setMajor(string _major) {
	major = _major;
}
void CStudent::Display() {
	cout << "학번: " << number << endl;
	cout << "이름: " << name << endl;
	cout << "전공: " << major << endl;
	cout << endl;
}

int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {
		if (length > 2)
			break;

		cout << length + 1 << "번 째 학생 입력" << endl;
		cout << "학번 : ";
		cin >> inputNumber;
		cout << "이름 : ";
		cin >> inputName;
		cout << "전공 : ";
		cin >> inputMajor;

		bool reduplication = false;
		for (int i = 0; i <= length; i++) {
			if (inputNumber == s[i].getNumber())
				reduplication = true;
		}

		if ( !reduplication ) {
			s[length].setNumber(inputNumber);
			s[length].setName(inputName);
			s[length].setMajor(inputMajor);
			cout << "※입력완료" << endl;
			length++;
		}
		else
			cout << "중복된 학번이 존재합니다" << endl;
		cout << endl;

		if (length == 3) {
			cout << "----모든 입력이 완료되었습니다----" << endl;
			for (int i = 0; i < length; i++) {
				s[i].Display();
		}
	}

	

	
	}

	return 0;
}