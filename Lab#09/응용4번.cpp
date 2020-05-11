#include<iostream>
using namespace std;

int** buildTable(int n) {
	int** table = new int*[n];
	for (int row = 0; row < n; row++)
		table[row] = new int[n];

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			table[row][col] = 0;
		}
	}
	return table;
}

void make_identity_matrix(int** table, int n) {
	for (int i = 0 ; i < n; i++) {
		table[i][i] = 1;
	}
}
void printTable(int** table, int n) {
	for (int row = 0; row < n; row++) {
		for (int col = 0 ; col < n; col++) {
			cout << table[row][col] << "\t";
		}
		cout << endl;
	}

}

int main() {
	int n = 0;
	cout << "N을 입력하시오: ";
	cin >> n;

	if (n < 1) {
		cout << "\n행렬을 생성할 수 없습니다.\n" << endl;
		exit(EXIT_FAILURE);
	}

	int** table = buildTable(n);
	make_identity_matrix(table, n);
	printTable(table, n);

	for (int i = 0; i < n; i++)
		delete[] table[i];

	return 0;
}