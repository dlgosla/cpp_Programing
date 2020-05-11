#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

void initialize(vector<vector<int>>& matrix) {
	for (int row = 0; row < matrix.size(); row++)
		for (int col = 0; col < matrix[row].size(); col++)
			matrix[row][col] = rand() % 19 - 9;
}

vector<vector<int>> mult(const vector<vector<int>>& A, int Arow,int Acol, const vector<vector<int>>& B ,int Brow, int Bcol) {
	if (Acol != Brow) {
		cout << "두 행렬을 곱할 수 없습니다." << endl;
		exit(0);
	}
	
	vector<vector<int>> multMatrix(Arow,vector<int>(Bcol));
	int mult;
	int result = 0;

	for (int i = 0; i < Arow; i++) {
		for (int j = 0; j < Bcol; j++) {
			for (int k = 0; k < Brow; k++) {
				result += A[i][k] * B[k][j];
			}
			multMatrix[i][j] = result;
			result = 0;
		}
	}
	return multMatrix;
}

void print(const vector<vector<int>>& matrix) {
	for (const vector<int>& row : matrix) {
		for (const int& elem : row) {
			cout << setw(4) << elem;
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int Arow, Acol;
	int Brow, Bcol;

	cout << "A의 행,열의 크기를 입력해주세요: ";
	cin >> Arow >> Acol;
	cout << "B의 행,열의 크기를 입력해주세요: ";
	cin >> Brow >> Bcol;

	if (Arow == 0 || Acol == 0 || Brow == 0 || Bcol == 0) {
		cout << "행렬을 생성할 수 없습니다" << endl;
		exit(0);
	}
	vector<vector<int>> matrixA(Arow, vector<int>(Acol));
	vector<vector<int>> matrixB(Brow, vector<int>(Bcol));
	
	initialize(matrixA);
	initialize(matrixB);

	cout << "A행렬: " << endl;
	print(matrixA);

	cout << "B행렬: "<< endl;
	print(matrixB);

	vector<vector<int>> multMatrix = mult(matrixA, Arow, Acol, matrixB, Brow, Bcol);
	cout << "AB 곱행렬: "<<endl;
	print(multMatrix);

	return 0;
}