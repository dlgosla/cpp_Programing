#include<iostream>
using namespace std;

void swap_call_by_value(int a, int b);
void swap_call_by_reference(int &a, int &b);

int main() {
	int x, y;
	cout << "x 입력: ";
	cin >> x;

	cout << "y 입력: ";
	cin >> y;

	cout << "\n";
	
	cout << "swap_call_by_value 함수 사용 전" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	swap_call_by_value(x,y);

	cout << "swap_call_by_value 함수 사용 전" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	cout << "\n";

	cout << "swap_call_by_reference 함수 사용 전" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	swap_call_by_reference(x, y);

	cout << "swap_call_by_reference 함수 사용 전" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	return 0;
}

void swap_call_by_value(int a, int b) {
	int swap = a;
	a = b;
	b = swap;
}

void swap_call_by_reference(int &a, int &b) {
	int swap = a;
	a = b;
	b = swap;
}