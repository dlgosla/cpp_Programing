#include <iostream>
#include <cstdlib>
#include <ctime>
#include<fstream>
using namespace std;

int main()
{
	int matrix[10][10];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			matrix[i][j] = rand() % 100 + 1;
		}
	}

	ofstream fout("showMatrix.txt");
	if (!fout)
		cout << "file open error";

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			fout << matrix[i][j] << " ";
		}
		fout << endl;
	}

}
