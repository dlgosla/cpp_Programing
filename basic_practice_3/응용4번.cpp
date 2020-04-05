#include<iostream>
using namespace std;

int main() {
	
	int dan;

	do {

		cout << "단 수를 입력하세요: ";
		cin >> dan;

		if (!(1 <= dan && dan <= 9)) {
			cout << "1부터 9까지의 정수를 입력해주세요. " << endl;
			continue;
		}
		for (int i = 1; i <= 9; i++)
			cout << dan << " * " << i << " = " << dan * i << endl;
	
	} while (!(dan == -1));

	return 0;
}