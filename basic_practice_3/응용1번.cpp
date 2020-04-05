#include<iostream>
using namespace std;

int main() {
	int num;
	
	for (int i = 1; i <= 5; i++) {
		cout << i << "번 째 정수: ";
		cin >> num;

		if (num % 2 == 0)
			cout << num << "은(는) 짝수 입니다." << endl;
		else
			cout << num << "은(는) 홀수 입니다." << endl;
	}

	return 0;
}