#include<iostream>
using namespace std;

void print_D0B(int year = 1900, int month = 1, int day = 1) {
	cout << "생년월일은" << year << "년 " << month << "월 " << day << "일 입니다" << endl;
}

int main() {
	int year, month, day;
	print_D0B();

	cout << "year 입력: ";
	cin >> year;

	cout << "month 입력: ";
	cin >> month;

	cout << "day 입력: ";
	cin >> day;

	print_D0B(year, month, day);

	return 0;
}