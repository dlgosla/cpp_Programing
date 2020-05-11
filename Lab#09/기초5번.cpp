#include<iostream>
using namespace std;

void print(int** m, int nRow, int nCol ) {
	for (int row = 0; row < nRow; row++) {
		for (int col = 0; col < nCol; col++) {
			cout << m[row][col] << '\t';
		}
		cout << endl;
	}
}

int main() {
	int nRow = 2, nCol = 2;
	int** matrix2;
	matrix2 = new int*[nRow];
	for (int i = 0; i < nRow; i++) {
		matrix2[i] = new int[nCol];
	}
	matrix2[0][0] = 1;  matrix2[0][1] = 2;
	matrix2[1][0] = 3; matrix2[1][1] = 4;

	print(matrix2, nRow, nCol);

	for (int i = 0; i < nRow; i++)
		delete[] matrix2[i];
	delete[] matrix2;

	return 0;
}