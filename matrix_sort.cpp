#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

void get_command(string& c) {
	cout << "1. Generate matrix" << endl;
	cout << "2. Print matrix" << endl;
	cout << "3. sort matrix" << endl;
	cout << "4. Save matrix" << endl;
	cout << "0. Exit program" << endl;
	cout << ">>";
	cin >> c;
}
void get_size(int& size) {
	cout << "Enter the size in (size x size): ";
	cin >> size;
}

int** gen_matrix(int size) {
	int** matrix = new int* [size];
	srand((unsigned)time(NULL));

	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 101;
		}
	}

	return matrix;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort_array(int* ary, int size) {
	for (int i = 1; i < size; i++) {
		for (int j = 1; j < size ; j++) {
			if (ary[j] < ary[j - 1])
				swap(ary[j - 1], ary[j]);
		}
	}
	
}
void sort_matrix_row(int** ary, int size) {
	for (int row = 0; row < size; row++) {
		sort_array(ary[row], size);		
	}

	cout << "Completed" << endl;
}

void print_matrix(int** matrix, int size) {
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++)
			cout << setw(4) << matrix[row][col];
		cout << endl;
	}
}
void save_matrix(int** matrix , int size) {
	ofstream fout("matrix.txt");
	if (!fout) {
		cout << "file open error" << endl;
		exit(100);
	}
	fout << size << endl;

	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			fout << " " << matrix[row][col];
		}
		fout << endl;
	}

	cout << "Saved" << endl;
	fout.close();
}

void free_matrix(int** matrix, int size) {
	
	for (int i = 0; i < size; i++) {
		delete[] matrix[i];
	}
	
	delete[] matrix;
}

int main() {
	string command;
	int** matrix = NULL;
	int size = 0;

	while (1) {
		get_command(command);

		if (command == "1") {
			get_size(size);
			matrix = gen_matrix(size);
		}
		else if (command == "2") {
			print_matrix(matrix, size);
		}
		else if (command == "3") {
			sort_matrix_row(matrix, size);
		}

		else if (command == "4") {
			save_matrix(matrix, size);
		}

		else if (command == "0") {
			free_matrix(matrix, size);
			cout << "Exit the program.." << endl;
			exit(104);
		}
		else {
			cout << "Wrong command" << endl << endl;
		}
		cout<<endl;
	}
	return 0;
}