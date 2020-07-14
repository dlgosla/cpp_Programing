#include<iostream>
#include<time.h>
using namespace std;

int main() {
	int iLotto[45] = {};

	srand((unsigned int)time(0));

	//1~45 까지의 숫자를 차례대로 넣어준다
	for (int i = 0; i < 45; i++) {
		iLotto[i] = i + 1;
	}

	//shuffle
	int iTemp, idx1, idx2;
	//100번정도 골고루 섞어준다

	for (int i = 0; i < 100; i++) {
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}

	for (int i = 0; i < 6; i++) {
		cout << iLotto[i] << "\t";
	}

	cout << "보너스 번호: " << iLotto[6] << endl;

}